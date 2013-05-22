///////////////////////////////////////////////////////////////////////////////
///  @file oolua_paramater_macros.h
///  @remarks Warning this file was generated, edits to it will not persist if 
///  the file is regenerated.
///  @author Liam Devine
///  \copyright 
///  See licence.txt for more details. \n 
///////////////////////////////////////////////////////////////////////////////
#ifndef OOLUA_PARAMETER_MACROS_H_
#	define OOLUA_PARAMETER_MACROS_H_


/** \cond INTERNAL */

#	include "oolua_config.h"
//param return macros
#define OOLUA_BACK_INTERNAL_(NUM)\
MSC_PUSH_DISABLE_CONDITIONAL_CONSTANT_OOLUA \
	if( P ## NUM ## _::out )\
		OOLUA::INTERNAL::Member_func_helper<P ## NUM ##_,P ## NUM ##_::owner>::push2lua(l,p ## NUM);\
MSC_POP_COMPILER_WARNING_OOLUA


//this is for deduced member functions which have no returns
#define OOLUA_BACK_INTERNAL_0
#define OOLUA_BACK_INTERNAL_1 OOLUA_BACK_INTERNAL_(1);
#define OOLUA_BACK_INTERNAL_2 OOLUA_BACK_INTERNAL_1 OOLUA_BACK_INTERNAL_(2);
#define OOLUA_BACK_INTERNAL_3 OOLUA_BACK_INTERNAL_2 OOLUA_BACK_INTERNAL_(3);
#define OOLUA_BACK_INTERNAL_4 OOLUA_BACK_INTERNAL_3 OOLUA_BACK_INTERNAL_(4);
#define OOLUA_BACK_INTERNAL_5 OOLUA_BACK_INTERNAL_4 OOLUA_BACK_INTERNAL_(5);
#define OOLUA_BACK_INTERNAL_6 OOLUA_BACK_INTERNAL_5 OOLUA_BACK_INTERNAL_(6);
#define OOLUA_BACK_INTERNAL_7 OOLUA_BACK_INTERNAL_6 OOLUA_BACK_INTERNAL_(7);
#define OOLUA_BACK_INTERNAL_8 OOLUA_BACK_INTERNAL_7 OOLUA_BACK_INTERNAL_(8);

//param macros
#define OOLUA_INTERNAL_PARAM(NUM,PARAM)\
	typedef OOLUA::INTERNAL::param_type<PARAM > P ## NUM ##_;\
	P ## NUM ##_::pull_type p ## NUM;\
	MSC_PUSH_DISABLE_CONDITIONAL_CONSTANT_OOLUA\
	if( P ## NUM ##_::in )\
		OOLUA::INTERNAL::Member_func_helper<P ## NUM ##_,P ## NUM ##_::owner>::pull2cpp(l,p ## NUM);\
	MSC_POP_COMPILER_WARNING_OOLUA


//dont fail for a nop
#define OOLUA_PARAMS_INTERNAL_0( ) 

#define OOLUA_PARAMS_INTERNAL_1(PARAM1)\
	OOLUA_INTERNAL_PARAM(1,PARAM1)

#define OOLUA_PARAMS_INTERNAL_2(PARAM1,PARAM2)\
	OOLUA_INTERNAL_PARAM(2,PARAM2)\
	OOLUA_PARAMS_INTERNAL_1(PARAM1)

#define OOLUA_PARAMS_INTERNAL_3(PARAM1,PARAM2,PARAM3)\
	OOLUA_INTERNAL_PARAM(3,PARAM3)\
	OOLUA_PARAMS_INTERNAL_2(PARAM1,PARAM2)

#define OOLUA_PARAMS_INTERNAL_4(PARAM1,PARAM2,PARAM3,PARAM4)\
	OOLUA_INTERNAL_PARAM(4,PARAM4)\
	OOLUA_PARAMS_INTERNAL_3(PARAM1,PARAM2,PARAM3)

#define OOLUA_PARAMS_INTERNAL_5(PARAM1,PARAM2,PARAM3,PARAM4,PARAM5)\
	OOLUA_INTERNAL_PARAM(5,PARAM5)\
	OOLUA_PARAMS_INTERNAL_4(PARAM1,PARAM2,PARAM3,PARAM4)

#define OOLUA_PARAMS_INTERNAL_6(PARAM1,PARAM2,PARAM3,PARAM4,PARAM5,PARAM6)\
	OOLUA_INTERNAL_PARAM(6,PARAM6)\
	OOLUA_PARAMS_INTERNAL_5(PARAM1,PARAM2,PARAM3,PARAM4,PARAM5)

#define OOLUA_PARAMS_INTERNAL_7(PARAM1,PARAM2,PARAM3,PARAM4,PARAM5,PARAM6,PARAM7)\
	OOLUA_INTERNAL_PARAM(7,PARAM7)\
	OOLUA_PARAMS_INTERNAL_6(PARAM1,PARAM2,PARAM3,PARAM4,PARAM5,PARAM6)

#define OOLUA_PARAMS_INTERNAL_8(PARAM1,PARAM2,PARAM3,PARAM4,PARAM5,PARAM6,PARAM7,PARAM8)\
	OOLUA_INTERNAL_PARAM(8,PARAM8)\
	OOLUA_PARAMS_INTERNAL_7(PARAM1,PARAM2,PARAM3,PARAM4,PARAM5,PARAM6,PARAM7)


//macros for when using default traits and deducing the function signature
#define OOLUA_INTERNAL_PARAM_T(NUM) \
	typedef OOLUA::INTERNAL::param_type<P ## NUM > P ## NUM ##_; \
	typename P ## NUM ##_::pull_type p ## NUM; \
	MSC_PUSH_DISABLE_CONDITIONAL_CONSTANT_OOLUA \
	if( P ## NUM ##_::in ) \
		OOLUA::INTERNAL::Member_func_helper<P ## NUM ##_,P ## NUM ##_::owner>::pull2cpp(l,p ## NUM); \
	MSC_POP_COMPILER_WARNING_OOLUA

//we need to generate a 0 entry so that a function with no parameters will compile
#define OOLUA_PARAMS_T_INTERNAL_0
#define OOLUA_PARAMS_T_INTERNAL_1 OOLUA_INTERNAL_PARAM_T(1)
#define OOLUA_PARAMS_T_INTERNAL_2 OOLUA_INTERNAL_PARAM_T(2) OOLUA_PARAMS_T_INTERNAL_1
#define OOLUA_PARAMS_T_INTERNAL_3 OOLUA_INTERNAL_PARAM_T(3) OOLUA_PARAMS_T_INTERNAL_2
#define OOLUA_PARAMS_T_INTERNAL_4 OOLUA_INTERNAL_PARAM_T(4) OOLUA_PARAMS_T_INTERNAL_3
#define OOLUA_PARAMS_T_INTERNAL_5 OOLUA_INTERNAL_PARAM_T(5) OOLUA_PARAMS_T_INTERNAL_4
#define OOLUA_PARAMS_T_INTERNAL_6 OOLUA_INTERNAL_PARAM_T(6) OOLUA_PARAMS_T_INTERNAL_5
#define OOLUA_PARAMS_T_INTERNAL_7 OOLUA_INTERNAL_PARAM_T(7) OOLUA_PARAMS_T_INTERNAL_6
#define OOLUA_PARAMS_T_INTERNAL_8 OOLUA_INTERNAL_PARAM_T(8) OOLUA_PARAMS_T_INTERNAL_7




#define OOLUA_FUNCTION_PARAMS_TYPES_N(num) P##num##_::type
#define OOLUA_FUNCTION_PARAMS_TYPES_0
#define OOLUA_FUNCTION_PARAMS_TYPES_1 OOLUA_FUNCTION_PARAMS_TYPES_N(1)
#define OOLUA_FUNCTION_PARAMS_TYPES_2 OOLUA_FUNCTION_PARAMS_TYPES_1, OOLUA_FUNCTION_PARAMS_TYPES_N(2)
#define OOLUA_FUNCTION_PARAMS_TYPES_3 OOLUA_FUNCTION_PARAMS_TYPES_2, OOLUA_FUNCTION_PARAMS_TYPES_N(3)
#define OOLUA_FUNCTION_PARAMS_TYPES_4 OOLUA_FUNCTION_PARAMS_TYPES_3, OOLUA_FUNCTION_PARAMS_TYPES_N(4)
#define OOLUA_FUNCTION_PARAMS_TYPES_5 OOLUA_FUNCTION_PARAMS_TYPES_4, OOLUA_FUNCTION_PARAMS_TYPES_N(5)
#define OOLUA_FUNCTION_PARAMS_TYPES_6 OOLUA_FUNCTION_PARAMS_TYPES_5, OOLUA_FUNCTION_PARAMS_TYPES_N(6)
#define OOLUA_FUNCTION_PARAMS_TYPES_7 OOLUA_FUNCTION_PARAMS_TYPES_6, OOLUA_FUNCTION_PARAMS_TYPES_N(7)
#define OOLUA_FUNCTION_PARAMS_TYPES_8 OOLUA_FUNCTION_PARAMS_TYPES_7, OOLUA_FUNCTION_PARAMS_TYPES_N(8)

//member functions using default traits
#define OOLUA_USES_PARAMS_0
#define OOLUA_USES_PARAMS_1 typename P1,
#define OOLUA_USES_PARAMS_2 OOLUA_USES_PARAMS_1 typename P2,
#define OOLUA_USES_PARAMS_3 OOLUA_USES_PARAMS_2 typename P3,
#define OOLUA_USES_PARAMS_4 OOLUA_USES_PARAMS_3 typename P4,
#define OOLUA_USES_PARAMS_5 OOLUA_USES_PARAMS_4 typename P5,
#define OOLUA_USES_PARAMS_6 OOLUA_USES_PARAMS_5 typename P6,
#define OOLUA_USES_PARAMS_7 OOLUA_USES_PARAMS_6 typename P7,
#define OOLUA_USES_PARAMS_8 OOLUA_USES_PARAMS_7 typename P8,


#define OOLUA_FUNCTION_PARAMS_0
#define OOLUA_FUNCTION_PARAMS_1 P1
#define OOLUA_FUNCTION_PARAMS_2 OOLUA_FUNCTION_PARAMS_1 , P2
#define OOLUA_FUNCTION_PARAMS_3 OOLUA_FUNCTION_PARAMS_2 , P3
#define OOLUA_FUNCTION_PARAMS_4 OOLUA_FUNCTION_PARAMS_3 , P4
#define OOLUA_FUNCTION_PARAMS_5 OOLUA_FUNCTION_PARAMS_4 , P5
#define OOLUA_FUNCTION_PARAMS_6 OOLUA_FUNCTION_PARAMS_5 , P6
#define OOLUA_FUNCTION_PARAMS_7 OOLUA_FUNCTION_PARAMS_6 , P7
#define OOLUA_FUNCTION_PARAMS_8 OOLUA_FUNCTION_PARAMS_7 , P8


#define OOLUA_TPARAMS_0
#define OOLUA_TPARAMS_1 P1_,
#define OOLUA_TPARAMS_2 OOLUA_TPARAMS_1 P2_,
#define OOLUA_TPARAMS_3 OOLUA_TPARAMS_2 P3_,
#define OOLUA_TPARAMS_4 OOLUA_TPARAMS_3 P4_,
#define OOLUA_TPARAMS_5 OOLUA_TPARAMS_4 P5_,
#define OOLUA_TPARAMS_6 OOLUA_TPARAMS_5 P6_,
#define OOLUA_TPARAMS_7 OOLUA_TPARAMS_6 P7_,
#define OOLUA_TPARAMS_8 OOLUA_TPARAMS_7 P8_,


#define OOLUA_RETURNS_0
#define OOLUA_RETURNS_1 ,P1_
#define OOLUA_RETURNS_2 OOLUA_RETURNS_1 ,P2_
#define OOLUA_RETURNS_3 OOLUA_RETURNS_2 ,P3_
#define OOLUA_RETURNS_4 OOLUA_RETURNS_3 ,P4_
#define OOLUA_RETURNS_5 OOLUA_RETURNS_4 ,P5_
#define OOLUA_RETURNS_6 OOLUA_RETURNS_5 ,P6_
#define OOLUA_RETURNS_7 OOLUA_RETURNS_6 ,P7_
#define OOLUA_RETURNS_8 OOLUA_RETURNS_7 ,P8_


#define OOLUA_PPARAMS_0
#define OOLUA_PPARAMS_1 ,p1
#define OOLUA_PPARAMS_2 OOLUA_PPARAMS_1 ,p2
#define OOLUA_PPARAMS_3 OOLUA_PPARAMS_2 ,p3
#define OOLUA_PPARAMS_4 OOLUA_PPARAMS_3 ,p4
#define OOLUA_PPARAMS_5 OOLUA_PPARAMS_4 ,p5
#define OOLUA_PPARAMS_6 OOLUA_PPARAMS_5 ,p6
#define OOLUA_PPARAMS_7 OOLUA_PPARAMS_6 ,p7
#define OOLUA_PPARAMS_8 OOLUA_PPARAMS_7 ,p8


/** \endcond */

#endif 
