// SPDX-License-Identifier: MIT
// Copyright (C) 2023 defg43
// https://github.com/defg43/

#ifndef TYPES_H
#define TYPES_H

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#define _foreach_ladder_entry(F, a, ...) _foreach_ladder0(F, a, __VA_ARGS__)
#define _foreach_ladder0(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder1(F, a, __VA_ARGS__))
#define _foreach_ladder1(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder2(F, a, __VA_ARGS__))
#define _foreach_ladder2(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder3(F, a, __VA_ARGS__))
#define _foreach_ladder3(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder4(F, a, __VA_ARGS__))
#define _foreach_ladder4(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder5(F, a, __VA_ARGS__))
#define _foreach_ladder5(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder6(F, a, __VA_ARGS__))
#define _foreach_ladder6(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder7(F, a, __VA_ARGS__))
#define _foreach_ladder7(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder8(F, a, __VA_ARGS__))
#define _foreach_ladder8(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder9(F, a, __VA_ARGS__))
#define _foreach_ladder9(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder10(F, a, __VA_ARGS__))
#define _foreach_ladder10(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder11(F, a, __VA_ARGS__))
#define _foreach_ladder11(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder12(F, a, __VA_ARGS__))
#define _foreach_ladder12(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder13(F, a, __VA_ARGS__))
#define _foreach_ladder13(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder14(F, a, __VA_ARGS__))
#define _foreach_ladder14(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder15(F, a, __VA_ARGS__))
#define _foreach_ladder15(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder16(F, a, __VA_ARGS__))
#define _foreach_ladder16(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder17(F, a, __VA_ARGS__))
#define _foreach_ladder17(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder18(F, a, __VA_ARGS__))
#define _foreach_ladder18(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder19(F, a, __VA_ARGS__))
#define _foreach_ladder19(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder20(F, a, __VA_ARGS__))
#define _foreach_ladder20(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder21(F, a, __VA_ARGS__))
#define _foreach_ladder21(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder22(F, a, __VA_ARGS__))
#define _foreach_ladder22(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder23(F, a, __VA_ARGS__))
#define _foreach_ladder23(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder24(F, a, __VA_ARGS__))
#define _foreach_ladder24(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder25(F, a, __VA_ARGS__))
#define _foreach_ladder25(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder26(F, a, __VA_ARGS__))
#define _foreach_ladder26(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder27(F, a, __VA_ARGS__))
#define _foreach_ladder27(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder28(F, a, __VA_ARGS__))
#define _foreach_ladder28(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder29(F, a, __VA_ARGS__))
#define _foreach_ladder29(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder30(F, a, __VA_ARGS__))
#define _foreach_ladder30(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder31(F, a, __VA_ARGS__))
#define _foreach_ladder31(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder32(F, a, __VA_ARGS__))
#define _foreach_ladder32(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder33(F, a, __VA_ARGS__))
#define _foreach_ladder33(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder34(F, a, __VA_ARGS__))
#define _foreach_ladder34(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder35(F, a, __VA_ARGS__))
#define _foreach_ladder35(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder36(F, a, __VA_ARGS__))
#define _foreach_ladder36(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder37(F, a, __VA_ARGS__))
#define _foreach_ladder37(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder38(F, a, __VA_ARGS__))
#define _foreach_ladder38(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder39(F, a, __VA_ARGS__))
#define _foreach_ladder39(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder40(F, a, __VA_ARGS__))
#define _foreach_ladder40(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder41(F, a, __VA_ARGS__))
#define _foreach_ladder41(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder42(F, a, __VA_ARGS__))
#define _foreach_ladder42(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder43(F, a, __VA_ARGS__))
#define _foreach_ladder43(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder44(F, a, __VA_ARGS__))
#define _foreach_ladder44(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder45(F, a, __VA_ARGS__))
#define _foreach_ladder45(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder46(F, a, __VA_ARGS__))
#define _foreach_ladder46(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder47(F, a, __VA_ARGS__))
#define _foreach_ladder47(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder48(F, a, __VA_ARGS__))
#define _foreach_ladder48(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder49(F, a, __VA_ARGS__))
#define _foreach_ladder49(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder50(F, a, __VA_ARGS__))
#define _foreach_ladder50(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder51(F, a, __VA_ARGS__))
#define _foreach_ladder51(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder52(F, a, __VA_ARGS__))
#define _foreach_ladder52(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder53(F, a, __VA_ARGS__))
#define _foreach_ladder53(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder54(F, a, __VA_ARGS__))
#define _foreach_ladder54(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder55(F, a, __VA_ARGS__))
#define _foreach_ladder55(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder56(F, a, __VA_ARGS__))
#define _foreach_ladder56(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder57(F, a, __VA_ARGS__))
#define _foreach_ladder57(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder58(F, a, __VA_ARGS__))
#define _foreach_ladder58(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder59(F, a, __VA_ARGS__))
#define _foreach_ladder59(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder60(F, a, __VA_ARGS__))
#define _foreach_ladder60(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder61(F, a, __VA_ARGS__))
#define _foreach_ladder61(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder62(F, a, __VA_ARGS__))
#define _foreach_ladder62(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder63(F, a, __VA_ARGS__))
#define _foreach_ladder63(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder64(F, a, __VA_ARGS__))
#define _foreach_ladder64(F, a, n, ...) F(a, n) __VA_OPT__(_foreach_ladder65(F, a, __VA_ARGS__))
#define _foreach_ladder65(F, a, n, ...) F(a, n) _Pragma("GCC error \"too many arguments\"");

#define switch_expr(...) _foreach_ladder_entry(_switchex1, _, __VA_ARGS__) false _foreach_ladder_entry(_switchex2, _, __VA_ARGS__)
#define _switchex1(_, x) __builtin_choose_expr(_switchex1b x
#define _switchex1b(a, b) a, b,
#define _switchex2(_, x) )

#define default_expr 1
 
// soon tm
typedef union trait {
	uint64_t data;
	struct{
		// flags here
	};
} trait_t;

bool _compare_u8 (uint8_t a, uint8_t b, size_t size) {
	(void) size;
	return a == b;
}

bool _compare_u16(uint16_t a, uint16_t b, size_t size) {
	(void) size;
	return a == b;
}

bool _compare_u32(uint32_t a, uint32_t b, size_t size) {
	(void) size;
	return a == b;
	}

bool _compare_u64(uint64_t a, uint64_t b, size_t size) {
	(void) size;
	return a == b;
}

bool _compare_float(float a, float b, size_t size) {
	(void) size;
	return a == b;
}

bool _compare_double(double a, double b, size_t size) {
	(void) size;
	return a == b;
}

bool _compare_long_double(long double a,long double b, size_t size) {
	(void) size;
	return a == b;
}

bool _compare_const_char_string(const char a[static 1], const char b[static 1], size_t size) {
	(void) size;
	return strcmp((char *)a, (char *)b) == 0;
}

bool _compare_char_string(char a[static 1], char b[static 1], size_t size) {
	(void) size;
	return strcmp(a, b) == 0;
}

bool _compare_byte_array(void *a, void *b, size_t size) {
	return memcmp(a, b, size) == 0;
}

bool _compare_raw_pointer(void *a, void *b, size_t size) {
	(void) size;
	return a == b;
}

#if 0
#define is_same_type(a, b)  __builtin_types_compatible_p(typeof(a), typeof(b))
#define is_pointer_or_array(p)  (__builtin_classify_type(p) == 5)
#define decay(p)  (&*__builtin_choose_expr(is_pointer_or_array(p), p, NULL))

#define is_pointer(p)  is_same_type(p, decay(p))
#define is_array(p) (is_pointer_or_array(p) && !is_pointer(p)) 

#else

#define is_same_type(a, b) __builtin_types_compatible_p(typeof(a), typeof(b)) 
#define is_pointer_or_array(p) (__builtin_classify_type(p) == 5) 
#define decay(a) (&*__builtin_choose_expr(is_pointer_or_array(a), a, NULL)) 

#define is_pointer(p) is_same_type(p, decay(p))
#define is_array(p) (is_pointer_or_array(p) && !is_pointer(p))
#endif

// for getting the type classes
#define is_vector(p) (__builtin_classify_type(p) == -2)
#define is_no_type(p) (__builtin_classify_type(p) == -1)
#define is_void(p) (__builtin_classify_type(p) == 0)
#define is_integer(p) (__builtin_classify_type(p) == 1)
#define is_char(p) (__builtin_classify_type(p) == 2)
#define is_enum(p) (__builtin_classify_type(p) == 3)
#define is_bool(p) (__builtin_classify_type(p) == 4)
// see above for 5 (is_pointer)
#define is_reference(p) (__builtin_classify_type(p) == 6)
#define is_offset(p) (__builtin_classify_type(p) == 7)
#define is_real(p) (__builtin_classify_type(p) == 8)
#define is_complex(p) (__builtin_classify_type(p) == 9)
#define is_function(p) (__builtin_classify_type(p) == 10)
#define is_method(p) (__builtin_classify_type(p) == 11)
#define is_struct(p) (__builtin_classify_type(p) == 12)
#define is_union(p) (__builtin_classify_type(p) == 13)
// 14 is array but doesnt work due to pointer decay
#define is_string(p) (__builtin_classify_type(p) == 15)
#define is_lang(p) (__builtin_classify_type(p) == 16)

#define is_doublepointer(p) is_pointer(*(p))
#define is_triplepointer(p) is_doublepointer(*(p))
#define is_quadruplepointer(p) is_triplepointer(*(p))
#define is_quintuplepointer(p) is_quadruplepointer(*(p))
#define is_sextuplepointer(p) is_quintuplepointer(*(p))

#define is_const_char_pointer(p) is_same_type(p, const char*)
#define is_char_pointer(p) is_same_type(p, char*)
#define is_float(a) is_same_type(a, float)
#define is_double(a) is_same_type(a, double)
#define is_long_double(a) is_same_type(a, long double)

#define is_value(a) (is_integer(a) || is_char(a) || is_enum(a) || is_bool(a))
#define is_value8(a) (is_value(a) && (sizeof(a) == 1))
#define is_value16(a) (is_value(a) && (sizeof(a) == 2))
#define is_value32(a) (is_value(a) && (sizeof(a) == 4))
#define is_value64(a) (is_value(a) && (sizeof(a) == 8))


#define _select_compare(a) \
switch_expr(\
	(is_const_char_pointer(a), _compare_const_char_string),\
	(is_char_pointer(a), _compare_char_string),\
	(is_float(a), _compare_float),\
	(is_double(a), _compare_double),\
	(is_long_double(a), _compare_long_double),\
	\
	(is_value8(a), _compare_u8),\
	(is_value16(a), _compare_u16),\
	(is_value32(a), _compare_u32),\
	(is_value64(a), _compare_u64),\
	\
	(is_struct(a), _compare_byte_array),\
	(is_union(a), _compare_byte_array),\
	(is_array(a), _compare_byte_array), \
	(is_pointer(a), _compare_raw_pointer),\
	(default_expr, _compare_byte_array)\
)

#define _adjust_compare_arg(a) \
switch_expr(\
	(is_const_char_pointer(a), a),\
	(is_char_pointer(a), a),\
	(is_float(a), a),\
	(is_double(a), a),\
	(is_long_double(a), a),\
	\
	(is_value8(a), a),\
	(is_value16(a), a),\
	(is_value32(a), a),\
	(is_value64(a), a),\
	\
	(is_struct(a), ({ __auto_type _a = (a); &_a; })),\
	(is_union(a), ({ __auto_type _a = (a); &_a; })),\
	(is_array(a), a), \
	(is_pointer(a), a),\
	(default_expr, ({ __auto_type _a = (a); &_a; }))\
)

#define min_size(a, b) ({(sizeof(a) > sizeof(b))? sizeof(b) : sizeof(a);})

#define compare(a, b)\
_select_compare(a)(_adjust_compare_arg(a), \
	_adjust_compare_arg(b), min_size(a, b))
#endif /* TYPES_H */
