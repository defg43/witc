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

typedef long double long_double;
typedef struct { int _x; } \
	_matcher_hidden_i_just_want_to_avoid_a_trailing_comma_error;

typedef struct { bool iterator; bool matched; } _matcher_hidden_wildcard_type;

#define _matcher_relational_types \
	char, \
	int8_t, int16_t, int32_t, int64_t, \
	uint8_t, uint16_t, uint32_t, uint64_t, \
	float, double, long_double
	
#define _matcher_generate_typdef(sort, type) \
	typedef struct { type content; } _matcher_hidden_##sort##_type_##type;

#define _matcher_generate_typedefs_for_types(sort, types) \
	_foreach_ladder_entry(_matcher_generate_typdef, sort, types)

_matcher_generate_typedefs_for_types(lessthan, _matcher_relational_types)
_matcher_generate_typedefs_for_types(greaterthan, _matcher_relational_types)
_matcher_generate_typedefs_for_types(unequal, _matcher_relational_types)

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

// this should probably be moved to a seperate file
#define MACRO_TUPEL_FIRST(a, b) a
#define MACRO_TUPEL_SECOND(a, b) b

#define _matcher_generate_lessthan_comparison(macro_tupel_arg, type) \
	_matcher_hidden_lessthan_type_##type: ({ __auto_type _x = \
	coerce_type(_matcher_hidden_lessthan_type_##type, \
	MACRO_TUPEL_SECOND macro_tupel_arg); \
	_x.content > MACRO_TUPEL_FIRST macro_tupel_arg;}),
			
#define _matcher_generate_greaterthan_comparison(macro_tupel_arg, type) \
	_matcher_hidden_greaterthan_type_##type: ({ __auto_type _x = \
	coerce_type(_matcher_hidden_greaterthan_type_##type, \
	MACRO_TUPEL_SECOND macro_tupel_arg); \
	_x.content < MACRO_TUPEL_FIRST macro_tupel_arg;}), 

#define _matcher_generate_unequal_comparison(macro_tupel_arg, type) \
	_matcher_hidden_unequal_type_##type: ({ __auto_type _x = \
	coerce_type(_matcher_hidden_unequal_type_##type, \
	MACRO_TUPEL_SECOND macro_tupel_arg); \
	_x.content != MACRO_TUPEL_FIRST macro_tupel_arg;}),

#define _matcher_generate_comparison_impl(comparsion, argum1, argum2, types) \
	_foreach_ladder_entry(comparsion, (argum1, argum2), types)

#define _matcher_coerce_type(arg, type) (coerce_type(type, arg))
#define _comparison_or_defaulter(arg1, arg2) \
	_Generic((arg2), \
		_matcher_hidden_wildcard_type: true, \
		/*lessthan*/\
		_matcher_generate_comparison_impl( \
			_matcher_generate_lessthan_comparison, \
			_local_matching_object.arg1, arg2, \
			_matcher_relational_types) \
		/*greaterthan*/\
		_matcher_generate_comparison_impl( \
			_matcher_generate_greaterthan_comparison, \
			_local_matching_object.arg1, arg2, \
			_matcher_relational_types) \
		/*unequal*/\
		_matcher_generate_comparison_impl( \
			_matcher_generate_unequal_comparison, \
			_local_matching_object.arg1, arg2, \
			_matcher_relational_types) \
		default: \
		compare(_local_matching_object.arg1, \
		coerce_type(typeof(_local_matching_object.arg1), arg2)) \
	)
		
#endif

#define _matcher_generate_lessthan_expr(num, type) \
	type: (_matcher_hidden_lessthan_type_##type) { num }, \

#define _matcher_generate_greaterthan_expr(num, type) \
	type: (_matcher_hidden_greaterthan_type_##type) { num }, \

#define _matcher_generate_unequal_expr(num, type) \
	type: (_matcher_hidden_unequal_type_##type) { num }, \

#define _matcher_generate_expr_impl(sort, num, types) \
	_foreach_ladder_entry(sort, num, types)	

#define lessthan(num)  (_Generic((num), \
	_matcher_generate_expr_impl(_matcher_generate_lessthan_expr, num, \
	_matcher_relational_types) \
	_matcher_hidden_i_just_want_to_avoid_a_trailing_comma_error: "._."\
))

#define greaterthan(num)  (_Generic((num), \
		_matcher_generate_expr_impl(_matcher_generate_greaterthan_expr, num, \
	_matcher_relational_types) \
	_matcher_hidden_i_just_want_to_avoid_a_trailing_comma_error: "._."\
)) 

#define notequal(num)  (_Generic((num), \
	_matcher_generate_expr_impl(_matcher_generate_unequal_expr, num, \
	_matcher_relational_types) \
	_matcher_hidden_i_just_want_to_avoid_a_trailing_comma_error: "._."\
))

#define _create_comparisons(...) \
	true _matchany_foreach(&& \
	_comparison_or_defaulter,,__VA_ARGS__)
	
#define when ) && (

#endif /* MATCH_H */
