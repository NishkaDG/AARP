﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange[]
struct BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralA6931633B5386D569408197501A33540EA923D82;
IL2CPP_EXTERN_C String_t* _stringLiteralAE1F596541AD0A4778038C3FF0FF43A22F80A274;
IL2CPP_EXTERN_C String_t* _stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8;
struct BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// Unity.Collections.NativeArray`1<UnityEngine.BoneWeight>
struct NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Color>
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.BoneWeight
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker
struct VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C 
{
	// Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::ranges
	BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* ___ranges_0;
	// System.Int32 Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::totalVerts
	int32_t ___totalVerts_1;
	// System.Boolean Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::needsRepacking
	bool ___needsRepacking_2;
};
// Native definition for P/Invoke marshalling of Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker
struct VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C_marshaled_pinvoke
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* ___ranges_0;
	int32_t ___totalVerts_1;
	int32_t ___needsRepacking_2;
};
// Native definition for COM marshalling of Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker
struct VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C_marshaled_com
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* ___ranges_0;
	int32_t ___totalVerts_1;
	int32_t ___needsRepacking_2;
};

// Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange
struct BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE 
{
	// System.Int32 Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::_firstIndex
	int32_t ____firstIndex_0;
	// System.Int32 Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::_lastIndex
	int32_t ____lastIndex_1;
	// System.Int32 Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::_sliceLength
	int32_t ____sliceLength_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange[]
struct BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D  : public RuntimeArray
{
	ALIGN_FIELD (8) BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE m_Items[1];

	inline BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F m_Items[1];

	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// System.Void Unity.Collections.NativeArray`1<UnityEngine.Color>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE3E0CC624396EE2CF282ADD8B942B09323AF30E8_gshared (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___input0, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D VertexRepacker_CreateRepackedAttributes_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA01159F0E1B4680B39C7A27EF7430A54FA7B96CC_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___buffer0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Single>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<System.Single>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___input0, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<System.Single>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF VertexRepacker_CreateRepackedAttributes_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA207AD511188C26BC024FF612B563032AC22AD2B_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___buffer0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___input0, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 VertexRepacker_CreateRepackedAttributes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4AE3EA78DA8EB18B50CBB39FD3BDA19DC305BD46_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___buffer0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD VertexRepacker_CreateRepackedAttributes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13E6B7880548032F70DDD23639453CACDE7A7510_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector4>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m583C7489D7AAC57700B48C9035CC3BE3379872E4_gshared (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___input0, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 VertexRepacker_CreateRepackedAttributes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m43BD96A543168A6AEB66F73D0D74D9983976FD01_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___buffer0, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.BoneWeight>(Unity.Collections.NativeArray`1<T>&,T[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___input0, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method) ;
// T[] Unity.Collections.NativeArray`1<UnityEngine.BoneWeight>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* NativeArray_1_ToArray_m441FA1D89C6036CFEBD2B2C4FC75BDC43E92AEC7_gshared (NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* __this, const RuntimeMethod* method) ;
// T[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::RepackAttribute<UnityEngine.BoneWeight>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* VertexRepacker_RepackAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m88DDCB3497AE27B4B816006F11F82B8A877F5B71_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___buffer0, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&,T[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method) ;
// T[] Unity.Collections.NativeArray`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NativeArray_1_ToArray_m819258262F28D1547F1CD1DDF79FFE7ED75EE869_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method) ;
// T[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::RepackAttribute<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* VertexRepacker_RepackAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAE1F8BD1717DC7DE754877D896385E40BCEF3097_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75 (intptr_t ___javaClass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m34B8FFDACB5799F12CBAA200C8AB844AF98B4DD0 (bool ___condition0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Color>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mE3E0CC624396EE2CF282ADD8B942B09323AF30E8 (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mE3E0CC624396EE2CF282ADD8B942B09323AF30E8_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___input0, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E_gshared)(__this, ___input0, ___output1, ___outputOffset2, method);
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>&)
inline NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D VertexRepacker_CreateRepackedAttributes_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA01159F0E1B4680B39C7A27EF7430A54FA7B96CC (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___buffer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*, const RuntimeMethod*))VertexRepacker_CreateRepackedAttributes_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA01159F0E1B4680B39C7A27EF7430A54FA7B96CC_gshared)(__this, ___buffer0, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Single>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<System.Single>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___input0, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD_gshared)(__this, ___input0, ___output1, ___outputOffset2, method);
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<System.Single>(Unity.Collections.NativeArray`1<T>&)
inline NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF VertexRepacker_CreateRepackedAttributes_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA207AD511188C26BC024FF612B563032AC22AD2B (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___buffer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, const RuntimeMethod*))VertexRepacker_CreateRepackedAttributes_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA207AD511188C26BC024FF612B563032AC22AD2B_gshared)(__this, ___buffer0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391 (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___input0, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391_gshared)(__this, ___input0, ___output1, ___outputOffset2, method);
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>&)
inline NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 VertexRepacker_CreateRepackedAttributes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4AE3EA78DA8EB18B50CBB39FD3BDA19DC305BD46 (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___buffer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))VertexRepacker_CreateRepackedAttributes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4AE3EA78DA8EB18B50CBB39FD3BDA19DC305BD46_gshared)(__this, ___buffer0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0 (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7 (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7_gshared)(__this, ___input0, ___output1, ___outputOffset2, method);
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&)
inline NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD VertexRepacker_CreateRepackedAttributes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13E6B7880548032F70DDD23639453CACDE7A7510 (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))VertexRepacker_CreateRepackedAttributes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13E6B7880548032F70DDD23639453CACDE7A7510_gshared)(__this, ___buffer0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector4>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m583C7489D7AAC57700B48C9035CC3BE3379872E4 (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m583C7489D7AAC57700B48C9035CC3BE3379872E4_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___input0, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8*, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8*, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F_gshared)(__this, ___input0, ___output1, ___outputOffset2, method);
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>&)
inline NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 VertexRepacker_CreateRepackedAttributes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m43BD96A543168A6AEB66F73D0D74D9983976FD01 (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___buffer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8*, const RuntimeMethod*))VertexRepacker_CreateRepackedAttributes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m43BD96A543168A6AEB66F73D0D74D9983976FD01_gshared)(__this, ___buffer0, method);
}
// System.Void Oculus.Avatar2.OvrAvatarLog::LogException(System.String,System.Exception,System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvrAvatarLog_LogException_m55C65B0C49FD1E2BDAEC255867848707BD74D35A (String_t* ___operationName0, Exception_t* ___exception1, String_t* ___scope2, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context3, const RuntimeMethod* method) ;
// System.Void System.GC::Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_Collect_m083F9AEA26680FD7E28C627D30E43DD672ADF53D (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarLog::LogError(System.String,System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvrAvatarLog_LogError_mCD729C4FD50E1917078C9A3A77928224E2463397 (String_t* ___msg0, String_t* ___scope1, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context2, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.BoneWeight>(Unity.Collections.NativeArray`1<T>&,T[],System.Int32,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86 (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___input0, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7*, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*, int32_t, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86_gshared)(__this, ___input0, ___output1, ___outputLength2, ___outputOffset3, method);
}
// T[] Unity.Collections.NativeArray`1<UnityEngine.BoneWeight>::ToArray()
inline BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* NativeArray_1_ToArray_m441FA1D89C6036CFEBD2B2C4FC75BDC43E92AEC7 (NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* __this, const RuntimeMethod* method)
{
	return ((  BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* (*) (NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7*, const RuntimeMethod*))NativeArray_1_ToArray_m441FA1D89C6036CFEBD2B2C4FC75BDC43E92AEC7_gshared)(__this, method);
}
// T[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::RepackAttribute<UnityEngine.BoneWeight>(Unity.Collections.NativeArray`1<T>&)
inline BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* VertexRepacker_RepackAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m88DDCB3497AE27B4B816006F11F82B8A877F5B71 (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___buffer0, const RuntimeMethod* method)
{
	return ((  BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7*, const RuntimeMethod*))VertexRepacker_RepackAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m88DDCB3497AE27B4B816006F11F82B8A877F5B71_gshared)(__this, ___buffer0, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&,T[],System.Int32,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D_gshared)(__this, ___input0, ___output1, ___outputLength2, ___outputOffset3, method);
}
// T[] Unity.Collections.NativeArray`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NativeArray_1_ToArray_m819258262F28D1547F1CD1DDF79FFE7ED75EE869 (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))NativeArray_1_ToArray_m819258262F28D1547F1CD1DDF79FFE7ED75EE869_gshared)(__this, method);
}
// T[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::RepackAttribute<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&)
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* VertexRepacker_RepackAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAE1F8BD1717DC7DE754877D896385E40BCEF3097 (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))VertexRepacker_RepackAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAE1F8BD1717DC7DE754877D896385E40BCEF3097_gshared)(__this, ___buffer0, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Boolean>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mECC80E510CFBE42552E45606CF9FAF3327516D62_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Int32>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3D5D642F875BE77118D268AE317895427C693AA8_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Object>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mE82633A88CD2EA1C974716F0E9D7DD1ED0E05B64_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Single>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCCCB5BCD16DDA971882DB98879037962753256AA_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC1F60B2CD35EBE3AF6EB1A0CBE8720BDBB0FD46F_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m009869836C4E4FF7DBA29495581E621CAFB3EC28_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m12163ADC3C81694EE6164EB1CE4CF319BF912FC0_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0F150B2F03CF09DC548030312EC870B49FD42856_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8912F671519185E49C39BB5AC46FE2EC5940B11F_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mE520BC825E42E6148130E64994ECB5BDEAEE8AE6_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m6555020711F611E466B92953403F09E0014C5C0A_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAD96CCC9D368A9EF49DF86C4767402B588D1057A_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m57664D04766C1E0F7096ECD49549E6A4291D0347_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF65B0E8242ED723FC5C233B6113C489F861D6C75_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m749A4CD33AC4CF1D3F2723EBA4D1EEE590DCCD85_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3A5FB0773626670CFB4AAC59E1485231C8EFD649_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m258931EB2BDEDE3D2CED632F6B207CA93F46CAC1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB5511DCA764C7BB77877C9028AB026AD9EEBD6B8_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m5BC7606ACC6309C3070972F60C8A552BA1D4DA71_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m8D1061D8E0079806BBE251CE5ACAF4262C15EE8E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF017EFBD89137395458CD85A01B48B45892FCE9_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCF75982D40162C5B91D40E003FC6388445B8A9B7_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D VertexRepacker_CreateRepackedAttributes_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA01159F0E1B4680B39C7A27EF7430A54FA7B96CC_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_3 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Assert.IsTrue(needsRepacking);
		bool L_0 = (bool)__this->___needsRepacking_2;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_m34B8FFDACB5799F12CBAA200C8AB844AF98B4DD0(L_0, NULL);
		// var packedResult = new NativeArray<T>(totalVerts, _nativeAllocator, _nativeArrayInit);
		int32_t L_1 = (int32_t)__this->___totalVerts_1;
		NativeArray_1__ctor_mE3E0CC624396EE2CF282ADD8B942B09323AF30E8((&V_0), L_1, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// int packedOffset = 0;
		V_1 = 0;
		// for (int idx = 0; idx < ranges.Length; idx++)
		V_2 = 0;
		goto IL_004a;
	}

IL_0022:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_2 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		V_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		// range.CopyRelevantSlice(in buffer, in packedResult, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_4 = V_3;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_5 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_4);
		V_4 = L_5;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_6 = ___buffer0;
		BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E((&V_4), L_6, (&V_0), (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004a:
	{
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_8 = V_2;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_9 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_0022;
		}
	}
	{
		// return packedResult;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_11 = V_0;
		V_6 = L_11;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_12 = V_6;
		return L_12;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D VertexRepacker_CreateRepackedAttributes_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA01159F0E1B4680B39C7A27EF7430A54FA7B96CC_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D _returnValue;
	_returnValue = VertexRepacker_CreateRepackedAttributes_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA01159F0E1B4680B39C7A27EF7430A54FA7B96CC(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<System.Single>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF VertexRepacker_CreateRepackedAttributes_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA207AD511188C26BC024FF612B563032AC22AD2B_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_3 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Assert.IsTrue(needsRepacking);
		bool L_0 = (bool)__this->___needsRepacking_2;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_m34B8FFDACB5799F12CBAA200C8AB844AF98B4DD0(L_0, NULL);
		// var packedResult = new NativeArray<T>(totalVerts, _nativeAllocator, _nativeArrayInit);
		int32_t L_1 = (int32_t)__this->___totalVerts_1;
		NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004((&V_0), L_1, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// int packedOffset = 0;
		V_1 = 0;
		// for (int idx = 0; idx < ranges.Length; idx++)
		V_2 = 0;
		goto IL_004a;
	}

IL_0022:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_2 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		V_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		// range.CopyRelevantSlice(in buffer, in packedResult, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_4 = V_3;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_5 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_4);
		V_4 = L_5;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_6 = ___buffer0;
		BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD((&V_4), L_6, (&V_0), (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004a:
	{
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_8 = V_2;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_9 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_0022;
		}
	}
	{
		// return packedResult;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_11 = V_0;
		V_6 = L_11;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_12 = V_6;
		return L_12;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF VertexRepacker_CreateRepackedAttributes_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA207AD511188C26BC024FF612B563032AC22AD2B_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF _returnValue;
	_returnValue = VertexRepacker_CreateRepackedAttributes_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA207AD511188C26BC024FF612B563032AC22AD2B(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 VertexRepacker_CreateRepackedAttributes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4AE3EA78DA8EB18B50CBB39FD3BDA19DC305BD46_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_3 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Assert.IsTrue(needsRepacking);
		bool L_0 = (bool)__this->___needsRepacking_2;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_m34B8FFDACB5799F12CBAA200C8AB844AF98B4DD0(L_0, NULL);
		// var packedResult = new NativeArray<T>(totalVerts, _nativeAllocator, _nativeArrayInit);
		int32_t L_1 = (int32_t)__this->___totalVerts_1;
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&V_0), L_1, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// int packedOffset = 0;
		V_1 = 0;
		// for (int idx = 0; idx < ranges.Length; idx++)
		V_2 = 0;
		goto IL_004a;
	}

IL_0022:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_2 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		V_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		// range.CopyRelevantSlice(in buffer, in packedResult, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_4 = V_3;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_5 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_4);
		V_4 = L_5;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_6 = ___buffer0;
		BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391((&V_4), L_6, (&V_0), (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004a:
	{
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_8 = V_2;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_9 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_0022;
		}
	}
	{
		// return packedResult;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_11 = V_0;
		V_6 = L_11;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_12 = V_6;
		return L_12;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 VertexRepacker_CreateRepackedAttributes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4AE3EA78DA8EB18B50CBB39FD3BDA19DC305BD46_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 _returnValue;
	_returnValue = VertexRepacker_CreateRepackedAttributes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4AE3EA78DA8EB18B50CBB39FD3BDA19DC305BD46(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD VertexRepacker_CreateRepackedAttributes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13E6B7880548032F70DDD23639453CACDE7A7510_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_3 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Assert.IsTrue(needsRepacking);
		bool L_0 = (bool)__this->___needsRepacking_2;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_m34B8FFDACB5799F12CBAA200C8AB844AF98B4DD0(L_0, NULL);
		// var packedResult = new NativeArray<T>(totalVerts, _nativeAllocator, _nativeArrayInit);
		int32_t L_1 = (int32_t)__this->___totalVerts_1;
		NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0((&V_0), L_1, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// int packedOffset = 0;
		V_1 = 0;
		// for (int idx = 0; idx < ranges.Length; idx++)
		V_2 = 0;
		goto IL_004a;
	}

IL_0022:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_2 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		V_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		// range.CopyRelevantSlice(in buffer, in packedResult, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_4 = V_3;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_5 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_4);
		V_4 = L_5;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_6 = ___buffer0;
		BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7((&V_4), L_6, (&V_0), (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004a:
	{
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_8 = V_2;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_9 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_0022;
		}
	}
	{
		// return packedResult;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_11 = V_0;
		V_6 = L_11;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_12 = V_6;
		return L_12;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD VertexRepacker_CreateRepackedAttributes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13E6B7880548032F70DDD23639453CACDE7A7510_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD _returnValue;
	_returnValue = VertexRepacker_CreateRepackedAttributes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13E6B7880548032F70DDD23639453CACDE7A7510(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 VertexRepacker_CreateRepackedAttributes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m43BD96A543168A6AEB66F73D0D74D9983976FD01_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_3 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Assert.IsTrue(needsRepacking);
		bool L_0 = (bool)__this->___needsRepacking_2;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_m34B8FFDACB5799F12CBAA200C8AB844AF98B4DD0(L_0, NULL);
		// var packedResult = new NativeArray<T>(totalVerts, _nativeAllocator, _nativeArrayInit);
		int32_t L_1 = (int32_t)__this->___totalVerts_1;
		NativeArray_1__ctor_m583C7489D7AAC57700B48C9035CC3BE3379872E4((&V_0), L_1, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// int packedOffset = 0;
		V_1 = 0;
		// for (int idx = 0; idx < ranges.Length; idx++)
		V_2 = 0;
		goto IL_004a;
	}

IL_0022:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_2 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		V_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		// range.CopyRelevantSlice(in buffer, in packedResult, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_4 = V_3;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_5 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_4);
		V_4 = L_5;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* L_6 = ___buffer0;
		BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F((&V_4), L_6, (&V_0), (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004a:
	{
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_8 = V_2;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_9 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_0022;
		}
	}
	{
		// return packedResult;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_11 = V_0;
		V_6 = L_11;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_12 = V_6;
		return L_12;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 VertexRepacker_CreateRepackedAttributes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m43BD96A543168A6AEB66F73D0D74D9983976FD01_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 _returnValue;
	_returnValue = VertexRepacker_CreateRepackedAttributes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m43BD96A543168A6AEB66F73D0D74D9983976FD01(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// T[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::RepackAttribute<UnityEngine.BoneWeight>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* VertexRepacker_RepackAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m88DDCB3497AE27B4B816006F11F82B8A877F5B71_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6931633B5386D569408197501A33540EA923D82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* V_2 = NULL;
	bool V_3 = false;
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_9 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (buffer.Length == 0) { return Array.Empty<T>(); }
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* L_0 = ___buffer0;
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7 L_1 = (*(NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7*)L_0);
		V_1 = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_1))->___m_Length_1);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (buffer.Length == 0) { return Array.Empty<T>(); }
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_4;
		L_4 = ((  BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_4;
		goto IL_0104;
	}

IL_0022:
	{
		// if (needsRepacking)
		bool L_5 = (bool)__this->___needsRepacking_2;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_00f2;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// attrBuffer = new T[totalVerts];
		int32_t L_7 = (int32_t)__this->___totalVerts_1;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_8 = (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_7);
		V_4 = L_8;
		goto IL_005d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// OvrAvatarLog.LogException("allocate primitive buffer (new T[len])", e, primitiveLogScope);
		Exception_t* L_9 = V_6;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var)));
		OvrAvatarLog_LogException_m55C65B0C49FD1E2BDAEC255867848707BD74D35A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE1F596541AD0A4778038C3FF0FF43A22F80A274)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8)), (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// attrBuffer = null;
		V_4 = (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005d;
	}// end catch (depth: 1)

IL_005d:
	{
		// if (attrBuffer == null)
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_10 = V_4;
		V_7 = (bool)((((RuntimeObject*)(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_11 = V_7;
		if (!L_11)
		{
			goto IL_00a2;
		}
	}
	{
		// System.GC.Collect();
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_Collect_m083F9AEA26680FD7E28C627D30E43DD672ADF53D(NULL);
		// OvrAvatarLog.LogError(
		//     $"Failed to allocate primitive buffer of type {typeof(T)} with length {totalVerts}"
		//     , primitiveLogScope);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		int32_t L_14 = (int32_t)__this->___totalVerts_1;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralA6931633B5386D569408197501A33540EA923D82, (RuntimeObject*)L_13, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_LogError_mCD729C4FD50E1917078C9A3A77928224E2463397(L_17, _stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// return Array.Empty<T>();
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_18;
		L_18 = ((  BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_18;
		goto IL_0104;
	}

IL_00a2:
	{
		// int packedOffset = 0;
		V_5 = 0;
		// for (var idx = 0; idx < ranges.Length; idx++)
		V_8 = 0;
		goto IL_00db;
	}

IL_00aa:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_19 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_20 = V_8;
		NullCheck(L_19);
		V_9 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		// range.CopyRelevantSlice(in buffer, attrBuffer, attrBuffer.Length, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_21 = V_9;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_22 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_21);
		V_10 = L_22;
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* L_23 = ___buffer0;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_24 = V_4;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_25 = V_4;
		NullCheck(L_25);
		BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86((&V_10), L_23, L_24, ((int32_t)(((RuntimeArray*)L_25)->max_length)), (&V_5), il2cpp_rgctx_method(method->rgctx_data, 3));
		// for (var idx = 0; idx < ranges.Length; idx++)
		int32_t L_26 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00db:
	{
		// for (var idx = 0; idx < ranges.Length; idx++)
		int32_t L_27 = V_8;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_28 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_28);
		V_11 = (bool)((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))? 1 : 0);
		bool L_29 = V_11;
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		// return attrBuffer;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_30 = V_4;
		V_2 = L_30;
		goto IL_0104;
	}

IL_00f2:
	{
		// return buffer.ToArray();
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* L_31 = ___buffer0;
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7 L_32 = (*(NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7*)L_31);
		V_1 = L_32;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_33;
		L_33 = NativeArray_1_ToArray_m441FA1D89C6036CFEBD2B2C4FC75BDC43E92AEC7((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = L_33;
		goto IL_0104;
	}

IL_0104:
	{
		// }
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_34 = V_2;
		return L_34;
	}
}
IL2CPP_EXTERN_C  BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* VertexRepacker_RepackAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m88DDCB3497AE27B4B816006F11F82B8A877F5B71_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* _returnValue;
	_returnValue = VertexRepacker_RepackAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m88DDCB3497AE27B4B816006F11F82B8A877F5B71(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// T[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::RepackAttribute<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* VertexRepacker_RepackAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAE1F8BD1717DC7DE754877D896385E40BCEF3097_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6931633B5386D569408197501A33540EA923D82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	bool V_3 = false;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_9 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (buffer.Length == 0) { return Array.Empty<T>(); }
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_0 = ___buffer0;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_1 = (*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_0);
		V_1 = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_1))->___m_Length_1);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (buffer.Length == 0) { return Array.Empty<T>(); }
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4;
		L_4 = ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_4;
		goto IL_0104;
	}

IL_0022:
	{
		// if (needsRepacking)
		bool L_5 = (bool)__this->___needsRepacking_2;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_00f2;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// attrBuffer = new T[totalVerts];
		int32_t L_7 = (int32_t)__this->___totalVerts_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_7);
		V_4 = L_8;
		goto IL_005d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// OvrAvatarLog.LogException("allocate primitive buffer (new T[len])", e, primitiveLogScope);
		Exception_t* L_9 = V_6;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var)));
		OvrAvatarLog_LogException_m55C65B0C49FD1E2BDAEC255867848707BD74D35A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE1F596541AD0A4778038C3FF0FF43A22F80A274)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8)), (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// attrBuffer = null;
		V_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005d;
	}// end catch (depth: 1)

IL_005d:
	{
		// if (attrBuffer == null)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = V_4;
		V_7 = (bool)((((RuntimeObject*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_11 = V_7;
		if (!L_11)
		{
			goto IL_00a2;
		}
	}
	{
		// System.GC.Collect();
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_Collect_m083F9AEA26680FD7E28C627D30E43DD672ADF53D(NULL);
		// OvrAvatarLog.LogError(
		//     $"Failed to allocate primitive buffer of type {typeof(T)} with length {totalVerts}"
		//     , primitiveLogScope);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		int32_t L_14 = (int32_t)__this->___totalVerts_1;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralA6931633B5386D569408197501A33540EA923D82, (RuntimeObject*)L_13, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_LogError_mCD729C4FD50E1917078C9A3A77928224E2463397(L_17, _stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// return Array.Empty<T>();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18;
		L_18 = ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_18;
		goto IL_0104;
	}

IL_00a2:
	{
		// int packedOffset = 0;
		V_5 = 0;
		// for (var idx = 0; idx < ranges.Length; idx++)
		V_8 = 0;
		goto IL_00db;
	}

IL_00aa:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_19 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_20 = V_8;
		NullCheck(L_19);
		V_9 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		// range.CopyRelevantSlice(in buffer, attrBuffer, attrBuffer.Length, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_21 = V_9;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_22 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_21);
		V_10 = L_22;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_23 = ___buffer0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = V_4;
		NullCheck(L_25);
		BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D((&V_10), L_23, L_24, ((int32_t)(((RuntimeArray*)L_25)->max_length)), (&V_5), il2cpp_rgctx_method(method->rgctx_data, 3));
		// for (var idx = 0; idx < ranges.Length; idx++)
		int32_t L_26 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00db:
	{
		// for (var idx = 0; idx < ranges.Length; idx++)
		int32_t L_27 = V_8;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_28 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_28);
		V_11 = (bool)((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))? 1 : 0);
		bool L_29 = V_11;
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		// return attrBuffer;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = V_4;
		V_2 = L_30;
		goto IL_0104;
	}

IL_00f2:
	{
		// return buffer.ToArray();
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_31 = ___buffer0;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_32 = (*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_31);
		V_1 = L_32;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33;
		L_33 = NativeArray_1_ToArray_m819258262F28D1547F1CD1DDF79FFE7ED75EE869((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = L_33;
		goto IL_0104;
	}

IL_0104:
	{
		// }
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = V_2;
		return L_34;
	}
}
IL2CPP_EXTERN_C  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* VertexRepacker_RepackAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAE1F8BD1717DC7DE754877D896385E40BCEF3097_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* _returnValue;
	_returnValue = VertexRepacker_RepackAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAE1F8BD1717DC7DE754877D896385E40BCEF3097(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___input0, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_0 = ___input0;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_1 = (*(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_3 = ___output1;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_4 = (*(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)L_3);
		int32_t* L_5 = ___outputOffset2;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D, int32_t, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_4, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_8 = ___outputOffset2;
		int32_t* L_9 = ___outputOffset2;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___input0, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E(_thisAdjusted, ___input0, ___output1, ___outputOffset2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<System.Single>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___input0, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_0 = ___input0;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_1 = (*(NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_3 = ___output1;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_4 = (*(NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)L_3);
		int32_t* L_5 = ___outputOffset2;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, int32_t, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_4, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_8 = ___outputOffset2;
		int32_t* L_9 = ___outputOffset2;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___input0, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD(_thisAdjusted, ___input0, ___output1, ___outputOffset2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___input0, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_0 = ___input0;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_1 = (*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_3 = ___output1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_4 = (*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_3);
		int32_t* L_5 = ___outputOffset2;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70, int32_t, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_4, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_8 = ___outputOffset2;
		int32_t* L_9 = ___outputOffset2;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___input0, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391(_thisAdjusted, ___input0, ___output1, ___outputOffset2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_0 = ___input0;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_1 = (*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_3 = ___output1;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_4 = (*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_3);
		int32_t* L_5 = ___outputOffset2;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD, int32_t, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_4, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_8 = ___outputOffset2;
		int32_t* L_9 = ___outputOffset2;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7(_thisAdjusted, ___input0, ___output1, ___outputOffset2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___input0, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* L_0 = ___input0;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_1 = (*(NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* L_3 = ___output1;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_4 = (*(NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8*)L_3);
		int32_t* L_5 = ___outputOffset2;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8, int32_t, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_4, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_8 = ___outputOffset2;
		int32_t* L_9 = ___outputOffset2;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___input0, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F(_thisAdjusted, ___input0, ___output1, ___outputOffset2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.BoneWeight>(Unity.Collections.NativeArray`1<T>&,T[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___input0, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* L_0 = ___input0;
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7 L_1 = (*(NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_3 = ___output1;
		int32_t* L_4 = ___outputOffset3;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7, int32_t, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_7 = ___outputOffset3;
		int32_t* L_8 = ___outputOffset3;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, L_10));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___input0, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86(_thisAdjusted, ___input0, ___output1, ___outputLength2, ___outputOffset3, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&,T[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_0 = ___input0;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_1 = (*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ___output1;
		int32_t* L_4 = ___outputOffset3;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD, int32_t, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_7 = ___outputOffset3;
		int32_t* L_8 = ___outputOffset3;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, L_10));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D(_thisAdjusted, ___input0, ___output1, ___outputLength2, ___outputOffset3, method);
}