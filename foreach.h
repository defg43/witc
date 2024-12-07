// SPDX-License-Identifier: MIT
// Copyright (C) 2023 defg43
// https://github.com/defg43/



#ifndef FOREACH_H 
#define FOREACH_H

#include <assert.h>
#include "types.h"

#define sized ,,,
#define of ,,
#define in ,

#define where ) if(

#define arrayAsPtr(arr) ({												\
	struct {															\
		typeof(decay(arr)) element;										\
		size_t count;													\
	} dumy;																\
	__builtin_choose_expr(is_struct(arr), arr, dumy.element) = arr;		\
	__builtin_choose_expr(is_struct(arr), arr, dumy).element;			\
})

#define lengthof(arr) ({																		\
	struct { size_t count; } dumy = { .count = sizeof arr / sizeof arrayAsPtr(arr)[0] };		\
	__builtin_choose_expr(is_struct(arr), arr, dumy).count;										\
})
										

#ifdef __cplusplus
#include <type_traits>
#define assert_array(a, msg) static_assert(std::is_array_v<typeof(a)>, msg)
#define assert_not_array(a, msg) static_assert(!std::is_array_v<typeof(a)>, msg)	
#else
#define assert_array(a, msg) \
    static_assert(is_array(a), msg)
#define assert_iterable(a, msg) \
	static_assert(is_array(a) + is_struct(a), msg)
#define assert_not_array(a, msg) \
	static_assert(__builtin_types_compatible_p(typeof(a), typeof(&(a)[0])), msg)
#endif // __cplusplus

#define _foreach_err _Pragma("GCC error \"too many or wrong order of arguments\"");

#define _foreach_from_function(result, execution, condition) \
	for( struct { typeof(result) result_copy; size_t _iterator; } = { ._iterator = 0 };; }

#define _foreach_index(index, arr) 																															\
assert_iterable(arr, "argument is not iterable, declare size with: <n> sized <pointer>");																			\
for(index, _hidden_foreach_index_dont_use = 0, _hidden_foreach_toggler = 1; _hidden_foreach_index_dont_use < lengthof(arr); _hidden_foreach_index_dont_use) \
for(index = _hidden_foreach_index_dont_use; _hidden_foreach_toggler = _hidden_foreach_toggler ^ 1; _hidden_foreach_index_dont_use++)

#define _foreach_index_sized(index, size, _1, _2, arr) \
assert_not_array(arr, "size can only be specified for non-arrays");\
for(index, _hidden_foreach_index_dont_use = 0, _hidden_foreach_toggler = 1; _hidden_foreach_index_dont_use < size; _hidden_foreach_index_dont_use) \
for(index = _hidden_foreach_index_dont_use; _hidden_foreach_toggler = _hidden_foreach_toggler ^ 1; _hidden_foreach_index_dont_use++)

#define _foreach_element(element, _1, arr) \
assert_iterable(arr, "argument is not iterable, declare size with: <n> sized <pointer>");\
for(size_t _iterator = 0, _hidden_foreach_toggler = 1; _iterator < lengthof(arr);) \
for(element = arrayAsPtr(arr)[_iterator]; _hidden_foreach_toggler = _hidden_foreach_toggler ^ 1; _iterator++)

#define _foreach_element_sized(element, _1, size, _2, _3, arr) \
assert_not_array(arr, "size can only be specified for non-arrays");\
for(size_t _iterator = 0, _hidden_foreach_toggler = 1; _iterator < size;) \
for(element = arrayAsPtr(arr)[_iterator]; _hidden_foreach_toggler = _hidden_foreach_toggler ^ 1; _iterator++)

#define _foreach_single(arr) \
for(struct {int index; typeof(0[arr]) element;}iter = \
	{ .index = 0, .element = 0[arr] }; \
	iter.index < lengthof(arr); iter.element = arrayAsPtr(arr)[++iter.index] )

#define _foreach_type(_1, _2, _3, _4, _5, _6, _7, foreachnum, ...) foreachnum
#define _foreach(...) _foreach_type(__VA_ARGS__, _foreach_err, \
												_foreach_element_sized,\
												_foreach_index_sized,\
												_foreach_err,\
											    _foreach_element,\
												_foreach_index,\
											    _foreach_single ) (__VA_ARGS__)
#define foreach(...) _foreach(__VA_ARGS__)
#endif /*FOREACH_H*/
