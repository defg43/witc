// SPDX-License-Identifier: MIT
// Copyright (C) 2023 defg43
// https://github.com/defg43/

#ifndef MATCH_H
#define MATCH_H

#include <stdbool.h>
#include "types.h"

#define _matchany_foreach(F, a,...) __VA_OPT__(_matchany_foreach_ladder0(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder0(F, a, n, ...) F(_0, n) __VA_OPT__(_matchany_foreach_ladder1(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder1(F, a, n, ...) F(_1, n) __VA_OPT__(_matchany_foreach_ladder2(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder2(F, a, n, ...) F(_2, n) __VA_OPT__(_matchany_foreach_ladder3(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder3(F, a, n, ...) F(_3, n) __VA_OPT__(_matchany_foreach_ladder4(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder4(F, a, n, ...) F(_4, n) __VA_OPT__(_matchany_foreach_ladder5(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder5(F, a, n, ...) F(_5, n) __VA_OPT__(_matchany_foreach_ladder6(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder6(F, a, n, ...) F(_6, n) __VA_OPT__(_matchany_foreach_ladder7(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder7(F, a, n, ...) F(_7, n) __VA_OPT__(_matchany_foreach_ladder8(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder8(F, a, n, ...) F(_8, n) __VA_OPT__(_matchany_foreach_ladder9(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder9(F, a, n, ...) F(_9, n) __VA_OPT__(_matchany_foreach_ladder10(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder10(F, a, n, ...) F(_10, n) __VA_OPT__(_matchany_foreach_ladder11(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder11(F, a, n, ...) F(_11, n) __VA_OPT__(_matchany_foreach_ladder12(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder12(F, a, n, ...) F(_12, n) __VA_OPT__(_matchany_foreach_ladder13(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder13(F, a, n, ...) F(_13, n) __VA_OPT__(_matchany_foreach_ladder14(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder14(F, a, n, ...) F(_14, n) __VA_OPT__(_matchany_foreach_ladder15(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder15(F, a, n, ...) F(_15, n) __VA_OPT__(_matchany_foreach_ladder16(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder16(F, a, n, ...) F(_16, n) __VA_OPT__(_matchany_foreach_ladder17(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder17(F, a, n, ...) F(_17, n) __VA_OPT__(_matchany_foreach_ladder18(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder18(F, a, n, ...) F(_18, n) __VA_OPT__(_matchany_foreach_ladder19(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder19(F, a, n, ...) F(_19, n) __VA_OPT__(_matchany_foreach_ladder20(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder20(F, a, n, ...) F(_20, n) __VA_OPT__(_matchany_foreach_ladder21(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder21(F, a, n, ...) F(_21, n) __VA_OPT__(_matchany_foreach_ladder22(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder22(F, a, n, ...) F(_22, n) __VA_OPT__(_matchany_foreach_ladder23(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder23(F, a, n, ...) F(_23, n) __VA_OPT__(_matchany_foreach_ladder24(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder24(F, a, n, ...) F(_24, n) __VA_OPT__(_matchany_foreach_ladder25(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder25(F, a, n, ...) F(_25, n) __VA_OPT__(_matchany_foreach_ladder26(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder26(F, a, n, ...) F(_26, n) __VA_OPT__(_matchany_foreach_ladder27(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder27(F, a, n, ...) F(_27, n) __VA_OPT__(_matchany_foreach_ladder28(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder28(F, a, n, ...) F(_28, n) __VA_OPT__(_matchany_foreach_ladder29(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder29(F, a, n, ...) F(_29, n) __VA_OPT__(_matchany_foreach_ladder30(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder30(F, a, n, ...) F(_30, n) __VA_OPT__(_matchany_foreach_ladder31(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder31(F, a, n, ...) F(_31, n) __VA_OPT__(_matchany_foreach_ladder32(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder32(F, a, n, ...) F(_32, n) __VA_OPT__(_matchany_foreach_ladder33(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder33(F, a, n, ...) F(_33, n) __VA_OPT__(_matchany_foreach_ladder34(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder34(F, a, n, ...) F(_34, n) __VA_OPT__(_matchany_foreach_ladder35(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder35(F, a, n, ...) F(_35, n) __VA_OPT__(_matchany_foreach_ladder36(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder36(F, a, n, ...) F(_36, n) __VA_OPT__(_matchany_foreach_ladder37(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder37(F, a, n, ...) F(_37, n) __VA_OPT__(_matchany_foreach_ladder38(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder38(F, a, n, ...) F(_38, n) __VA_OPT__(_matchany_foreach_ladder39(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder39(F, a, n, ...) F(_39, n) __VA_OPT__(_matchany_foreach_ladder40(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder40(F, a, n, ...) F(_40, n) __VA_OPT__(_matchany_foreach_ladder41(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder41(F, a, n, ...) F(_41, n) __VA_OPT__(_matchany_foreach_ladder42(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder42(F, a, n, ...) F(_42, n) __VA_OPT__(_matchany_foreach_ladder43(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder43(F, a, n, ...) F(_43, n) __VA_OPT__(_matchany_foreach_ladder44(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder44(F, a, n, ...) F(_44, n) __VA_OPT__(_matchany_foreach_ladder45(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder45(F, a, n, ...) F(_45, n) __VA_OPT__(_matchany_foreach_ladder46(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder46(F, a, n, ...) F(_46, n) __VA_OPT__(_matchany_foreach_ladder47(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder47(F, a, n, ...) F(_47, n) __VA_OPT__(_matchany_foreach_ladder48(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder48(F, a, n, ...) F(_48, n) __VA_OPT__(_matchany_foreach_ladder49(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder49(F, a, n, ...) F(_49, n) __VA_OPT__(_matchany_foreach_ladder50(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder50(F, a, n, ...) F(_50, n) __VA_OPT__(_matchany_foreach_ladder51(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder51(F, a, n, ...) F(_51, n) __VA_OPT__(_matchany_foreach_ladder52(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder52(F, a, n, ...) F(_52, n) __VA_OPT__(_matchany_foreach_ladder53(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder53(F, a, n, ...) F(_53, n) __VA_OPT__(_matchany_foreach_ladder54(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder54(F, a, n, ...) F(_54, n) __VA_OPT__(_matchany_foreach_ladder55(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder55(F, a, n, ...) F(_55, n) __VA_OPT__(_matchany_foreach_ladder56(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder56(F, a, n, ...) F(_56, n) __VA_OPT__(_matchany_foreach_ladder57(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder57(F, a, n, ...) F(_57, n) __VA_OPT__(_matchany_foreach_ladder58(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder58(F, a, n, ...) F(_58, n) __VA_OPT__(_matchany_foreach_ladder59(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder59(F, a, n, ...) F(_59, n) __VA_OPT__(_matchany_foreach_ladder60(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder60(F, a, n, ...) F(_60, n) __VA_OPT__(_matchany_foreach_ladder61(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder61(F, a, n, ...) F(_61, n) __VA_OPT__(_matchany_foreach_ladder62(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder62(F, a, n, ...) F(_62, n) __VA_OPT__(_matchany_foreach_ladder63(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder63(F, a, n, ...) F(_63, n) __VA_OPT__(_matchany_foreach_ladder64(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder64(F, a, n, ...) F(_64, n) __VA_OPT__(_matchany_foreach_ladder65(F, a, __VA_ARGS__))
#define _matchany_foreach_ladder65(F, a, n, ...) _Pragma("GCC error \"exceeded 64 arguments, add more\"");

typedef struct { bool iterator; bool matched; } _matcher_hidden_wildcard_type;

// lessthan
typedef struct { char content; } _matcher_hidden_lessthan_type_char;
typedef struct { int8_t content; } _matcher_hidden_lessthan_type_int8_t;
typedef struct { int16_t content; } _matcher_hidden_lessthan_type_int16_t;
typedef struct { int32_t content; } _matcher_hidden_lessthan_type_int32_t;
typedef struct { int64_t content; } _matcher_hidden_lessthan_type_int64_t;
typedef struct { uint8_t content; } _matcher_hidden_lessthan_type_uint8_t;
typedef struct { uint16_t content; } _matcher_hidden_lessthan_type_uint16_t;
typedef struct { uint32_t content; } _matcher_hidden_lessthan_type_uint32_t;
typedef struct { uint64_t content; } _matcher_hidden_lessthan_type_uint64_t;
typedef struct { float content; } _matcher_hidden_lessthan_type_float;
typedef struct { double content; } _matcher_hidden_lessthan_type_double;
typedef struct { long double content; } _matcher_hidden_lessthan_type_long_double;
// greaterthan
typedef struct { char content; } _matcher_hidden_greaterthan_type_char;
typedef struct { int8_t content; } _matcher_hidden_greaterthan_type_int8_t;
typedef struct { int16_t content; } _matcher_hidden_greaterthan_type_int16_t;
typedef struct { int32_t content; } _matcher_hidden_greaterthan_type_int32_t;
typedef struct { int64_t content; } _matcher_hidden_greaterthan_type_int64_t;
typedef struct { uint8_t content; } _matcher_hidden_greaterthan_type_uint8_t;
typedef struct { uint16_t content; } _matcher_hidden_greaterthan_type_uint16_t;
typedef struct { uint32_t content; } _matcher_hidden_greaterthan_type_uint32_t;
typedef struct { uint64_t content; } _matcher_hidden_greaterthan_type_uint64_t;
typedef struct { float content; } _matcher_hidden_greaterthan_type_float;
typedef struct { double content; } _matcher_hidden_greaterthan_type_double;
typedef struct { long double content; } _matcher_hidden_greaterthan_type_long_double;

// unequal
typedef struct { char content; } _matcher_hidden_unequal_type_char;
typedef struct { int8_t content; } _matcher_hidden_unequal_type_int8_t;
typedef struct { int16_t content; } _matcher_hidden_unequal_type_int16_t;
typedef struct { int32_t content; } _matcher_hidden_unequal_type_int32_t;
typedef struct { int64_t content; } _matcher_hidden_unequal_type_int64_t;
typedef struct { uint8_t content; } _matcher_hidden_unequal_type_uint8_t;
typedef struct { uint16_t content; } _matcher_hidden_unequal_type_uint16_t;
typedef struct { uint32_t content; } _matcher_hidden_unequal_type_uint32_t;
typedef struct { uint64_t content; } _matcher_hidden_unequal_type_uint64_t;
typedef struct { float content; } _matcher_hidden_unequal_type_float;
typedef struct { double content; } _matcher_hidden_unequal_type_double;
typedef struct { long double content; } _matcher_hidden_unequal_type_long_double;

#define _match_struct_element_numbered(mod, prop) typeof(prop) mod;

#define _matchany_generate_elements(...) \
	_matchany_foreach(_match_struct_element_numbered,,__VA_ARGS__)
	
#define match(...) for( _matcher_hidden_wildcard_type _ = { 0, 0 }; _.iterator == false ; _.iterator = true) \
	for( struct { _matchany_generate_elements(__VA_ARGS__) } \
    _local_matching_object = {__VA_ARGS__}; \
    _.iterator == false; _.iterator = true)

#ifdef __cplusplus

#define pattern(...) \
	if( ({ if(_.matched == true) break; \
	_.matched = (_create_comparisons(__VA_ARGS__)); \
	_.matched; \
	}) )
	
#else

#define pattern(...) \
	_Pragma("GCC diagnostic push") \
	_Pragma("GCC diagnostic ignored \"-Wint-conversion\"") \
	if( ({ if(_.matched == true) break; \
	_.matched = (_create_comparisons(__VA_ARGS__)); \
	_.matched; \
	}) )\
	_Pragma("GCC diagnostic pop")
#endif

#ifdef __cplusplus

#define _comparison_or_defaulter(arg1, arg2) _comparison_or_defaulter_func(_local_matching_object.arg1, arg2)
template <typename T, typename U>
bool _comparison_or_defaulter_func(T arg1, U arg2) {
    if constexpr (std::is_same<U, _matcher_hidden_wildcard_type>()) {
        return true;
    } else {
        return compare(arg1, arg2);
    }
}

#else

#define _matcher_c // i have no idea what i wanted to say here

#define _matcher_coerce_type(arg, type) (coerce_type(type, arg))
#define _comparison_or_defaulter(arg1, arg2) \
	_Generic((arg2), \
		_matcher_hidden_wildcard_type: true, \
		/*lessthan*/\
		_matcher_hidden_lessthan_type_char: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_lessthan_type_char, arg2); \
			_x.content > _local_matching_object.arg1;}), \
		_matcher_hidden_lessthan_type_int8_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_lessthan_type_int8_t, arg2); \
			_x.content > _local_matching_object.arg1;}), \
		_matcher_hidden_lessthan_type_int16_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_lessthan_type_int16_t, arg2); \
			_x.content > _local_matching_object.arg1;}), \
		_matcher_hidden_lessthan_type_int32_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_lessthan_type_int32_t, arg2); \
			_x.content > _local_matching_object.arg1;}), \
		_matcher_hidden_lessthan_type_int64_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_lessthan_type_int64_t, arg2); \
			_x.content > _local_matching_object.arg1;}), \
		_matcher_hidden_lessthan_type_uint8_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_lessthan_type_int8_t, arg2); \
			_x.content > _local_matching_object.arg1;}), \
		_matcher_hidden_lessthan_type_uint16_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_lessthan_type_int16_t, arg2); \
			_x.content > _local_matching_object.arg1;}), \
		_matcher_hidden_lessthan_type_uint32_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_lessthan_type_int32_t, arg2); \
			_x.content > _local_matching_object.arg1;}), \
		_matcher_hidden_lessthan_type_uint64_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_lessthan_type_int64_t, arg2); \
			_x.content > _local_matching_object.arg1;}), \
		_matcher_hidden_lessthan_type_float: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_lessthan_type_float, arg2); \
			_x.content > _local_matching_object.arg1;}), \
		_matcher_hidden_lessthan_type_double: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_lessthan_type_double, arg2); \
			_x.content > _local_matching_object.arg1;}), \
		_matcher_hidden_lessthan_type_long_double: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_lessthan_type_long_double, arg2); \
			_x.content > _local_matching_object.arg1;}), \
		/*greaterthan*/\
		_matcher_hidden_greaterthan_type_char: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_greaterthan_type_char, arg2); \
			_x.content < _local_matching_object.arg1;}), \
		_matcher_hidden_greaterthan_type_int8_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_greaterthan_type_int8_t, arg2); \
			_x.content < _local_matching_object.arg1;}), \
		_matcher_hidden_greaterthan_type_int16_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_greaterthan_type_int16_t, arg2); \
			_x.content < _local_matching_object.arg1;}), \
		_matcher_hidden_greaterthan_type_int32_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_greaterthan_type_int32_t, arg2); \
			_x.content < _local_matching_object.arg1;}), \
		_matcher_hidden_greaterthan_type_int64_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_greaterthan_type_int64_t, arg2); \
			_x.content < _local_matching_object.arg1;}), \
		_matcher_hidden_greaterthan_type_uint8_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_greaterthan_type_int8_t, arg2); \
			_x.content < _local_matching_object.arg1;}), \
		_matcher_hidden_greaterthan_type_uint16_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_greaterthan_type_int16_t, arg2); \
			_x.content < _local_matching_object.arg1;}), \
		_matcher_hidden_greaterthan_type_uint32_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_greaterthan_type_int32_t, arg2); \
			_x.content < _local_matching_object.arg1;}), \
		_matcher_hidden_greaterthan_type_uint64_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_greaterthan_type_int64_t, arg2); \
			_x.content < _local_matching_object.arg1;}), \
		_matcher_hidden_greaterthan_type_float: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_greaterthan_type_float, arg2); \
			_x.content < _local_matching_object.arg1;}), \
		_matcher_hidden_greaterthan_type_double: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_greaterthan_type_double, arg2); \
			_x.content < _local_matching_object.arg1;}), \
		_matcher_hidden_greaterthan_type_long_double: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_greaterthan_type_long_double, arg2); \
			_x.content < _local_matching_object.arg1;}), \
		/*unequal*/\
		_matcher_hidden_unequal_type_char: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_unequal_type_char, arg2); \
			_x.content != _local_matching_object.arg1;}), \
		_matcher_hidden_unequal_type_int8_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_unequal_type_int8_t, arg2); \
			_x.content != _local_matching_object.arg1;}), \
		_matcher_hidden_unequal_type_int16_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_unequal_type_int16_t, arg2); \
			_x.content != _local_matching_object.arg1;}), \
		_matcher_hidden_unequal_type_int32_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_unequal_type_int32_t, arg2); \
			_x.content != _local_matching_object.arg1;}), \
		_matcher_hidden_unequal_type_int64_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_unequal_type_int64_t, arg2); \
			_x.content != _local_matching_object.arg1;}), \
		_matcher_hidden_unequal_type_uint8_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_unequal_type_int8_t, arg2); \
			_x.content != _local_matching_object.arg1;}), \
		_matcher_hidden_unequal_type_uint16_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_unequal_type_int16_t, arg2); \
			_x.content != _local_matching_object.arg1;}), \
		_matcher_hidden_unequal_type_uint32_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_unequal_type_int32_t, arg2); \
			_x.content != _local_matching_object.arg1;}), \
		_matcher_hidden_unequal_type_uint64_t: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_unequal_type_int64_t, arg2); \
			_x.content != _local_matching_object.arg1;}), \
		_matcher_hidden_unequal_type_float: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_unequal_type_float, arg2); \
			_x.content != _local_matching_object.arg1;}), \
		_matcher_hidden_unequal_type_double: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_unequal_type_double, arg2); \
			_x.content != _local_matching_object.arg1;}), \
		_matcher_hidden_unequal_type_long_double: ({ __auto_type _x = \
			coerce_type(_matcher_hidden_unequal_type_long_double, arg2); \
			_x.content != _local_matching_object.arg1;}), \
		\
		default: \
		compare(_local_matching_object.arg1, \
		coerce_type(typeof(_local_matching_object.arg1), arg2)) \
	)
		
#endif

#define lessthan(num)  (_Generic((num), \
	char: (_matcher_hidden_lessthan_type_char) { num }, \
	int8_t: (_matcher_hidden_lessthan_type_int8_t) { num }, \
	int16_t: (_matcher_hidden_lessthan_type_int16_t) { num }, \
	int32_t: (_matcher_hidden_lessthan_type_int32_t) { num }, \
	int64_t: (_matcher_hidden_lessthan_type_int64_t) { num }, \
	uint8_t: (_matcher_hidden_lessthan_type_uint8_t) { num }, \
	uint16_t: (_matcher_hidden_lessthan_type_uint16_t) { num }, \
	uint32_t: (_matcher_hidden_lessthan_type_uint32_t) { num }, \
	uint64_t: (_matcher_hidden_lessthan_type_uint64_t) { num }, \
	float: (_matcher_hidden_lessthan_type_float) { num }, \
	double: (_matcher_hidden_lessthan_type_double) { num } , \
	long double: (_matcher_hidden_lessthan_type_double) { num } \
))

#define greaterthan(num)  (_Generic((num), \
	char: (_matcher_hidden_greaterthan_type_char) { num }, \
	int8_t: (_matcher_hidden_greaterthan_type_int8_t) { num }, \
	int16_t: (_matcher_hidden_greaterthan_type_int16_t) { num }, \
	int32_t: (_matcher_hidden_greaterthan_type_int32_t) { num }, \
	int64_t: (_matcher_hidden_greaterthan_type_int64_t) { num }, \
	uint8_t: (_matcher_hidden_greaterthan_type_uint8_t) { num }, \
	uint16_t: (_matcher_hidden_greaterthan_type_uint16_t) { num }, \
	uint32_t: (_matcher_hidden_greaterthan_type_uint32_t) { num }, \
	uint64_t: (_matcher_hidden_greaterthan_type_uint64_t) { num }, \
	float: (_matcher_hidden_greaterthan_type_float) { num }, \
	double: (_matcher_hidden_greaterthan_type_double) { num }, \
	long double: (_matcher_hidden_greaterthan_type_double) { num } \
)) 

#define unequal(num)  (_Generic((num), \
	char: (_matcher_hidden_unequal_type_char) { num }, \
	int8_t: (_matcher_hidden_unequal_type_int8_t) { num }, \
	int16_t: (_matcher_hidden_unequal_type_int16_t) { num }, \
	int32_t: (_matcher_hidden_unequal_type_int32_t) { num }, \
	int64_t: (_matcher_hidden_unequal_type_int64_t) { num }, \
	uint8_t: (_matcher_hidden_unequal_type_uint8_t) { num }, \
	uint16_t: (_matcher_hidden_unequal_type_uint16_t) { num }, \
	uint32_t: (_matcher_hidden_unequal_type_uint32_t) { num }, \
	uint64_t: (_matcher_hidden_unequal_type_uint64_t) { num }, \
	float: (_matcher_hidden_unequal_type_float) { num }, \
	double: (_matcher_hidden_unequal_type_double) { num }, \
	long double: (_matcher_hidden_unequal_type_double) { num } \
))

#define _create_comparisons(...) \
	true _matchany_foreach(&& \
	_comparison_or_defaulter,,__VA_ARGS__)	
	
#define when ) && (

#endif /* MATCH_H */
