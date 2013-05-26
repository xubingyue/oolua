#ifndef EXPOSE_OUT_PARAMS_H_
#	define EXPOSE_OUT_PARAMS_H_

#include "oolua.h"
#include "cpp_out_params.h"
#include "expose_stub_classes.h"


OOLUA_PROXY(OutParamsTest)
	OOLUA_TAGS(Abstract)
	OOLUA_MEM_FUNC(void,int_ref,in_out_p<int&>)
	OOLUA_MEM_FUNC(void,two_int_refs,in_out_p<int&>,in_out_p<int&>)
	OOLUA_MEM_FUNC_RENAME(int_ptr_in_out,void,int_ptr,in_out_p<int*>)
	OOLUA_MEM_FUNC_RENAME(int_ref_out,void,int_ref,out_p<int&>)
	OOLUA_MEM_FUNC(void,int_ref_change,out_p<int&>)
	OOLUA_MEM_FUNC_RENAME(int_ptr_out,void,int_ptr,out_p<int*>)
	OOLUA_MEM_FUNC(void,int_ptr_change_pointee,out_p<int*>)
	OOLUA_MEM_FUNC(int,return_int_and_2_int_refs,in_out_p<int&>,in_out_p<int&>)
	OOLUA_MFUNC(int_ptr)
OOLUA_PROXY_END

OOLUA_PROXY(MockParamWithStringMember)
	OOLUA_TAGS()
OOLUA_PROXY_END

OOLUA_PROXY(OutParamsUserData)
	OOLUA_TAGS(Abstract)
	OOLUA_MEM_FUNC(void, ref,out_p<Stub1&>)
	OOLUA_MEM_FUNC(void,ptr,out_p<Stub1*>)
	OOLUA_MEM_FUNC(void,ref_param,out_p<MockParamWithStringMember&>)
	/*when enabled should give a compile time error*/
	//OOLUA_MEM_FUNC(void,by_value,out_p<Stub1>)
OOLUA_PROXY_END

#endif
