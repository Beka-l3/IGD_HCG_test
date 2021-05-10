#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// BoxScript
struct BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraTrail
struct CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DiamondScript
struct DiamondScript_tA705755084679C900443B9E79A16B6FA16756150;
// FinishTrigger
struct FinishTrigger_t309A686C4E38450FDCF4DF41C30C51FA0BBCD567;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// ManageScene
struct ManageScene_tEAC89157E9524F447CC90A60CFBC8FA1116AAEF2;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TurnTriggerScript
struct TurnTriggerScript_t449FD15A6E571A23612A39F14B675C7A54D7F00F;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// BoxScript/<JoinPlayer>d__10
struct U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895;
// BoxScript/<LeavePlayer>d__11
struct U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E3F69CF8A2D442EF1E71434DDC3904F63597822;
IL2CPP_EXTERN_C String_t* _stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral8451A3F5FA80A474A2A728B8F91348260303F4E2;
IL2CPP_EXTERN_C String_t* _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralFDB9E1825A35339B5986A1F3B26BC8DAD1456ED7;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616_mC74C5091D8EB903A258BF955ECD55F9348979440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CJoinPlayerU3Ed__10_System_Collections_IEnumerator_Reset_mF0CC573A5DBCA58E0926AC98BBE96FF2F3780925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLeavePlayerU3Ed__11_System_Collections_IEnumerator_Reset_m975F11D32111E3B990730FB6903F8268A55C7446_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// BoxScript/<JoinPlayer>d__10
struct U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895  : public RuntimeObject
{
public:
	// System.Int32 BoxScript/<JoinPlayer>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BoxScript/<JoinPlayer>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BoxScript BoxScript/<JoinPlayer>d__10::<>4__this
	BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895, ___U3CU3E4__this_2)); }
	inline BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// BoxScript/<LeavePlayer>d__11
struct U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06  : public RuntimeObject
{
public:
	// System.Int32 BoxScript/<LeavePlayer>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BoxScript/<LeavePlayer>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BoxScript BoxScript/<LeavePlayer>d__11::<>4__this
	BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * ___U3CU3E4__this_2;
	// System.Boolean BoxScript/<LeavePlayer>d__11::atFinish
	bool ___atFinish_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06, ___U3CU3E4__this_2)); }
	inline BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_atFinish_3() { return static_cast<int32_t>(offsetof(U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06, ___atFinish_3)); }
	inline bool get_atFinish_3() const { return ___atFinish_3; }
	inline bool* get_address_of_atFinish_3() { return &___atFinish_3; }
	inline void set_atFinish_3(bool value)
	{
		___atFinish_3 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.CollisionFlags
struct CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// BoxScript
struct BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject BoxScript::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// System.Single BoxScript::inLavaLimit
	float ___inLavaLimit_5;
	// System.Boolean BoxScript::withPlayer
	bool ___withPlayer_6;
	// System.Boolean BoxScript::firstBox
	bool ___firstBox_7;
	// System.Boolean BoxScript::inLava
	bool ___inLava_8;
	// System.Single BoxScript::inLavaTimer
	float ___inLavaTimer_9;
	// System.Single BoxScript::joinPlayerTimer
	float ___joinPlayerTimer_10;
	// System.Single BoxScript::leavePlayerTimer
	float ___leavePlayerTimer_11;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_inLavaLimit_5() { return static_cast<int32_t>(offsetof(BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467, ___inLavaLimit_5)); }
	inline float get_inLavaLimit_5() const { return ___inLavaLimit_5; }
	inline float* get_address_of_inLavaLimit_5() { return &___inLavaLimit_5; }
	inline void set_inLavaLimit_5(float value)
	{
		___inLavaLimit_5 = value;
	}

	inline static int32_t get_offset_of_withPlayer_6() { return static_cast<int32_t>(offsetof(BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467, ___withPlayer_6)); }
	inline bool get_withPlayer_6() const { return ___withPlayer_6; }
	inline bool* get_address_of_withPlayer_6() { return &___withPlayer_6; }
	inline void set_withPlayer_6(bool value)
	{
		___withPlayer_6 = value;
	}

	inline static int32_t get_offset_of_firstBox_7() { return static_cast<int32_t>(offsetof(BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467, ___firstBox_7)); }
	inline bool get_firstBox_7() const { return ___firstBox_7; }
	inline bool* get_address_of_firstBox_7() { return &___firstBox_7; }
	inline void set_firstBox_7(bool value)
	{
		___firstBox_7 = value;
	}

	inline static int32_t get_offset_of_inLava_8() { return static_cast<int32_t>(offsetof(BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467, ___inLava_8)); }
	inline bool get_inLava_8() const { return ___inLava_8; }
	inline bool* get_address_of_inLava_8() { return &___inLava_8; }
	inline void set_inLava_8(bool value)
	{
		___inLava_8 = value;
	}

	inline static int32_t get_offset_of_inLavaTimer_9() { return static_cast<int32_t>(offsetof(BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467, ___inLavaTimer_9)); }
	inline float get_inLavaTimer_9() const { return ___inLavaTimer_9; }
	inline float* get_address_of_inLavaTimer_9() { return &___inLavaTimer_9; }
	inline void set_inLavaTimer_9(float value)
	{
		___inLavaTimer_9 = value;
	}

	inline static int32_t get_offset_of_joinPlayerTimer_10() { return static_cast<int32_t>(offsetof(BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467, ___joinPlayerTimer_10)); }
	inline float get_joinPlayerTimer_10() const { return ___joinPlayerTimer_10; }
	inline float* get_address_of_joinPlayerTimer_10() { return &___joinPlayerTimer_10; }
	inline void set_joinPlayerTimer_10(float value)
	{
		___joinPlayerTimer_10 = value;
	}

	inline static int32_t get_offset_of_leavePlayerTimer_11() { return static_cast<int32_t>(offsetof(BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467, ___leavePlayerTimer_11)); }
	inline float get_leavePlayerTimer_11() const { return ___leavePlayerTimer_11; }
	inline float* get_address_of_leavePlayerTimer_11() { return &___leavePlayerTimer_11; }
	inline void set_leavePlayerTimer_11(float value)
	{
		___leavePlayerTimer_11 = value;
	}
};


// CameraTrail
struct CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform CameraTrail::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_4;
	// System.Single CameraTrail::heightOffset
	float ___heightOffset_5;
	// System.Single CameraTrail::rightOffset
	float ___rightOffset_6;
	// System.Single CameraTrail::distanceOffset
	float ___distanceOffset_7;
	// UnityEngine.GameObject CameraTrail::cameraRotator
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cameraRotator_8;
	// System.Single CameraTrail::finishOffset
	float ___finishOffset_9;
	// UnityEngine.Vector3 CameraTrail::cameraNewPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cameraNewPosition_10;
	// UnityEngine.Vector3 CameraTrail::lookAtPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lookAtPosition_11;
	// System.Boolean CameraTrail::isRotateCamera
	bool ___isRotateCamera_12;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616, ___target_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_4() const { return ___target_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_heightOffset_5() { return static_cast<int32_t>(offsetof(CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616, ___heightOffset_5)); }
	inline float get_heightOffset_5() const { return ___heightOffset_5; }
	inline float* get_address_of_heightOffset_5() { return &___heightOffset_5; }
	inline void set_heightOffset_5(float value)
	{
		___heightOffset_5 = value;
	}

	inline static int32_t get_offset_of_rightOffset_6() { return static_cast<int32_t>(offsetof(CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616, ___rightOffset_6)); }
	inline float get_rightOffset_6() const { return ___rightOffset_6; }
	inline float* get_address_of_rightOffset_6() { return &___rightOffset_6; }
	inline void set_rightOffset_6(float value)
	{
		___rightOffset_6 = value;
	}

	inline static int32_t get_offset_of_distanceOffset_7() { return static_cast<int32_t>(offsetof(CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616, ___distanceOffset_7)); }
	inline float get_distanceOffset_7() const { return ___distanceOffset_7; }
	inline float* get_address_of_distanceOffset_7() { return &___distanceOffset_7; }
	inline void set_distanceOffset_7(float value)
	{
		___distanceOffset_7 = value;
	}

	inline static int32_t get_offset_of_cameraRotator_8() { return static_cast<int32_t>(offsetof(CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616, ___cameraRotator_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cameraRotator_8() const { return ___cameraRotator_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cameraRotator_8() { return &___cameraRotator_8; }
	inline void set_cameraRotator_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cameraRotator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraRotator_8), (void*)value);
	}

	inline static int32_t get_offset_of_finishOffset_9() { return static_cast<int32_t>(offsetof(CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616, ___finishOffset_9)); }
	inline float get_finishOffset_9() const { return ___finishOffset_9; }
	inline float* get_address_of_finishOffset_9() { return &___finishOffset_9; }
	inline void set_finishOffset_9(float value)
	{
		___finishOffset_9 = value;
	}

	inline static int32_t get_offset_of_cameraNewPosition_10() { return static_cast<int32_t>(offsetof(CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616, ___cameraNewPosition_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_cameraNewPosition_10() const { return ___cameraNewPosition_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_cameraNewPosition_10() { return &___cameraNewPosition_10; }
	inline void set_cameraNewPosition_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___cameraNewPosition_10 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_11() { return static_cast<int32_t>(offsetof(CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616, ___lookAtPosition_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lookAtPosition_11() const { return ___lookAtPosition_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lookAtPosition_11() { return &___lookAtPosition_11; }
	inline void set_lookAtPosition_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lookAtPosition_11 = value;
	}

	inline static int32_t get_offset_of_isRotateCamera_12() { return static_cast<int32_t>(offsetof(CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616, ___isRotateCamera_12)); }
	inline bool get_isRotateCamera_12() const { return ___isRotateCamera_12; }
	inline bool* get_address_of_isRotateCamera_12() { return &___isRotateCamera_12; }
	inline void set_isRotateCamera_12(bool value)
	{
		___isRotateCamera_12 = value;
	}
};


// DiamondScript
struct DiamondScript_tA705755084679C900443B9E79A16B6FA16756150  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text DiamondScript::diamondTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___diamondTxt_4;
	// System.Int32 DiamondScript::yFacrot
	int32_t ___yFacrot_5;
	// System.Single DiamondScript::elapsed
	float ___elapsed_6;
	// System.Single DiamondScript::rnd
	float ___rnd_7;
	// System.Boolean DiamondScript::collected
	bool ___collected_8;

public:
	inline static int32_t get_offset_of_diamondTxt_4() { return static_cast<int32_t>(offsetof(DiamondScript_tA705755084679C900443B9E79A16B6FA16756150, ___diamondTxt_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_diamondTxt_4() const { return ___diamondTxt_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_diamondTxt_4() { return &___diamondTxt_4; }
	inline void set_diamondTxt_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___diamondTxt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diamondTxt_4), (void*)value);
	}

	inline static int32_t get_offset_of_yFacrot_5() { return static_cast<int32_t>(offsetof(DiamondScript_tA705755084679C900443B9E79A16B6FA16756150, ___yFacrot_5)); }
	inline int32_t get_yFacrot_5() const { return ___yFacrot_5; }
	inline int32_t* get_address_of_yFacrot_5() { return &___yFacrot_5; }
	inline void set_yFacrot_5(int32_t value)
	{
		___yFacrot_5 = value;
	}

	inline static int32_t get_offset_of_elapsed_6() { return static_cast<int32_t>(offsetof(DiamondScript_tA705755084679C900443B9E79A16B6FA16756150, ___elapsed_6)); }
	inline float get_elapsed_6() const { return ___elapsed_6; }
	inline float* get_address_of_elapsed_6() { return &___elapsed_6; }
	inline void set_elapsed_6(float value)
	{
		___elapsed_6 = value;
	}

	inline static int32_t get_offset_of_rnd_7() { return static_cast<int32_t>(offsetof(DiamondScript_tA705755084679C900443B9E79A16B6FA16756150, ___rnd_7)); }
	inline float get_rnd_7() const { return ___rnd_7; }
	inline float* get_address_of_rnd_7() { return &___rnd_7; }
	inline void set_rnd_7(float value)
	{
		___rnd_7 = value;
	}

	inline static int32_t get_offset_of_collected_8() { return static_cast<int32_t>(offsetof(DiamondScript_tA705755084679C900443B9E79A16B6FA16756150, ___collected_8)); }
	inline bool get_collected_8() const { return ___collected_8; }
	inline bool* get_address_of_collected_8() { return &___collected_8; }
	inline void set_collected_8(bool value)
	{
		___collected_8 = value;
	}
};


// FinishTrigger
struct FinishTrigger_t309A686C4E38450FDCF4DF41C30C51FA0BBCD567  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ManageScene
struct ManageScene_tEAC89157E9524F447CC90A60CFBC8FA1116AAEF2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String ManageScene::sceneName
	String_t* ___sceneName_4;

public:
	inline static int32_t get_offset_of_sceneName_4() { return static_cast<int32_t>(offsetof(ManageScene_tEAC89157E9524F447CC90A60CFBC8FA1116AAEF2, ___sceneName_4)); }
	inline String_t* get_sceneName_4() const { return ___sceneName_4; }
	inline String_t** get_address_of_sceneName_4() { return &___sceneName_4; }
	inline void set_sceneName_4(String_t* value)
	{
		___sceneName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_4), (void*)value);
	}
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PlayerMovement::speed
	float ___speed_4;
	// UnityEngine.GameObject PlayerMovement::restartBtn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___restartBtn_5;
	// UnityEngine.GameObject PlayerMovement::restartBtnIcon
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___restartBtnIcon_6;
	// UnityEngine.GameObject PlayerMovement::hover
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hover_7;
	// UnityEngine.CharacterController PlayerMovement::myCharacterController
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ___myCharacterController_8;
	// UnityEngine.Vector3 PlayerMovement::turningDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___turningDirection_9;
	// UnityEngine.Vector2 PlayerMovement::firstTouch
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___firstTouch_10;
	// UnityEngine.Vector2 PlayerMovement::touchData
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___touchData_11;
	// System.Boolean PlayerMovement::isFinish
	bool ___isFinish_12;
	// System.Boolean PlayerMovement::lost
	bool ___lost_13;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_restartBtn_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___restartBtn_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_restartBtn_5() const { return ___restartBtn_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_restartBtn_5() { return &___restartBtn_5; }
	inline void set_restartBtn_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___restartBtn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___restartBtn_5), (void*)value);
	}

	inline static int32_t get_offset_of_restartBtnIcon_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___restartBtnIcon_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_restartBtnIcon_6() const { return ___restartBtnIcon_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_restartBtnIcon_6() { return &___restartBtnIcon_6; }
	inline void set_restartBtnIcon_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___restartBtnIcon_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___restartBtnIcon_6), (void*)value);
	}

	inline static int32_t get_offset_of_hover_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___hover_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hover_7() const { return ___hover_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hover_7() { return &___hover_7; }
	inline void set_hover_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hover_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hover_7), (void*)value);
	}

	inline static int32_t get_offset_of_myCharacterController_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___myCharacterController_8)); }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * get_myCharacterController_8() const { return ___myCharacterController_8; }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E ** get_address_of_myCharacterController_8() { return &___myCharacterController_8; }
	inline void set_myCharacterController_8(CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * value)
	{
		___myCharacterController_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myCharacterController_8), (void*)value);
	}

	inline static int32_t get_offset_of_turningDirection_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___turningDirection_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_turningDirection_9() const { return ___turningDirection_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_turningDirection_9() { return &___turningDirection_9; }
	inline void set_turningDirection_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___turningDirection_9 = value;
	}

	inline static int32_t get_offset_of_firstTouch_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___firstTouch_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_firstTouch_10() const { return ___firstTouch_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_firstTouch_10() { return &___firstTouch_10; }
	inline void set_firstTouch_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___firstTouch_10 = value;
	}

	inline static int32_t get_offset_of_touchData_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___touchData_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_touchData_11() const { return ___touchData_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_touchData_11() { return &___touchData_11; }
	inline void set_touchData_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___touchData_11 = value;
	}

	inline static int32_t get_offset_of_isFinish_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___isFinish_12)); }
	inline bool get_isFinish_12() const { return ___isFinish_12; }
	inline bool* get_address_of_isFinish_12() { return &___isFinish_12; }
	inline void set_isFinish_12(bool value)
	{
		___isFinish_12 = value;
	}

	inline static int32_t get_offset_of_lost_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___lost_13)); }
	inline bool get_lost_13() const { return ___lost_13; }
	inline bool* get_address_of_lost_13() { return &___lost_13; }
	inline void set_lost_13(bool value)
	{
		___lost_13 = value;
	}
};


// TurnTriggerScript
struct TurnTriggerScript_t449FD15A6E571A23612A39F14B675C7A54D7F00F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerMovement>()
inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void PlayerMovement::FallOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_FallOne_m4C956EF2D137A5901C1119F917E51BA2AFC49DFE (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Void PlayerMovement::Lost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Lost_m3961B039E307C27FAD34023D0D18887DB26ED1B9 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void BoxScript/<JoinPlayer>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinPlayerU3Ed__10__ctor_m2507A22FF5DB430BDA5329CADAA17D581F9531EF (U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void BoxScript/<LeavePlayer>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeavePlayerU3Ed__11__ctor_mA8245DCD37668530638C6999D8EF3AC35905A8E4 (U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator BoxScript::JoinPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxScript_JoinPlayer_mE785DA2165C30965A43F719F2E38252E0F464D8B (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mEDFE3DFA29D42E9DEB9D91A3D25BACC4470305ED (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator BoxScript::LeavePlayer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxScript_LeavePlayer_m306B7C6230B5CEA94FEE78A2D38DF3EC43CB9A92 (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, bool ___atFinish0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<CameraTrail>()
inline CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616 * Component_GetComponent_TisCameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616_mC74C5091D8EB903A258BF955ECD55F9348979440 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void CameraTrail::IncreaseFinishOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTrail_IncreaseFinishOffset_mBB2CEA4E7946D03266156503771F1F8F4FCBCF26 (CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlayerMovement>()
inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void PlayerMovement::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Finish_m8016E402F5B8DB5DB5CA83E4B7328976B0DB748D (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60 (CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___motion0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void PlayerMovement::TurnTheObject(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_TurnTheObject_m18BFEC6D2B4E8537F4FC117384466D2935F0C6CD (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___turningDir0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void CameraTrail::RotateCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTrail_RotateCamera_mDADE5399E9F34A17C09396A82AF6CA18A84967FD (CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void PlayerMovement::TurnTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_TurnTrigger_m592016D43FF5D808900F03793A8B9DE204DDCBA5 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, int32_t ___turnFactor0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void PlayerMovement::RiseOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_RiseOne_mC4BFF32133CA531A0E49899EDB28823F0053515E (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void PlayerMovement::FallABit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_FallABit_m65BB96C1FA1E2FC37FBFECF26BB0C3AE69A3B5AE (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoxScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxScript_Start_mFF554E2B17B92025EB4786BE56DC13EDFDCB4A23 (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDB9E1825A35339B5986A1F3B26BC8DAD1456ED7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gameObject.name == "FirstBox"){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralFDB9E1825A35339B5986A1F3B26BC8DAD1456ED7, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// withPlayer = true;
		__this->set_withPlayer_6((bool)1);
		// firstBox = true;
		__this->set_firstBox_7((bool)1);
		// }
		goto IL_0035;
	}

IL_0027:
	{
		// withPlayer = false;
		__this->set_withPlayer_6((bool)0);
		// firstBox = false;
		__this->set_firstBox_7((bool)0);
	}

IL_0035:
	{
		// inLava = false;
		__this->set_inLava_8((bool)0);
		// inLavaTimer = 0;
		__this->set_inLavaTimer_9((0.0f));
		// }
		return;
	}
}
// System.Void BoxScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxScript_Update_m2A5DA3390AD7AB2BF12E9D12E2A6BB0A4EA708BC (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(inLava){
		bool L_0 = __this->get_inLava_8();
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		// inLavaTimer += Time.deltaTime;
		float L_1 = __this->get_inLavaTimer_9();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_inLavaTimer_9(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		// if(inLavaTimer > inLavaLimit){
		float L_3 = __this->get_inLavaTimer_9();
		float L_4 = __this->get_inLavaLimit_5();
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_005b;
		}
	}
	{
		// player.GetComponent<PlayerMovement>().FallOne();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_player_4();
		NullCheck(L_5);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_6;
		L_6 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_5, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		NullCheck(L_6);
		PlayerMovement_FallOne_m4C956EF2D137A5901C1119F917E51BA2AFC49DFE(L_6, /*hidden argument*/NULL);
		// if (firstBox) player.GetComponent<PlayerMovement>().Lost();
		bool L_7 = __this->get_firstBox_7();
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// if (firstBox) player.GetComponent<PlayerMovement>().Lost();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_player_4();
		NullCheck(L_8);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_9;
		L_9 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_8, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		NullCheck(L_9);
		PlayerMovement_Lost_m3961B039E307C27FAD34023D0D18887DB26ED1B9(L_9, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator BoxScript::JoinPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxScript_JoinPlayer_mE785DA2165C30965A43F719F2E38252E0F464D8B (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895 * L_0 = (U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895 *)il2cpp_codegen_object_new(U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895_il2cpp_TypeInfo_var);
		U3CJoinPlayerU3Ed__10__ctor_m2507A22FF5DB430BDA5329CADAA17D581F9531EF(L_0, 0, /*hidden argument*/NULL);
		U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator BoxScript::LeavePlayer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxScript_LeavePlayer_m306B7C6230B5CEA94FEE78A2D38DF3EC43CB9A92 (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, bool ___atFinish0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06 * L_0 = (U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06 *)il2cpp_codegen_object_new(U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06_il2cpp_TypeInfo_var);
		U3CLeavePlayerU3Ed__11__ctor_mA8245DCD37668530638C6999D8EF3AC35905A8E4(L_0, 0, /*hidden argument*/NULL);
		U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06 * L_2 = L_1;
		bool L_3 = ___atFinish0;
		NullCheck(L_2);
		L_2->set_atFinish_3(L_3);
		return L_2;
	}
}
// System.Void BoxScript::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxScript_OnTriggerEnter_m85A9EBB8660E9F30C67B59792A45875707EB4FB1 (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616_mC74C5091D8EB903A258BF955ECD55F9348979440_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8451A3F5FA80A474A2A728B8F91348260303F4E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Box"){
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// if(!withPlayer){
		bool L_3 = __this->get_withPlayer_6();
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		// withPlayer = true;
		__this->set_withPlayer_6((bool)1);
		// StartCoroutine(JoinPlayer());
		RuntimeObject* L_4;
		L_4 = BoxScript_JoinPlayer_mE785DA2165C30965A43F719F2E38252E0F464D8B(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002f:
	{
		// other.isTrigger = true;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_6 = ___other0;
		NullCheck(L_6);
		Collider_set_isTrigger_mEDFE3DFA29D42E9DEB9D91A3D25BACC4470305ED(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0037:
	{
		// else if(other.tag == "Wall" || other.tag == "FinishStep"){
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_7 = ___other0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_10 = ___other0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral8451A3F5FA80A474A2A728B8F91348260303F4E2, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00a9;
		}
	}

IL_005b:
	{
		// if(withPlayer){
		bool L_13 = __this->get_withPlayer_6();
		if (!L_13)
		{
			goto IL_00c2;
		}
	}
	{
		// withPlayer = false;
		__this->set_withPlayer_6((bool)0);
		// if(other.tag == "Wall") StartCoroutine(LeavePlayer(false));
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_14 = ___other0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_15, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		// if(other.tag == "Wall") StartCoroutine(LeavePlayer(false));
		RuntimeObject* L_17;
		L_17 = BoxScript_LeavePlayer_m306B7C6230B5CEA94FEE78A2D38DF3EC43CB9A92(__this, (bool)0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_18;
		L_18 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_17, /*hidden argument*/NULL);
		return;
	}

IL_008b:
	{
		// StartCoroutine(LeavePlayer(true));
		RuntimeObject* L_19;
		L_19 = BoxScript_LeavePlayer_m306B7C6230B5CEA94FEE78A2D38DF3EC43CB9A92(__this, (bool)1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_20;
		L_20 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_19, /*hidden argument*/NULL);
		// Camera.main.GetComponent<CameraTrail>().IncreaseFinishOffset();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21;
		L_21 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_21);
		CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616 * L_22;
		L_22 = Component_GetComponent_TisCameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616_mC74C5091D8EB903A258BF955ECD55F9348979440(L_21, /*hidden argument*/Component_GetComponent_TisCameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616_mC74C5091D8EB903A258BF955ECD55F9348979440_RuntimeMethod_var);
		NullCheck(L_22);
		CameraTrail_IncreaseFinishOffset_mBB2CEA4E7946D03266156503771F1F8F4FCBCF26(L_22, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a9:
	{
		// else if(other.tag == "Lava"){
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_23 = ___other0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_23, /*hidden argument*/NULL);
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00c2;
		}
	}
	{
		// inLava = true;
		__this->set_inLava_8((bool)1);
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.Void BoxScript::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxScript_OnTriggerExit_mE8D326E4A6220C2D8D7A6B37C9FDE0ECECC47BA5 (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Lava"){
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// inLava = false;
		__this->set_inLava_8((bool)0);
		// inLavaTimer = 0f;
		__this->set_inLavaTimer_9((0.0f));
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void BoxScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxScript__ctor_m5F95661E10422938C2CF6592B2C0A56E24B53B25 (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, const RuntimeMethod* method)
{
	{
		// public float inLavaLimit = 0.25f;
		__this->set_inLavaLimit_5((0.25f));
		// private float joinPlayerTimer = 0.1f;
		__this->set_joinPlayerTimer_10((0.100000001f));
		// private float leavePlayerTimer = 0.3f;
		__this->set_leavePlayerTimer_11((0.300000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraTrail::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTrail_Start_m93F7893BA6819BF2A9338F61E85906D9C3ED48F9 (CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616 * __this, const RuntimeMethod* method)
{
	{
		// finishOffset = 0f;
		__this->set_finishOffset_9((0.0f));
		// isRotateCamera = false;
		__this->set_isRotateCamera_12((bool)0);
		// }
		return;
	}
}
// System.Void CameraTrail::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTrail_Update_m60E4B65AD428AD2F078FA86220368DA0F7518382 (CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616 * __this, const RuntimeMethod* method)
{
	{
		// if(isRotateCamera){
		bool L_0 = __this->get_isRotateCamera_12();
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		// cameraRotator.transform.Rotate(0f, 50 * Time.deltaTime, 0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_cameraRotator_8();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_2, (0.0f), ((float)il2cpp_codegen_multiply((float)(50.0f), (float)L_3)), (0.0f), /*hidden argument*/NULL);
		// lookAtPosition = target.transform.position + new Vector3(0f, 5f, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_target_4();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (0.0f), (5.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_7, /*hidden argument*/NULL);
		__this->set_lookAtPosition_11(L_8);
		// }
		goto IL_018f;
	}

IL_0061:
	{
		// cameraNewPosition = target.position - target.forward * distanceOffset + target.right * rightOffset + target.up * heightOffset;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_target_4();
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_target_4();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_11, /*hidden argument*/NULL);
		float L_13 = __this->get_distanceOffset_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_10, L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = __this->get_target_4();
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_rightOffset_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = __this->get_target_4();
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_21, /*hidden argument*/NULL);
		float L_23 = __this->get_heightOffset_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_20, L_24, /*hidden argument*/NULL);
		__this->set_cameraNewPosition_10(L_25);
		// cameraNewPosition -= new Vector3(0f, target.position.y - finishOffset, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = __this->get_cameraNewPosition_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_target_4();
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_y_3();
		float L_30 = __this->get_finishOffset_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_31), (0.0f), ((float)il2cpp_codegen_subtract((float)L_29, (float)L_30)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_26, L_31, /*hidden argument*/NULL);
		__this->set_cameraNewPosition_10(L_32);
		// transform.position = Vector3.Lerp(transform.position, cameraNewPosition, Time.deltaTime*10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = __this->get_cameraNewPosition_10();
		float L_37;
		L_37 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_35, L_36, ((float)il2cpp_codegen_multiply((float)L_37, (float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_33, L_38, /*hidden argument*/NULL);
		// lookAtPosition = gameObject.transform.position + target.transform.forward - target.transform.right/10 - target.transform.up/10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = __this->get_target_4();
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_41, L_44, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46 = __this->get_target_4();
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_48, (10.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_45, L_49, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51 = __this->get_target_4();
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_52, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_53, (10.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_50, L_54, /*hidden argument*/NULL);
		__this->set_lookAtPosition_11(L_55);
	}

IL_018f:
	{
		// transform.LookAt(lookAtPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = __this->get_lookAtPosition_11();
		NullCheck(L_56);
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_56, L_57, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraTrail::IncreaseFinishOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTrail_IncreaseFinishOffset_mBB2CEA4E7946D03266156503771F1F8F4FCBCF26 (CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616 * __this, const RuntimeMethod* method)
{
	{
		// finishOffset += 0.5f;
		float L_0 = __this->get_finishOffset_9();
		__this->set_finishOffset_9(((float)il2cpp_codegen_add((float)L_0, (float)(0.5f))));
		// }
		return;
	}
}
// System.Void CameraTrail::RotateCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTrail_RotateCamera_mDADE5399E9F34A17C09396A82AF6CA18A84967FD (CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616 * __this, const RuntimeMethod* method)
{
	{
		// transform.SetParent(cameraRotator.transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_cameraRotator_8();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_0, L_2, /*hidden argument*/NULL);
		// isRotateCamera = true;
		__this->set_isRotateCamera_12((bool)1);
		// }
		return;
	}
}
// System.Void CameraTrail::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTrail__ctor_mA35787E733621D895F35C1C748A26800C86D7912 (CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616 * __this, const RuntimeMethod* method)
{
	{
		// public float heightOffset = 10.0f;
		__this->set_heightOffset_5((10.0f));
		// public float rightOffset = 3.0f;
		__this->set_rightOffset_6((3.0f));
		// public float distanceOffset = 15f;
		__this->set_distanceOffset_7((15.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DiamondScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiamondScript_Start_m351B29ADA1B8F5CB46B7467C7A0CCE1F9FA802EB (DiamondScript_tA705755084679C900443B9E79A16B6FA16756150 * __this, const RuntimeMethod* method)
{
	{
		// yFacrot = -1;
		__this->set_yFacrot_5((-1));
		// rnd = (Random.value + 5) * 10;
		float L_0;
		L_0 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		__this->set_rnd_7(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_0, (float)(5.0f))), (float)(10.0f))));
		// collected = false;
		__this->set_collected_8((bool)0);
		// }
		return;
	}
}
// System.Void DiamondScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiamondScript_Update_mAD331FECBE3515AB1CFAAC4E9BD86C975F2D22F9 (DiamondScript_tA705755084679C900443B9E79A16B6FA16756150 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(Time.deltaTime * rnd, Time.deltaTime * rnd, 0, Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_2 = __this->get_rnd_7();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_4 = __this->get_rnd_7();
		NullCheck(L_0);
		Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357(L_0, ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (0.0f), 1, /*hidden argument*/NULL);
		// elapsed += Time.deltaTime;
		float L_5 = __this->get_elapsed_6();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_elapsed_6(((float)il2cpp_codegen_add((float)L_5, (float)L_6)));
		// if (elapsed >= 1f) {
		float L_7 = __this->get_elapsed_6();
		if ((!(((float)L_7) >= ((float)(1.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		// elapsed = elapsed % 1f;
		float L_8 = __this->get_elapsed_6();
		__this->set_elapsed_6((fmodf(L_8, (1.0f))));
		// if(yFacrot == -1) yFacrot = 1;
		int32_t L_9 = __this->get_yFacrot_5();
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}
	{
		// if(yFacrot == -1) yFacrot = 1;
		__this->set_yFacrot_5(1);
		goto IL_0073;
	}

IL_006c:
	{
		// else yFacrot = -1;
		__this->set_yFacrot_5((-1));
	}

IL_0073:
	{
		// transform.position += new Vector3(0f, yFacrot * Time.deltaTime / 2, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_yFacrot_5();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (0.0f), ((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_13)), (float)L_14))/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DiamondScript::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiamondScript_OnTriggerEnter_mDB9ADDEF6C8D362FFF845742230568B0D289453D (DiamondScript_tA705755084679C900443B9E79A16B6FA16756150 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(collected) return;
		bool L_0 = __this->get_collected_8();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(collected) return;
		return;
	}

IL_0009:
	{
		// collected = true;
		__this->set_collected_8((bool)1);
		// int.TryParse(diamondTxt.text, out amount);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_diamondTxt_4();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		bool L_3;
		L_3 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// amount++;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		// diamondTxt.text = amount.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_diamondTxt_4();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DiamondScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiamondScript__ctor_mC00ECAB2DC6D59C78EDF9D6F8C5EA1ADFBFE8C90 (DiamondScript_tA705755084679C900443B9E79A16B6FA16756150 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FinishTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishTrigger_OnTriggerEnter_mC8A44BC8453AF3E92A780D5C3B7F85DCB59FBE17 (FinishTrigger_t309A686C4E38450FDCF4DF41C30C51FA0BBCD567 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Player"){
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// other.GetComponent<PlayerMovement>().Finish();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_3 = ___other0;
		NullCheck(L_3);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_4;
		L_4 = Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C(L_3, /*hidden argument*/Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var);
		NullCheck(L_4);
		PlayerMovement_Finish_m8016E402F5B8DB5DB5CA83E4B7328976B0DB748D(L_4, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void FinishTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishTrigger__ctor_mB7B82DF3F4E23EF2FCF1F80B045B781F335A9461 (FinishTrigger_t309A686C4E38450FDCF4DF41C30C51FA0BBCD567 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ManageScene::RestartScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManageScene_RestartScene_m166135FE7A5BBDD7331EBB5FD3BDFF1C44569537 (ManageScene_tEAC89157E9524F447CC90A60CFBC8FA1116AAEF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = __this->get_sceneName_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ManageScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManageScene__ctor_m0E5F6A40D7486E71FCF0D9373A06E0151118714A (ManageScene_tEAC89157E9524F447CC90A60CFBC8FA1116AAEF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string sceneName = "SampleScene";
		__this->set_sceneName_4(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mB585552228B1908E44D3A69496598FB485F608B6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myCharacterController = GetComponent<CharacterController>();
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_0;
		L_0 = Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var);
		__this->set_myCharacterController_8(L_0);
		// turningDirection = transform.forward;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_1, /*hidden argument*/NULL);
		__this->set_turningDirection_9(L_2);
		// isFinish = false;
		__this->set_isFinish_12((bool)0);
		// lost = false;
		__this->set_lost_13((bool)0);
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if(isFinish || lost) return;
		bool L_0 = __this->get_isFinish_12();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_lost_13();
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if(isFinish || lost) return;
		return;
	}

IL_0011:
	{
		// myCharacterController.Move(transform.forward * speed * Time.deltaTime);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_2 = __this->get_myCharacterController_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_9;
		L_9 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_2, L_8, /*hidden argument*/NULL);
		// if(transform.forward != turningDirection)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_turningDirection_9();
		bool L_13;
		L_13 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		// TurnTheObject(turningDirection);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_turningDirection_9();
		PlayerMovement_TurnTheObject_m18BFEC6D2B4E8537F4FC117384466D2935F0C6CD(__this, L_14, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// if(Input.GetMouseButtonDown(0)){
		bool L_15;
		L_15 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007a;
		}
	}
	{
		// firstTouch = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_16, /*hidden argument*/NULL);
		__this->set_firstTouch_10(L_17);
		// }
		return;
	}

IL_007a:
	{
		// else if(Input.GetMouseButton(0)){
		bool L_18;
		L_18 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e1;
		}
	}
	{
		// touchData = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_19, /*hidden argument*/NULL);
		__this->set_touchData_11(L_20);
		// float difference = (touchData.x - firstTouch.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_21 = __this->get_address_of_touchData_11();
		float L_22 = L_21->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_23 = __this->get_address_of_firstTouch_10();
		float L_24 = L_23->get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_22, (float)L_24));
		// myCharacterController.Move(transform.right * difference * Time.deltaTime);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_25 = __this->get_myCharacterController_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_26, /*hidden argument*/NULL);
		float L_28 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, L_28, /*hidden argument*/NULL);
		float L_30;
		L_30 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_32;
		L_32 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_25, L_31, /*hidden argument*/NULL);
		// firstTouch = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_33, /*hidden argument*/NULL);
		__this->set_firstTouch_10(L_34);
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::TurnTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_TurnTrigger_m592016D43FF5D808900F03793A8B9DE204DDCBA5 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, int32_t ___turnFactor0, const RuntimeMethod* method)
{
	{
		// turningDirection = turnFactor * transform.right;
		int32_t L_0 = ___turnFactor0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(((float)((float)L_0)), L_2, /*hidden argument*/NULL);
		__this->set_turningDirection_9(L_3);
		// }
		return;
	}
}
// System.Void PlayerMovement::RiseOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_RiseOne_mC4BFF32133CA531A0E49899EDB28823F0053515E (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// myCharacterController.Move(transform.up * 1.05f);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_0 = __this->get_myCharacterController_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, (1.04999995f), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::FallOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_FallOne_m4C956EF2D137A5901C1119F917E51BA2AFC49DFE (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// myCharacterController.Move( -transform.up * 1.05f);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_0 = __this->get_myCharacterController_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, (1.04999995f), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_5;
		L_5 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::FallABit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_FallABit_m65BB96C1FA1E2FC37FBFECF26BB0C3AE69A3B5AE (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// myCharacterController.Move( -transform.up * 0.05f);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_0 = __this->get_myCharacterController_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, (0.0500000007f), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_5;
		L_5 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Finish_m8016E402F5B8DB5DB5CA83E4B7328976B0DB748D (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616_mC74C5091D8EB903A258BF955ECD55F9348979440_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isFinish = true;
		__this->set_isFinish_12((bool)1);
		// hover.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_hover_7();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// restartBtn.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_restartBtn_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// restartBtnIcon.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_restartBtnIcon_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// Camera.main.GetComponent<CameraTrail>().RotateCamera();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_3);
		CameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616 * L_4;
		L_4 = Component_GetComponent_TisCameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616_mC74C5091D8EB903A258BF955ECD55F9348979440(L_3, /*hidden argument*/Component_GetComponent_TisCameraTrail_tA8CCFD708002568F9247E0EEA126F3BEDE732616_mC74C5091D8EB903A258BF955ECD55F9348979440_RuntimeMethod_var);
		NullCheck(L_4);
		CameraTrail_RotateCamera_mDADE5399E9F34A17C09396A82AF6CA18A84967FD(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Lost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Lost_m3961B039E307C27FAD34023D0D18887DB26ED1B9 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// lost = true;
		__this->set_lost_13((bool)1);
		// hover.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_hover_7();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// restartBtn.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_restartBtn_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// restartBtnIcon.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_restartBtnIcon_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::TurnTheObject(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_TurnTheObject_m18BFEC6D2B4E8537F4FC117384466D2935F0C6CD (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___turningDir0, const RuntimeMethod* method)
{
	{
		// transform.forward += turningDir * Time.deltaTime * speed / 2.5f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___turningDir0;
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_7, (2.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_8, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D(L_1, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 1f;
		__this->set_speed_4((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TurnTriggerScript::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnTriggerScript_OnTriggerEnter_m69EFBCEB6AE8110F540C0B13CDB60E24E707BEEF (TurnTriggerScript_t449FD15A6E571A23612A39F14B675C7A54D7F00F * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3F69CF8A2D442EF1E71434DDC3904F63597822);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int TurnFactor = 1;
		V_0 = 1;
		// if(gameObject.tag == "TurnLeft")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral1E3F69CF8A2D442EF1E71434DDC3904F63597822, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// TurnFactor = -1;
		V_0 = (-1);
	}

IL_001b:
	{
		// if(other.tag == "Player")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_3 = ___other0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// other.GetComponent<PlayerMovement>().TurnTrigger(TurnFactor);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_6 = ___other0;
		NullCheck(L_6);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_7;
		L_7 = Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C(L_6, /*hidden argument*/Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		PlayerMovement_TurnTrigger_m592016D43FF5D808900F03793A8B9DE204DDCBA5(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void TurnTriggerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnTriggerScript__ctor_m7AFD0B0616911C4CD0D639D59F9A630D41D42AEA (TurnTriggerScript_t449FD15A6E571A23612A39F14B675C7A54D7F00F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoxScript/<JoinPlayer>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinPlayerU3Ed__10__ctor_m2507A22FF5DB430BDA5329CADAA17D581F9531EF (U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BoxScript/<JoinPlayer>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinPlayerU3Ed__10_System_IDisposable_Dispose_m6644A9CEBD8A0DDA6A4B823515BA5CA1B1A1ECE5 (U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BoxScript/<JoinPlayer>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CJoinPlayerU3Ed__10_MoveNext_mEDB10874AD559E234C51DE4275195CFFAD6D965C (U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// player.GetComponent<PlayerMovement>().RiseOne();
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_player_4();
		NullCheck(L_5);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_6;
		L_6 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_5, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		NullCheck(L_6);
		PlayerMovement_RiseOne_mC4BFF32133CA531A0E49899EDB28823F0053515E(L_6, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(joinPlayerTimer);
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_joinPlayerTimer_10();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, L_8, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0048:
	{
		__this->set_U3CU3E1__state_0((-1));
		// transform.position = new Vector3(player.transform.position.x , transform.position.y, player.transform.position.z);
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_10 = V_1;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_12 = V_1;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_player_4();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_17 = V_1;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_y_3();
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_21 = V_1;
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = L_21->get_player_4();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), L_16, L_20, L_25, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_26, /*hidden argument*/NULL);
		// transform.rotation = player.transform.rotation;
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_27 = V_1;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_29 = V_1;
		NullCheck(L_29);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = L_29->get_player_4();
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
		L_32 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_31, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_28, L_32, /*hidden argument*/NULL);
		// transform.SetParent(player.transform);
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_33 = V_1;
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_33, /*hidden argument*/NULL);
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_35 = V_1;
		NullCheck(L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = L_35->get_player_4();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_34, L_37, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object BoxScript/<JoinPlayer>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CJoinPlayerU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7CF8F66979C6F1CAB4F0BD3781E20B65AB568F8C (U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BoxScript/<JoinPlayer>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinPlayerU3Ed__10_System_Collections_IEnumerator_Reset_mF0CC573A5DBCA58E0926AC98BBE96FF2F3780925 (U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CJoinPlayerU3Ed__10_System_Collections_IEnumerator_Reset_mF0CC573A5DBCA58E0926AC98BBE96FF2F3780925_RuntimeMethod_var)));
	}
}
// System.Object BoxScript/<JoinPlayer>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CJoinPlayerU3Ed__10_System_Collections_IEnumerator_get_Current_m5C5BE3683ADE1568D82B38B024267E404262D62E (U3CJoinPlayerU3Ed__10_t2AF38EA9167263C81732FE8C7E377AD163A3C895 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoxScript/<LeavePlayer>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeavePlayerU3Ed__11__ctor_mA8245DCD37668530638C6999D8EF3AC35905A8E4 (U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BoxScript/<LeavePlayer>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeavePlayerU3Ed__11_System_IDisposable_Dispose_m71FE7BFD4FF251AE1E9F8D98B3DC81F4CA288617 (U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BoxScript/<LeavePlayer>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLeavePlayerU3Ed__11_MoveNext_mFB5569E20B1F3845B5F3F090EC0A050B0C43377A (U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// transform.SetParent(null);
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_4 = V_1;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_5, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(leavePlayerTimer);
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->get_leavePlayerTimer_11();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0044:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(atFinish) player.GetComponent<PlayerMovement>().FallABit();
		bool L_9 = __this->get_atFinish_3();
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// if(atFinish) player.GetComponent<PlayerMovement>().FallABit();
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_player_4();
		NullCheck(L_11);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_12;
		L_12 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_11, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		NullCheck(L_12);
		PlayerMovement_FallABit_m65BB96C1FA1E2FC37FBFECF26BB0C3AE69A3B5AE(L_12, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_0065:
	{
		// else player.GetComponent<PlayerMovement>().FallOne();
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_13 = V_1;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13->get_player_4();
		NullCheck(L_14);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_15;
		L_15 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_14, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		NullCheck(L_15);
		PlayerMovement_FallOne_m4C956EF2D137A5901C1119F917E51BA2AFC49DFE(L_15, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// if (firstBox) player.GetComponent<PlayerMovement>().Lost();
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_16 = V_1;
		NullCheck(L_16);
		bool L_17 = L_16->get_firstBox_7();
		if (!L_17)
		{
			goto IL_008d;
		}
	}
	{
		// if (firstBox) player.GetComponent<PlayerMovement>().Lost();
		BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * L_18 = V_1;
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = L_18->get_player_4();
		NullCheck(L_19);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_20;
		L_20 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_19, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		NullCheck(L_20);
		PlayerMovement_Lost_m3961B039E307C27FAD34023D0D18887DB26ED1B9(L_20, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return (bool)0;
	}
}
// System.Object BoxScript/<LeavePlayer>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLeavePlayerU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m64FFE0ADC5F8AFABEA9532F5B346520388B1A1A8 (U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BoxScript/<LeavePlayer>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeavePlayerU3Ed__11_System_Collections_IEnumerator_Reset_m975F11D32111E3B990730FB6903F8268A55C7446 (U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLeavePlayerU3Ed__11_System_Collections_IEnumerator_Reset_m975F11D32111E3B990730FB6903F8268A55C7446_RuntimeMethod_var)));
	}
}
// System.Object BoxScript/<LeavePlayer>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLeavePlayerU3Ed__11_System_Collections_IEnumerator_get_Current_m5D66365CA91E7B241F12071CCD0F63FB0BA76224 (U3CLeavePlayerU3Ed__11_tE69DA0B7CEA5800590A76596256C1F387914EF06 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
