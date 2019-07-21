#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// AudioType[]
struct AudioTypeU5BU5D_t2447003483;
// BuildController
struct BuildController_t964035277;
// ClearButtonController
struct ClearButtonController_t1437245373;
// ClickController
struct ClickController_t166689076;
// ColorTypes[]
struct ColorTypesU5BU5D_t438535719;
// DotController
struct DotController_t3465465747;
// FlashController
struct FlashController_t265141757;
// GameController
struct GameController_t2330501625;
// GameController/<Add>c__Iterator0
struct U3CAddU3Ec__Iterator0_t3148152499;
// GameController/<Add_direct>c__Iterator7
struct U3CAdd_directU3Ec__Iterator7_t2744499443;
// GameController/<Beq>c__Iterator3
struct U3CBeqU3Ec__Iterator3_t3786537701;
// GameController/<Beq_direct>c__IteratorA
struct U3CBeq_directU3Ec__IteratorA_t2534323723;
// GameController/<Bgt>c__Iterator5
struct U3CBgtU3Ec__Iterator5_t2367511551;
// GameController/<Blt>c__Iterator4
struct U3CBltU3Ec__Iterator4_t1297701914;
// GameController/<Halt>c__IteratorE
struct U3CHaltU3Ec__IteratorE_t4199766070;
// GameController/<LoadA>c__IteratorC
struct U3CLoadAU3Ec__IteratorC_t606953003;
// GameController/<LoadB>c__IteratorD
struct U3CLoadBU3Ec__IteratorD_t607250828;
// GameController/<Mult>c__Iterator2
struct U3CMultU3Ec__Iterator2_t1074165843;
// GameController/<Mult_direct>c__Iterator9
struct U3CMult_directU3Ec__Iterator9_t1002618766;
// GameController/<Noop>c__Iterator6
struct U3CNoopU3Ec__Iterator6_t1304308506;
// GameController/<RunSingleCommand>c__IteratorF
struct U3CRunSingleCommandU3Ec__IteratorF_t1661767859;
// GameController/<StoreA>c__IteratorB
struct U3CStoreAU3Ec__IteratorB_t2675201460;
// GameController/<Sub>c__Iterator1
struct U3CSubU3Ec__Iterator1_t3982968060;
// GameController/<Sub_direct>c__Iterator8
struct U3CSub_directU3Ec__Iterator8_t3735332119;
// GameController/Instruction
struct Instruction_t85629626;
// GameController/Instruction[]
struct InstructionU5BU5D_t2773487903;
// GridController
struct GridController_t1732845400;
// HaltButtonController
struct HaltButtonController_t306459615;
// HelpController
struct HelpController_t2343372652;
// HoverController
struct HoverController_t423031069;
// IButton
struct IButton_t407737688;
// ICellListener
struct ICellListener_t3421988101;
// ICellListener[]
struct ICellListenerU5BU5D_t1030919496;
// ISelectable
struct ISelectable_t4034466499;
// InstructionPreview
struct InstructionPreview_t1842191950;
// JobController
struct JobController_t2362869387;
// JobController/Condition
struct Condition_t2788105126;
// KeyEventController
struct KeyEventController_t2268638968;
// MemoryCellController
struct MemoryCellController_t341130527;
// MemoryCellController[]
struct MemoryCellControllerU5BU5D_t1776215942;
// MemoryCellController[][]
struct MemoryCellControllerU5BU5DU5BU5D_t1628363683;
// MemoryCellTextController
struct MemoryCellTextController_t3948011966;
// MemoryRetriever
struct MemoryRetriever_t2760707818;
// MemoryRetriever/<NavToCell>c__Iterator3
struct U3CNavToCellU3Ec__Iterator3_t181564031;
// MemoryRetriever/<NavToLocation>c__Iterator0
struct U3CNavToLocationU3Ec__Iterator0_t4015647092;
// MemoryRetriever/<ReadRegister>c__Iterator1
struct U3CReadRegisterU3Ec__Iterator1_t3336726364;
// MemoryRetriever/<WriteRegister>c__Iterator2
struct U3CWriteRegisterU3Ec__Iterator2_t4073638105;
// MoneyController
struct MoneyController_t851075799;
// MouseColliderController
struct MouseColliderController_t664166756;
// MouseLight
struct MouseLight_t1369392169;
// MyAudioController
struct MyAudioController_t2840361766;
// NumericalPreview
struct NumericalPreview_t136486070;
// RandomButtonController
struct RandomButtonController_t2952941430;
// RegisterController
struct RegisterController_t92122650;
// RegisterController/<SetRegisterValue>c__Iterator0
struct U3CSetRegisterValueU3Ec__Iterator0_t2371385909;
// RegisterObject
struct RegisterObject_t528985038;
// RegisterRetriever
struct RegisterRetriever_t3846945983;
// RegisterRetriever/<NavToLocation>c__Iterator0
struct U3CNavToLocationU3Ec__Iterator0_t3710408863;
// RegisterRetriever/<NavToRegister>c__Iterator3
struct U3CNavToRegisterU3Ec__Iterator3_t1882082193;
// RegisterRetriever/<ReadRegister>c__Iterator1
struct U3CReadRegisterU3Ec__Iterator1_t958219891;
// RegisterRetriever/<WriteRegister>c__Iterator2
struct U3CWriteRegisterU3Ec__Iterator2_t2150749546;
// Register[]
struct RegisterU5BU5D_t1989552988;
// RowColPreview
struct RowColPreview_t334518614;
// ScoreController
struct ScoreController_t484565259;
// ScoreController/<ShowScore>c__Iterator0
struct U3CShowScoreU3Ec__Iterator0_t3828744793;
// ScoreController/Promise
struct Promise_t592223531;
// SelectController
struct SelectController_t3183435330;
// SparksController
struct SparksController_t751236625;
// StartButtonController
struct StartButtonController_t3651918395;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<AudioType,UnityEngine.AudioClip,System.Collections.DictionaryEntry>
struct Transform_1_t2267786181;
// System.Collections.Generic.Dictionary`2/Transform`1<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>,System.Collections.DictionaryEntry>
struct Transform_1_t1702946981;
// System.Collections.Generic.Dictionary`2/Transform`1<ColorTypes,UnityEngine.Material,System.Collections.DictionaryEntry>
struct Transform_1_t1587986607;
// System.Collections.Generic.Dictionary`2/Transform`1<Register,MemoryCellController[],System.Collections.DictionaryEntry>
struct Transform_1_t1654193063;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GameController/Instruction,System.Collections.DictionaryEntry>
struct Transform_1_t2377826747;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t886128184;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t3530625384;
// System.Collections.Generic.Dictionary`2<AudioType,System.Object>
struct Dictionary_2_t4030576606;
// System.Collections.Generic.Dictionary`2<AudioType,UnityEngine.AudioClip>
struct Dictionary_2_t336392811;
// System.Collections.Generic.Dictionary`2<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>
struct Dictionary_2_t755207947;
// System.Collections.Generic.Dictionary`2<ColorTypes,System.Object>
struct Dictionary_2_t2022108842;
// System.Collections.Generic.Dictionary`2<ColorTypes,UnityEngine.Material>
struct Dictionary_2_t3577345097;
// System.Collections.Generic.Dictionary`2<Register,MemoryCellController[]>
struct Dictionary_2_t2269235889;
// System.Collections.Generic.Dictionary`2<Register,System.Object>
struct Dictionary_2_t3573126111;
// System.Collections.Generic.Dictionary`2<System.Int32,GameController/Instruction>
struct Dictionary_2_t3269310253;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t736164020;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.IEqualityComparer`1<AudioType>
struct IEqualityComparer_1_t214841824;
// System.Collections.Generic.IEqualityComparer`1<ColorTypes>
struct IEqualityComparer_1_t603335172;
// System.Collections.Generic.IEqualityComparer`1<Register>
struct IEqualityComparer_1_t2819954483;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<ICellListener>
struct List_1_t599095547;
// System.Collections.Generic.List`1<MemoryCellController>
struct List_1_t1813205269;
// System.Collections.Generic.List`1<MemoryCellController>[]
struct List_1U5BU5D_t676833016;
// System.Collections.Generic.List`1<MemoryCellController[]>
struct List_1_t3248290684;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct List_1_t4057786103;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.GameObject>[]
struct List_1U5BU5D_t2229216220;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Comparison`1<System.Object>
struct Comparison_1_t2855037343;
// System.Comparison`1<UnityEngine.GameObject>
struct Comparison_1_t888567798;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Void
struct Void_t1185182177;
// UnityEngine.Animation
struct Animation_t3648466861;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.TextMesh
struct TextMesh_t1536577757;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ClearButtonController_t1437245373_il2cpp_TypeInfo_var;
extern RuntimeClass* ColorTypesU5BU5D_t438535719_il2cpp_TypeInfo_var;
extern RuntimeClass* Comparison_1_t888567798_il2cpp_TypeInfo_var;
extern RuntimeClass* Condition_t2788105126_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2269235889_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2736202052_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3269310253_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t336392811_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3577345097_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t736164020_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t755207947_il2cpp_TypeInfo_var;
extern RuntimeClass* GameController_t2330501625_il2cpp_TypeInfo_var;
extern RuntimeClass* GridController_t1732845400_il2cpp_TypeInfo_var;
extern RuntimeClass* HaltButtonController_t306459615_il2cpp_TypeInfo_var;
extern RuntimeClass* HelpController_t2343372652_il2cpp_TypeInfo_var;
extern RuntimeClass* HoverController_t423031069_il2cpp_TypeInfo_var;
extern RuntimeClass* IButton_t407737688_il2cpp_TypeInfo_var;
extern RuntimeClass* ICellListener_t3421988101_il2cpp_TypeInfo_var;
extern RuntimeClass* ISelectable_t4034466499_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Instruction_t85629626_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* JobController_t2362869387_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1813205269_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3248290684_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t4057786103_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t599095547_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryCellControllerU5BU5D_t1776215942_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryRetriever_t2760707818_il2cpp_TypeInfo_var;
extern RuntimeClass* MoneyController_t851075799_il2cpp_TypeInfo_var;
extern RuntimeClass* MyAudioController_t2840361766_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Promise_t592223531_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* RandomButtonController_t2952941430_il2cpp_TypeInfo_var;
extern RuntimeClass* RegisterController_t92122650_il2cpp_TypeInfo_var;
extern RuntimeClass* RegisterRetriever_t3846945983_il2cpp_TypeInfo_var;
extern RuntimeClass* ScoreController_t484565259_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* StartButtonController_t3651918395_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CAddU3Ec__Iterator0_t3148152499_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CAdd_directU3Ec__Iterator7_t2744499443_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CBeqU3Ec__Iterator3_t3786537701_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CBeq_directU3Ec__IteratorA_t2534323723_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CBgtU3Ec__Iterator5_t2367511551_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CBltU3Ec__Iterator4_t1297701914_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CHaltU3Ec__IteratorE_t4199766070_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CLoadAU3Ec__IteratorC_t606953003_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CLoadBU3Ec__IteratorD_t607250828_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CMultU3Ec__Iterator2_t1074165843_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CMult_directU3Ec__Iterator9_t1002618766_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CNavToCellU3Ec__Iterator3_t181564031_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CNavToLocationU3Ec__Iterator0_t3710408863_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CNavToLocationU3Ec__Iterator0_t4015647092_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CNavToRegisterU3Ec__Iterator3_t1882082193_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CNoopU3Ec__Iterator6_t1304308506_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CReadRegisterU3Ec__Iterator1_t3336726364_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CReadRegisterU3Ec__Iterator1_t958219891_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CRunSingleCommandU3Ec__IteratorF_t1661767859_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CSetRegisterValueU3Ec__Iterator0_t2371385909_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CShowScoreU3Ec__Iterator0_t3828744793_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CStoreAU3Ec__IteratorB_t2675201460_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CSubU3Ec__Iterator1_t3982968060_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CSub_directU3Ec__Iterator8_t3735332119_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CWriteRegisterU3Ec__Iterator2_t2150749546_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CWriteRegisterU3Ec__Iterator2_t4073638105_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D0E084FFC26A48083CAF4F0C48B4F4750FD4E4CB2_1_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2DC4E70AB31EF6C8908F896CAD1C6BC75F7FA65E27_0_FieldInfo_var;
extern String_t* _stringLiteral1120451338;
extern String_t* _stringLiteral1124711163;
extern String_t* _stringLiteral1124711164;
extern String_t* _stringLiteral1208991571;
extern String_t* _stringLiteral1289984270;
extern String_t* _stringLiteral1679077419;
extern String_t* _stringLiteral1812610328;
extern String_t* _stringLiteral1843313009;
extern String_t* _stringLiteral2063834088;
extern String_t* _stringLiteral2103927725;
extern String_t* _stringLiteral2133207370;
extern String_t* _stringLiteral2183717477;
extern String_t* _stringLiteral2343299646;
extern String_t* _stringLiteral2357329106;
extern String_t* _stringLiteral2430498717;
extern String_t* _stringLiteral2458464327;
extern String_t* _stringLiteral2553086756;
extern String_t* _stringLiteral2553807652;
extern String_t* _stringLiteral2601465642;
extern String_t* _stringLiteral2731190278;
extern String_t* _stringLiteral2731976705;
extern String_t* _stringLiteral2956502355;
extern String_t* _stringLiteral30821554;
extern String_t* _stringLiteral3092710865;
extern String_t* _stringLiteral3120702562;
extern String_t* _stringLiteral3125160222;
extern String_t* _stringLiteral3134474806;
extern String_t* _stringLiteral3134897496;
extern String_t* _stringLiteral3163887172;
extern String_t* _stringLiteral3173980668;
extern String_t* _stringLiteral3232667666;
extern String_t* _stringLiteral3265744085;
extern String_t* _stringLiteral3419968473;
extern String_t* _stringLiteral3450255240;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3451041664;
extern String_t* _stringLiteral3452614524;
extern String_t* _stringLiteral3452614535;
extern String_t* _stringLiteral3452614537;
extern String_t* _stringLiteral3452614538;
extern String_t* _stringLiteral3452614539;
extern String_t* _stringLiteral3452614540;
extern String_t* _stringLiteral3452614541;
extern String_t* _stringLiteral3452614542;
extern String_t* _stringLiteral3452614543;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3452614551;
extern String_t* _stringLiteral3452614552;
extern String_t* _stringLiteral3452614586;
extern String_t* _stringLiteral3452614587;
extern String_t* _stringLiteral3452614588;
extern String_t* _stringLiteral3452614589;
extern String_t* _stringLiteral3452614590;
extern String_t* _stringLiteral3452614591;
extern String_t* _stringLiteral3452614595;
extern String_t* _stringLiteral3452614608;
extern String_t* _stringLiteral3455760331;
extern String_t* _stringLiteral3456284560;
extern String_t* _stringLiteral3493618073;
extern String_t* _stringLiteral3537415198;
extern String_t* _stringLiteral3537415201;
extern String_t* _stringLiteral355311145;
extern String_t* _stringLiteral3554759439;
extern String_t* _stringLiteral3691716456;
extern String_t* _stringLiteral389518009;
extern String_t* _stringLiteral4010973454;
extern String_t* _stringLiteral4054337690;
extern String_t* _stringLiteral4058597544;
extern String_t* _stringLiteral4058597547;
extern String_t* _stringLiteral4065542169;
extern String_t* _stringLiteral4084492156;
extern String_t* _stringLiteral4177891647;
extern String_t* _stringLiteral4244357453;
extern String_t* _stringLiteral4249957872;
extern String_t* _stringLiteral446682791;
extern String_t* _stringLiteral60121299;
extern String_t* _stringLiteral628489988;
extern String_t* _stringLiteral665123506;
extern String_t* _stringLiteral681307922;
extern String_t* _stringLiteral718504107;
extern String_t* _stringLiteral742876383;
extern const RuntimeMethod* Array_Sort_TisGameObject_t1113636619_m169164030_RuntimeMethod_var;
extern const RuntimeMethod* Comparison_1__ctor_m1173778154_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAnimation_t3648466861_m4214971628_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisISelectable_t4034466499_m3006303143_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMemoryCellController_t341130527_m2697602882_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMemoryCellTextController_t3948011966_m1603530173_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTextMesh_t1536577757_m1070281259_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1152581691_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2407688608_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2461861952_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2473192422_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2711931129_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3056715029_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m1147574700_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m3222356229_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1349605170_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1879769881_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1971266820_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2604517258_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3200964102_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4247274435_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m528326273_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1369846687_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2156887850_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2904897546_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3745926530_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3988276343_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m431267327_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m98595422_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3800595820_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m4246191156_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1741642658_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2684005343_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2802568476_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m399582602_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1078081596_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2057191379_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2179132367_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2914257994_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2330634133_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3129680102_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m356741492_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4146803787_RuntimeMethod_var;
extern const RuntimeMethod* GameController_Add_direct_m562424337_RuntimeMethod_var;
extern const RuntimeMethod* GameController_Add_m2699199007_RuntimeMethod_var;
extern const RuntimeMethod* GameController_Beq_direct_m1164106537_RuntimeMethod_var;
extern const RuntimeMethod* GameController_Beq_m1571955107_RuntimeMethod_var;
extern const RuntimeMethod* GameController_Bgt_m4199929199_RuntimeMethod_var;
extern const RuntimeMethod* GameController_Blt_m4200121158_RuntimeMethod_var;
extern const RuntimeMethod* GameController_Halt_m2881740881_RuntimeMethod_var;
extern const RuntimeMethod* GameController_LoadA_m3428745796_RuntimeMethod_var;
extern const RuntimeMethod* GameController_LoadB_m4054000755_RuntimeMethod_var;
extern const RuntimeMethod* GameController_Mult_direct_m2251156255_RuntimeMethod_var;
extern const RuntimeMethod* GameController_Mult_m2885893828_RuntimeMethod_var;
extern const RuntimeMethod* GameController_Noop_m389482402_RuntimeMethod_var;
extern const RuntimeMethod* GameController_StoreA_m1004311925_RuntimeMethod_var;
extern const RuntimeMethod* GameController_Sub_direct_m3952882190_RuntimeMethod_var;
extern const RuntimeMethod* GameController_Sub_m443598057_RuntimeMethod_var;
extern const RuntimeMethod* GameController_U3COnStartButtonPressU3Em__0_m691761543_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisIButton_t407737688_m276308076_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisISelectable_t4034466499_m4123480996_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMemoryCellTextController_t3948011966_m899497081_RuntimeMethod_var;
extern const RuntimeMethod* GridController_U3CStartU3Em__0_m2654551278_RuntimeMethod_var;
extern const RuntimeMethod* JobController_SetValuePreview_m1220275342_RuntimeMethod_var;
extern const RuntimeMethod* JobController_SetValuePreview_m3527689404_RuntimeMethod_var;
extern const RuntimeMethod* JobController_U3CLightBlueGetPossibleU3Em__1_m3461975711_RuntimeMethod_var;
extern const RuntimeMethod* JobController_U3COrangeGetPossibleU3Em__0_m1944873447_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3337906097_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2056550861_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3086670186_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m166453353_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2745993839_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2808974330_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2952656512_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m989991498_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m1330880791_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m4293003108_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m790014197_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1040324814_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2048782325_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m295390_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3103785141_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3526297712_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1576969321_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m857304069_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1408411301_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m587845175_RuntimeMethod_var;
extern const RuntimeMethod* U3CAddU3Ec__Iterator0_Reset_m2247347303_RuntimeMethod_var;
extern const RuntimeMethod* U3CAdd_directU3Ec__Iterator7_Reset_m2729642281_RuntimeMethod_var;
extern const RuntimeMethod* U3CBeqU3Ec__Iterator3_Reset_m994925334_RuntimeMethod_var;
extern const RuntimeMethod* U3CBeq_directU3Ec__IteratorA_Reset_m2702846444_RuntimeMethod_var;
extern const RuntimeMethod* U3CBgtU3Ec__Iterator5_Reset_m1673367204_RuntimeMethod_var;
extern const RuntimeMethod* U3CBltU3Ec__Iterator4_Reset_m1195398374_RuntimeMethod_var;
extern const RuntimeMethod* U3CHaltU3Ec__IteratorE_Reset_m1048099070_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadAU3Ec__IteratorC_Reset_m77850182_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadBU3Ec__IteratorD_Reset_m108217375_RuntimeMethod_var;
extern const RuntimeMethod* U3CMultU3Ec__Iterator2_Reset_m1679822752_RuntimeMethod_var;
extern const RuntimeMethod* U3CMult_directU3Ec__Iterator9_Reset_m471595003_RuntimeMethod_var;
extern const RuntimeMethod* U3CNavToCellU3Ec__Iterator3_Reset_m1692122529_RuntimeMethod_var;
extern const RuntimeMethod* U3CNavToLocationU3Ec__Iterator0_Reset_m2020772596_RuntimeMethod_var;
extern const RuntimeMethod* U3CNavToLocationU3Ec__Iterator0_Reset_m2368915856_RuntimeMethod_var;
extern const RuntimeMethod* U3CNavToRegisterU3Ec__Iterator3_Reset_m3384423678_RuntimeMethod_var;
extern const RuntimeMethod* U3CNoopU3Ec__Iterator6_Reset_m3824159933_RuntimeMethod_var;
extern const RuntimeMethod* U3CReadRegisterU3Ec__Iterator1_Reset_m1240346802_RuntimeMethod_var;
extern const RuntimeMethod* U3CReadRegisterU3Ec__Iterator1_Reset_m1391842633_RuntimeMethod_var;
extern const RuntimeMethod* U3CRunSingleCommandU3Ec__IteratorF_Reset_m4233164763_RuntimeMethod_var;
extern const RuntimeMethod* U3CSetRegisterValueU3Ec__Iterator0_Reset_m4000158150_RuntimeMethod_var;
extern const RuntimeMethod* U3CShowScoreU3Ec__Iterator0_Reset_m1634145118_RuntimeMethod_var;
extern const RuntimeMethod* U3CStoreAU3Ec__IteratorB_Reset_m671374887_RuntimeMethod_var;
extern const RuntimeMethod* U3CSubU3Ec__Iterator1_Reset_m510293744_RuntimeMethod_var;
extern const RuntimeMethod* U3CSub_directU3Ec__Iterator8_Reset_m2923706211_RuntimeMethod_var;
extern const RuntimeMethod* U3CWriteRegisterU3Ec__Iterator2_Reset_m1422638738_RuntimeMethod_var;
extern const RuntimeMethod* U3CWriteRegisterU3Ec__Iterator2_Reset_m4106258889_RuntimeMethod_var;
extern const uint32_t BuildController_MakeMemoryGrid_m2592733654_MetadataUsageId;
extern const uint32_t BuildController_NumberGridCells_m1171950474_MetadataUsageId;
extern const uint32_t BuildController_PlacePreviewText_m2187190577_MetadataUsageId;
extern const uint32_t BuildController_Update_m3005149869_MetadataUsageId;
extern const uint32_t ClearButtonController_OnClick_m290409787_MetadataUsageId;
extern const uint32_t ClearButtonController_Start_m3359924338_MetadataUsageId;
extern const uint32_t ClickController_Update_m2888674610_MetadataUsageId;
extern const uint32_t DotController_OnChange_m1074922731_MetadataUsageId;
extern const uint32_t FlashController_Start_m4000745138_MetadataUsageId;
extern const uint32_t GameController_Add_direct_m562424337_MetadataUsageId;
extern const uint32_t GameController_Add_m2699199007_MetadataUsageId;
extern const uint32_t GameController_Awake_m4256893697_MetadataUsageId;
extern const uint32_t GameController_Beq_direct_m1164106537_MetadataUsageId;
extern const uint32_t GameController_Beq_m1571955107_MetadataUsageId;
extern const uint32_t GameController_Bgt_m4199929199_MetadataUsageId;
extern const uint32_t GameController_Blt_m4200121158_MetadataUsageId;
extern const uint32_t GameController_CellsToInteger_m1331874051_MetadataUsageId;
extern const uint32_t GameController_ClearHoverAndSelection_m1951568472_MetadataUsageId;
extern const uint32_t GameController_EraseColors_m68052623_MetadataUsageId;
extern const uint32_t GameController_Halt_m2881740881_MetadataUsageId;
extern const uint32_t GameController_LoadA_m3428745796_MetadataUsageId;
extern const uint32_t GameController_LoadB_m4054000755_MetadataUsageId;
extern const uint32_t GameController_Mult_direct_m2251156255_MetadataUsageId;
extern const uint32_t GameController_Mult_m2885893828_MetadataUsageId;
extern const uint32_t GameController_Noop_m389482402_MetadataUsageId;
extern const uint32_t GameController_OnClick_m4207123697_MetadataUsageId;
extern const uint32_t GameController_OnHoverChange_m1353772088_MetadataUsageId;
extern const uint32_t GameController_OnKeyPress_m2100150495_MetadataUsageId;
extern const uint32_t GameController_OnModifyValue_m3053158791_MetadataUsageId;
extern const uint32_t GameController_OnNavigation_m2564189584_MetadataUsageId;
extern const uint32_t GameController_OnRandomButtonPress_m2916944372_MetadataUsageId;
extern const uint32_t GameController_OnSelectionChange_m4096359809_MetadataUsageId;
extern const uint32_t GameController_OnStartButtonPress_m3391101166_MetadataUsageId;
extern const uint32_t GameController_PlaceColors_m1849823443_MetadataUsageId;
extern const uint32_t GameController_RunSingleCommand_m2188203666_MetadataUsageId;
extern const uint32_t GameController_StoreA_m1004311925_MetadataUsageId;
extern const uint32_t GameController_Sub_direct_m3952882190_MetadataUsageId;
extern const uint32_t GameController_Sub_m443598057_MetadataUsageId;
extern const uint32_t GameController_U3COnStartButtonPressU3Em__0_m691761543_MetadataUsageId;
extern const uint32_t GameController_ZeroizeGrid_m2026413229_MetadataUsageId;
extern const uint32_t GridController_Awake_m369855814_MetadataUsageId;
extern const uint32_t GridController_GetCells_m210042790_MetadataUsageId;
extern const uint32_t GridController_GetValue_m3171713634_MetadataUsageId;
extern const uint32_t GridController_Start_m1311215461_MetadataUsageId;
extern const uint32_t HaltButtonController_OnClick_m3408310238_MetadataUsageId;
extern const uint32_t HaltButtonController_Start_m136301739_MetadataUsageId;
extern const uint32_t HelpController_Start_m2721595179_MetadataUsageId;
extern const uint32_t HoverController_SetValue_m2464880987_MetadataUsageId;
extern const uint32_t HoverController_Start_m150923030_MetadataUsageId;
extern const uint32_t InstructionPreview_OnChange_m491049653_MetadataUsageId;
extern const uint32_t InstructionPreview_Start_m3049030252_MetadataUsageId;
extern const uint32_t Instruction_BeginInvoke_m1856297584_MetadataUsageId;
extern const uint32_t JobController_CheckColoredCellStatus_m3890777666_MetadataUsageId;
extern const uint32_t JobController_EraseColors_m1147765506_MetadataUsageId;
extern const uint32_t JobController_JobFails_m4088475263_MetadataUsageId;
extern const uint32_t JobController_JobSuccess_m2853302862_MetadataUsageId;
extern const uint32_t JobController_LightBlueGetPossible_m1447588275_MetadataUsageId;
extern const uint32_t JobController_MakeColor_m1505895067_MetadataUsageId;
extern const uint32_t JobController_MakeColor_m2005006609_MetadataUsageId;
extern const uint32_t JobController_OrangeGetPossible_m3473682360_MetadataUsageId;
extern const uint32_t JobController_PlaceColors_m928630922_MetadataUsageId;
extern const uint32_t JobController_PlaceScattered_m403991863_MetadataUsageId;
extern const uint32_t JobController_SetValuePreview_m1220275342_MetadataUsageId;
extern const uint32_t JobController_SetValuePreview_m3527689404_MetadataUsageId;
extern const uint32_t JobController_Start_m2736888868_MetadataUsageId;
extern const uint32_t JobController_SubList_m3878992697_MetadataUsageId;
extern const uint32_t KeyEventController_Start_m3726438264_MetadataUsageId;
extern const uint32_t KeyEventController_Update_m3514856996_MetadataUsageId;
extern const uint32_t MemoryCellController_AddListener_m3359123159_MetadataUsageId;
extern const uint32_t MemoryCellController_Awake_m1380669347_MetadataUsageId;
extern const uint32_t MemoryCellController_Flash_m4241161679_MetadataUsageId;
extern const uint32_t MemoryCellController_GetValue_m1999499772_MetadataUsageId;
extern const uint32_t MemoryCellController_OnChange_m2113182999_MetadataUsageId;
extern const uint32_t MemoryCellController_SetPreviewNumberActivation_m1905526410_MetadataUsageId;
extern const uint32_t MemoryCellController_SetPreviewNumber_m1180977413_MetadataUsageId;
extern const uint32_t MemoryCellController_SetValue_m3908445948_MetadataUsageId;
extern const uint32_t MemoryCellController_Start_m3595601684_MetadataUsageId;
extern const uint32_t MemoryCellTextController_GetValue_m632222587_MetadataUsageId;
extern const uint32_t MemoryCellTextController_SetText_m1465277909_MetadataUsageId;
extern const uint32_t MemoryCellTextController_SetValue_m2137140209_MetadataUsageId;
extern const uint32_t MemoryCellTextController_Start_m351409437_MetadataUsageId;
extern const uint32_t MemoryRetriever_NavToCell_m793505524_MetadataUsageId;
extern const uint32_t MemoryRetriever_NavToLocation_m2039806366_MetadataUsageId;
extern const uint32_t MemoryRetriever_ReadRegister_m1624939673_MetadataUsageId;
extern const uint32_t MemoryRetriever_Start_m2921303712_MetadataUsageId;
extern const uint32_t MemoryRetriever_WriteRegister_m363603130_MetadataUsageId;
extern const uint32_t MoneyController_ChangeMoney_m1476776209_MetadataUsageId;
extern const uint32_t MoneyController_NegativeChange_m3064309921_MetadataUsageId;
extern const uint32_t MoneyController_OnChangeRequest_m784516296_MetadataUsageId;
extern const uint32_t MoneyController_PositiveChange_m1536743399_MetadataUsageId;
extern const uint32_t MoneyController_ResetMoney_m208388443_MetadataUsageId;
extern const uint32_t MoneyController_SetMoney_m3460632506_MetadataUsageId;
extern const uint32_t MoneyController_Start_m684390902_MetadataUsageId;
extern const uint32_t MouseColliderController_OnTriggerEnter2D_m3456761160_MetadataUsageId;
extern const uint32_t MouseColliderController_OnTriggerExit2D_m3702676283_MetadataUsageId;
extern const uint32_t MouseColliderController_Update_m2479612976_MetadataUsageId;
extern const uint32_t MouseLight_Update_m1617277733_MetadataUsageId;
extern const uint32_t MyAudioController_PlayAudio_m852245086_MetadataUsageId;
extern const uint32_t MyAudioController_Start_m416947410_MetadataUsageId;
extern const uint32_t NumericalPreview_OnChange_m4171116027_MetadataUsageId;
extern const uint32_t NumericalPreview_Start_m3762534905_MetadataUsageId;
extern const uint32_t RandomButtonController_OnClick_m3198826867_MetadataUsageId;
extern const uint32_t RandomButtonController_Start_m2170053092_MetadataUsageId;
extern const uint32_t RegisterController_GetMemoryCells_m2658175571_MetadataUsageId;
extern const uint32_t RegisterController_GetRegisterValue_m259583444_MetadataUsageId;
extern const uint32_t RegisterController_SetRegisterValue_m2854146444_MetadataUsageId;
extern const uint32_t RegisterController_Start_m1772117868_MetadataUsageId;
extern const uint32_t RegisterController_Zeroize_m519661814_MetadataUsageId;
extern const uint32_t RegisterRetriever_NavToLocation_m3638182089_MetadataUsageId;
extern const uint32_t RegisterRetriever_NavToRegister_m3179150175_MetadataUsageId;
extern const uint32_t RegisterRetriever_ReadRegister_m94153405_MetadataUsageId;
extern const uint32_t RegisterRetriever_Start_m659403198_MetadataUsageId;
extern const uint32_t RegisterRetriever_WriteRegister_m967670532_MetadataUsageId;
extern const uint32_t RowColPreview_OnChange_m2499042717_MetadataUsageId;
extern const uint32_t RowColPreview_Start_m2887385298_MetadataUsageId;
extern const uint32_t ScoreController_ShowScore_m861725830_MetadataUsageId;
extern const uint32_t ScoreController_Start_m3550267491_MetadataUsageId;
extern const uint32_t SelectController_OnSelect_m1726554407_MetadataUsageId;
extern const uint32_t SelectController_Start_m574008149_MetadataUsageId;
extern const uint32_t SparksController_Start_m3621341166_MetadataUsageId;
extern const uint32_t StartButtonController_OnClick_m1406823117_MetadataUsageId;
extern const uint32_t StartButtonController_OnEnd_m2111963269_MetadataUsageId;
extern const uint32_t StartButtonController_OnStart_m4261485478_MetadataUsageId;
extern const uint32_t StartButtonController_Start_m1031881367_MetadataUsageId;
extern const uint32_t U3CAddU3Ec__Iterator0_MoveNext_m683788724_MetadataUsageId;
extern const uint32_t U3CAddU3Ec__Iterator0_Reset_m2247347303_MetadataUsageId;
extern const uint32_t U3CAdd_directU3Ec__Iterator7_MoveNext_m1408249038_MetadataUsageId;
extern const uint32_t U3CAdd_directU3Ec__Iterator7_Reset_m2729642281_MetadataUsageId;
extern const uint32_t U3CBeqU3Ec__Iterator3_MoveNext_m1067914218_MetadataUsageId;
extern const uint32_t U3CBeqU3Ec__Iterator3_Reset_m994925334_MetadataUsageId;
extern const uint32_t U3CBeq_directU3Ec__IteratorA_MoveNext_m2761525037_MetadataUsageId;
extern const uint32_t U3CBeq_directU3Ec__IteratorA_Reset_m2702846444_MetadataUsageId;
extern const uint32_t U3CBgtU3Ec__Iterator5_MoveNext_m2653308382_MetadataUsageId;
extern const uint32_t U3CBgtU3Ec__Iterator5_Reset_m1673367204_MetadataUsageId;
extern const uint32_t U3CBltU3Ec__Iterator4_MoveNext_m1715670044_MetadataUsageId;
extern const uint32_t U3CBltU3Ec__Iterator4_Reset_m1195398374_MetadataUsageId;
extern const uint32_t U3CHaltU3Ec__IteratorE_Reset_m1048099070_MetadataUsageId;
extern const uint32_t U3CLoadAU3Ec__IteratorC_MoveNext_m2776983765_MetadataUsageId;
extern const uint32_t U3CLoadAU3Ec__IteratorC_Reset_m77850182_MetadataUsageId;
extern const uint32_t U3CLoadBU3Ec__IteratorD_MoveNext_m2478543289_MetadataUsageId;
extern const uint32_t U3CLoadBU3Ec__IteratorD_Reset_m108217375_MetadataUsageId;
extern const uint32_t U3CMultU3Ec__Iterator2_MoveNext_m2376528863_MetadataUsageId;
extern const uint32_t U3CMultU3Ec__Iterator2_Reset_m1679822752_MetadataUsageId;
extern const uint32_t U3CMult_directU3Ec__Iterator9_MoveNext_m1479657131_MetadataUsageId;
extern const uint32_t U3CMult_directU3Ec__Iterator9_Reset_m471595003_MetadataUsageId;
extern const uint32_t U3CNavToCellU3Ec__Iterator3_MoveNext_m1949612875_MetadataUsageId;
extern const uint32_t U3CNavToCellU3Ec__Iterator3_Reset_m1692122529_MetadataUsageId;
extern const uint32_t U3CNavToLocationU3Ec__Iterator0_MoveNext_m3238083041_MetadataUsageId;
extern const uint32_t U3CNavToLocationU3Ec__Iterator0_MoveNext_m877806841_MetadataUsageId;
extern const uint32_t U3CNavToLocationU3Ec__Iterator0_Reset_m2020772596_MetadataUsageId;
extern const uint32_t U3CNavToLocationU3Ec__Iterator0_Reset_m2368915856_MetadataUsageId;
extern const uint32_t U3CNavToRegisterU3Ec__Iterator3_MoveNext_m3420129935_MetadataUsageId;
extern const uint32_t U3CNavToRegisterU3Ec__Iterator3_Reset_m3384423678_MetadataUsageId;
extern const uint32_t U3CNoopU3Ec__Iterator6_MoveNext_m2743264609_MetadataUsageId;
extern const uint32_t U3CNoopU3Ec__Iterator6_Reset_m3824159933_MetadataUsageId;
extern const uint32_t U3CReadRegisterU3Ec__Iterator1_MoveNext_m123120922_MetadataUsageId;
extern const uint32_t U3CReadRegisterU3Ec__Iterator1_MoveNext_m2796807338_MetadataUsageId;
extern const uint32_t U3CReadRegisterU3Ec__Iterator1_Reset_m1240346802_MetadataUsageId;
extern const uint32_t U3CReadRegisterU3Ec__Iterator1_Reset_m1391842633_MetadataUsageId;
extern const uint32_t U3CRunSingleCommandU3Ec__IteratorF_MoveNext_m1356536275_MetadataUsageId;
extern const uint32_t U3CRunSingleCommandU3Ec__IteratorF_Reset_m4233164763_MetadataUsageId;
extern const uint32_t U3CSetRegisterValueU3Ec__Iterator0_MoveNext_m1850746191_MetadataUsageId;
extern const uint32_t U3CSetRegisterValueU3Ec__Iterator0_Reset_m4000158150_MetadataUsageId;
extern const uint32_t U3CShowScoreU3Ec__Iterator0_MoveNext_m3441307650_MetadataUsageId;
extern const uint32_t U3CShowScoreU3Ec__Iterator0_Reset_m1634145118_MetadataUsageId;
extern const uint32_t U3CStoreAU3Ec__IteratorB_MoveNext_m2286935874_MetadataUsageId;
extern const uint32_t U3CStoreAU3Ec__IteratorB_Reset_m671374887_MetadataUsageId;
extern const uint32_t U3CSubU3Ec__Iterator1_MoveNext_m796892529_MetadataUsageId;
extern const uint32_t U3CSubU3Ec__Iterator1_Reset_m510293744_MetadataUsageId;
extern const uint32_t U3CSub_directU3Ec__Iterator8_MoveNext_m2296366602_MetadataUsageId;
extern const uint32_t U3CSub_directU3Ec__Iterator8_Reset_m2923706211_MetadataUsageId;
extern const uint32_t U3CWriteRegisterU3Ec__Iterator2_MoveNext_m283940854_MetadataUsageId;
extern const uint32_t U3CWriteRegisterU3Ec__Iterator2_MoveNext_m2977294410_MetadataUsageId;
extern const uint32_t U3CWriteRegisterU3Ec__Iterator2_Reset_m1422638738_MetadataUsageId;
extern const uint32_t U3CWriteRegisterU3Ec__Iterator2_Reset_m4106258889_MetadataUsageId;

struct ColorTypesU5BU5D_t438535719;
struct MemoryCellControllerU5BU5D_t1776215942;
struct Int32U5BU5D_t385246372;
struct StringU5BU5D_t1281789340;
struct GameObjectU5BU5D_t3328599146;


#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745542 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745542_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CADDU3EC__ITERATOR0_T3148152499_H
#define U3CADDU3EC__ITERATOR0_T3148152499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Add>c__Iterator0
struct  U3CAddU3Ec__Iterator0_t3148152499  : public RuntimeObject
{
public:
	// System.Int32 GameController/<Add>c__Iterator0::<a>__0
	int32_t ___U3CaU3E__0_0;
	// System.Int32 GameController/<Add>c__Iterator0::<b>__0
	int32_t ___U3CbU3E__0_1;
	// System.Int32 GameController/<Add>c__Iterator0::<ans>__0
	int32_t ___U3CansU3E__0_2;
	// GameController GameController/<Add>c__Iterator0::$this
	GameController_t2330501625 * ___U24this_3;
	// System.Object GameController/<Add>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean GameController/<Add>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 GameController/<Add>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CaU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAddU3Ec__Iterator0_t3148152499, ___U3CaU3E__0_0)); }
	inline int32_t get_U3CaU3E__0_0() const { return ___U3CaU3E__0_0; }
	inline int32_t* get_address_of_U3CaU3E__0_0() { return &___U3CaU3E__0_0; }
	inline void set_U3CaU3E__0_0(int32_t value)
	{
		___U3CaU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E__0_1() { return static_cast<int32_t>(offsetof(U3CAddU3Ec__Iterator0_t3148152499, ___U3CbU3E__0_1)); }
	inline int32_t get_U3CbU3E__0_1() const { return ___U3CbU3E__0_1; }
	inline int32_t* get_address_of_U3CbU3E__0_1() { return &___U3CbU3E__0_1; }
	inline void set_U3CbU3E__0_1(int32_t value)
	{
		___U3CbU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CansU3E__0_2() { return static_cast<int32_t>(offsetof(U3CAddU3Ec__Iterator0_t3148152499, ___U3CansU3E__0_2)); }
	inline int32_t get_U3CansU3E__0_2() const { return ___U3CansU3E__0_2; }
	inline int32_t* get_address_of_U3CansU3E__0_2() { return &___U3CansU3E__0_2; }
	inline void set_U3CansU3E__0_2(int32_t value)
	{
		___U3CansU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CAddU3Ec__Iterator0_t3148152499, ___U24this_3)); }
	inline GameController_t2330501625 * get_U24this_3() const { return ___U24this_3; }
	inline GameController_t2330501625 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GameController_t2330501625 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CAddU3Ec__Iterator0_t3148152499, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CAddU3Ec__Iterator0_t3148152499, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CAddU3Ec__Iterator0_t3148152499, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CADDU3EC__ITERATOR0_T3148152499_H
#ifndef U3CADD_DIRECTU3EC__ITERATOR7_T2744499443_H
#define U3CADD_DIRECTU3EC__ITERATOR7_T2744499443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Add_direct>c__Iterator7
struct  U3CAdd_directU3Ec__Iterator7_t2744499443  : public RuntimeObject
{
public:
	// System.Int32 GameController/<Add_direct>c__Iterator7::<a>__0
	int32_t ___U3CaU3E__0_0;
	// System.Int32 GameController/<Add_direct>c__Iterator7::value
	int32_t ___value_1;
	// System.Int32 GameController/<Add_direct>c__Iterator7::<ans>__0
	int32_t ___U3CansU3E__0_2;
	// GameController GameController/<Add_direct>c__Iterator7::$this
	GameController_t2330501625 * ___U24this_3;
	// System.Object GameController/<Add_direct>c__Iterator7::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean GameController/<Add_direct>c__Iterator7::$disposing
	bool ___U24disposing_5;
	// System.Int32 GameController/<Add_direct>c__Iterator7::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CaU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAdd_directU3Ec__Iterator7_t2744499443, ___U3CaU3E__0_0)); }
	inline int32_t get_U3CaU3E__0_0() const { return ___U3CaU3E__0_0; }
	inline int32_t* get_address_of_U3CaU3E__0_0() { return &___U3CaU3E__0_0; }
	inline void set_U3CaU3E__0_0(int32_t value)
	{
		___U3CaU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(U3CAdd_directU3Ec__Iterator7_t2744499443, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_U3CansU3E__0_2() { return static_cast<int32_t>(offsetof(U3CAdd_directU3Ec__Iterator7_t2744499443, ___U3CansU3E__0_2)); }
	inline int32_t get_U3CansU3E__0_2() const { return ___U3CansU3E__0_2; }
	inline int32_t* get_address_of_U3CansU3E__0_2() { return &___U3CansU3E__0_2; }
	inline void set_U3CansU3E__0_2(int32_t value)
	{
		___U3CansU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CAdd_directU3Ec__Iterator7_t2744499443, ___U24this_3)); }
	inline GameController_t2330501625 * get_U24this_3() const { return ___U24this_3; }
	inline GameController_t2330501625 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GameController_t2330501625 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CAdd_directU3Ec__Iterator7_t2744499443, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CAdd_directU3Ec__Iterator7_t2744499443, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CAdd_directU3Ec__Iterator7_t2744499443, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CADD_DIRECTU3EC__ITERATOR7_T2744499443_H
#ifndef U3CBEQU3EC__ITERATOR3_T3786537701_H
#define U3CBEQU3EC__ITERATOR3_T3786537701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Beq>c__Iterator3
struct  U3CBeqU3Ec__Iterator3_t3786537701  : public RuntimeObject
{
public:
	// System.Int32 GameController/<Beq>c__Iterator3::addr
	int32_t ___addr_0;
	// System.Int32 GameController/<Beq>c__Iterator3::<a>__0
	int32_t ___U3CaU3E__0_1;
	// GameController GameController/<Beq>c__Iterator3::$this
	GameController_t2330501625 * ___U24this_2;
	// System.Object GameController/<Beq>c__Iterator3::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean GameController/<Beq>c__Iterator3::$disposing
	bool ___U24disposing_4;
	// System.Int32 GameController/<Beq>c__Iterator3::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(U3CBeqU3Ec__Iterator3_t3786537701, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_U3CaU3E__0_1() { return static_cast<int32_t>(offsetof(U3CBeqU3Ec__Iterator3_t3786537701, ___U3CaU3E__0_1)); }
	inline int32_t get_U3CaU3E__0_1() const { return ___U3CaU3E__0_1; }
	inline int32_t* get_address_of_U3CaU3E__0_1() { return &___U3CaU3E__0_1; }
	inline void set_U3CaU3E__0_1(int32_t value)
	{
		___U3CaU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CBeqU3Ec__Iterator3_t3786537701, ___U24this_2)); }
	inline GameController_t2330501625 * get_U24this_2() const { return ___U24this_2; }
	inline GameController_t2330501625 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(GameController_t2330501625 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CBeqU3Ec__Iterator3_t3786537701, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CBeqU3Ec__Iterator3_t3786537701, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CBeqU3Ec__Iterator3_t3786537701, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBEQU3EC__ITERATOR3_T3786537701_H
#ifndef U3CBEQ_DIRECTU3EC__ITERATORA_T2534323723_H
#define U3CBEQ_DIRECTU3EC__ITERATORA_T2534323723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Beq_direct>c__IteratorA
struct  U3CBeq_directU3Ec__IteratorA_t2534323723  : public RuntimeObject
{
public:
	// System.Int32 GameController/<Beq_direct>c__IteratorA::addr
	int32_t ___addr_0;
	// System.Int32 GameController/<Beq_direct>c__IteratorA::<addressValue>__0
	int32_t ___U3CaddressValueU3E__0_1;
	// System.Int32 GameController/<Beq_direct>c__IteratorA::<a>__1
	int32_t ___U3CaU3E__1_2;
	// GameController GameController/<Beq_direct>c__IteratorA::$this
	GameController_t2330501625 * ___U24this_3;
	// System.Object GameController/<Beq_direct>c__IteratorA::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean GameController/<Beq_direct>c__IteratorA::$disposing
	bool ___U24disposing_5;
	// System.Int32 GameController/<Beq_direct>c__IteratorA::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(U3CBeq_directU3Ec__IteratorA_t2534323723, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_U3CaddressValueU3E__0_1() { return static_cast<int32_t>(offsetof(U3CBeq_directU3Ec__IteratorA_t2534323723, ___U3CaddressValueU3E__0_1)); }
	inline int32_t get_U3CaddressValueU3E__0_1() const { return ___U3CaddressValueU3E__0_1; }
	inline int32_t* get_address_of_U3CaddressValueU3E__0_1() { return &___U3CaddressValueU3E__0_1; }
	inline void set_U3CaddressValueU3E__0_1(int32_t value)
	{
		___U3CaddressValueU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CaU3E__1_2() { return static_cast<int32_t>(offsetof(U3CBeq_directU3Ec__IteratorA_t2534323723, ___U3CaU3E__1_2)); }
	inline int32_t get_U3CaU3E__1_2() const { return ___U3CaU3E__1_2; }
	inline int32_t* get_address_of_U3CaU3E__1_2() { return &___U3CaU3E__1_2; }
	inline void set_U3CaU3E__1_2(int32_t value)
	{
		___U3CaU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CBeq_directU3Ec__IteratorA_t2534323723, ___U24this_3)); }
	inline GameController_t2330501625 * get_U24this_3() const { return ___U24this_3; }
	inline GameController_t2330501625 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GameController_t2330501625 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CBeq_directU3Ec__IteratorA_t2534323723, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CBeq_directU3Ec__IteratorA_t2534323723, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CBeq_directU3Ec__IteratorA_t2534323723, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBEQ_DIRECTU3EC__ITERATORA_T2534323723_H
#ifndef U3CBGTU3EC__ITERATOR5_T2367511551_H
#define U3CBGTU3EC__ITERATOR5_T2367511551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Bgt>c__Iterator5
struct  U3CBgtU3Ec__Iterator5_t2367511551  : public RuntimeObject
{
public:
	// System.Int32 GameController/<Bgt>c__Iterator5::addr
	int32_t ___addr_0;
	// System.Int32 GameController/<Bgt>c__Iterator5::<a>__0
	int32_t ___U3CaU3E__0_1;
	// GameController GameController/<Bgt>c__Iterator5::$this
	GameController_t2330501625 * ___U24this_2;
	// System.Object GameController/<Bgt>c__Iterator5::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean GameController/<Bgt>c__Iterator5::$disposing
	bool ___U24disposing_4;
	// System.Int32 GameController/<Bgt>c__Iterator5::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(U3CBgtU3Ec__Iterator5_t2367511551, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_U3CaU3E__0_1() { return static_cast<int32_t>(offsetof(U3CBgtU3Ec__Iterator5_t2367511551, ___U3CaU3E__0_1)); }
	inline int32_t get_U3CaU3E__0_1() const { return ___U3CaU3E__0_1; }
	inline int32_t* get_address_of_U3CaU3E__0_1() { return &___U3CaU3E__0_1; }
	inline void set_U3CaU3E__0_1(int32_t value)
	{
		___U3CaU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CBgtU3Ec__Iterator5_t2367511551, ___U24this_2)); }
	inline GameController_t2330501625 * get_U24this_2() const { return ___U24this_2; }
	inline GameController_t2330501625 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(GameController_t2330501625 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CBgtU3Ec__Iterator5_t2367511551, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CBgtU3Ec__Iterator5_t2367511551, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CBgtU3Ec__Iterator5_t2367511551, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBGTU3EC__ITERATOR5_T2367511551_H
#ifndef U3CBLTU3EC__ITERATOR4_T1297701914_H
#define U3CBLTU3EC__ITERATOR4_T1297701914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Blt>c__Iterator4
struct  U3CBltU3Ec__Iterator4_t1297701914  : public RuntimeObject
{
public:
	// System.Int32 GameController/<Blt>c__Iterator4::addr
	int32_t ___addr_0;
	// System.Int32 GameController/<Blt>c__Iterator4::<a>__0
	int32_t ___U3CaU3E__0_1;
	// GameController GameController/<Blt>c__Iterator4::$this
	GameController_t2330501625 * ___U24this_2;
	// System.Object GameController/<Blt>c__Iterator4::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean GameController/<Blt>c__Iterator4::$disposing
	bool ___U24disposing_4;
	// System.Int32 GameController/<Blt>c__Iterator4::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(U3CBltU3Ec__Iterator4_t1297701914, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_U3CaU3E__0_1() { return static_cast<int32_t>(offsetof(U3CBltU3Ec__Iterator4_t1297701914, ___U3CaU3E__0_1)); }
	inline int32_t get_U3CaU3E__0_1() const { return ___U3CaU3E__0_1; }
	inline int32_t* get_address_of_U3CaU3E__0_1() { return &___U3CaU3E__0_1; }
	inline void set_U3CaU3E__0_1(int32_t value)
	{
		___U3CaU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CBltU3Ec__Iterator4_t1297701914, ___U24this_2)); }
	inline GameController_t2330501625 * get_U24this_2() const { return ___U24this_2; }
	inline GameController_t2330501625 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(GameController_t2330501625 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CBltU3Ec__Iterator4_t1297701914, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CBltU3Ec__Iterator4_t1297701914, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CBltU3Ec__Iterator4_t1297701914, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBLTU3EC__ITERATOR4_T1297701914_H
#ifndef U3CHALTU3EC__ITERATORE_T4199766070_H
#define U3CHALTU3EC__ITERATORE_T4199766070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Halt>c__IteratorE
struct  U3CHaltU3Ec__IteratorE_t4199766070  : public RuntimeObject
{
public:
	// GameController GameController/<Halt>c__IteratorE::$this
	GameController_t2330501625 * ___U24this_0;
	// System.Object GameController/<Halt>c__IteratorE::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean GameController/<Halt>c__IteratorE::$disposing
	bool ___U24disposing_2;
	// System.Int32 GameController/<Halt>c__IteratorE::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CHaltU3Ec__IteratorE_t4199766070, ___U24this_0)); }
	inline GameController_t2330501625 * get_U24this_0() const { return ___U24this_0; }
	inline GameController_t2330501625 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(GameController_t2330501625 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CHaltU3Ec__IteratorE_t4199766070, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CHaltU3Ec__IteratorE_t4199766070, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CHaltU3Ec__IteratorE_t4199766070, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CHALTU3EC__ITERATORE_T4199766070_H
#ifndef U3CLOADAU3EC__ITERATORC_T606953003_H
#define U3CLOADAU3EC__ITERATORC_T606953003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<LoadA>c__IteratorC
struct  U3CLoadAU3Ec__IteratorC_t606953003  : public RuntimeObject
{
public:
	// System.Int32 GameController/<LoadA>c__IteratorC::addr
	int32_t ___addr_0;
	// System.Int32 GameController/<LoadA>c__IteratorC::<addressValue>__0
	int32_t ___U3CaddressValueU3E__0_1;
	// GameController GameController/<LoadA>c__IteratorC::$this
	GameController_t2330501625 * ___U24this_2;
	// System.Object GameController/<LoadA>c__IteratorC::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean GameController/<LoadA>c__IteratorC::$disposing
	bool ___U24disposing_4;
	// System.Int32 GameController/<LoadA>c__IteratorC::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(U3CLoadAU3Ec__IteratorC_t606953003, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_U3CaddressValueU3E__0_1() { return static_cast<int32_t>(offsetof(U3CLoadAU3Ec__IteratorC_t606953003, ___U3CaddressValueU3E__0_1)); }
	inline int32_t get_U3CaddressValueU3E__0_1() const { return ___U3CaddressValueU3E__0_1; }
	inline int32_t* get_address_of_U3CaddressValueU3E__0_1() { return &___U3CaddressValueU3E__0_1; }
	inline void set_U3CaddressValueU3E__0_1(int32_t value)
	{
		___U3CaddressValueU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CLoadAU3Ec__IteratorC_t606953003, ___U24this_2)); }
	inline GameController_t2330501625 * get_U24this_2() const { return ___U24this_2; }
	inline GameController_t2330501625 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(GameController_t2330501625 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CLoadAU3Ec__IteratorC_t606953003, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CLoadAU3Ec__IteratorC_t606953003, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CLoadAU3Ec__IteratorC_t606953003, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADAU3EC__ITERATORC_T606953003_H
#ifndef U3CLOADBU3EC__ITERATORD_T607250828_H
#define U3CLOADBU3EC__ITERATORD_T607250828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<LoadB>c__IteratorD
struct  U3CLoadBU3Ec__IteratorD_t607250828  : public RuntimeObject
{
public:
	// System.Int32 GameController/<LoadB>c__IteratorD::addr
	int32_t ___addr_0;
	// System.Int32 GameController/<LoadB>c__IteratorD::<addressValue>__0
	int32_t ___U3CaddressValueU3E__0_1;
	// GameController GameController/<LoadB>c__IteratorD::$this
	GameController_t2330501625 * ___U24this_2;
	// System.Object GameController/<LoadB>c__IteratorD::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean GameController/<LoadB>c__IteratorD::$disposing
	bool ___U24disposing_4;
	// System.Int32 GameController/<LoadB>c__IteratorD::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(U3CLoadBU3Ec__IteratorD_t607250828, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_U3CaddressValueU3E__0_1() { return static_cast<int32_t>(offsetof(U3CLoadBU3Ec__IteratorD_t607250828, ___U3CaddressValueU3E__0_1)); }
	inline int32_t get_U3CaddressValueU3E__0_1() const { return ___U3CaddressValueU3E__0_1; }
	inline int32_t* get_address_of_U3CaddressValueU3E__0_1() { return &___U3CaddressValueU3E__0_1; }
	inline void set_U3CaddressValueU3E__0_1(int32_t value)
	{
		___U3CaddressValueU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CLoadBU3Ec__IteratorD_t607250828, ___U24this_2)); }
	inline GameController_t2330501625 * get_U24this_2() const { return ___U24this_2; }
	inline GameController_t2330501625 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(GameController_t2330501625 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CLoadBU3Ec__IteratorD_t607250828, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CLoadBU3Ec__IteratorD_t607250828, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CLoadBU3Ec__IteratorD_t607250828, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADBU3EC__ITERATORD_T607250828_H
#ifndef U3CMULTU3EC__ITERATOR2_T1074165843_H
#define U3CMULTU3EC__ITERATOR2_T1074165843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Mult>c__Iterator2
struct  U3CMultU3Ec__Iterator2_t1074165843  : public RuntimeObject
{
public:
	// System.Int32 GameController/<Mult>c__Iterator2::<a>__0
	int32_t ___U3CaU3E__0_0;
	// System.Int32 GameController/<Mult>c__Iterator2::<b>__0
	int32_t ___U3CbU3E__0_1;
	// System.Int32 GameController/<Mult>c__Iterator2::<ans>__0
	int32_t ___U3CansU3E__0_2;
	// GameController GameController/<Mult>c__Iterator2::$this
	GameController_t2330501625 * ___U24this_3;
	// System.Object GameController/<Mult>c__Iterator2::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean GameController/<Mult>c__Iterator2::$disposing
	bool ___U24disposing_5;
	// System.Int32 GameController/<Mult>c__Iterator2::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CaU3E__0_0() { return static_cast<int32_t>(offsetof(U3CMultU3Ec__Iterator2_t1074165843, ___U3CaU3E__0_0)); }
	inline int32_t get_U3CaU3E__0_0() const { return ___U3CaU3E__0_0; }
	inline int32_t* get_address_of_U3CaU3E__0_0() { return &___U3CaU3E__0_0; }
	inline void set_U3CaU3E__0_0(int32_t value)
	{
		___U3CaU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E__0_1() { return static_cast<int32_t>(offsetof(U3CMultU3Ec__Iterator2_t1074165843, ___U3CbU3E__0_1)); }
	inline int32_t get_U3CbU3E__0_1() const { return ___U3CbU3E__0_1; }
	inline int32_t* get_address_of_U3CbU3E__0_1() { return &___U3CbU3E__0_1; }
	inline void set_U3CbU3E__0_1(int32_t value)
	{
		___U3CbU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CansU3E__0_2() { return static_cast<int32_t>(offsetof(U3CMultU3Ec__Iterator2_t1074165843, ___U3CansU3E__0_2)); }
	inline int32_t get_U3CansU3E__0_2() const { return ___U3CansU3E__0_2; }
	inline int32_t* get_address_of_U3CansU3E__0_2() { return &___U3CansU3E__0_2; }
	inline void set_U3CansU3E__0_2(int32_t value)
	{
		___U3CansU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CMultU3Ec__Iterator2_t1074165843, ___U24this_3)); }
	inline GameController_t2330501625 * get_U24this_3() const { return ___U24this_3; }
	inline GameController_t2330501625 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GameController_t2330501625 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CMultU3Ec__Iterator2_t1074165843, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CMultU3Ec__Iterator2_t1074165843, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CMultU3Ec__Iterator2_t1074165843, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMULTU3EC__ITERATOR2_T1074165843_H
#ifndef U3CMULT_DIRECTU3EC__ITERATOR9_T1002618766_H
#define U3CMULT_DIRECTU3EC__ITERATOR9_T1002618766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Mult_direct>c__Iterator9
struct  U3CMult_directU3Ec__Iterator9_t1002618766  : public RuntimeObject
{
public:
	// System.Int32 GameController/<Mult_direct>c__Iterator9::<a>__0
	int32_t ___U3CaU3E__0_0;
	// System.Int32 GameController/<Mult_direct>c__Iterator9::value
	int32_t ___value_1;
	// System.Int32 GameController/<Mult_direct>c__Iterator9::<ans>__0
	int32_t ___U3CansU3E__0_2;
	// GameController GameController/<Mult_direct>c__Iterator9::$this
	GameController_t2330501625 * ___U24this_3;
	// System.Object GameController/<Mult_direct>c__Iterator9::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean GameController/<Mult_direct>c__Iterator9::$disposing
	bool ___U24disposing_5;
	// System.Int32 GameController/<Mult_direct>c__Iterator9::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CaU3E__0_0() { return static_cast<int32_t>(offsetof(U3CMult_directU3Ec__Iterator9_t1002618766, ___U3CaU3E__0_0)); }
	inline int32_t get_U3CaU3E__0_0() const { return ___U3CaU3E__0_0; }
	inline int32_t* get_address_of_U3CaU3E__0_0() { return &___U3CaU3E__0_0; }
	inline void set_U3CaU3E__0_0(int32_t value)
	{
		___U3CaU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(U3CMult_directU3Ec__Iterator9_t1002618766, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_U3CansU3E__0_2() { return static_cast<int32_t>(offsetof(U3CMult_directU3Ec__Iterator9_t1002618766, ___U3CansU3E__0_2)); }
	inline int32_t get_U3CansU3E__0_2() const { return ___U3CansU3E__0_2; }
	inline int32_t* get_address_of_U3CansU3E__0_2() { return &___U3CansU3E__0_2; }
	inline void set_U3CansU3E__0_2(int32_t value)
	{
		___U3CansU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CMult_directU3Ec__Iterator9_t1002618766, ___U24this_3)); }
	inline GameController_t2330501625 * get_U24this_3() const { return ___U24this_3; }
	inline GameController_t2330501625 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GameController_t2330501625 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CMult_directU3Ec__Iterator9_t1002618766, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CMult_directU3Ec__Iterator9_t1002618766, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CMult_directU3Ec__Iterator9_t1002618766, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMULT_DIRECTU3EC__ITERATOR9_T1002618766_H
#ifndef U3CNOOPU3EC__ITERATOR6_T1304308506_H
#define U3CNOOPU3EC__ITERATOR6_T1304308506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Noop>c__Iterator6
struct  U3CNoopU3Ec__Iterator6_t1304308506  : public RuntimeObject
{
public:
	// System.Object GameController/<Noop>c__Iterator6::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean GameController/<Noop>c__Iterator6::$disposing
	bool ___U24disposing_1;
	// System.Int32 GameController/<Noop>c__Iterator6::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CNoopU3Ec__Iterator6_t1304308506, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CNoopU3Ec__Iterator6_t1304308506, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CNoopU3Ec__Iterator6_t1304308506, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNOOPU3EC__ITERATOR6_T1304308506_H
#ifndef U3CRUNSINGLECOMMANDU3EC__ITERATORF_T1661767859_H
#define U3CRUNSINGLECOMMANDU3EC__ITERATORF_T1661767859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<RunSingleCommand>c__IteratorF
struct  U3CRunSingleCommandU3Ec__IteratorF_t1661767859  : public RuntimeObject
{
public:
	// System.Int32 GameController/<RunSingleCommand>c__IteratorF::<pc>__0
	int32_t ___U3CpcU3E__0_0;
	// System.Int32 GameController/<RunSingleCommand>c__IteratorF::<addressValue>__0
	int32_t ___U3CaddressValueU3E__0_1;
	// System.Int32 GameController/<RunSingleCommand>c__IteratorF::<instruction>__0
	int32_t ___U3CinstructionU3E__0_2;
	// System.Int32 GameController/<RunSingleCommand>c__IteratorF::<arg>__0
	int32_t ___U3CargU3E__0_3;
	// System.Int32 GameController/<RunSingleCommand>c__IteratorF::<HALT>__0
	int32_t ___U3CHALTU3E__0_4;
	// GameController GameController/<RunSingleCommand>c__IteratorF::$this
	GameController_t2330501625 * ___U24this_5;
	// System.Object GameController/<RunSingleCommand>c__IteratorF::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean GameController/<RunSingleCommand>c__IteratorF::$disposing
	bool ___U24disposing_7;
	// System.Int32 GameController/<RunSingleCommand>c__IteratorF::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3CpcU3E__0_0() { return static_cast<int32_t>(offsetof(U3CRunSingleCommandU3Ec__IteratorF_t1661767859, ___U3CpcU3E__0_0)); }
	inline int32_t get_U3CpcU3E__0_0() const { return ___U3CpcU3E__0_0; }
	inline int32_t* get_address_of_U3CpcU3E__0_0() { return &___U3CpcU3E__0_0; }
	inline void set_U3CpcU3E__0_0(int32_t value)
	{
		___U3CpcU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CaddressValueU3E__0_1() { return static_cast<int32_t>(offsetof(U3CRunSingleCommandU3Ec__IteratorF_t1661767859, ___U3CaddressValueU3E__0_1)); }
	inline int32_t get_U3CaddressValueU3E__0_1() const { return ___U3CaddressValueU3E__0_1; }
	inline int32_t* get_address_of_U3CaddressValueU3E__0_1() { return &___U3CaddressValueU3E__0_1; }
	inline void set_U3CaddressValueU3E__0_1(int32_t value)
	{
		___U3CaddressValueU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CinstructionU3E__0_2() { return static_cast<int32_t>(offsetof(U3CRunSingleCommandU3Ec__IteratorF_t1661767859, ___U3CinstructionU3E__0_2)); }
	inline int32_t get_U3CinstructionU3E__0_2() const { return ___U3CinstructionU3E__0_2; }
	inline int32_t* get_address_of_U3CinstructionU3E__0_2() { return &___U3CinstructionU3E__0_2; }
	inline void set_U3CinstructionU3E__0_2(int32_t value)
	{
		___U3CinstructionU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CargU3E__0_3() { return static_cast<int32_t>(offsetof(U3CRunSingleCommandU3Ec__IteratorF_t1661767859, ___U3CargU3E__0_3)); }
	inline int32_t get_U3CargU3E__0_3() const { return ___U3CargU3E__0_3; }
	inline int32_t* get_address_of_U3CargU3E__0_3() { return &___U3CargU3E__0_3; }
	inline void set_U3CargU3E__0_3(int32_t value)
	{
		___U3CargU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3CHALTU3E__0_4() { return static_cast<int32_t>(offsetof(U3CRunSingleCommandU3Ec__IteratorF_t1661767859, ___U3CHALTU3E__0_4)); }
	inline int32_t get_U3CHALTU3E__0_4() const { return ___U3CHALTU3E__0_4; }
	inline int32_t* get_address_of_U3CHALTU3E__0_4() { return &___U3CHALTU3E__0_4; }
	inline void set_U3CHALTU3E__0_4(int32_t value)
	{
		___U3CHALTU3E__0_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CRunSingleCommandU3Ec__IteratorF_t1661767859, ___U24this_5)); }
	inline GameController_t2330501625 * get_U24this_5() const { return ___U24this_5; }
	inline GameController_t2330501625 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(GameController_t2330501625 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CRunSingleCommandU3Ec__IteratorF_t1661767859, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CRunSingleCommandU3Ec__IteratorF_t1661767859, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CRunSingleCommandU3Ec__IteratorF_t1661767859, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRUNSINGLECOMMANDU3EC__ITERATORF_T1661767859_H
#ifndef U3CSTOREAU3EC__ITERATORB_T2675201460_H
#define U3CSTOREAU3EC__ITERATORB_T2675201460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<StoreA>c__IteratorB
struct  U3CStoreAU3Ec__IteratorB_t2675201460  : public RuntimeObject
{
public:
	// System.Int32 GameController/<StoreA>c__IteratorB::addr
	int32_t ___addr_0;
	// System.Int32 GameController/<StoreA>c__IteratorB::<a>__0
	int32_t ___U3CaU3E__0_1;
	// GameController GameController/<StoreA>c__IteratorB::$this
	GameController_t2330501625 * ___U24this_2;
	// System.Object GameController/<StoreA>c__IteratorB::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean GameController/<StoreA>c__IteratorB::$disposing
	bool ___U24disposing_4;
	// System.Int32 GameController/<StoreA>c__IteratorB::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(U3CStoreAU3Ec__IteratorB_t2675201460, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_U3CaU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStoreAU3Ec__IteratorB_t2675201460, ___U3CaU3E__0_1)); }
	inline int32_t get_U3CaU3E__0_1() const { return ___U3CaU3E__0_1; }
	inline int32_t* get_address_of_U3CaU3E__0_1() { return &___U3CaU3E__0_1; }
	inline void set_U3CaU3E__0_1(int32_t value)
	{
		___U3CaU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CStoreAU3Ec__IteratorB_t2675201460, ___U24this_2)); }
	inline GameController_t2330501625 * get_U24this_2() const { return ___U24this_2; }
	inline GameController_t2330501625 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(GameController_t2330501625 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStoreAU3Ec__IteratorB_t2675201460, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStoreAU3Ec__IteratorB_t2675201460, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStoreAU3Ec__IteratorB_t2675201460, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTOREAU3EC__ITERATORB_T2675201460_H
#ifndef U3CSUBU3EC__ITERATOR1_T3982968060_H
#define U3CSUBU3EC__ITERATOR1_T3982968060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Sub>c__Iterator1
struct  U3CSubU3Ec__Iterator1_t3982968060  : public RuntimeObject
{
public:
	// System.Int32 GameController/<Sub>c__Iterator1::<a>__0
	int32_t ___U3CaU3E__0_0;
	// System.Int32 GameController/<Sub>c__Iterator1::<b>__0
	int32_t ___U3CbU3E__0_1;
	// System.Int32 GameController/<Sub>c__Iterator1::<ans>__0
	int32_t ___U3CansU3E__0_2;
	// GameController GameController/<Sub>c__Iterator1::$this
	GameController_t2330501625 * ___U24this_3;
	// System.Object GameController/<Sub>c__Iterator1::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean GameController/<Sub>c__Iterator1::$disposing
	bool ___U24disposing_5;
	// System.Int32 GameController/<Sub>c__Iterator1::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CaU3E__0_0() { return static_cast<int32_t>(offsetof(U3CSubU3Ec__Iterator1_t3982968060, ___U3CaU3E__0_0)); }
	inline int32_t get_U3CaU3E__0_0() const { return ___U3CaU3E__0_0; }
	inline int32_t* get_address_of_U3CaU3E__0_0() { return &___U3CaU3E__0_0; }
	inline void set_U3CaU3E__0_0(int32_t value)
	{
		___U3CaU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E__0_1() { return static_cast<int32_t>(offsetof(U3CSubU3Ec__Iterator1_t3982968060, ___U3CbU3E__0_1)); }
	inline int32_t get_U3CbU3E__0_1() const { return ___U3CbU3E__0_1; }
	inline int32_t* get_address_of_U3CbU3E__0_1() { return &___U3CbU3E__0_1; }
	inline void set_U3CbU3E__0_1(int32_t value)
	{
		___U3CbU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CansU3E__0_2() { return static_cast<int32_t>(offsetof(U3CSubU3Ec__Iterator1_t3982968060, ___U3CansU3E__0_2)); }
	inline int32_t get_U3CansU3E__0_2() const { return ___U3CansU3E__0_2; }
	inline int32_t* get_address_of_U3CansU3E__0_2() { return &___U3CansU3E__0_2; }
	inline void set_U3CansU3E__0_2(int32_t value)
	{
		___U3CansU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CSubU3Ec__Iterator1_t3982968060, ___U24this_3)); }
	inline GameController_t2330501625 * get_U24this_3() const { return ___U24this_3; }
	inline GameController_t2330501625 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GameController_t2330501625 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CSubU3Ec__Iterator1_t3982968060, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CSubU3Ec__Iterator1_t3982968060, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CSubU3Ec__Iterator1_t3982968060, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSUBU3EC__ITERATOR1_T3982968060_H
#ifndef U3CSUB_DIRECTU3EC__ITERATOR8_T3735332119_H
#define U3CSUB_DIRECTU3EC__ITERATOR8_T3735332119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Sub_direct>c__Iterator8
struct  U3CSub_directU3Ec__Iterator8_t3735332119  : public RuntimeObject
{
public:
	// System.Int32 GameController/<Sub_direct>c__Iterator8::<a>__0
	int32_t ___U3CaU3E__0_0;
	// System.Int32 GameController/<Sub_direct>c__Iterator8::value
	int32_t ___value_1;
	// System.Int32 GameController/<Sub_direct>c__Iterator8::<ans>__0
	int32_t ___U3CansU3E__0_2;
	// GameController GameController/<Sub_direct>c__Iterator8::$this
	GameController_t2330501625 * ___U24this_3;
	// System.Object GameController/<Sub_direct>c__Iterator8::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean GameController/<Sub_direct>c__Iterator8::$disposing
	bool ___U24disposing_5;
	// System.Int32 GameController/<Sub_direct>c__Iterator8::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CaU3E__0_0() { return static_cast<int32_t>(offsetof(U3CSub_directU3Ec__Iterator8_t3735332119, ___U3CaU3E__0_0)); }
	inline int32_t get_U3CaU3E__0_0() const { return ___U3CaU3E__0_0; }
	inline int32_t* get_address_of_U3CaU3E__0_0() { return &___U3CaU3E__0_0; }
	inline void set_U3CaU3E__0_0(int32_t value)
	{
		___U3CaU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(U3CSub_directU3Ec__Iterator8_t3735332119, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_U3CansU3E__0_2() { return static_cast<int32_t>(offsetof(U3CSub_directU3Ec__Iterator8_t3735332119, ___U3CansU3E__0_2)); }
	inline int32_t get_U3CansU3E__0_2() const { return ___U3CansU3E__0_2; }
	inline int32_t* get_address_of_U3CansU3E__0_2() { return &___U3CansU3E__0_2; }
	inline void set_U3CansU3E__0_2(int32_t value)
	{
		___U3CansU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CSub_directU3Ec__Iterator8_t3735332119, ___U24this_3)); }
	inline GameController_t2330501625 * get_U24this_3() const { return ___U24this_3; }
	inline GameController_t2330501625 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GameController_t2330501625 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CSub_directU3Ec__Iterator8_t3735332119, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CSub_directU3Ec__Iterator8_t3735332119, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CSub_directU3Ec__Iterator8_t3735332119, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSUB_DIRECTU3EC__ITERATOR8_T3735332119_H
#ifndef U3CNAVTOCELLU3EC__ITERATOR3_T181564031_H
#define U3CNAVTOCELLU3EC__ITERATOR3_T181564031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MemoryRetriever/<NavToCell>c__Iterator3
struct  U3CNavToCellU3Ec__Iterator3_t181564031  : public RuntimeObject
{
public:
	// MemoryCellController MemoryRetriever/<NavToCell>c__Iterator3::cell
	MemoryCellController_t341130527 * ___cell_0;
	// MemoryRetriever MemoryRetriever/<NavToCell>c__Iterator3::$this
	MemoryRetriever_t2760707818 * ___U24this_1;
	// System.Object MemoryRetriever/<NavToCell>c__Iterator3::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean MemoryRetriever/<NavToCell>c__Iterator3::$disposing
	bool ___U24disposing_3;
	// System.Int32 MemoryRetriever/<NavToCell>c__Iterator3::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_cell_0() { return static_cast<int32_t>(offsetof(U3CNavToCellU3Ec__Iterator3_t181564031, ___cell_0)); }
	inline MemoryCellController_t341130527 * get_cell_0() const { return ___cell_0; }
	inline MemoryCellController_t341130527 ** get_address_of_cell_0() { return &___cell_0; }
	inline void set_cell_0(MemoryCellController_t341130527 * value)
	{
		___cell_0 = value;
		Il2CppCodeGenWriteBarrier((&___cell_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CNavToCellU3Ec__Iterator3_t181564031, ___U24this_1)); }
	inline MemoryRetriever_t2760707818 * get_U24this_1() const { return ___U24this_1; }
	inline MemoryRetriever_t2760707818 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(MemoryRetriever_t2760707818 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CNavToCellU3Ec__Iterator3_t181564031, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CNavToCellU3Ec__Iterator3_t181564031, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CNavToCellU3Ec__Iterator3_t181564031, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNAVTOCELLU3EC__ITERATOR3_T181564031_H
#ifndef U3CREADREGISTERU3EC__ITERATOR1_T3336726364_H
#define U3CREADREGISTERU3EC__ITERATOR1_T3336726364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MemoryRetriever/<ReadRegister>c__Iterator1
struct  U3CReadRegisterU3Ec__Iterator1_t3336726364  : public RuntimeObject
{
public:
	// MemoryCellController[] MemoryRetriever/<ReadRegister>c__Iterator1::cells
	MemoryCellControllerU5BU5D_t1776215942* ___cells_0;
	// MemoryCellController[] MemoryRetriever/<ReadRegister>c__Iterator1::$locvar0
	MemoryCellControllerU5BU5D_t1776215942* ___U24locvar0_1;
	// System.Int32 MemoryRetriever/<ReadRegister>c__Iterator1::$locvar1
	int32_t ___U24locvar1_2;
	// MemoryCellController MemoryRetriever/<ReadRegister>c__Iterator1::<cell>__1
	MemoryCellController_t341130527 * ___U3CcellU3E__1_3;
	// MemoryRetriever MemoryRetriever/<ReadRegister>c__Iterator1::$this
	MemoryRetriever_t2760707818 * ___U24this_4;
	// System.Object MemoryRetriever/<ReadRegister>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean MemoryRetriever/<ReadRegister>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 MemoryRetriever/<ReadRegister>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_cells_0() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t3336726364, ___cells_0)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_cells_0() const { return ___cells_0; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_cells_0() { return &___cells_0; }
	inline void set_cells_0(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___cells_0 = value;
		Il2CppCodeGenWriteBarrier((&___cells_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t3336726364, ___U24locvar0_1)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t3336726364, ___U24locvar1_2)); }
	inline int32_t get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline int32_t* get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(int32_t value)
	{
		___U24locvar1_2 = value;
	}

	inline static int32_t get_offset_of_U3CcellU3E__1_3() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t3336726364, ___U3CcellU3E__1_3)); }
	inline MemoryCellController_t341130527 * get_U3CcellU3E__1_3() const { return ___U3CcellU3E__1_3; }
	inline MemoryCellController_t341130527 ** get_address_of_U3CcellU3E__1_3() { return &___U3CcellU3E__1_3; }
	inline void set_U3CcellU3E__1_3(MemoryCellController_t341130527 * value)
	{
		___U3CcellU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcellU3E__1_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t3336726364, ___U24this_4)); }
	inline MemoryRetriever_t2760707818 * get_U24this_4() const { return ___U24this_4; }
	inline MemoryRetriever_t2760707818 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(MemoryRetriever_t2760707818 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t3336726364, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t3336726364, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t3336726364, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREADREGISTERU3EC__ITERATOR1_T3336726364_H
#ifndef U3CWRITEREGISTERU3EC__ITERATOR2_T4073638105_H
#define U3CWRITEREGISTERU3EC__ITERATOR2_T4073638105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MemoryRetriever/<WriteRegister>c__Iterator2
struct  U3CWriteRegisterU3Ec__Iterator2_t4073638105  : public RuntimeObject
{
public:
	// MemoryCellController[] MemoryRetriever/<WriteRegister>c__Iterator2::cells
	MemoryCellControllerU5BU5D_t1776215942* ___cells_0;
	// System.Int32 MemoryRetriever/<WriteRegister>c__Iterator2::<packets>__0
	int32_t ___U3CpacketsU3E__0_1;
	// System.Int32 MemoryRetriever/<WriteRegister>c__Iterator2::<mask>__0
	int32_t ___U3CmaskU3E__0_2;
	// System.Int32 MemoryRetriever/<WriteRegister>c__Iterator2::<p>__1
	int32_t ___U3CpU3E__1_3;
	// System.Int32 MemoryRetriever/<WriteRegister>c__Iterator2::value
	int32_t ___value_4;
	// System.Int32 MemoryRetriever/<WriteRegister>c__Iterator2::<v>__2
	int32_t ___U3CvU3E__2_5;
	// MemoryCellController MemoryRetriever/<WriteRegister>c__Iterator2::<cell>__2
	MemoryCellController_t341130527 * ___U3CcellU3E__2_6;
	// MemoryRetriever MemoryRetriever/<WriteRegister>c__Iterator2::$this
	MemoryRetriever_t2760707818 * ___U24this_7;
	// System.Object MemoryRetriever/<WriteRegister>c__Iterator2::$current
	RuntimeObject * ___U24current_8;
	// System.Boolean MemoryRetriever/<WriteRegister>c__Iterator2::$disposing
	bool ___U24disposing_9;
	// System.Int32 MemoryRetriever/<WriteRegister>c__Iterator2::$PC
	int32_t ___U24PC_10;

public:
	inline static int32_t get_offset_of_cells_0() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t4073638105, ___cells_0)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_cells_0() const { return ___cells_0; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_cells_0() { return &___cells_0; }
	inline void set_cells_0(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___cells_0 = value;
		Il2CppCodeGenWriteBarrier((&___cells_0), value);
	}

	inline static int32_t get_offset_of_U3CpacketsU3E__0_1() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t4073638105, ___U3CpacketsU3E__0_1)); }
	inline int32_t get_U3CpacketsU3E__0_1() const { return ___U3CpacketsU3E__0_1; }
	inline int32_t* get_address_of_U3CpacketsU3E__0_1() { return &___U3CpacketsU3E__0_1; }
	inline void set_U3CpacketsU3E__0_1(int32_t value)
	{
		___U3CpacketsU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CmaskU3E__0_2() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t4073638105, ___U3CmaskU3E__0_2)); }
	inline int32_t get_U3CmaskU3E__0_2() const { return ___U3CmaskU3E__0_2; }
	inline int32_t* get_address_of_U3CmaskU3E__0_2() { return &___U3CmaskU3E__0_2; }
	inline void set_U3CmaskU3E__0_2(int32_t value)
	{
		___U3CmaskU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CpU3E__1_3() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t4073638105, ___U3CpU3E__1_3)); }
	inline int32_t get_U3CpU3E__1_3() const { return ___U3CpU3E__1_3; }
	inline int32_t* get_address_of_U3CpU3E__1_3() { return &___U3CpU3E__1_3; }
	inline void set_U3CpU3E__1_3(int32_t value)
	{
		___U3CpU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t4073638105, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}

	inline static int32_t get_offset_of_U3CvU3E__2_5() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t4073638105, ___U3CvU3E__2_5)); }
	inline int32_t get_U3CvU3E__2_5() const { return ___U3CvU3E__2_5; }
	inline int32_t* get_address_of_U3CvU3E__2_5() { return &___U3CvU3E__2_5; }
	inline void set_U3CvU3E__2_5(int32_t value)
	{
		___U3CvU3E__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CcellU3E__2_6() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t4073638105, ___U3CcellU3E__2_6)); }
	inline MemoryCellController_t341130527 * get_U3CcellU3E__2_6() const { return ___U3CcellU3E__2_6; }
	inline MemoryCellController_t341130527 ** get_address_of_U3CcellU3E__2_6() { return &___U3CcellU3E__2_6; }
	inline void set_U3CcellU3E__2_6(MemoryCellController_t341130527 * value)
	{
		___U3CcellU3E__2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcellU3E__2_6), value);
	}

	inline static int32_t get_offset_of_U24this_7() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t4073638105, ___U24this_7)); }
	inline MemoryRetriever_t2760707818 * get_U24this_7() const { return ___U24this_7; }
	inline MemoryRetriever_t2760707818 ** get_address_of_U24this_7() { return &___U24this_7; }
	inline void set_U24this_7(MemoryRetriever_t2760707818 * value)
	{
		___U24this_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_7), value);
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t4073638105, ___U24current_8)); }
	inline RuntimeObject * get_U24current_8() const { return ___U24current_8; }
	inline RuntimeObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(RuntimeObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_8), value);
	}

	inline static int32_t get_offset_of_U24disposing_9() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t4073638105, ___U24disposing_9)); }
	inline bool get_U24disposing_9() const { return ___U24disposing_9; }
	inline bool* get_address_of_U24disposing_9() { return &___U24disposing_9; }
	inline void set_U24disposing_9(bool value)
	{
		___U24disposing_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t4073638105, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWRITEREGISTERU3EC__ITERATOR2_T4073638105_H
#ifndef U3CSHOWSCOREU3EC__ITERATOR0_T3828744793_H
#define U3CSHOWSCOREU3EC__ITERATOR0_T3828744793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreController/<ShowScore>c__Iterator0
struct  U3CShowScoreU3Ec__Iterator0_t3828744793  : public RuntimeObject
{
public:
	// System.String ScoreController/<ShowScore>c__Iterator0::<m>__0
	String_t* ___U3CmU3E__0_0;
	// ScoreController/Promise ScoreController/<ShowScore>c__Iterator0::callback
	Promise_t592223531 * ___callback_1;
	// ScoreController ScoreController/<ShowScore>c__Iterator0::$this
	ScoreController_t484565259 * ___U24this_2;
	// System.Object ScoreController/<ShowScore>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean ScoreController/<ShowScore>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 ScoreController/<ShowScore>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CmU3E__0_0() { return static_cast<int32_t>(offsetof(U3CShowScoreU3Ec__Iterator0_t3828744793, ___U3CmU3E__0_0)); }
	inline String_t* get_U3CmU3E__0_0() const { return ___U3CmU3E__0_0; }
	inline String_t** get_address_of_U3CmU3E__0_0() { return &___U3CmU3E__0_0; }
	inline void set_U3CmU3E__0_0(String_t* value)
	{
		___U3CmU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmU3E__0_0), value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CShowScoreU3Ec__Iterator0_t3828744793, ___callback_1)); }
	inline Promise_t592223531 * get_callback_1() const { return ___callback_1; }
	inline Promise_t592223531 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Promise_t592223531 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CShowScoreU3Ec__Iterator0_t3828744793, ___U24this_2)); }
	inline ScoreController_t484565259 * get_U24this_2() const { return ___U24this_2; }
	inline ScoreController_t484565259 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(ScoreController_t484565259 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CShowScoreU3Ec__Iterator0_t3828744793, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CShowScoreU3Ec__Iterator0_t3828744793, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CShowScoreU3Ec__Iterator0_t3828744793, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHOWSCOREU3EC__ITERATOR0_T3828744793_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T336392811_H
#define DICTIONARY_2_T336392811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<AudioType,UnityEngine.AudioClip>
struct  Dictionary_2_t336392811  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	AudioTypeU5BU5D_t2447003483* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	AudioClipU5BU5D_t143221404* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t336392811, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t336392811, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t336392811, ___keySlots_6)); }
	inline AudioTypeU5BU5D_t2447003483* get_keySlots_6() const { return ___keySlots_6; }
	inline AudioTypeU5BU5D_t2447003483** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(AudioTypeU5BU5D_t2447003483* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t336392811, ___valueSlots_7)); }
	inline AudioClipU5BU5D_t143221404* get_valueSlots_7() const { return ___valueSlots_7; }
	inline AudioClipU5BU5D_t143221404** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(AudioClipU5BU5D_t143221404* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t336392811, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t336392811, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t336392811, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t336392811, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t336392811, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t336392811, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t336392811, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t336392811_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2267786181 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t336392811_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2267786181 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2267786181 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2267786181 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T336392811_H
#ifndef DICTIONARY_2_T755207947_H
#define DICTIONARY_2_T755207947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>
struct  Dictionary_2_t755207947  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ColorTypesU5BU5D_t438535719* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	List_1U5BU5D_t676833016* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t755207947, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t755207947, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t755207947, ___keySlots_6)); }
	inline ColorTypesU5BU5D_t438535719* get_keySlots_6() const { return ___keySlots_6; }
	inline ColorTypesU5BU5D_t438535719** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ColorTypesU5BU5D_t438535719* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t755207947, ___valueSlots_7)); }
	inline List_1U5BU5D_t676833016* get_valueSlots_7() const { return ___valueSlots_7; }
	inline List_1U5BU5D_t676833016** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(List_1U5BU5D_t676833016* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t755207947, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t755207947, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t755207947, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t755207947, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t755207947, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t755207947, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t755207947, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t755207947_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1702946981 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t755207947_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1702946981 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1702946981 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1702946981 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T755207947_H
#ifndef DICTIONARY_2_T3577345097_H
#define DICTIONARY_2_T3577345097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<ColorTypes,UnityEngine.Material>
struct  Dictionary_2_t3577345097  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ColorTypesU5BU5D_t438535719* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	MaterialU5BU5D_t561872642* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3577345097, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3577345097, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3577345097, ___keySlots_6)); }
	inline ColorTypesU5BU5D_t438535719* get_keySlots_6() const { return ___keySlots_6; }
	inline ColorTypesU5BU5D_t438535719** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ColorTypesU5BU5D_t438535719* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3577345097, ___valueSlots_7)); }
	inline MaterialU5BU5D_t561872642* get_valueSlots_7() const { return ___valueSlots_7; }
	inline MaterialU5BU5D_t561872642** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(MaterialU5BU5D_t561872642* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3577345097, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3577345097, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3577345097, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3577345097, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3577345097, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3577345097, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3577345097, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3577345097_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1587986607 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3577345097_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1587986607 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1587986607 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1587986607 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3577345097_H
#ifndef DICTIONARY_2_T2269235889_H
#define DICTIONARY_2_T2269235889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Register,MemoryCellController[]>
struct  Dictionary_2_t2269235889  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	RegisterU5BU5D_t1989552988* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	MemoryCellControllerU5BU5DU5BU5D_t1628363683* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2269235889, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2269235889, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2269235889, ___keySlots_6)); }
	inline RegisterU5BU5D_t1989552988* get_keySlots_6() const { return ___keySlots_6; }
	inline RegisterU5BU5D_t1989552988** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(RegisterU5BU5D_t1989552988* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2269235889, ___valueSlots_7)); }
	inline MemoryCellControllerU5BU5DU5BU5D_t1628363683* get_valueSlots_7() const { return ___valueSlots_7; }
	inline MemoryCellControllerU5BU5DU5BU5D_t1628363683** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(MemoryCellControllerU5BU5DU5BU5D_t1628363683* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2269235889, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2269235889, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2269235889, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2269235889, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2269235889, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2269235889, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2269235889, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2269235889_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1654193063 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2269235889_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1654193063 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1654193063 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1654193063 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2269235889_H
#ifndef DICTIONARY_2_T3269310253_H
#define DICTIONARY_2_T3269310253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,GameController/Instruction>
struct  Dictionary_2_t3269310253  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	InstructionU5BU5D_t2773487903* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3269310253, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3269310253, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3269310253, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3269310253, ___valueSlots_7)); }
	inline InstructionU5BU5D_t2773487903* get_valueSlots_7() const { return ___valueSlots_7; }
	inline InstructionU5BU5D_t2773487903** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(InstructionU5BU5D_t2773487903* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3269310253, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3269310253, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3269310253, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3269310253, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3269310253, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3269310253, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3269310253, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3269310253_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2377826747 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3269310253_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2377826747 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2377826747 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2377826747 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3269310253_H
#ifndef DICTIONARY_2_T736164020_H
#define DICTIONARY_2_T736164020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct  Dictionary_2_t736164020  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t736164020_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t886128184 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t886128184 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t886128184 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t886128184 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T736164020_H
#ifndef DICTIONARY_2_T2736202052_H
#define DICTIONARY_2_T2736202052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_t2736202052  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2736202052_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3530625384 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3530625384 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3530625384 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3530625384 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2736202052_H
#ifndef LIST_1_T599095547_H
#define LIST_1_T599095547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ICellListener>
struct  List_1_t599095547  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ICellListenerU5BU5D_t1030919496* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t599095547, ____items_1)); }
	inline ICellListenerU5BU5D_t1030919496* get__items_1() const { return ____items_1; }
	inline ICellListenerU5BU5D_t1030919496** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ICellListenerU5BU5D_t1030919496* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t599095547, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t599095547, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t599095547_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ICellListenerU5BU5D_t1030919496* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t599095547_StaticFields, ___EmptyArray_4)); }
	inline ICellListenerU5BU5D_t1030919496* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ICellListenerU5BU5D_t1030919496** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ICellListenerU5BU5D_t1030919496* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T599095547_H
#ifndef LIST_1_T1813205269_H
#define LIST_1_T1813205269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<MemoryCellController>
struct  List_1_t1813205269  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MemoryCellControllerU5BU5D_t1776215942* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1813205269, ____items_1)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get__items_1() const { return ____items_1; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1813205269, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1813205269, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1813205269_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MemoryCellControllerU5BU5D_t1776215942* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1813205269_StaticFields, ___EmptyArray_4)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1813205269_H
#ifndef LIST_1_T3248290684_H
#define LIST_1_T3248290684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<MemoryCellController[]>
struct  List_1_t3248290684  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MemoryCellControllerU5BU5DU5BU5D_t1628363683* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3248290684, ____items_1)); }
	inline MemoryCellControllerU5BU5DU5BU5D_t1628363683* get__items_1() const { return ____items_1; }
	inline MemoryCellControllerU5BU5DU5BU5D_t1628363683** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemoryCellControllerU5BU5DU5BU5D_t1628363683* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3248290684, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3248290684, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3248290684_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MemoryCellControllerU5BU5DU5BU5D_t1628363683* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3248290684_StaticFields, ___EmptyArray_4)); }
	inline MemoryCellControllerU5BU5DU5BU5D_t1628363683* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MemoryCellControllerU5BU5DU5BU5D_t1628363683** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MemoryCellControllerU5BU5DU5BU5D_t1628363683* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3248290684_H
#ifndef LIST_1_T4057786103_H
#define LIST_1_T4057786103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct  List_1_t4057786103  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t2229216220* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4057786103, ____items_1)); }
	inline List_1U5BU5D_t2229216220* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t2229216220** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t2229216220* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4057786103, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4057786103, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4057786103_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	List_1U5BU5D_t2229216220* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4057786103_StaticFields, ___EmptyArray_4)); }
	inline List_1U5BU5D_t2229216220* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline List_1U5BU5D_t2229216220** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(List_1U5BU5D_t2229216220* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4057786103_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef U24ARRAYTYPEU3D24_T2467506693_H
#define U24ARRAYTYPEU3D24_T2467506693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t2467506693 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t2467506693__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T2467506693_H
#ifndef U24ARRAYTYPEU3D64_T498138225_H
#define U24ARRAYTYPEU3D64_T498138225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=64
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D64_t498138225 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D64_t498138225__padding[64];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D64_T498138225_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUMERATOR_T2488339424_H
#define ENUMERATOR_T2488339424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<ICellListener>
struct  Enumerator_t2488339424 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t599095547 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2488339424, ___l_0)); }
	inline List_1_t599095547 * get_l_0() const { return ___l_0; }
	inline List_1_t599095547 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t599095547 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2488339424, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2488339424, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2488339424, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2488339424_H
#ifndef ENUMERATOR_T3702449146_H
#define ENUMERATOR_T3702449146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<MemoryCellController>
struct  Enumerator_t3702449146 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1813205269 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	MemoryCellController_t341130527 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3702449146, ___l_0)); }
	inline List_1_t1813205269 * get_l_0() const { return ___l_0; }
	inline List_1_t1813205269 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1813205269 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3702449146, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3702449146, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3702449146, ___current_3)); }
	inline MemoryCellController_t341130527 * get_current_3() const { return ___current_3; }
	inline MemoryCellController_t341130527 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MemoryCellController_t341130527 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3702449146_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_3)); }
	inline Vector3_t3722313464  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t3722313464  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_4)); }
	inline Vector3_t3722313464  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t3722313464 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t3722313464  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_5)); }
	inline Vector3_t3722313464  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t3722313464 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t3722313464  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_6)); }
	inline Vector3_t3722313464  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t3722313464 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t3722313464  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_7)); }
	inline Vector3_t3722313464  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t3722313464 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t3722313464  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_8)); }
	inline Vector3_t3722313464  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t3722313464 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t3722313464  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_9)); }
	inline Vector3_t3722313464  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t3722313464  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_10)); }
	inline Vector3_t3722313464  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t3722313464 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t3722313464  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_0;
	// System.Single UnityEngine.Vector4::y
	float ___y_1;
	// System.Single UnityEngine.Vector4::z
	float ___z_2;
	// System.Single UnityEngine.Vector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_7;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_4)); }
	inline Vector4_t3319028937  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector4_t3319028937  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_5)); }
	inline Vector4_t3319028937  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector4_t3319028937 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector4_t3319028937  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_6)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_6() const { return ___positiveInfinityVector_6; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_6() { return &___positiveInfinityVector_6; }
	inline void set_positiveInfinityVector_6(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_6 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_7)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_7() const { return ___negativeInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_7() { return &___negativeInfinityVector_7; }
	inline void set_negativeInfinityVector_7(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255365  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-C4E70AB31EF6C8908F896CAD1C6BC75F7FA65E27
	U24ArrayTypeU3D24_t2467506693  ___U24fieldU2DC4E70AB31EF6C8908F896CAD1C6BC75F7FA65E27_0;
	// <PrivateImplementationDetails>/$ArrayType=64 <PrivateImplementationDetails>::$field-0E084FFC26A48083CAF4F0C48B4F4750FD4E4CB2
	U24ArrayTypeU3D64_t498138225  ___U24fieldU2D0E084FFC26A48083CAF4F0C48B4F4750FD4E4CB2_1;

public:
	inline static int32_t get_offset_of_U24fieldU2DC4E70AB31EF6C8908F896CAD1C6BC75F7FA65E27_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24fieldU2DC4E70AB31EF6C8908F896CAD1C6BC75F7FA65E27_0)); }
	inline U24ArrayTypeU3D24_t2467506693  get_U24fieldU2DC4E70AB31EF6C8908F896CAD1C6BC75F7FA65E27_0() const { return ___U24fieldU2DC4E70AB31EF6C8908F896CAD1C6BC75F7FA65E27_0; }
	inline U24ArrayTypeU3D24_t2467506693 * get_address_of_U24fieldU2DC4E70AB31EF6C8908F896CAD1C6BC75F7FA65E27_0() { return &___U24fieldU2DC4E70AB31EF6C8908F896CAD1C6BC75F7FA65E27_0; }
	inline void set_U24fieldU2DC4E70AB31EF6C8908F896CAD1C6BC75F7FA65E27_0(U24ArrayTypeU3D24_t2467506693  value)
	{
		___U24fieldU2DC4E70AB31EF6C8908F896CAD1C6BC75F7FA65E27_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D0E084FFC26A48083CAF4F0C48B4F4750FD4E4CB2_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24fieldU2D0E084FFC26A48083CAF4F0C48B4F4750FD4E4CB2_1)); }
	inline U24ArrayTypeU3D64_t498138225  get_U24fieldU2D0E084FFC26A48083CAF4F0C48B4F4750FD4E4CB2_1() const { return ___U24fieldU2D0E084FFC26A48083CAF4F0C48B4F4750FD4E4CB2_1; }
	inline U24ArrayTypeU3D64_t498138225 * get_address_of_U24fieldU2D0E084FFC26A48083CAF4F0C48B4F4750FD4E4CB2_1() { return &___U24fieldU2D0E084FFC26A48083CAF4F0C48B4F4750FD4E4CB2_1; }
	inline void set_U24fieldU2D0E084FFC26A48083CAF4F0C48B4F4750FD4E4CB2_1(U24ArrayTypeU3D64_t498138225  value)
	{
		___U24fieldU2D0E084FFC26A48083CAF4F0C48B4F4750FD4E4CB2_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifndef AUDIOTYPE_T2402477102_H
#define AUDIOTYPE_T2402477102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioType
struct  AudioType_t2402477102 
{
public:
	// System.Int32 AudioType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AudioType_t2402477102, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOTYPE_T2402477102_H
#ifndef COLORTYPES_T2790970450_H
#define COLORTYPES_T2790970450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorTypes
struct  ColorTypes_t2790970450 
{
public:
	// System.Int32 ColorTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorTypes_t2790970450, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORTYPES_T2790970450_H
#ifndef U3CNAVTOLOCATIONU3EC__ITERATOR0_T4015647092_H
#define U3CNAVTOLOCATIONU3EC__ITERATOR0_T4015647092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MemoryRetriever/<NavToLocation>c__Iterator0
struct  U3CNavToLocationU3Ec__Iterator0_t4015647092  : public RuntimeObject
{
public:
	// System.Single MemoryRetriever/<NavToLocation>c__Iterator0::<threshold>__0
	float ___U3CthresholdU3E__0_0;
	// System.Single MemoryRetriever/<NavToLocation>c__Iterator0::<hs>__0
	float ___U3ChsU3E__0_1;
	// System.Single MemoryRetriever/<NavToLocation>c__Iterator0::<vs>__0
	float ___U3CvsU3E__0_2;
	// System.Single MemoryRetriever/<NavToLocation>c__Iterator0::<elapsed>__0
	float ___U3CelapsedU3E__0_3;
	// System.Boolean MemoryRetriever/<NavToLocation>c__Iterator0::<hDone>__0
	bool ___U3ChDoneU3E__0_4;
	// System.Boolean MemoryRetriever/<NavToLocation>c__Iterator0::<vDone>__0
	bool ___U3CvDoneU3E__0_5;
	// UnityEngine.Vector3 MemoryRetriever/<NavToLocation>c__Iterator0::loc
	Vector3_t3722313464  ___loc_6;
	// System.Single MemoryRetriever/<NavToLocation>c__Iterator0::duration
	float ___duration_7;
	// MemoryRetriever MemoryRetriever/<NavToLocation>c__Iterator0::$this
	MemoryRetriever_t2760707818 * ___U24this_8;
	// System.Object MemoryRetriever/<NavToLocation>c__Iterator0::$current
	RuntimeObject * ___U24current_9;
	// System.Boolean MemoryRetriever/<NavToLocation>c__Iterator0::$disposing
	bool ___U24disposing_10;
	// System.Int32 MemoryRetriever/<NavToLocation>c__Iterator0::$PC
	int32_t ___U24PC_11;

public:
	inline static int32_t get_offset_of_U3CthresholdU3E__0_0() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t4015647092, ___U3CthresholdU3E__0_0)); }
	inline float get_U3CthresholdU3E__0_0() const { return ___U3CthresholdU3E__0_0; }
	inline float* get_address_of_U3CthresholdU3E__0_0() { return &___U3CthresholdU3E__0_0; }
	inline void set_U3CthresholdU3E__0_0(float value)
	{
		___U3CthresholdU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3ChsU3E__0_1() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t4015647092, ___U3ChsU3E__0_1)); }
	inline float get_U3ChsU3E__0_1() const { return ___U3ChsU3E__0_1; }
	inline float* get_address_of_U3ChsU3E__0_1() { return &___U3ChsU3E__0_1; }
	inline void set_U3ChsU3E__0_1(float value)
	{
		___U3ChsU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CvsU3E__0_2() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t4015647092, ___U3CvsU3E__0_2)); }
	inline float get_U3CvsU3E__0_2() const { return ___U3CvsU3E__0_2; }
	inline float* get_address_of_U3CvsU3E__0_2() { return &___U3CvsU3E__0_2; }
	inline void set_U3CvsU3E__0_2(float value)
	{
		___U3CvsU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E__0_3() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t4015647092, ___U3CelapsedU3E__0_3)); }
	inline float get_U3CelapsedU3E__0_3() const { return ___U3CelapsedU3E__0_3; }
	inline float* get_address_of_U3CelapsedU3E__0_3() { return &___U3CelapsedU3E__0_3; }
	inline void set_U3CelapsedU3E__0_3(float value)
	{
		___U3CelapsedU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3ChDoneU3E__0_4() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t4015647092, ___U3ChDoneU3E__0_4)); }
	inline bool get_U3ChDoneU3E__0_4() const { return ___U3ChDoneU3E__0_4; }
	inline bool* get_address_of_U3ChDoneU3E__0_4() { return &___U3ChDoneU3E__0_4; }
	inline void set_U3ChDoneU3E__0_4(bool value)
	{
		___U3ChDoneU3E__0_4 = value;
	}

	inline static int32_t get_offset_of_U3CvDoneU3E__0_5() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t4015647092, ___U3CvDoneU3E__0_5)); }
	inline bool get_U3CvDoneU3E__0_5() const { return ___U3CvDoneU3E__0_5; }
	inline bool* get_address_of_U3CvDoneU3E__0_5() { return &___U3CvDoneU3E__0_5; }
	inline void set_U3CvDoneU3E__0_5(bool value)
	{
		___U3CvDoneU3E__0_5 = value;
	}

	inline static int32_t get_offset_of_loc_6() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t4015647092, ___loc_6)); }
	inline Vector3_t3722313464  get_loc_6() const { return ___loc_6; }
	inline Vector3_t3722313464 * get_address_of_loc_6() { return &___loc_6; }
	inline void set_loc_6(Vector3_t3722313464  value)
	{
		___loc_6 = value;
	}

	inline static int32_t get_offset_of_duration_7() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t4015647092, ___duration_7)); }
	inline float get_duration_7() const { return ___duration_7; }
	inline float* get_address_of_duration_7() { return &___duration_7; }
	inline void set_duration_7(float value)
	{
		___duration_7 = value;
	}

	inline static int32_t get_offset_of_U24this_8() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t4015647092, ___U24this_8)); }
	inline MemoryRetriever_t2760707818 * get_U24this_8() const { return ___U24this_8; }
	inline MemoryRetriever_t2760707818 ** get_address_of_U24this_8() { return &___U24this_8; }
	inline void set_U24this_8(MemoryRetriever_t2760707818 * value)
	{
		___U24this_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_8), value);
	}

	inline static int32_t get_offset_of_U24current_9() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t4015647092, ___U24current_9)); }
	inline RuntimeObject * get_U24current_9() const { return ___U24current_9; }
	inline RuntimeObject ** get_address_of_U24current_9() { return &___U24current_9; }
	inline void set_U24current_9(RuntimeObject * value)
	{
		___U24current_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_9), value);
	}

	inline static int32_t get_offset_of_U24disposing_10() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t4015647092, ___U24disposing_10)); }
	inline bool get_U24disposing_10() const { return ___U24disposing_10; }
	inline bool* get_address_of_U24disposing_10() { return &___U24disposing_10; }
	inline void set_U24disposing_10(bool value)
	{
		___U24disposing_10 = value;
	}

	inline static int32_t get_offset_of_U24PC_11() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t4015647092, ___U24PC_11)); }
	inline int32_t get_U24PC_11() const { return ___U24PC_11; }
	inline int32_t* get_address_of_U24PC_11() { return &___U24PC_11; }
	inline void set_U24PC_11(int32_t value)
	{
		___U24PC_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNAVTOLOCATIONU3EC__ITERATOR0_T4015647092_H
#ifndef REGISTER_T712622465_H
#define REGISTER_T712622465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Register
struct  Register_t712622465 
{
public:
	// System.Int32 Register::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Register_t712622465, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTER_T712622465_H
#ifndef U3CNAVTOLOCATIONU3EC__ITERATOR0_T3710408863_H
#define U3CNAVTOLOCATIONU3EC__ITERATOR0_T3710408863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RegisterRetriever/<NavToLocation>c__Iterator0
struct  U3CNavToLocationU3Ec__Iterator0_t3710408863  : public RuntimeObject
{
public:
	// System.Single RegisterRetriever/<NavToLocation>c__Iterator0::<threshold>__0
	float ___U3CthresholdU3E__0_0;
	// System.Single RegisterRetriever/<NavToLocation>c__Iterator0::<hs>__0
	float ___U3ChsU3E__0_1;
	// System.Single RegisterRetriever/<NavToLocation>c__Iterator0::<vs>__0
	float ___U3CvsU3E__0_2;
	// System.Single RegisterRetriever/<NavToLocation>c__Iterator0::<elapsed>__0
	float ___U3CelapsedU3E__0_3;
	// System.Boolean RegisterRetriever/<NavToLocation>c__Iterator0::<hDone>__0
	bool ___U3ChDoneU3E__0_4;
	// System.Boolean RegisterRetriever/<NavToLocation>c__Iterator0::<vDone>__0
	bool ___U3CvDoneU3E__0_5;
	// UnityEngine.Vector3 RegisterRetriever/<NavToLocation>c__Iterator0::loc
	Vector3_t3722313464  ___loc_6;
	// System.Single RegisterRetriever/<NavToLocation>c__Iterator0::duration
	float ___duration_7;
	// RegisterRetriever RegisterRetriever/<NavToLocation>c__Iterator0::$this
	RegisterRetriever_t3846945983 * ___U24this_8;
	// System.Object RegisterRetriever/<NavToLocation>c__Iterator0::$current
	RuntimeObject * ___U24current_9;
	// System.Boolean RegisterRetriever/<NavToLocation>c__Iterator0::$disposing
	bool ___U24disposing_10;
	// System.Int32 RegisterRetriever/<NavToLocation>c__Iterator0::$PC
	int32_t ___U24PC_11;

public:
	inline static int32_t get_offset_of_U3CthresholdU3E__0_0() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t3710408863, ___U3CthresholdU3E__0_0)); }
	inline float get_U3CthresholdU3E__0_0() const { return ___U3CthresholdU3E__0_0; }
	inline float* get_address_of_U3CthresholdU3E__0_0() { return &___U3CthresholdU3E__0_0; }
	inline void set_U3CthresholdU3E__0_0(float value)
	{
		___U3CthresholdU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3ChsU3E__0_1() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t3710408863, ___U3ChsU3E__0_1)); }
	inline float get_U3ChsU3E__0_1() const { return ___U3ChsU3E__0_1; }
	inline float* get_address_of_U3ChsU3E__0_1() { return &___U3ChsU3E__0_1; }
	inline void set_U3ChsU3E__0_1(float value)
	{
		___U3ChsU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CvsU3E__0_2() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t3710408863, ___U3CvsU3E__0_2)); }
	inline float get_U3CvsU3E__0_2() const { return ___U3CvsU3E__0_2; }
	inline float* get_address_of_U3CvsU3E__0_2() { return &___U3CvsU3E__0_2; }
	inline void set_U3CvsU3E__0_2(float value)
	{
		___U3CvsU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E__0_3() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t3710408863, ___U3CelapsedU3E__0_3)); }
	inline float get_U3CelapsedU3E__0_3() const { return ___U3CelapsedU3E__0_3; }
	inline float* get_address_of_U3CelapsedU3E__0_3() { return &___U3CelapsedU3E__0_3; }
	inline void set_U3CelapsedU3E__0_3(float value)
	{
		___U3CelapsedU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3ChDoneU3E__0_4() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t3710408863, ___U3ChDoneU3E__0_4)); }
	inline bool get_U3ChDoneU3E__0_4() const { return ___U3ChDoneU3E__0_4; }
	inline bool* get_address_of_U3ChDoneU3E__0_4() { return &___U3ChDoneU3E__0_4; }
	inline void set_U3ChDoneU3E__0_4(bool value)
	{
		___U3ChDoneU3E__0_4 = value;
	}

	inline static int32_t get_offset_of_U3CvDoneU3E__0_5() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t3710408863, ___U3CvDoneU3E__0_5)); }
	inline bool get_U3CvDoneU3E__0_5() const { return ___U3CvDoneU3E__0_5; }
	inline bool* get_address_of_U3CvDoneU3E__0_5() { return &___U3CvDoneU3E__0_5; }
	inline void set_U3CvDoneU3E__0_5(bool value)
	{
		___U3CvDoneU3E__0_5 = value;
	}

	inline static int32_t get_offset_of_loc_6() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t3710408863, ___loc_6)); }
	inline Vector3_t3722313464  get_loc_6() const { return ___loc_6; }
	inline Vector3_t3722313464 * get_address_of_loc_6() { return &___loc_6; }
	inline void set_loc_6(Vector3_t3722313464  value)
	{
		___loc_6 = value;
	}

	inline static int32_t get_offset_of_duration_7() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t3710408863, ___duration_7)); }
	inline float get_duration_7() const { return ___duration_7; }
	inline float* get_address_of_duration_7() { return &___duration_7; }
	inline void set_duration_7(float value)
	{
		___duration_7 = value;
	}

	inline static int32_t get_offset_of_U24this_8() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t3710408863, ___U24this_8)); }
	inline RegisterRetriever_t3846945983 * get_U24this_8() const { return ___U24this_8; }
	inline RegisterRetriever_t3846945983 ** get_address_of_U24this_8() { return &___U24this_8; }
	inline void set_U24this_8(RegisterRetriever_t3846945983 * value)
	{
		___U24this_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_8), value);
	}

	inline static int32_t get_offset_of_U24current_9() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t3710408863, ___U24current_9)); }
	inline RuntimeObject * get_U24current_9() const { return ___U24current_9; }
	inline RuntimeObject ** get_address_of_U24current_9() { return &___U24current_9; }
	inline void set_U24current_9(RuntimeObject * value)
	{
		___U24current_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_9), value);
	}

	inline static int32_t get_offset_of_U24disposing_10() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t3710408863, ___U24disposing_10)); }
	inline bool get_U24disposing_10() const { return ___U24disposing_10; }
	inline bool* get_address_of_U24disposing_10() { return &___U24disposing_10; }
	inline void set_U24disposing_10(bool value)
	{
		___U24disposing_10 = value;
	}

	inline static int32_t get_offset_of_U24PC_11() { return static_cast<int32_t>(offsetof(U3CNavToLocationU3Ec__Iterator0_t3710408863, ___U24PC_11)); }
	inline int32_t get_U24PC_11() const { return ___U24PC_11; }
	inline int32_t* get_address_of_U24PC_11() { return &___U24PC_11; }
	inline void set_U24PC_11(int32_t value)
	{
		___U24PC_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNAVTOLOCATIONU3EC__ITERATOR0_T3710408863_H
#ifndef STARTSTATE_T3794935818_H
#define STARTSTATE_T3794935818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartState
struct  StartState_t3794935818 
{
public:
	// System.Int32 StartState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StartState_t3794935818, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTSTATE_T3794935818_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef TRANSACTIONTYPE_T2543680445_H
#define TRANSACTIONTYPE_T2543680445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransactionType
struct  TransactionType_t2543680445 
{
public:
	// System.Int32 TransactionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TransactionType_t2543680445, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONTYPE_T2543680445_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef U3CSETREGISTERVALUEU3EC__ITERATOR0_T2371385909_H
#define U3CSETREGISTERVALUEU3EC__ITERATOR0_T2371385909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RegisterController/<SetRegisterValue>c__Iterator0
struct  U3CSetRegisterValueU3Ec__Iterator0_t2371385909  : public RuntimeObject
{
public:
	// Register RegisterController/<SetRegisterValue>c__Iterator0::r
	int32_t ___r_0;
	// System.Int32 RegisterController/<SetRegisterValue>c__Iterator0::value
	int32_t ___value_1;
	// RegisterController RegisterController/<SetRegisterValue>c__Iterator0::$this
	RegisterController_t92122650 * ___U24this_2;
	// System.Object RegisterController/<SetRegisterValue>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean RegisterController/<SetRegisterValue>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 RegisterController/<SetRegisterValue>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(U3CSetRegisterValueU3Ec__Iterator0_t2371385909, ___r_0)); }
	inline int32_t get_r_0() const { return ___r_0; }
	inline int32_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(int32_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(U3CSetRegisterValueU3Ec__Iterator0_t2371385909, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CSetRegisterValueU3Ec__Iterator0_t2371385909, ___U24this_2)); }
	inline RegisterController_t92122650 * get_U24this_2() const { return ___U24this_2; }
	inline RegisterController_t92122650 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(RegisterController_t92122650 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CSetRegisterValueU3Ec__Iterator0_t2371385909, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CSetRegisterValueU3Ec__Iterator0_t2371385909, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CSetRegisterValueU3Ec__Iterator0_t2371385909, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSETREGISTERVALUEU3EC__ITERATOR0_T2371385909_H
#ifndef U3CNAVTOREGISTERU3EC__ITERATOR3_T1882082193_H
#define U3CNAVTOREGISTERU3EC__ITERATOR3_T1882082193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RegisterRetriever/<NavToRegister>c__Iterator3
struct  U3CNavToRegisterU3Ec__Iterator3_t1882082193  : public RuntimeObject
{
public:
	// Register RegisterRetriever/<NavToRegister>c__Iterator3::r
	int32_t ___r_0;
	// MemoryCellController RegisterRetriever/<NavToRegister>c__Iterator3::<cell>__0
	MemoryCellController_t341130527 * ___U3CcellU3E__0_1;
	// RegisterRetriever RegisterRetriever/<NavToRegister>c__Iterator3::$this
	RegisterRetriever_t3846945983 * ___U24this_2;
	// System.Object RegisterRetriever/<NavToRegister>c__Iterator3::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean RegisterRetriever/<NavToRegister>c__Iterator3::$disposing
	bool ___U24disposing_4;
	// System.Int32 RegisterRetriever/<NavToRegister>c__Iterator3::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(U3CNavToRegisterU3Ec__Iterator3_t1882082193, ___r_0)); }
	inline int32_t get_r_0() const { return ___r_0; }
	inline int32_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(int32_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_U3CcellU3E__0_1() { return static_cast<int32_t>(offsetof(U3CNavToRegisterU3Ec__Iterator3_t1882082193, ___U3CcellU3E__0_1)); }
	inline MemoryCellController_t341130527 * get_U3CcellU3E__0_1() const { return ___U3CcellU3E__0_1; }
	inline MemoryCellController_t341130527 ** get_address_of_U3CcellU3E__0_1() { return &___U3CcellU3E__0_1; }
	inline void set_U3CcellU3E__0_1(MemoryCellController_t341130527 * value)
	{
		___U3CcellU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcellU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CNavToRegisterU3Ec__Iterator3_t1882082193, ___U24this_2)); }
	inline RegisterRetriever_t3846945983 * get_U24this_2() const { return ___U24this_2; }
	inline RegisterRetriever_t3846945983 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(RegisterRetriever_t3846945983 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CNavToRegisterU3Ec__Iterator3_t1882082193, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CNavToRegisterU3Ec__Iterator3_t1882082193, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CNavToRegisterU3Ec__Iterator3_t1882082193, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNAVTOREGISTERU3EC__ITERATOR3_T1882082193_H
#ifndef U3CREADREGISTERU3EC__ITERATOR1_T958219891_H
#define U3CREADREGISTERU3EC__ITERATOR1_T958219891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RegisterRetriever/<ReadRegister>c__Iterator1
struct  U3CReadRegisterU3Ec__Iterator1_t958219891  : public RuntimeObject
{
public:
	// Register RegisterRetriever/<ReadRegister>c__Iterator1::r
	int32_t ___r_0;
	// MemoryCellController[] RegisterRetriever/<ReadRegister>c__Iterator1::<cells>__0
	MemoryCellControllerU5BU5D_t1776215942* ___U3CcellsU3E__0_1;
	// MemoryCellController[] RegisterRetriever/<ReadRegister>c__Iterator1::$locvar0
	MemoryCellControllerU5BU5D_t1776215942* ___U24locvar0_2;
	// System.Int32 RegisterRetriever/<ReadRegister>c__Iterator1::$locvar1
	int32_t ___U24locvar1_3;
	// MemoryCellController RegisterRetriever/<ReadRegister>c__Iterator1::<cell>__1
	MemoryCellController_t341130527 * ___U3CcellU3E__1_4;
	// RegisterRetriever RegisterRetriever/<ReadRegister>c__Iterator1::$this
	RegisterRetriever_t3846945983 * ___U24this_5;
	// System.Object RegisterRetriever/<ReadRegister>c__Iterator1::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean RegisterRetriever/<ReadRegister>c__Iterator1::$disposing
	bool ___U24disposing_7;
	// System.Int32 RegisterRetriever/<ReadRegister>c__Iterator1::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t958219891, ___r_0)); }
	inline int32_t get_r_0() const { return ___r_0; }
	inline int32_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(int32_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_U3CcellsU3E__0_1() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t958219891, ___U3CcellsU3E__0_1)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_U3CcellsU3E__0_1() const { return ___U3CcellsU3E__0_1; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_U3CcellsU3E__0_1() { return &___U3CcellsU3E__0_1; }
	inline void set_U3CcellsU3E__0_1(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___U3CcellsU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcellsU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U24locvar0_2() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t958219891, ___U24locvar0_2)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_U24locvar0_2() const { return ___U24locvar0_2; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_U24locvar0_2() { return &___U24locvar0_2; }
	inline void set_U24locvar0_2(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___U24locvar0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_2), value);
	}

	inline static int32_t get_offset_of_U24locvar1_3() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t958219891, ___U24locvar1_3)); }
	inline int32_t get_U24locvar1_3() const { return ___U24locvar1_3; }
	inline int32_t* get_address_of_U24locvar1_3() { return &___U24locvar1_3; }
	inline void set_U24locvar1_3(int32_t value)
	{
		___U24locvar1_3 = value;
	}

	inline static int32_t get_offset_of_U3CcellU3E__1_4() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t958219891, ___U3CcellU3E__1_4)); }
	inline MemoryCellController_t341130527 * get_U3CcellU3E__1_4() const { return ___U3CcellU3E__1_4; }
	inline MemoryCellController_t341130527 ** get_address_of_U3CcellU3E__1_4() { return &___U3CcellU3E__1_4; }
	inline void set_U3CcellU3E__1_4(MemoryCellController_t341130527 * value)
	{
		___U3CcellU3E__1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcellU3E__1_4), value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t958219891, ___U24this_5)); }
	inline RegisterRetriever_t3846945983 * get_U24this_5() const { return ___U24this_5; }
	inline RegisterRetriever_t3846945983 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(RegisterRetriever_t3846945983 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t958219891, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t958219891, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CReadRegisterU3Ec__Iterator1_t958219891, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREADREGISTERU3EC__ITERATOR1_T958219891_H
#ifndef U3CWRITEREGISTERU3EC__ITERATOR2_T2150749546_H
#define U3CWRITEREGISTERU3EC__ITERATOR2_T2150749546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RegisterRetriever/<WriteRegister>c__Iterator2
struct  U3CWriteRegisterU3Ec__Iterator2_t2150749546  : public RuntimeObject
{
public:
	// Register RegisterRetriever/<WriteRegister>c__Iterator2::r
	int32_t ___r_0;
	// MemoryCellController[] RegisterRetriever/<WriteRegister>c__Iterator2::<cells>__0
	MemoryCellControllerU5BU5D_t1776215942* ___U3CcellsU3E__0_1;
	// System.Int32 RegisterRetriever/<WriteRegister>c__Iterator2::<power>__0
	int32_t ___U3CpowerU3E__0_2;
	// MemoryCellController[] RegisterRetriever/<WriteRegister>c__Iterator2::$locvar0
	MemoryCellControllerU5BU5D_t1776215942* ___U24locvar0_3;
	// System.Int32 RegisterRetriever/<WriteRegister>c__Iterator2::$locvar1
	int32_t ___U24locvar1_4;
	// MemoryCellController RegisterRetriever/<WriteRegister>c__Iterator2::<cell>__1
	MemoryCellController_t341130527 * ___U3CcellU3E__1_5;
	// System.Int32 RegisterRetriever/<WriteRegister>c__Iterator2::value
	int32_t ___value_6;
	// RegisterRetriever RegisterRetriever/<WriteRegister>c__Iterator2::$this
	RegisterRetriever_t3846945983 * ___U24this_7;
	// System.Object RegisterRetriever/<WriteRegister>c__Iterator2::$current
	RuntimeObject * ___U24current_8;
	// System.Boolean RegisterRetriever/<WriteRegister>c__Iterator2::$disposing
	bool ___U24disposing_9;
	// System.Int32 RegisterRetriever/<WriteRegister>c__Iterator2::$PC
	int32_t ___U24PC_10;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t2150749546, ___r_0)); }
	inline int32_t get_r_0() const { return ___r_0; }
	inline int32_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(int32_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_U3CcellsU3E__0_1() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t2150749546, ___U3CcellsU3E__0_1)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_U3CcellsU3E__0_1() const { return ___U3CcellsU3E__0_1; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_U3CcellsU3E__0_1() { return &___U3CcellsU3E__0_1; }
	inline void set_U3CcellsU3E__0_1(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___U3CcellsU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcellsU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CpowerU3E__0_2() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t2150749546, ___U3CpowerU3E__0_2)); }
	inline int32_t get_U3CpowerU3E__0_2() const { return ___U3CpowerU3E__0_2; }
	inline int32_t* get_address_of_U3CpowerU3E__0_2() { return &___U3CpowerU3E__0_2; }
	inline void set_U3CpowerU3E__0_2(int32_t value)
	{
		___U3CpowerU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U24locvar0_3() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t2150749546, ___U24locvar0_3)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_U24locvar0_3() const { return ___U24locvar0_3; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_U24locvar0_3() { return &___U24locvar0_3; }
	inline void set_U24locvar0_3(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___U24locvar0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_3), value);
	}

	inline static int32_t get_offset_of_U24locvar1_4() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t2150749546, ___U24locvar1_4)); }
	inline int32_t get_U24locvar1_4() const { return ___U24locvar1_4; }
	inline int32_t* get_address_of_U24locvar1_4() { return &___U24locvar1_4; }
	inline void set_U24locvar1_4(int32_t value)
	{
		___U24locvar1_4 = value;
	}

	inline static int32_t get_offset_of_U3CcellU3E__1_5() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t2150749546, ___U3CcellU3E__1_5)); }
	inline MemoryCellController_t341130527 * get_U3CcellU3E__1_5() const { return ___U3CcellU3E__1_5; }
	inline MemoryCellController_t341130527 ** get_address_of_U3CcellU3E__1_5() { return &___U3CcellU3E__1_5; }
	inline void set_U3CcellU3E__1_5(MemoryCellController_t341130527 * value)
	{
		___U3CcellU3E__1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcellU3E__1_5), value);
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t2150749546, ___value_6)); }
	inline int32_t get_value_6() const { return ___value_6; }
	inline int32_t* get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(int32_t value)
	{
		___value_6 = value;
	}

	inline static int32_t get_offset_of_U24this_7() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t2150749546, ___U24this_7)); }
	inline RegisterRetriever_t3846945983 * get_U24this_7() const { return ___U24this_7; }
	inline RegisterRetriever_t3846945983 ** get_address_of_U24this_7() { return &___U24this_7; }
	inline void set_U24this_7(RegisterRetriever_t3846945983 * value)
	{
		___U24this_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_7), value);
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t2150749546, ___U24current_8)); }
	inline RuntimeObject * get_U24current_8() const { return ___U24current_8; }
	inline RuntimeObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(RuntimeObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_8), value);
	}

	inline static int32_t get_offset_of_U24disposing_9() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t2150749546, ___U24disposing_9)); }
	inline bool get_U24disposing_9() const { return ___U24disposing_9; }
	inline bool* get_address_of_U24disposing_9() { return &___U24disposing_9; }
	inline void set_U24disposing_9(bool value)
	{
		___U24disposing_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CWriteRegisterU3Ec__Iterator2_t2150749546, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWRITEREGISTERU3EC__ITERATOR2_T2150749546_H
#ifndef KEYVALUEPAIR_2_T3152880114_H
#define KEYVALUEPAIR_2_T3152880114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>
struct  KeyValuePair_2_t3152880114 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t1813205269 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3152880114, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3152880114, ___value_1)); }
	inline List_1_t1813205269 * get_value_1() const { return ___value_1; }
	inline List_1_t1813205269 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_t1813205269 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3152880114_H
#ifndef KEYVALUEPAIR_2_T124813713_H
#define KEYVALUEPAIR_2_T124813713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ColorTypes,System.Object>
struct  KeyValuePair_2_t124813713 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t124813713, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t124813713, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T124813713_H
#ifndef KEYVALUEPAIR_2_T371940760_H
#define KEYVALUEPAIR_2_T371940760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Register,MemoryCellController[]>
struct  KeyValuePair_2_t371940760 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MemoryCellControllerU5BU5D_t1776215942* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t371940760, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t371940760, ___value_1)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_value_1() const { return ___value_1; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T371940760_H
#ifndef KEYVALUEPAIR_2_T1675830982_H
#define KEYVALUEPAIR_2_T1675830982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Register,System.Object>
struct  KeyValuePair_2_t1675830982 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1675830982, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1675830982, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1675830982_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_4), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef INSTRUCTION_T85629626_H
#define INSTRUCTION_T85629626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/Instruction
struct  Instruction_t85629626  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTRUCTION_T85629626_H
#ifndef CONDITION_T2788105126_H
#define CONDITION_T2788105126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JobController/Condition
struct  Condition_t2788105126  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONDITION_T2788105126_H
#ifndef PROMISE_T592223531_H
#define PROMISE_T592223531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreController/Promise
struct  Promise_t592223531  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROMISE_T592223531_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef ENUMERATOR_T2709390722_H
#define ENUMERATOR_T2709390722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>
struct  Enumerator_t2709390722 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t755207947 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t3152880114  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2709390722, ___dictionary_0)); }
	inline Dictionary_2_t755207947 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t755207947 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t755207947 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2709390722, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2709390722, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2709390722, ___current_3)); }
	inline KeyValuePair_2_t3152880114  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3152880114 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3152880114  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2709390722_H
#ifndef ENUMERATOR_T3976291617_H
#define ENUMERATOR_T3976291617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<ColorTypes,System.Object>
struct  Enumerator_t3976291617 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2022108842 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t124813713  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3976291617, ___dictionary_0)); }
	inline Dictionary_2_t2022108842 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2022108842 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2022108842 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3976291617, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3976291617, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3976291617, ___current_3)); }
	inline KeyValuePair_2_t124813713  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t124813713 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t124813713  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3976291617_H
#ifndef ENUMERATOR_T4223418664_H
#define ENUMERATOR_T4223418664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<Register,MemoryCellController[]>
struct  Enumerator_t4223418664 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2269235889 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t371940760  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4223418664, ___dictionary_0)); }
	inline Dictionary_2_t2269235889 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2269235889 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2269235889 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t4223418664, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t4223418664, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4223418664, ___current_3)); }
	inline KeyValuePair_2_t371940760  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t371940760 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t371940760  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T4223418664_H
#ifndef ENUMERATOR_T1232341590_H
#define ENUMERATOR_T1232341590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<Register,System.Object>
struct  Enumerator_t1232341590 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t3573126111 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t1675830982  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1232341590, ___dictionary_0)); }
	inline Dictionary_2_t3573126111 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3573126111 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3573126111 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1232341590, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t1232341590, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1232341590, ___current_3)); }
	inline KeyValuePair_2_t1675830982  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1675830982 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1675830982  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1232341590_H
#ifndef COMPARISON_1_T888567798_H
#define COMPARISON_1_T888567798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<UnityEngine.GameObject>
struct  Comparison_1_t888567798  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T888567798_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef PARTICLESYSTEM_T1800779281_H
#define PARTICLESYSTEM_T1800779281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t1800779281  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T1800779281_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTMESH_T1536577757_H
#define TEXTMESH_T1536577757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextMesh
struct  TextMesh_t1536577757  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESH_T1536577757_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ANIMATION_T3648466861_H
#define ANIMATION_T3648466861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation
struct  Animation_t3648466861  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATION_T3648466861_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef LINERENDERER_T3154350270_H
#define LINERENDERER_T3154350270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LineRenderer
struct  LineRenderer_t3154350270  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINERENDERER_T3154350270_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef BUILDCONTROLLER_T964035277_H
#define BUILDCONTROLLER_T964035277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BuildController
struct  BuildController_t964035277  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject BuildController::memoryCell
	GameObject_t1113636619 * ___memoryCell_4;
	// UnityEngine.GameObject BuildController::previewText
	GameObject_t1113636619 * ___previewText_5;
	// MemoryCellController BuildController::firstCell
	MemoryCellController_t341130527 * ___firstCell_6;
	// System.Single BuildController::columnGap
	float ___columnGap_7;
	// System.Single BuildController::rowGap
	float ___rowGap_8;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.GameObject>> BuildController::grid
	List_1_t4057786103 * ___grid_9;
	// System.Single BuildController::xPreviewOffset
	float ___xPreviewOffset_10;
	// System.Single BuildController::yPreviewOffset
	float ___yPreviewOffset_11;
	// UnityEngine.GameObject[] BuildController::memoryCells
	GameObjectU5BU5D_t3328599146* ___memoryCells_12;

public:
	inline static int32_t get_offset_of_memoryCell_4() { return static_cast<int32_t>(offsetof(BuildController_t964035277, ___memoryCell_4)); }
	inline GameObject_t1113636619 * get_memoryCell_4() const { return ___memoryCell_4; }
	inline GameObject_t1113636619 ** get_address_of_memoryCell_4() { return &___memoryCell_4; }
	inline void set_memoryCell_4(GameObject_t1113636619 * value)
	{
		___memoryCell_4 = value;
		Il2CppCodeGenWriteBarrier((&___memoryCell_4), value);
	}

	inline static int32_t get_offset_of_previewText_5() { return static_cast<int32_t>(offsetof(BuildController_t964035277, ___previewText_5)); }
	inline GameObject_t1113636619 * get_previewText_5() const { return ___previewText_5; }
	inline GameObject_t1113636619 ** get_address_of_previewText_5() { return &___previewText_5; }
	inline void set_previewText_5(GameObject_t1113636619 * value)
	{
		___previewText_5 = value;
		Il2CppCodeGenWriteBarrier((&___previewText_5), value);
	}

	inline static int32_t get_offset_of_firstCell_6() { return static_cast<int32_t>(offsetof(BuildController_t964035277, ___firstCell_6)); }
	inline MemoryCellController_t341130527 * get_firstCell_6() const { return ___firstCell_6; }
	inline MemoryCellController_t341130527 ** get_address_of_firstCell_6() { return &___firstCell_6; }
	inline void set_firstCell_6(MemoryCellController_t341130527 * value)
	{
		___firstCell_6 = value;
		Il2CppCodeGenWriteBarrier((&___firstCell_6), value);
	}

	inline static int32_t get_offset_of_columnGap_7() { return static_cast<int32_t>(offsetof(BuildController_t964035277, ___columnGap_7)); }
	inline float get_columnGap_7() const { return ___columnGap_7; }
	inline float* get_address_of_columnGap_7() { return &___columnGap_7; }
	inline void set_columnGap_7(float value)
	{
		___columnGap_7 = value;
	}

	inline static int32_t get_offset_of_rowGap_8() { return static_cast<int32_t>(offsetof(BuildController_t964035277, ___rowGap_8)); }
	inline float get_rowGap_8() const { return ___rowGap_8; }
	inline float* get_address_of_rowGap_8() { return &___rowGap_8; }
	inline void set_rowGap_8(float value)
	{
		___rowGap_8 = value;
	}

	inline static int32_t get_offset_of_grid_9() { return static_cast<int32_t>(offsetof(BuildController_t964035277, ___grid_9)); }
	inline List_1_t4057786103 * get_grid_9() const { return ___grid_9; }
	inline List_1_t4057786103 ** get_address_of_grid_9() { return &___grid_9; }
	inline void set_grid_9(List_1_t4057786103 * value)
	{
		___grid_9 = value;
		Il2CppCodeGenWriteBarrier((&___grid_9), value);
	}

	inline static int32_t get_offset_of_xPreviewOffset_10() { return static_cast<int32_t>(offsetof(BuildController_t964035277, ___xPreviewOffset_10)); }
	inline float get_xPreviewOffset_10() const { return ___xPreviewOffset_10; }
	inline float* get_address_of_xPreviewOffset_10() { return &___xPreviewOffset_10; }
	inline void set_xPreviewOffset_10(float value)
	{
		___xPreviewOffset_10 = value;
	}

	inline static int32_t get_offset_of_yPreviewOffset_11() { return static_cast<int32_t>(offsetof(BuildController_t964035277, ___yPreviewOffset_11)); }
	inline float get_yPreviewOffset_11() const { return ___yPreviewOffset_11; }
	inline float* get_address_of_yPreviewOffset_11() { return &___yPreviewOffset_11; }
	inline void set_yPreviewOffset_11(float value)
	{
		___yPreviewOffset_11 = value;
	}

	inline static int32_t get_offset_of_memoryCells_12() { return static_cast<int32_t>(offsetof(BuildController_t964035277, ___memoryCells_12)); }
	inline GameObjectU5BU5D_t3328599146* get_memoryCells_12() const { return ___memoryCells_12; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_memoryCells_12() { return &___memoryCells_12; }
	inline void set_memoryCells_12(GameObjectU5BU5D_t3328599146* value)
	{
		___memoryCells_12 = value;
		Il2CppCodeGenWriteBarrier((&___memoryCells_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDCONTROLLER_T964035277_H
#ifndef CLEARBUTTONCONTROLLER_T1437245373_H
#define CLEARBUTTONCONTROLLER_T1437245373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClearButtonController
struct  ClearButtonController_t1437245373  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextMesh ClearButtonController::text
	TextMesh_t1536577757 * ___text_5;
	// UnityEngine.SpriteRenderer ClearButtonController::background
	SpriteRenderer_t3235626157 * ___background_6;
	// System.Boolean ClearButtonController::hover
	bool ___hover_7;

public:
	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(ClearButtonController_t1437245373, ___text_5)); }
	inline TextMesh_t1536577757 * get_text_5() const { return ___text_5; }
	inline TextMesh_t1536577757 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(TextMesh_t1536577757 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((&___text_5), value);
	}

	inline static int32_t get_offset_of_background_6() { return static_cast<int32_t>(offsetof(ClearButtonController_t1437245373, ___background_6)); }
	inline SpriteRenderer_t3235626157 * get_background_6() const { return ___background_6; }
	inline SpriteRenderer_t3235626157 ** get_address_of_background_6() { return &___background_6; }
	inline void set_background_6(SpriteRenderer_t3235626157 * value)
	{
		___background_6 = value;
		Il2CppCodeGenWriteBarrier((&___background_6), value);
	}

	inline static int32_t get_offset_of_hover_7() { return static_cast<int32_t>(offsetof(ClearButtonController_t1437245373, ___hover_7)); }
	inline bool get_hover_7() const { return ___hover_7; }
	inline bool* get_address_of_hover_7() { return &___hover_7; }
	inline void set_hover_7(bool value)
	{
		___hover_7 = value;
	}
};

struct ClearButtonController_t1437245373_StaticFields
{
public:
	// ClearButtonController ClearButtonController::instance
	ClearButtonController_t1437245373 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(ClearButtonController_t1437245373_StaticFields, ___instance_4)); }
	inline ClearButtonController_t1437245373 * get_instance_4() const { return ___instance_4; }
	inline ClearButtonController_t1437245373 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(ClearButtonController_t1437245373 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEARBUTTONCONTROLLER_T1437245373_H
#ifndef CLICKCONTROLLER_T166689076_H
#define CLICKCONTROLLER_T166689076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClickController
struct  ClickController_t166689076  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLICKCONTROLLER_T166689076_H
#ifndef DOTCONTROLLER_T3465465747_H
#define DOTCONTROLLER_T3465465747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DotController
struct  DotController_t3465465747  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject DotController::dot
	GameObject_t1113636619 * ___dot_4;
	// MemoryCellController[] DotController::cells
	MemoryCellControllerU5BU5D_t1776215942* ___cells_5;
	// System.Single DotController::offset
	float ___offset_6;

public:
	inline static int32_t get_offset_of_dot_4() { return static_cast<int32_t>(offsetof(DotController_t3465465747, ___dot_4)); }
	inline GameObject_t1113636619 * get_dot_4() const { return ___dot_4; }
	inline GameObject_t1113636619 ** get_address_of_dot_4() { return &___dot_4; }
	inline void set_dot_4(GameObject_t1113636619 * value)
	{
		___dot_4 = value;
		Il2CppCodeGenWriteBarrier((&___dot_4), value);
	}

	inline static int32_t get_offset_of_cells_5() { return static_cast<int32_t>(offsetof(DotController_t3465465747, ___cells_5)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_cells_5() const { return ___cells_5; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_cells_5() { return &___cells_5; }
	inline void set_cells_5(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___cells_5 = value;
		Il2CppCodeGenWriteBarrier((&___cells_5), value);
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(DotController_t3465465747, ___offset_6)); }
	inline float get_offset_6() const { return ___offset_6; }
	inline float* get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(float value)
	{
		___offset_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOTCONTROLLER_T3465465747_H
#ifndef FLASHCONTROLLER_T265141757_H
#define FLASHCONTROLLER_T265141757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlashController
struct  FlashController_t265141757  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLASHCONTROLLER_T265141757_H
#ifndef GAMECONTROLLER_T2330501625_H
#define GAMECONTROLLER_T2330501625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2330501625  : public MonoBehaviour_t3962482529
{
public:
	// System.Single GameController::moveSpeed
	float ___moveSpeed_5;
	// System.Single GameController::readSpeed
	float ___readSpeed_6;
	// System.Boolean GameController::haltFlag
	bool ___haltFlag_7;
	// System.Boolean GameController::isRunning
	bool ___isRunning_8;
	// UnityEngine.GameObject GameController::currentSelection
	GameObject_t1113636619 * ___currentSelection_9;
	// UnityEngine.GameObject GameController::currentHover
	GameObject_t1113636619 * ___currentHover_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,GameController/Instruction> GameController::instructionLookup
	Dictionary_2_t3269310253 * ___instructionLookup_11;
	// StartState GameController::startState
	int32_t ___startState_12;

public:
	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}

	inline static int32_t get_offset_of_readSpeed_6() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___readSpeed_6)); }
	inline float get_readSpeed_6() const { return ___readSpeed_6; }
	inline float* get_address_of_readSpeed_6() { return &___readSpeed_6; }
	inline void set_readSpeed_6(float value)
	{
		___readSpeed_6 = value;
	}

	inline static int32_t get_offset_of_haltFlag_7() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___haltFlag_7)); }
	inline bool get_haltFlag_7() const { return ___haltFlag_7; }
	inline bool* get_address_of_haltFlag_7() { return &___haltFlag_7; }
	inline void set_haltFlag_7(bool value)
	{
		___haltFlag_7 = value;
	}

	inline static int32_t get_offset_of_isRunning_8() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___isRunning_8)); }
	inline bool get_isRunning_8() const { return ___isRunning_8; }
	inline bool* get_address_of_isRunning_8() { return &___isRunning_8; }
	inline void set_isRunning_8(bool value)
	{
		___isRunning_8 = value;
	}

	inline static int32_t get_offset_of_currentSelection_9() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___currentSelection_9)); }
	inline GameObject_t1113636619 * get_currentSelection_9() const { return ___currentSelection_9; }
	inline GameObject_t1113636619 ** get_address_of_currentSelection_9() { return &___currentSelection_9; }
	inline void set_currentSelection_9(GameObject_t1113636619 * value)
	{
		___currentSelection_9 = value;
		Il2CppCodeGenWriteBarrier((&___currentSelection_9), value);
	}

	inline static int32_t get_offset_of_currentHover_10() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___currentHover_10)); }
	inline GameObject_t1113636619 * get_currentHover_10() const { return ___currentHover_10; }
	inline GameObject_t1113636619 ** get_address_of_currentHover_10() { return &___currentHover_10; }
	inline void set_currentHover_10(GameObject_t1113636619 * value)
	{
		___currentHover_10 = value;
		Il2CppCodeGenWriteBarrier((&___currentHover_10), value);
	}

	inline static int32_t get_offset_of_instructionLookup_11() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___instructionLookup_11)); }
	inline Dictionary_2_t3269310253 * get_instructionLookup_11() const { return ___instructionLookup_11; }
	inline Dictionary_2_t3269310253 ** get_address_of_instructionLookup_11() { return &___instructionLookup_11; }
	inline void set_instructionLookup_11(Dictionary_2_t3269310253 * value)
	{
		___instructionLookup_11 = value;
		Il2CppCodeGenWriteBarrier((&___instructionLookup_11), value);
	}

	inline static int32_t get_offset_of_startState_12() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___startState_12)); }
	inline int32_t get_startState_12() const { return ___startState_12; }
	inline int32_t* get_address_of_startState_12() { return &___startState_12; }
	inline void set_startState_12(int32_t value)
	{
		___startState_12 = value;
	}
};

struct GameController_t2330501625_StaticFields
{
public:
	// GameController GameController::instance
	GameController_t2330501625 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GameController_t2330501625_StaticFields, ___instance_4)); }
	inline GameController_t2330501625 * get_instance_4() const { return ___instance_4; }
	inline GameController_t2330501625 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GameController_t2330501625 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECONTROLLER_T2330501625_H
#ifndef GRIDCONTROLLER_T1732845400_H
#define GRIDCONTROLLER_T1732845400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GridController
struct  GridController_t1732845400  : public MonoBehaviour_t3962482529
{
public:
	// MemoryCellController[] GridController::grid
	MemoryCellControllerU5BU5D_t1776215942* ___grid_5;

public:
	inline static int32_t get_offset_of_grid_5() { return static_cast<int32_t>(offsetof(GridController_t1732845400, ___grid_5)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_grid_5() const { return ___grid_5; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_grid_5() { return &___grid_5; }
	inline void set_grid_5(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___grid_5 = value;
		Il2CppCodeGenWriteBarrier((&___grid_5), value);
	}
};

struct GridController_t1732845400_StaticFields
{
public:
	// GridController GridController::instance
	GridController_t1732845400 * ___instance_4;
	// System.Comparison`1<UnityEngine.GameObject> GridController::<>f__am$cache0
	Comparison_1_t888567798 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GridController_t1732845400_StaticFields, ___instance_4)); }
	inline GridController_t1732845400 * get_instance_4() const { return ___instance_4; }
	inline GridController_t1732845400 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GridController_t1732845400 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(GridController_t1732845400_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Comparison_1_t888567798 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Comparison_1_t888567798 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Comparison_1_t888567798 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDCONTROLLER_T1732845400_H
#ifndef HALTBUTTONCONTROLLER_T306459615_H
#define HALTBUTTONCONTROLLER_T306459615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HaltButtonController
struct  HaltButtonController_t306459615  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextMesh HaltButtonController::price
	TextMesh_t1536577757 * ___price_5;
	// UnityEngine.TextMesh HaltButtonController::text
	TextMesh_t1536577757 * ___text_6;
	// UnityEngine.SpriteRenderer HaltButtonController::background
	SpriteRenderer_t3235626157 * ___background_7;
	// System.Boolean HaltButtonController::hover
	bool ___hover_8;

public:
	inline static int32_t get_offset_of_price_5() { return static_cast<int32_t>(offsetof(HaltButtonController_t306459615, ___price_5)); }
	inline TextMesh_t1536577757 * get_price_5() const { return ___price_5; }
	inline TextMesh_t1536577757 ** get_address_of_price_5() { return &___price_5; }
	inline void set_price_5(TextMesh_t1536577757 * value)
	{
		___price_5 = value;
		Il2CppCodeGenWriteBarrier((&___price_5), value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(HaltButtonController_t306459615, ___text_6)); }
	inline TextMesh_t1536577757 * get_text_6() const { return ___text_6; }
	inline TextMesh_t1536577757 ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(TextMesh_t1536577757 * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier((&___text_6), value);
	}

	inline static int32_t get_offset_of_background_7() { return static_cast<int32_t>(offsetof(HaltButtonController_t306459615, ___background_7)); }
	inline SpriteRenderer_t3235626157 * get_background_7() const { return ___background_7; }
	inline SpriteRenderer_t3235626157 ** get_address_of_background_7() { return &___background_7; }
	inline void set_background_7(SpriteRenderer_t3235626157 * value)
	{
		___background_7 = value;
		Il2CppCodeGenWriteBarrier((&___background_7), value);
	}

	inline static int32_t get_offset_of_hover_8() { return static_cast<int32_t>(offsetof(HaltButtonController_t306459615, ___hover_8)); }
	inline bool get_hover_8() const { return ___hover_8; }
	inline bool* get_address_of_hover_8() { return &___hover_8; }
	inline void set_hover_8(bool value)
	{
		___hover_8 = value;
	}
};

struct HaltButtonController_t306459615_StaticFields
{
public:
	// HaltButtonController HaltButtonController::instance
	HaltButtonController_t306459615 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(HaltButtonController_t306459615_StaticFields, ___instance_4)); }
	inline HaltButtonController_t306459615 * get_instance_4() const { return ___instance_4; }
	inline HaltButtonController_t306459615 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(HaltButtonController_t306459615 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HALTBUTTONCONTROLLER_T306459615_H
#ifndef HELPCONTROLLER_T2343372652_H
#define HELPCONTROLLER_T2343372652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HelpController
struct  HelpController_t2343372652  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean HelpController::isOpen
	bool ___isOpen_5;

public:
	inline static int32_t get_offset_of_isOpen_5() { return static_cast<int32_t>(offsetof(HelpController_t2343372652, ___isOpen_5)); }
	inline bool get_isOpen_5() const { return ___isOpen_5; }
	inline bool* get_address_of_isOpen_5() { return &___isOpen_5; }
	inline void set_isOpen_5(bool value)
	{
		___isOpen_5 = value;
	}
};

struct HelpController_t2343372652_StaticFields
{
public:
	// HelpController HelpController::instance
	HelpController_t2343372652 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(HelpController_t2343372652_StaticFields, ___instance_4)); }
	inline HelpController_t2343372652 * get_instance_4() const { return ___instance_4; }
	inline HelpController_t2343372652 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(HelpController_t2343372652 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HELPCONTROLLER_T2343372652_H
#ifndef HOVERCONTROLLER_T423031069_H
#define HOVERCONTROLLER_T423031069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoverController
struct  HoverController_t423031069  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextMesh HoverController::text
	TextMesh_t1536577757 * ___text_5;
	// System.String[] HoverController::hex
	StringU5BU5D_t1281789340* ___hex_6;

public:
	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(HoverController_t423031069, ___text_5)); }
	inline TextMesh_t1536577757 * get_text_5() const { return ___text_5; }
	inline TextMesh_t1536577757 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(TextMesh_t1536577757 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((&___text_5), value);
	}

	inline static int32_t get_offset_of_hex_6() { return static_cast<int32_t>(offsetof(HoverController_t423031069, ___hex_6)); }
	inline StringU5BU5D_t1281789340* get_hex_6() const { return ___hex_6; }
	inline StringU5BU5D_t1281789340** get_address_of_hex_6() { return &___hex_6; }
	inline void set_hex_6(StringU5BU5D_t1281789340* value)
	{
		___hex_6 = value;
		Il2CppCodeGenWriteBarrier((&___hex_6), value);
	}
};

struct HoverController_t423031069_StaticFields
{
public:
	// HoverController HoverController::instance
	HoverController_t423031069 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(HoverController_t423031069_StaticFields, ___instance_4)); }
	inline HoverController_t423031069 * get_instance_4() const { return ___instance_4; }
	inline HoverController_t423031069 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(HoverController_t423031069 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOVERCONTROLLER_T423031069_H
#ifndef INSTRUCTIONPREVIEW_T1842191950_H
#define INSTRUCTIONPREVIEW_T1842191950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InstructionPreview
struct  InstructionPreview_t1842191950  : public MonoBehaviour_t3962482529
{
public:
	// MemoryCellController[] InstructionPreview::cells
	MemoryCellControllerU5BU5D_t1776215942* ___cells_4;
	// UnityEngine.TextMesh InstructionPreview::text
	TextMesh_t1536577757 * ___text_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> InstructionPreview::instcLookup
	Dictionary_2_t736164020 * ___instcLookup_6;

public:
	inline static int32_t get_offset_of_cells_4() { return static_cast<int32_t>(offsetof(InstructionPreview_t1842191950, ___cells_4)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_cells_4() const { return ___cells_4; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_cells_4() { return &___cells_4; }
	inline void set_cells_4(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___cells_4 = value;
		Il2CppCodeGenWriteBarrier((&___cells_4), value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(InstructionPreview_t1842191950, ___text_5)); }
	inline TextMesh_t1536577757 * get_text_5() const { return ___text_5; }
	inline TextMesh_t1536577757 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(TextMesh_t1536577757 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((&___text_5), value);
	}

	inline static int32_t get_offset_of_instcLookup_6() { return static_cast<int32_t>(offsetof(InstructionPreview_t1842191950, ___instcLookup_6)); }
	inline Dictionary_2_t736164020 * get_instcLookup_6() const { return ___instcLookup_6; }
	inline Dictionary_2_t736164020 ** get_address_of_instcLookup_6() { return &___instcLookup_6; }
	inline void set_instcLookup_6(Dictionary_2_t736164020 * value)
	{
		___instcLookup_6 = value;
		Il2CppCodeGenWriteBarrier((&___instcLookup_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTRUCTIONPREVIEW_T1842191950_H
#ifndef JOBCONTROLLER_T2362869387_H
#define JOBCONTROLLER_T2362869387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JobController
struct  JobController_t2362869387  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material JobController::normal
	Material_t340375123 * ___normal_5;
	// UnityEngine.Material JobController::orange
	Material_t340375123 * ___orange_6;
	// UnityEngine.Material JobController::purple
	Material_t340375123 * ___purple_7;
	// UnityEngine.Material JobController::pink
	Material_t340375123 * ___pink_8;
	// UnityEngine.Material JobController::yellow
	Material_t340375123 * ___yellow_9;
	// UnityEngine.Material JobController::light_blue
	Material_t340375123 * ___light_blue_10;
	// UnityEngine.Material JobController::dark_blue
	Material_t340375123 * ___dark_blue_11;
	// UnityEngine.GameObject JobController::sparks
	GameObject_t1113636619 * ___sparks_12;
	// System.Collections.Generic.Dictionary`2<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>> JobController::coloredCells
	Dictionary_2_t755207947 * ___coloredCells_13;
	// System.Collections.Generic.Dictionary`2<ColorTypes,UnityEngine.Material> JobController::materialLookup
	Dictionary_2_t3577345097 * ___materialLookup_14;
	// ColorTypes[] JobController::colorTypesIter
	ColorTypesU5BU5D_t438535719* ___colorTypesIter_15;

public:
	inline static int32_t get_offset_of_normal_5() { return static_cast<int32_t>(offsetof(JobController_t2362869387, ___normal_5)); }
	inline Material_t340375123 * get_normal_5() const { return ___normal_5; }
	inline Material_t340375123 ** get_address_of_normal_5() { return &___normal_5; }
	inline void set_normal_5(Material_t340375123 * value)
	{
		___normal_5 = value;
		Il2CppCodeGenWriteBarrier((&___normal_5), value);
	}

	inline static int32_t get_offset_of_orange_6() { return static_cast<int32_t>(offsetof(JobController_t2362869387, ___orange_6)); }
	inline Material_t340375123 * get_orange_6() const { return ___orange_6; }
	inline Material_t340375123 ** get_address_of_orange_6() { return &___orange_6; }
	inline void set_orange_6(Material_t340375123 * value)
	{
		___orange_6 = value;
		Il2CppCodeGenWriteBarrier((&___orange_6), value);
	}

	inline static int32_t get_offset_of_purple_7() { return static_cast<int32_t>(offsetof(JobController_t2362869387, ___purple_7)); }
	inline Material_t340375123 * get_purple_7() const { return ___purple_7; }
	inline Material_t340375123 ** get_address_of_purple_7() { return &___purple_7; }
	inline void set_purple_7(Material_t340375123 * value)
	{
		___purple_7 = value;
		Il2CppCodeGenWriteBarrier((&___purple_7), value);
	}

	inline static int32_t get_offset_of_pink_8() { return static_cast<int32_t>(offsetof(JobController_t2362869387, ___pink_8)); }
	inline Material_t340375123 * get_pink_8() const { return ___pink_8; }
	inline Material_t340375123 ** get_address_of_pink_8() { return &___pink_8; }
	inline void set_pink_8(Material_t340375123 * value)
	{
		___pink_8 = value;
		Il2CppCodeGenWriteBarrier((&___pink_8), value);
	}

	inline static int32_t get_offset_of_yellow_9() { return static_cast<int32_t>(offsetof(JobController_t2362869387, ___yellow_9)); }
	inline Material_t340375123 * get_yellow_9() const { return ___yellow_9; }
	inline Material_t340375123 ** get_address_of_yellow_9() { return &___yellow_9; }
	inline void set_yellow_9(Material_t340375123 * value)
	{
		___yellow_9 = value;
		Il2CppCodeGenWriteBarrier((&___yellow_9), value);
	}

	inline static int32_t get_offset_of_light_blue_10() { return static_cast<int32_t>(offsetof(JobController_t2362869387, ___light_blue_10)); }
	inline Material_t340375123 * get_light_blue_10() const { return ___light_blue_10; }
	inline Material_t340375123 ** get_address_of_light_blue_10() { return &___light_blue_10; }
	inline void set_light_blue_10(Material_t340375123 * value)
	{
		___light_blue_10 = value;
		Il2CppCodeGenWriteBarrier((&___light_blue_10), value);
	}

	inline static int32_t get_offset_of_dark_blue_11() { return static_cast<int32_t>(offsetof(JobController_t2362869387, ___dark_blue_11)); }
	inline Material_t340375123 * get_dark_blue_11() const { return ___dark_blue_11; }
	inline Material_t340375123 ** get_address_of_dark_blue_11() { return &___dark_blue_11; }
	inline void set_dark_blue_11(Material_t340375123 * value)
	{
		___dark_blue_11 = value;
		Il2CppCodeGenWriteBarrier((&___dark_blue_11), value);
	}

	inline static int32_t get_offset_of_sparks_12() { return static_cast<int32_t>(offsetof(JobController_t2362869387, ___sparks_12)); }
	inline GameObject_t1113636619 * get_sparks_12() const { return ___sparks_12; }
	inline GameObject_t1113636619 ** get_address_of_sparks_12() { return &___sparks_12; }
	inline void set_sparks_12(GameObject_t1113636619 * value)
	{
		___sparks_12 = value;
		Il2CppCodeGenWriteBarrier((&___sparks_12), value);
	}

	inline static int32_t get_offset_of_coloredCells_13() { return static_cast<int32_t>(offsetof(JobController_t2362869387, ___coloredCells_13)); }
	inline Dictionary_2_t755207947 * get_coloredCells_13() const { return ___coloredCells_13; }
	inline Dictionary_2_t755207947 ** get_address_of_coloredCells_13() { return &___coloredCells_13; }
	inline void set_coloredCells_13(Dictionary_2_t755207947 * value)
	{
		___coloredCells_13 = value;
		Il2CppCodeGenWriteBarrier((&___coloredCells_13), value);
	}

	inline static int32_t get_offset_of_materialLookup_14() { return static_cast<int32_t>(offsetof(JobController_t2362869387, ___materialLookup_14)); }
	inline Dictionary_2_t3577345097 * get_materialLookup_14() const { return ___materialLookup_14; }
	inline Dictionary_2_t3577345097 ** get_address_of_materialLookup_14() { return &___materialLookup_14; }
	inline void set_materialLookup_14(Dictionary_2_t3577345097 * value)
	{
		___materialLookup_14 = value;
		Il2CppCodeGenWriteBarrier((&___materialLookup_14), value);
	}

	inline static int32_t get_offset_of_colorTypesIter_15() { return static_cast<int32_t>(offsetof(JobController_t2362869387, ___colorTypesIter_15)); }
	inline ColorTypesU5BU5D_t438535719* get_colorTypesIter_15() const { return ___colorTypesIter_15; }
	inline ColorTypesU5BU5D_t438535719** get_address_of_colorTypesIter_15() { return &___colorTypesIter_15; }
	inline void set_colorTypesIter_15(ColorTypesU5BU5D_t438535719* value)
	{
		___colorTypesIter_15 = value;
		Il2CppCodeGenWriteBarrier((&___colorTypesIter_15), value);
	}
};

struct JobController_t2362869387_StaticFields
{
public:
	// JobController JobController::instance
	JobController_t2362869387 * ___instance_4;
	// JobController/Condition JobController::<>f__am$cache0
	Condition_t2788105126 * ___U3CU3Ef__amU24cache0_16;
	// JobController/Condition JobController::<>f__am$cache1
	Condition_t2788105126 * ___U3CU3Ef__amU24cache1_17;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(JobController_t2362869387_StaticFields, ___instance_4)); }
	inline JobController_t2362869387 * get_instance_4() const { return ___instance_4; }
	inline JobController_t2362869387 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(JobController_t2362869387 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(JobController_t2362869387_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline Condition_t2788105126 * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline Condition_t2788105126 ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(Condition_t2788105126 * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_17() { return static_cast<int32_t>(offsetof(JobController_t2362869387_StaticFields, ___U3CU3Ef__amU24cache1_17)); }
	inline Condition_t2788105126 * get_U3CU3Ef__amU24cache1_17() const { return ___U3CU3Ef__amU24cache1_17; }
	inline Condition_t2788105126 ** get_address_of_U3CU3Ef__amU24cache1_17() { return &___U3CU3Ef__amU24cache1_17; }
	inline void set_U3CU3Ef__amU24cache1_17(Condition_t2788105126 * value)
	{
		___U3CU3Ef__amU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOBCONTROLLER_T2362869387_H
#ifndef KEYEVENTCONTROLLER_T2268638968_H
#define KEYEVENTCONTROLLER_T2268638968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KeyEventController
struct  KeyEventController_t2268638968  : public MonoBehaviour_t3962482529
{
public:
	// System.String[] KeyEventController::keys
	StringU5BU5D_t1281789340* ___keys_4;

public:
	inline static int32_t get_offset_of_keys_4() { return static_cast<int32_t>(offsetof(KeyEventController_t2268638968, ___keys_4)); }
	inline StringU5BU5D_t1281789340* get_keys_4() const { return ___keys_4; }
	inline StringU5BU5D_t1281789340** get_address_of_keys_4() { return &___keys_4; }
	inline void set_keys_4(StringU5BU5D_t1281789340* value)
	{
		___keys_4 = value;
		Il2CppCodeGenWriteBarrier((&___keys_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEVENTCONTROLLER_T2268638968_H
#ifndef MEMORYCELLCONTROLLER_T341130527_H
#define MEMORYCELLCONTROLLER_T341130527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MemoryCellController
struct  MemoryCellController_t341130527  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject MemoryCellController::left
	GameObject_t1113636619 * ___left_4;
	// UnityEngine.GameObject MemoryCellController::right
	GameObject_t1113636619 * ___right_5;
	// System.Boolean MemoryCellController::isColored
	bool ___isColored_6;
	// System.Int32 MemoryCellController::gridNumber
	int32_t ___gridNumber_7;
	// System.Boolean MemoryCellController::selected
	bool ___selected_8;
	// System.Collections.Generic.List`1<ICellListener> MemoryCellController::listeners
	List_1_t599095547 * ___listeners_9;
	// UnityEngine.Animation MemoryCellController::clip
	Animation_t3648466861 * ___clip_10;
	// System.Int32 MemoryCellController::previewNumber
	int32_t ___previewNumber_11;
	// System.String[] MemoryCellController::keys
	StringU5BU5D_t1281789340* ___keys_12;

public:
	inline static int32_t get_offset_of_left_4() { return static_cast<int32_t>(offsetof(MemoryCellController_t341130527, ___left_4)); }
	inline GameObject_t1113636619 * get_left_4() const { return ___left_4; }
	inline GameObject_t1113636619 ** get_address_of_left_4() { return &___left_4; }
	inline void set_left_4(GameObject_t1113636619 * value)
	{
		___left_4 = value;
		Il2CppCodeGenWriteBarrier((&___left_4), value);
	}

	inline static int32_t get_offset_of_right_5() { return static_cast<int32_t>(offsetof(MemoryCellController_t341130527, ___right_5)); }
	inline GameObject_t1113636619 * get_right_5() const { return ___right_5; }
	inline GameObject_t1113636619 ** get_address_of_right_5() { return &___right_5; }
	inline void set_right_5(GameObject_t1113636619 * value)
	{
		___right_5 = value;
		Il2CppCodeGenWriteBarrier((&___right_5), value);
	}

	inline static int32_t get_offset_of_isColored_6() { return static_cast<int32_t>(offsetof(MemoryCellController_t341130527, ___isColored_6)); }
	inline bool get_isColored_6() const { return ___isColored_6; }
	inline bool* get_address_of_isColored_6() { return &___isColored_6; }
	inline void set_isColored_6(bool value)
	{
		___isColored_6 = value;
	}

	inline static int32_t get_offset_of_gridNumber_7() { return static_cast<int32_t>(offsetof(MemoryCellController_t341130527, ___gridNumber_7)); }
	inline int32_t get_gridNumber_7() const { return ___gridNumber_7; }
	inline int32_t* get_address_of_gridNumber_7() { return &___gridNumber_7; }
	inline void set_gridNumber_7(int32_t value)
	{
		___gridNumber_7 = value;
	}

	inline static int32_t get_offset_of_selected_8() { return static_cast<int32_t>(offsetof(MemoryCellController_t341130527, ___selected_8)); }
	inline bool get_selected_8() const { return ___selected_8; }
	inline bool* get_address_of_selected_8() { return &___selected_8; }
	inline void set_selected_8(bool value)
	{
		___selected_8 = value;
	}

	inline static int32_t get_offset_of_listeners_9() { return static_cast<int32_t>(offsetof(MemoryCellController_t341130527, ___listeners_9)); }
	inline List_1_t599095547 * get_listeners_9() const { return ___listeners_9; }
	inline List_1_t599095547 ** get_address_of_listeners_9() { return &___listeners_9; }
	inline void set_listeners_9(List_1_t599095547 * value)
	{
		___listeners_9 = value;
		Il2CppCodeGenWriteBarrier((&___listeners_9), value);
	}

	inline static int32_t get_offset_of_clip_10() { return static_cast<int32_t>(offsetof(MemoryCellController_t341130527, ___clip_10)); }
	inline Animation_t3648466861 * get_clip_10() const { return ___clip_10; }
	inline Animation_t3648466861 ** get_address_of_clip_10() { return &___clip_10; }
	inline void set_clip_10(Animation_t3648466861 * value)
	{
		___clip_10 = value;
		Il2CppCodeGenWriteBarrier((&___clip_10), value);
	}

	inline static int32_t get_offset_of_previewNumber_11() { return static_cast<int32_t>(offsetof(MemoryCellController_t341130527, ___previewNumber_11)); }
	inline int32_t get_previewNumber_11() const { return ___previewNumber_11; }
	inline int32_t* get_address_of_previewNumber_11() { return &___previewNumber_11; }
	inline void set_previewNumber_11(int32_t value)
	{
		___previewNumber_11 = value;
	}

	inline static int32_t get_offset_of_keys_12() { return static_cast<int32_t>(offsetof(MemoryCellController_t341130527, ___keys_12)); }
	inline StringU5BU5D_t1281789340* get_keys_12() const { return ___keys_12; }
	inline StringU5BU5D_t1281789340** get_address_of_keys_12() { return &___keys_12; }
	inline void set_keys_12(StringU5BU5D_t1281789340* value)
	{
		___keys_12 = value;
		Il2CppCodeGenWriteBarrier((&___keys_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYCELLCONTROLLER_T341130527_H
#ifndef MEMORYCELLTEXTCONTROLLER_T3948011966_H
#define MEMORYCELLTEXTCONTROLLER_T3948011966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MemoryCellTextController
struct  MemoryCellTextController_t3948011966  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextMesh MemoryCellTextController::text
	TextMesh_t1536577757 * ___text_4;
	// System.Int32 MemoryCellTextController::range
	int32_t ___range_5;
	// System.Int32 MemoryCellTextController::numberValue
	int32_t ___numberValue_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MemoryCellTextController::lookup
	Dictionary_2_t2736202052 * ___lookup_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> MemoryCellTextController::rlookup
	Dictionary_2_t736164020 * ___rlookup_8;
	// System.String[] MemoryCellTextController::keys
	StringU5BU5D_t1281789340* ___keys_9;
	// System.Int32[] MemoryCellTextController::values
	Int32U5BU5D_t385246372* ___values_10;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(MemoryCellTextController_t3948011966, ___text_4)); }
	inline TextMesh_t1536577757 * get_text_4() const { return ___text_4; }
	inline TextMesh_t1536577757 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(TextMesh_t1536577757 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((&___text_4), value);
	}

	inline static int32_t get_offset_of_range_5() { return static_cast<int32_t>(offsetof(MemoryCellTextController_t3948011966, ___range_5)); }
	inline int32_t get_range_5() const { return ___range_5; }
	inline int32_t* get_address_of_range_5() { return &___range_5; }
	inline void set_range_5(int32_t value)
	{
		___range_5 = value;
	}

	inline static int32_t get_offset_of_numberValue_6() { return static_cast<int32_t>(offsetof(MemoryCellTextController_t3948011966, ___numberValue_6)); }
	inline int32_t get_numberValue_6() const { return ___numberValue_6; }
	inline int32_t* get_address_of_numberValue_6() { return &___numberValue_6; }
	inline void set_numberValue_6(int32_t value)
	{
		___numberValue_6 = value;
	}

	inline static int32_t get_offset_of_lookup_7() { return static_cast<int32_t>(offsetof(MemoryCellTextController_t3948011966, ___lookup_7)); }
	inline Dictionary_2_t2736202052 * get_lookup_7() const { return ___lookup_7; }
	inline Dictionary_2_t2736202052 ** get_address_of_lookup_7() { return &___lookup_7; }
	inline void set_lookup_7(Dictionary_2_t2736202052 * value)
	{
		___lookup_7 = value;
		Il2CppCodeGenWriteBarrier((&___lookup_7), value);
	}

	inline static int32_t get_offset_of_rlookup_8() { return static_cast<int32_t>(offsetof(MemoryCellTextController_t3948011966, ___rlookup_8)); }
	inline Dictionary_2_t736164020 * get_rlookup_8() const { return ___rlookup_8; }
	inline Dictionary_2_t736164020 ** get_address_of_rlookup_8() { return &___rlookup_8; }
	inline void set_rlookup_8(Dictionary_2_t736164020 * value)
	{
		___rlookup_8 = value;
		Il2CppCodeGenWriteBarrier((&___rlookup_8), value);
	}

	inline static int32_t get_offset_of_keys_9() { return static_cast<int32_t>(offsetof(MemoryCellTextController_t3948011966, ___keys_9)); }
	inline StringU5BU5D_t1281789340* get_keys_9() const { return ___keys_9; }
	inline StringU5BU5D_t1281789340** get_address_of_keys_9() { return &___keys_9; }
	inline void set_keys_9(StringU5BU5D_t1281789340* value)
	{
		___keys_9 = value;
		Il2CppCodeGenWriteBarrier((&___keys_9), value);
	}

	inline static int32_t get_offset_of_values_10() { return static_cast<int32_t>(offsetof(MemoryCellTextController_t3948011966, ___values_10)); }
	inline Int32U5BU5D_t385246372* get_values_10() const { return ___values_10; }
	inline Int32U5BU5D_t385246372** get_address_of_values_10() { return &___values_10; }
	inline void set_values_10(Int32U5BU5D_t385246372* value)
	{
		___values_10 = value;
		Il2CppCodeGenWriteBarrier((&___values_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYCELLTEXTCONTROLLER_T3948011966_H
#ifndef MEMORYRETRIEVER_T2760707818_H
#define MEMORYRETRIEVER_T2760707818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MemoryRetriever
struct  MemoryRetriever_t2760707818  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.LineRenderer MemoryRetriever::hLine
	LineRenderer_t3154350270 * ___hLine_5;
	// UnityEngine.LineRenderer MemoryRetriever::vLine
	LineRenderer_t3154350270 * ___vLine_6;
	// UnityEngine.GameObject MemoryRetriever::whiteFlash
	GameObject_t1113636619 * ___whiteFlash_7;

public:
	inline static int32_t get_offset_of_hLine_5() { return static_cast<int32_t>(offsetof(MemoryRetriever_t2760707818, ___hLine_5)); }
	inline LineRenderer_t3154350270 * get_hLine_5() const { return ___hLine_5; }
	inline LineRenderer_t3154350270 ** get_address_of_hLine_5() { return &___hLine_5; }
	inline void set_hLine_5(LineRenderer_t3154350270 * value)
	{
		___hLine_5 = value;
		Il2CppCodeGenWriteBarrier((&___hLine_5), value);
	}

	inline static int32_t get_offset_of_vLine_6() { return static_cast<int32_t>(offsetof(MemoryRetriever_t2760707818, ___vLine_6)); }
	inline LineRenderer_t3154350270 * get_vLine_6() const { return ___vLine_6; }
	inline LineRenderer_t3154350270 ** get_address_of_vLine_6() { return &___vLine_6; }
	inline void set_vLine_6(LineRenderer_t3154350270 * value)
	{
		___vLine_6 = value;
		Il2CppCodeGenWriteBarrier((&___vLine_6), value);
	}

	inline static int32_t get_offset_of_whiteFlash_7() { return static_cast<int32_t>(offsetof(MemoryRetriever_t2760707818, ___whiteFlash_7)); }
	inline GameObject_t1113636619 * get_whiteFlash_7() const { return ___whiteFlash_7; }
	inline GameObject_t1113636619 ** get_address_of_whiteFlash_7() { return &___whiteFlash_7; }
	inline void set_whiteFlash_7(GameObject_t1113636619 * value)
	{
		___whiteFlash_7 = value;
		Il2CppCodeGenWriteBarrier((&___whiteFlash_7), value);
	}
};

struct MemoryRetriever_t2760707818_StaticFields
{
public:
	// MemoryRetriever MemoryRetriever::instance
	MemoryRetriever_t2760707818 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(MemoryRetriever_t2760707818_StaticFields, ___instance_4)); }
	inline MemoryRetriever_t2760707818 * get_instance_4() const { return ___instance_4; }
	inline MemoryRetriever_t2760707818 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(MemoryRetriever_t2760707818 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYRETRIEVER_T2760707818_H
#ifndef MONEYCONTROLLER_T851075799_H
#define MONEYCONTROLLER_T851075799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoneyController
struct  MoneyController_t851075799  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextMesh MoneyController::text
	TextMesh_t1536577757 * ___text_5;
	// UnityEngine.ParticleSystem MoneyController::goodParticleSystem
	ParticleSystem_t1800779281 * ___goodParticleSystem_6;
	// UnityEngine.ParticleSystem MoneyController::badParticleSystem
	ParticleSystem_t1800779281 * ___badParticleSystem_7;
	// System.Single MoneyController::currentMoney
	float ___currentMoney_8;
	// System.Single MoneyController::readAmount
	float ___readAmount_9;
	// System.Single MoneyController::successAmount
	float ___successAmount_10;
	// System.Single MoneyController::factor
	float ___factor_11;

public:
	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(MoneyController_t851075799, ___text_5)); }
	inline TextMesh_t1536577757 * get_text_5() const { return ___text_5; }
	inline TextMesh_t1536577757 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(TextMesh_t1536577757 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((&___text_5), value);
	}

	inline static int32_t get_offset_of_goodParticleSystem_6() { return static_cast<int32_t>(offsetof(MoneyController_t851075799, ___goodParticleSystem_6)); }
	inline ParticleSystem_t1800779281 * get_goodParticleSystem_6() const { return ___goodParticleSystem_6; }
	inline ParticleSystem_t1800779281 ** get_address_of_goodParticleSystem_6() { return &___goodParticleSystem_6; }
	inline void set_goodParticleSystem_6(ParticleSystem_t1800779281 * value)
	{
		___goodParticleSystem_6 = value;
		Il2CppCodeGenWriteBarrier((&___goodParticleSystem_6), value);
	}

	inline static int32_t get_offset_of_badParticleSystem_7() { return static_cast<int32_t>(offsetof(MoneyController_t851075799, ___badParticleSystem_7)); }
	inline ParticleSystem_t1800779281 * get_badParticleSystem_7() const { return ___badParticleSystem_7; }
	inline ParticleSystem_t1800779281 ** get_address_of_badParticleSystem_7() { return &___badParticleSystem_7; }
	inline void set_badParticleSystem_7(ParticleSystem_t1800779281 * value)
	{
		___badParticleSystem_7 = value;
		Il2CppCodeGenWriteBarrier((&___badParticleSystem_7), value);
	}

	inline static int32_t get_offset_of_currentMoney_8() { return static_cast<int32_t>(offsetof(MoneyController_t851075799, ___currentMoney_8)); }
	inline float get_currentMoney_8() const { return ___currentMoney_8; }
	inline float* get_address_of_currentMoney_8() { return &___currentMoney_8; }
	inline void set_currentMoney_8(float value)
	{
		___currentMoney_8 = value;
	}

	inline static int32_t get_offset_of_readAmount_9() { return static_cast<int32_t>(offsetof(MoneyController_t851075799, ___readAmount_9)); }
	inline float get_readAmount_9() const { return ___readAmount_9; }
	inline float* get_address_of_readAmount_9() { return &___readAmount_9; }
	inline void set_readAmount_9(float value)
	{
		___readAmount_9 = value;
	}

	inline static int32_t get_offset_of_successAmount_10() { return static_cast<int32_t>(offsetof(MoneyController_t851075799, ___successAmount_10)); }
	inline float get_successAmount_10() const { return ___successAmount_10; }
	inline float* get_address_of_successAmount_10() { return &___successAmount_10; }
	inline void set_successAmount_10(float value)
	{
		___successAmount_10 = value;
	}

	inline static int32_t get_offset_of_factor_11() { return static_cast<int32_t>(offsetof(MoneyController_t851075799, ___factor_11)); }
	inline float get_factor_11() const { return ___factor_11; }
	inline float* get_address_of_factor_11() { return &___factor_11; }
	inline void set_factor_11(float value)
	{
		___factor_11 = value;
	}
};

struct MoneyController_t851075799_StaticFields
{
public:
	// MoneyController MoneyController::instance
	MoneyController_t851075799 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(MoneyController_t851075799_StaticFields, ___instance_4)); }
	inline MoneyController_t851075799 * get_instance_4() const { return ___instance_4; }
	inline MoneyController_t851075799 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(MoneyController_t851075799 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONEYCONTROLLER_T851075799_H
#ifndef MOUSECOLLIDERCONTROLLER_T664166756_H
#define MOUSECOLLIDERCONTROLLER_T664166756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MouseColliderController
struct  MouseColliderController_t664166756  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOUSECOLLIDERCONTROLLER_T664166756_H
#ifndef MOUSELIGHT_T1369392169_H
#define MOUSELIGHT_T1369392169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MouseLight
struct  MouseLight_t1369392169  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOUSELIGHT_T1369392169_H
#ifndef MYAUDIOCONTROLLER_T2840361766_H
#define MYAUDIOCONTROLLER_T2840361766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyAudioController
struct  MyAudioController_t2840361766  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioClip MyAudioController::Cash_Positive
	AudioClip_t3680889665 * ___Cash_Positive_5;
	// UnityEngine.AudioClip MyAudioController::Cash_Negative
	AudioClip_t3680889665 * ___Cash_Negative_6;
	// UnityEngine.AudioClip MyAudioController::Halt
	AudioClip_t3680889665 * ___Halt_7;
	// UnityEngine.AudioClip MyAudioController::End
	AudioClip_t3680889665 * ___End_8;
	// UnityEngine.AudioClip MyAudioController::Tock
	AudioClip_t3680889665 * ___Tock_9;
	// UnityEngine.AudioClip MyAudioController::Start_Game
	AudioClip_t3680889665 * ___Start_Game_10;
	// UnityEngine.AudioClip MyAudioController::Nav
	AudioClip_t3680889665 * ___Nav_11;
	// System.Collections.Generic.Dictionary`2<AudioType,UnityEngine.AudioClip> MyAudioController::lookup
	Dictionary_2_t336392811 * ___lookup_12;
	// UnityEngine.AudioSource MyAudioController::source
	AudioSource_t3935305588 * ___source_13;

public:
	inline static int32_t get_offset_of_Cash_Positive_5() { return static_cast<int32_t>(offsetof(MyAudioController_t2840361766, ___Cash_Positive_5)); }
	inline AudioClip_t3680889665 * get_Cash_Positive_5() const { return ___Cash_Positive_5; }
	inline AudioClip_t3680889665 ** get_address_of_Cash_Positive_5() { return &___Cash_Positive_5; }
	inline void set_Cash_Positive_5(AudioClip_t3680889665 * value)
	{
		___Cash_Positive_5 = value;
		Il2CppCodeGenWriteBarrier((&___Cash_Positive_5), value);
	}

	inline static int32_t get_offset_of_Cash_Negative_6() { return static_cast<int32_t>(offsetof(MyAudioController_t2840361766, ___Cash_Negative_6)); }
	inline AudioClip_t3680889665 * get_Cash_Negative_6() const { return ___Cash_Negative_6; }
	inline AudioClip_t3680889665 ** get_address_of_Cash_Negative_6() { return &___Cash_Negative_6; }
	inline void set_Cash_Negative_6(AudioClip_t3680889665 * value)
	{
		___Cash_Negative_6 = value;
		Il2CppCodeGenWriteBarrier((&___Cash_Negative_6), value);
	}

	inline static int32_t get_offset_of_Halt_7() { return static_cast<int32_t>(offsetof(MyAudioController_t2840361766, ___Halt_7)); }
	inline AudioClip_t3680889665 * get_Halt_7() const { return ___Halt_7; }
	inline AudioClip_t3680889665 ** get_address_of_Halt_7() { return &___Halt_7; }
	inline void set_Halt_7(AudioClip_t3680889665 * value)
	{
		___Halt_7 = value;
		Il2CppCodeGenWriteBarrier((&___Halt_7), value);
	}

	inline static int32_t get_offset_of_End_8() { return static_cast<int32_t>(offsetof(MyAudioController_t2840361766, ___End_8)); }
	inline AudioClip_t3680889665 * get_End_8() const { return ___End_8; }
	inline AudioClip_t3680889665 ** get_address_of_End_8() { return &___End_8; }
	inline void set_End_8(AudioClip_t3680889665 * value)
	{
		___End_8 = value;
		Il2CppCodeGenWriteBarrier((&___End_8), value);
	}

	inline static int32_t get_offset_of_Tock_9() { return static_cast<int32_t>(offsetof(MyAudioController_t2840361766, ___Tock_9)); }
	inline AudioClip_t3680889665 * get_Tock_9() const { return ___Tock_9; }
	inline AudioClip_t3680889665 ** get_address_of_Tock_9() { return &___Tock_9; }
	inline void set_Tock_9(AudioClip_t3680889665 * value)
	{
		___Tock_9 = value;
		Il2CppCodeGenWriteBarrier((&___Tock_9), value);
	}

	inline static int32_t get_offset_of_Start_Game_10() { return static_cast<int32_t>(offsetof(MyAudioController_t2840361766, ___Start_Game_10)); }
	inline AudioClip_t3680889665 * get_Start_Game_10() const { return ___Start_Game_10; }
	inline AudioClip_t3680889665 ** get_address_of_Start_Game_10() { return &___Start_Game_10; }
	inline void set_Start_Game_10(AudioClip_t3680889665 * value)
	{
		___Start_Game_10 = value;
		Il2CppCodeGenWriteBarrier((&___Start_Game_10), value);
	}

	inline static int32_t get_offset_of_Nav_11() { return static_cast<int32_t>(offsetof(MyAudioController_t2840361766, ___Nav_11)); }
	inline AudioClip_t3680889665 * get_Nav_11() const { return ___Nav_11; }
	inline AudioClip_t3680889665 ** get_address_of_Nav_11() { return &___Nav_11; }
	inline void set_Nav_11(AudioClip_t3680889665 * value)
	{
		___Nav_11 = value;
		Il2CppCodeGenWriteBarrier((&___Nav_11), value);
	}

	inline static int32_t get_offset_of_lookup_12() { return static_cast<int32_t>(offsetof(MyAudioController_t2840361766, ___lookup_12)); }
	inline Dictionary_2_t336392811 * get_lookup_12() const { return ___lookup_12; }
	inline Dictionary_2_t336392811 ** get_address_of_lookup_12() { return &___lookup_12; }
	inline void set_lookup_12(Dictionary_2_t336392811 * value)
	{
		___lookup_12 = value;
		Il2CppCodeGenWriteBarrier((&___lookup_12), value);
	}

	inline static int32_t get_offset_of_source_13() { return static_cast<int32_t>(offsetof(MyAudioController_t2840361766, ___source_13)); }
	inline AudioSource_t3935305588 * get_source_13() const { return ___source_13; }
	inline AudioSource_t3935305588 ** get_address_of_source_13() { return &___source_13; }
	inline void set_source_13(AudioSource_t3935305588 * value)
	{
		___source_13 = value;
		Il2CppCodeGenWriteBarrier((&___source_13), value);
	}
};

struct MyAudioController_t2840361766_StaticFields
{
public:
	// MyAudioController MyAudioController::instance
	MyAudioController_t2840361766 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(MyAudioController_t2840361766_StaticFields, ___instance_4)); }
	inline MyAudioController_t2840361766 * get_instance_4() const { return ___instance_4; }
	inline MyAudioController_t2840361766 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(MyAudioController_t2840361766 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYAUDIOCONTROLLER_T2840361766_H
#ifndef NUMERICALPREVIEW_T136486070_H
#define NUMERICALPREVIEW_T136486070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NumericalPreview
struct  NumericalPreview_t136486070  : public MonoBehaviour_t3962482529
{
public:
	// MemoryCellController[] NumericalPreview::cells
	MemoryCellControllerU5BU5D_t1776215942* ___cells_4;
	// UnityEngine.TextMesh NumericalPreview::text
	TextMesh_t1536577757 * ___text_5;
	// System.String[] NumericalPreview::hex
	StringU5BU5D_t1281789340* ___hex_6;

public:
	inline static int32_t get_offset_of_cells_4() { return static_cast<int32_t>(offsetof(NumericalPreview_t136486070, ___cells_4)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_cells_4() const { return ___cells_4; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_cells_4() { return &___cells_4; }
	inline void set_cells_4(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___cells_4 = value;
		Il2CppCodeGenWriteBarrier((&___cells_4), value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(NumericalPreview_t136486070, ___text_5)); }
	inline TextMesh_t1536577757 * get_text_5() const { return ___text_5; }
	inline TextMesh_t1536577757 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(TextMesh_t1536577757 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((&___text_5), value);
	}

	inline static int32_t get_offset_of_hex_6() { return static_cast<int32_t>(offsetof(NumericalPreview_t136486070, ___hex_6)); }
	inline StringU5BU5D_t1281789340* get_hex_6() const { return ___hex_6; }
	inline StringU5BU5D_t1281789340** get_address_of_hex_6() { return &___hex_6; }
	inline void set_hex_6(StringU5BU5D_t1281789340* value)
	{
		___hex_6 = value;
		Il2CppCodeGenWriteBarrier((&___hex_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMERICALPREVIEW_T136486070_H
#ifndef RANDOMBUTTONCONTROLLER_T2952941430_H
#define RANDOMBUTTONCONTROLLER_T2952941430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomButtonController
struct  RandomButtonController_t2952941430  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextMesh RandomButtonController::text
	TextMesh_t1536577757 * ___text_5;
	// UnityEngine.SpriteRenderer RandomButtonController::background
	SpriteRenderer_t3235626157 * ___background_6;
	// System.Boolean RandomButtonController::hover
	bool ___hover_7;

public:
	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(RandomButtonController_t2952941430, ___text_5)); }
	inline TextMesh_t1536577757 * get_text_5() const { return ___text_5; }
	inline TextMesh_t1536577757 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(TextMesh_t1536577757 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((&___text_5), value);
	}

	inline static int32_t get_offset_of_background_6() { return static_cast<int32_t>(offsetof(RandomButtonController_t2952941430, ___background_6)); }
	inline SpriteRenderer_t3235626157 * get_background_6() const { return ___background_6; }
	inline SpriteRenderer_t3235626157 ** get_address_of_background_6() { return &___background_6; }
	inline void set_background_6(SpriteRenderer_t3235626157 * value)
	{
		___background_6 = value;
		Il2CppCodeGenWriteBarrier((&___background_6), value);
	}

	inline static int32_t get_offset_of_hover_7() { return static_cast<int32_t>(offsetof(RandomButtonController_t2952941430, ___hover_7)); }
	inline bool get_hover_7() const { return ___hover_7; }
	inline bool* get_address_of_hover_7() { return &___hover_7; }
	inline void set_hover_7(bool value)
	{
		___hover_7 = value;
	}
};

struct RandomButtonController_t2952941430_StaticFields
{
public:
	// RandomButtonController RandomButtonController::instance
	RandomButtonController_t2952941430 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(RandomButtonController_t2952941430_StaticFields, ___instance_4)); }
	inline RandomButtonController_t2952941430 * get_instance_4() const { return ___instance_4; }
	inline RandomButtonController_t2952941430 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(RandomButtonController_t2952941430 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMBUTTONCONTROLLER_T2952941430_H
#ifndef REGISTERCONTROLLER_T92122650_H
#define REGISTERCONTROLLER_T92122650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RegisterController
struct  RegisterController_t92122650  : public MonoBehaviour_t3962482529
{
public:
	// MemoryCellController[] RegisterController::instcCells
	MemoryCellControllerU5BU5D_t1776215942* ___instcCells_5;
	// MemoryCellController[] RegisterController::pcCells
	MemoryCellControllerU5BU5D_t1776215942* ___pcCells_6;
	// MemoryCellController[] RegisterController::aCells
	MemoryCellControllerU5BU5D_t1776215942* ___aCells_7;
	// MemoryCellController[] RegisterController::bCells
	MemoryCellControllerU5BU5D_t1776215942* ___bCells_8;
	// System.Collections.Generic.Dictionary`2<Register,MemoryCellController[]> RegisterController::registerLookup
	Dictionary_2_t2269235889 * ___registerLookup_9;

public:
	inline static int32_t get_offset_of_instcCells_5() { return static_cast<int32_t>(offsetof(RegisterController_t92122650, ___instcCells_5)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_instcCells_5() const { return ___instcCells_5; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_instcCells_5() { return &___instcCells_5; }
	inline void set_instcCells_5(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___instcCells_5 = value;
		Il2CppCodeGenWriteBarrier((&___instcCells_5), value);
	}

	inline static int32_t get_offset_of_pcCells_6() { return static_cast<int32_t>(offsetof(RegisterController_t92122650, ___pcCells_6)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_pcCells_6() const { return ___pcCells_6; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_pcCells_6() { return &___pcCells_6; }
	inline void set_pcCells_6(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___pcCells_6 = value;
		Il2CppCodeGenWriteBarrier((&___pcCells_6), value);
	}

	inline static int32_t get_offset_of_aCells_7() { return static_cast<int32_t>(offsetof(RegisterController_t92122650, ___aCells_7)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_aCells_7() const { return ___aCells_7; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_aCells_7() { return &___aCells_7; }
	inline void set_aCells_7(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___aCells_7 = value;
		Il2CppCodeGenWriteBarrier((&___aCells_7), value);
	}

	inline static int32_t get_offset_of_bCells_8() { return static_cast<int32_t>(offsetof(RegisterController_t92122650, ___bCells_8)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_bCells_8() const { return ___bCells_8; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_bCells_8() { return &___bCells_8; }
	inline void set_bCells_8(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___bCells_8 = value;
		Il2CppCodeGenWriteBarrier((&___bCells_8), value);
	}

	inline static int32_t get_offset_of_registerLookup_9() { return static_cast<int32_t>(offsetof(RegisterController_t92122650, ___registerLookup_9)); }
	inline Dictionary_2_t2269235889 * get_registerLookup_9() const { return ___registerLookup_9; }
	inline Dictionary_2_t2269235889 ** get_address_of_registerLookup_9() { return &___registerLookup_9; }
	inline void set_registerLookup_9(Dictionary_2_t2269235889 * value)
	{
		___registerLookup_9 = value;
		Il2CppCodeGenWriteBarrier((&___registerLookup_9), value);
	}
};

struct RegisterController_t92122650_StaticFields
{
public:
	// RegisterController RegisterController::instance
	RegisterController_t92122650 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(RegisterController_t92122650_StaticFields, ___instance_4)); }
	inline RegisterController_t92122650 * get_instance_4() const { return ___instance_4; }
	inline RegisterController_t92122650 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(RegisterController_t92122650 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTERCONTROLLER_T92122650_H
#ifndef REGISTEROBJECT_T528985038_H
#define REGISTEROBJECT_T528985038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RegisterObject
struct  RegisterObject_t528985038  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTEROBJECT_T528985038_H
#ifndef REGISTERRETRIEVER_T3846945983_H
#define REGISTERRETRIEVER_T3846945983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RegisterRetriever
struct  RegisterRetriever_t3846945983  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.LineRenderer RegisterRetriever::hLine
	LineRenderer_t3154350270 * ___hLine_5;
	// UnityEngine.LineRenderer RegisterRetriever::vLine
	LineRenderer_t3154350270 * ___vLine_6;
	// UnityEngine.GameObject RegisterRetriever::whiteFlash
	GameObject_t1113636619 * ___whiteFlash_7;

public:
	inline static int32_t get_offset_of_hLine_5() { return static_cast<int32_t>(offsetof(RegisterRetriever_t3846945983, ___hLine_5)); }
	inline LineRenderer_t3154350270 * get_hLine_5() const { return ___hLine_5; }
	inline LineRenderer_t3154350270 ** get_address_of_hLine_5() { return &___hLine_5; }
	inline void set_hLine_5(LineRenderer_t3154350270 * value)
	{
		___hLine_5 = value;
		Il2CppCodeGenWriteBarrier((&___hLine_5), value);
	}

	inline static int32_t get_offset_of_vLine_6() { return static_cast<int32_t>(offsetof(RegisterRetriever_t3846945983, ___vLine_6)); }
	inline LineRenderer_t3154350270 * get_vLine_6() const { return ___vLine_6; }
	inline LineRenderer_t3154350270 ** get_address_of_vLine_6() { return &___vLine_6; }
	inline void set_vLine_6(LineRenderer_t3154350270 * value)
	{
		___vLine_6 = value;
		Il2CppCodeGenWriteBarrier((&___vLine_6), value);
	}

	inline static int32_t get_offset_of_whiteFlash_7() { return static_cast<int32_t>(offsetof(RegisterRetriever_t3846945983, ___whiteFlash_7)); }
	inline GameObject_t1113636619 * get_whiteFlash_7() const { return ___whiteFlash_7; }
	inline GameObject_t1113636619 ** get_address_of_whiteFlash_7() { return &___whiteFlash_7; }
	inline void set_whiteFlash_7(GameObject_t1113636619 * value)
	{
		___whiteFlash_7 = value;
		Il2CppCodeGenWriteBarrier((&___whiteFlash_7), value);
	}
};

struct RegisterRetriever_t3846945983_StaticFields
{
public:
	// RegisterRetriever RegisterRetriever::instance
	RegisterRetriever_t3846945983 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(RegisterRetriever_t3846945983_StaticFields, ___instance_4)); }
	inline RegisterRetriever_t3846945983 * get_instance_4() const { return ___instance_4; }
	inline RegisterRetriever_t3846945983 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(RegisterRetriever_t3846945983 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTERRETRIEVER_T3846945983_H
#ifndef ROWCOLPREVIEW_T334518614_H
#define ROWCOLPREVIEW_T334518614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RowColPreview
struct  RowColPreview_t334518614  : public MonoBehaviour_t3962482529
{
public:
	// MemoryCellController[] RowColPreview::cells
	MemoryCellControllerU5BU5D_t1776215942* ___cells_4;
	// MemoryCellController[] RowColPreview::row
	MemoryCellControllerU5BU5D_t1776215942* ___row_5;
	// MemoryCellController[] RowColPreview::col
	MemoryCellControllerU5BU5D_t1776215942* ___col_6;
	// UnityEngine.TextMesh RowColPreview::text
	TextMesh_t1536577757 * ___text_7;
	// System.String[] RowColPreview::hex
	StringU5BU5D_t1281789340* ___hex_8;

public:
	inline static int32_t get_offset_of_cells_4() { return static_cast<int32_t>(offsetof(RowColPreview_t334518614, ___cells_4)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_cells_4() const { return ___cells_4; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_cells_4() { return &___cells_4; }
	inline void set_cells_4(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___cells_4 = value;
		Il2CppCodeGenWriteBarrier((&___cells_4), value);
	}

	inline static int32_t get_offset_of_row_5() { return static_cast<int32_t>(offsetof(RowColPreview_t334518614, ___row_5)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_row_5() const { return ___row_5; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_row_5() { return &___row_5; }
	inline void set_row_5(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___row_5 = value;
		Il2CppCodeGenWriteBarrier((&___row_5), value);
	}

	inline static int32_t get_offset_of_col_6() { return static_cast<int32_t>(offsetof(RowColPreview_t334518614, ___col_6)); }
	inline MemoryCellControllerU5BU5D_t1776215942* get_col_6() const { return ___col_6; }
	inline MemoryCellControllerU5BU5D_t1776215942** get_address_of_col_6() { return &___col_6; }
	inline void set_col_6(MemoryCellControllerU5BU5D_t1776215942* value)
	{
		___col_6 = value;
		Il2CppCodeGenWriteBarrier((&___col_6), value);
	}

	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(RowColPreview_t334518614, ___text_7)); }
	inline TextMesh_t1536577757 * get_text_7() const { return ___text_7; }
	inline TextMesh_t1536577757 ** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(TextMesh_t1536577757 * value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier((&___text_7), value);
	}

	inline static int32_t get_offset_of_hex_8() { return static_cast<int32_t>(offsetof(RowColPreview_t334518614, ___hex_8)); }
	inline StringU5BU5D_t1281789340* get_hex_8() const { return ___hex_8; }
	inline StringU5BU5D_t1281789340** get_address_of_hex_8() { return &___hex_8; }
	inline void set_hex_8(StringU5BU5D_t1281789340* value)
	{
		___hex_8 = value;
		Il2CppCodeGenWriteBarrier((&___hex_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROWCOLPREVIEW_T334518614_H
#ifndef SCORECONTROLLER_T484565259_H
#define SCORECONTROLLER_T484565259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreController
struct  ScoreController_t484565259  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.ParticleSystem ScoreController::ps1
	ParticleSystem_t1800779281 * ___ps1_5;
	// UnityEngine.ParticleSystem ScoreController::ps2
	ParticleSystem_t1800779281 * ___ps2_6;
	// UnityEngine.TextMesh ScoreController::text
	TextMesh_t1536577757 * ___text_7;

public:
	inline static int32_t get_offset_of_ps1_5() { return static_cast<int32_t>(offsetof(ScoreController_t484565259, ___ps1_5)); }
	inline ParticleSystem_t1800779281 * get_ps1_5() const { return ___ps1_5; }
	inline ParticleSystem_t1800779281 ** get_address_of_ps1_5() { return &___ps1_5; }
	inline void set_ps1_5(ParticleSystem_t1800779281 * value)
	{
		___ps1_5 = value;
		Il2CppCodeGenWriteBarrier((&___ps1_5), value);
	}

	inline static int32_t get_offset_of_ps2_6() { return static_cast<int32_t>(offsetof(ScoreController_t484565259, ___ps2_6)); }
	inline ParticleSystem_t1800779281 * get_ps2_6() const { return ___ps2_6; }
	inline ParticleSystem_t1800779281 ** get_address_of_ps2_6() { return &___ps2_6; }
	inline void set_ps2_6(ParticleSystem_t1800779281 * value)
	{
		___ps2_6 = value;
		Il2CppCodeGenWriteBarrier((&___ps2_6), value);
	}

	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(ScoreController_t484565259, ___text_7)); }
	inline TextMesh_t1536577757 * get_text_7() const { return ___text_7; }
	inline TextMesh_t1536577757 ** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(TextMesh_t1536577757 * value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier((&___text_7), value);
	}
};

struct ScoreController_t484565259_StaticFields
{
public:
	// ScoreController ScoreController::instance
	ScoreController_t484565259 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(ScoreController_t484565259_StaticFields, ___instance_4)); }
	inline ScoreController_t484565259 * get_instance_4() const { return ___instance_4; }
	inline ScoreController_t484565259 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(ScoreController_t484565259 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCORECONTROLLER_T484565259_H
#ifndef SELECTCONTROLLER_T3183435330_H
#define SELECTCONTROLLER_T3183435330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelectController
struct  SelectController_t3183435330  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject SelectController::normal
	GameObject_t1113636619 * ___normal_4;
	// UnityEngine.GameObject SelectController::hover
	GameObject_t1113636619 * ___hover_5;
	// UnityEngine.GameObject SelectController::selected
	GameObject_t1113636619 * ___selected_6;
	// MemoryCellController SelectController::ctrl
	MemoryCellController_t341130527 * ___ctrl_7;

public:
	inline static int32_t get_offset_of_normal_4() { return static_cast<int32_t>(offsetof(SelectController_t3183435330, ___normal_4)); }
	inline GameObject_t1113636619 * get_normal_4() const { return ___normal_4; }
	inline GameObject_t1113636619 ** get_address_of_normal_4() { return &___normal_4; }
	inline void set_normal_4(GameObject_t1113636619 * value)
	{
		___normal_4 = value;
		Il2CppCodeGenWriteBarrier((&___normal_4), value);
	}

	inline static int32_t get_offset_of_hover_5() { return static_cast<int32_t>(offsetof(SelectController_t3183435330, ___hover_5)); }
	inline GameObject_t1113636619 * get_hover_5() const { return ___hover_5; }
	inline GameObject_t1113636619 ** get_address_of_hover_5() { return &___hover_5; }
	inline void set_hover_5(GameObject_t1113636619 * value)
	{
		___hover_5 = value;
		Il2CppCodeGenWriteBarrier((&___hover_5), value);
	}

	inline static int32_t get_offset_of_selected_6() { return static_cast<int32_t>(offsetof(SelectController_t3183435330, ___selected_6)); }
	inline GameObject_t1113636619 * get_selected_6() const { return ___selected_6; }
	inline GameObject_t1113636619 ** get_address_of_selected_6() { return &___selected_6; }
	inline void set_selected_6(GameObject_t1113636619 * value)
	{
		___selected_6 = value;
		Il2CppCodeGenWriteBarrier((&___selected_6), value);
	}

	inline static int32_t get_offset_of_ctrl_7() { return static_cast<int32_t>(offsetof(SelectController_t3183435330, ___ctrl_7)); }
	inline MemoryCellController_t341130527 * get_ctrl_7() const { return ___ctrl_7; }
	inline MemoryCellController_t341130527 ** get_address_of_ctrl_7() { return &___ctrl_7; }
	inline void set_ctrl_7(MemoryCellController_t341130527 * value)
	{
		___ctrl_7 = value;
		Il2CppCodeGenWriteBarrier((&___ctrl_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTCONTROLLER_T3183435330_H
#ifndef SPARKSCONTROLLER_T751236625_H
#define SPARKSCONTROLLER_T751236625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SparksController
struct  SparksController_t751236625  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPARKSCONTROLLER_T751236625_H
#ifndef STARTBUTTONCONTROLLER_T3651918395_H
#define STARTBUTTONCONTROLLER_T3651918395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartButtonController
struct  StartButtonController_t3651918395  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextMesh StartButtonController::text
	TextMesh_t1536577757 * ___text_5;
	// UnityEngine.SpriteRenderer StartButtonController::background
	SpriteRenderer_t3235626157 * ___background_6;
	// System.Boolean StartButtonController::hover
	bool ___hover_7;

public:
	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(StartButtonController_t3651918395, ___text_5)); }
	inline TextMesh_t1536577757 * get_text_5() const { return ___text_5; }
	inline TextMesh_t1536577757 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(TextMesh_t1536577757 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((&___text_5), value);
	}

	inline static int32_t get_offset_of_background_6() { return static_cast<int32_t>(offsetof(StartButtonController_t3651918395, ___background_6)); }
	inline SpriteRenderer_t3235626157 * get_background_6() const { return ___background_6; }
	inline SpriteRenderer_t3235626157 ** get_address_of_background_6() { return &___background_6; }
	inline void set_background_6(SpriteRenderer_t3235626157 * value)
	{
		___background_6 = value;
		Il2CppCodeGenWriteBarrier((&___background_6), value);
	}

	inline static int32_t get_offset_of_hover_7() { return static_cast<int32_t>(offsetof(StartButtonController_t3651918395, ___hover_7)); }
	inline bool get_hover_7() const { return ___hover_7; }
	inline bool* get_address_of_hover_7() { return &___hover_7; }
	inline void set_hover_7(bool value)
	{
		___hover_7 = value;
	}
};

struct StartButtonController_t3651918395_StaticFields
{
public:
	// StartButtonController StartButtonController::instance
	StartButtonController_t3651918395 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(StartButtonController_t3651918395_StaticFields, ___instance_4)); }
	inline StartButtonController_t3651918395 * get_instance_4() const { return ___instance_4; }
	inline StartButtonController_t3651918395 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(StartButtonController_t3651918395 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTBUTTONCONTROLLER_T3651918395_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MemoryCellController[]
struct MemoryCellControllerU5BU5D_t1776215942  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemoryCellController_t341130527 * m_Items[1];

public:
	inline MemoryCellController_t341130527 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemoryCellController_t341130527 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemoryCellController_t341130527 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MemoryCellController_t341130527 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemoryCellController_t341130527 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemoryCellController_t341130527 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ColorTypes[]
struct ColorTypesU5BU5D_t438535719  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m3060171005_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2059424751_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m107019914_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m793514796_gshared (Comparison_1_t2855037343 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Array::Sort<System.Object>(!!0[],System.Comparison`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_m3805426608_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, Comparison_1_t2855037343 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ColorTypes,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m722674581_gshared (Dictionary_2_t2022108842 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ColorTypes,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2051684623_gshared (Dictionary_2_t2022108842 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<ColorTypes,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2340420906_gshared (Dictionary_2_t2022108842 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<ColorTypes,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3976291617  Dictionary_2_GetEnumerator_m4194139666_gshared (Dictionary_2_t2022108842 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<ColorTypes,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t124813713  Enumerator_get_Current_m3538697536_gshared (Enumerator_t3976291617 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<ColorTypes,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m2223328121_gshared (KeyValuePair_2_t124813713 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<ColorTypes,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3742229510_gshared (KeyValuePair_2_t124813713 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<ColorTypes,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m268941728_gshared (Enumerator_t3976291617 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<ColorTypes,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2563722421_gshared (Enumerator_t3976291617 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2253601317_gshared (Dictionary_2_t3384741 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m411961606_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3327106492_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m1594212577_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<AudioType,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2395383438_gshared (Dictionary_2_t4030576606 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<AudioType,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m255877592_gshared (Dictionary_2_t4030576606 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<AudioType,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2805272936_gshared (Dictionary_2_t4030576606 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Register,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1025393733_gshared (Dictionary_2_t3573126111 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Register,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3573319183_gshared (Dictionary_2_t3573126111 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<Register,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2495418061_gshared (Dictionary_2_t3573126111 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<Register,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t1232341590  Dictionary_2_GetEnumerator_m668766315_gshared (Dictionary_2_t3573126111 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<Register,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t1675830982  Enumerator_get_Current_m105623793_gshared (Enumerator_t1232341590 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<Register,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m1072577912_gshared (KeyValuePair_2_t1675830982 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Register,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2635973845_gshared (Enumerator_t1232341590 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Register,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2038195703_gshared (Enumerator_t1232341590 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m2928138282 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void BuildController::NumberGridCells()
extern "C" IL2CPP_METHOD_ATTR void BuildController_NumberGridCells_m1171950474 (BuildController_t964035277 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MemoryCellController>()
inline MemoryCellController_t341130527 * GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MemoryCellController_t341130527 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_t3328599146* GameObject_FindGameObjectsWithTag_m2585173894 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_Find_m1729760951 (Transform_t3600365921 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_tag(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject_set_tag_m2353670106 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.GameObject>>::.ctor()
inline void List_1__ctor_m2048782325 (List_1_t4057786103 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4057786103 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m3526297712 (List_1_t2585711361 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m587845175 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m3060171005_gshared)(__this /* static, unused */, p0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m989991498 (List_1_t2585711361 * __this, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.GameObject>>::Add(!0)
inline void List_1_Add_m2745993839 (List_1_t4057786103 * __this, List_1_t2585711361 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4057786103 *, List_1_t2585711361 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_m3056777566 (SpriteRenderer_t3235626157 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void GameController::ZeroizeGrid()
extern "C" IL2CPP_METHOD_ATTR void GameController_ZeroizeGrid_m2026413229 (GameController_t2330501625 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void GameController::OnClick()
extern "C" IL2CPP_METHOD_ATTR void GameController_OnClick_m4207123697 (GameController_t2330501625 * __this, const RuntimeMethod* method);
// System.Void MemoryCellController::AddListener(ICellListener)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_AddListener_m3359123159 (MemoryCellController_t341130527 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method);
// System.Int32 GameController::CellsToInteger(MemoryCellController[])
extern "C" IL2CPP_METHOD_ATTR int32_t GameController_CellsToInteger_m1331874051 (GameController_t2330501625 * __this, MemoryCellControllerU5BU5D_t1776215942* ___cells0, const RuntimeMethod* method);
// MemoryCellController[] GridController::GetCells(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR MemoryCellControllerU5BU5D_t1776215942* GridController_GetCells_m210042790 (GridController_t1732845400 * __this, int32_t ___address0, int32_t ___number1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m3118546832 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, float p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GameController/Instruction>::.ctor()
inline void Dictionary_2__ctor_m2604517258 (Dictionary_2_t3269310253 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3269310253 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method);
}
// System.Void GameController/Instruction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Instruction__ctor_m3666721541 (Instruction_t85629626 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GameController/Instruction>::Add(!0,!1)
inline void Dictionary_2_Add_m1152581691 (Dictionary_2_t3269310253 * __this, int32_t p0, Instruction_t85629626 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3269310253 *, int32_t, Instruction_t85629626 *, const RuntimeMethod*))Dictionary_2_Add_m2059424751_gshared)(__this, p0, p1, method);
}
// System.Void GameController/<Add>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CAddU3Ec__Iterator0__ctor_m4010620100 (U3CAddU3Ec__Iterator0_t3148152499 * __this, const RuntimeMethod* method);
// System.Void GameController/<Sub>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSubU3Ec__Iterator1__ctor_m3664539713 (U3CSubU3Ec__Iterator1_t3982968060 * __this, const RuntimeMethod* method);
// System.Void GameController/<Mult>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CMultU3Ec__Iterator2__ctor_m3742223020 (U3CMultU3Ec__Iterator2_t1074165843 * __this, const RuntimeMethod* method);
// System.Void GameController/<Beq>c__Iterator3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CBeqU3Ec__Iterator3__ctor_m2152543583 (U3CBeqU3Ec__Iterator3_t3786537701 * __this, const RuntimeMethod* method);
// System.Void GameController/<Blt>c__Iterator4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CBltU3Ec__Iterator4__ctor_m2685749935 (U3CBltU3Ec__Iterator4_t1297701914 * __this, const RuntimeMethod* method);
// System.Void GameController/<Bgt>c__Iterator5::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CBgtU3Ec__Iterator5__ctor_m3699279023 (U3CBgtU3Ec__Iterator5_t2367511551 * __this, const RuntimeMethod* method);
// System.Void GameController/<Noop>c__Iterator6::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CNoopU3Ec__Iterator6__ctor_m1181195169 (U3CNoopU3Ec__Iterator6_t1304308506 * __this, const RuntimeMethod* method);
// System.Void GameController/<Add_direct>c__Iterator7::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CAdd_directU3Ec__Iterator7__ctor_m830292697 (U3CAdd_directU3Ec__Iterator7_t2744499443 * __this, const RuntimeMethod* method);
// System.Void GameController/<Sub_direct>c__Iterator8::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSub_directU3Ec__Iterator8__ctor_m782922007 (U3CSub_directU3Ec__Iterator8_t3735332119 * __this, const RuntimeMethod* method);
// System.Void GameController/<Mult_direct>c__Iterator9::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CMult_directU3Ec__Iterator9__ctor_m4217450488 (U3CMult_directU3Ec__Iterator9_t1002618766 * __this, const RuntimeMethod* method);
// System.Void GameController/<Beq_direct>c__IteratorA::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CBeq_directU3Ec__IteratorA__ctor_m2104965596 (U3CBeq_directU3Ec__IteratorA_t2534323723 * __this, const RuntimeMethod* method);
// System.Void GameController/<StoreA>c__IteratorB::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStoreAU3Ec__IteratorB__ctor_m3461366879 (U3CStoreAU3Ec__IteratorB_t2675201460 * __this, const RuntimeMethod* method);
// System.Void GameController/<LoadA>c__IteratorC::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadAU3Ec__IteratorC__ctor_m1619967299 (U3CLoadAU3Ec__IteratorC_t606953003 * __this, const RuntimeMethod* method);
// System.Void GameController/<LoadB>c__IteratorD::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBU3Ec__IteratorD__ctor_m1650332740 (U3CLoadBU3Ec__IteratorD_t607250828 * __this, const RuntimeMethod* method);
// System.Void GameController/<Halt>c__IteratorE::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CHaltU3Ec__IteratorE__ctor_m3096474998 (U3CHaltU3Ec__IteratorE_t4199766070 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ISelectable>()
inline RuntimeObject* GameObject_GetComponent_TisISelectable_t4034466499_m4123480996 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method);
}
// System.Void HoverController::SetValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HoverController_SetValue_m2464880987 (HoverController_t423031069 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean MemoryCellController::GetSelected()
extern "C" IL2CPP_METHOD_ATTR bool MemoryCellController_GetSelected_m2735042582 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean MemoryCellController::IsLocked()
extern "C" IL2CPP_METHOD_ATTR bool MemoryCellController_IsLocked_m3584109461 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ISelectable>()
inline RuntimeObject* Component_GetComponent_TisISelectable_t4034466499_m3006303143 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<MemoryCellTextController>()
inline MemoryCellTextController_t3948011966 * GameObject_GetComponent_TisMemoryCellTextController_t3948011966_m899497081 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MemoryCellTextController_t3948011966 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method);
}
// System.Void MemoryCellTextController::SetText(System.String)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellTextController_SetText_m1465277909 (MemoryCellTextController_t3948011966 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void MemoryCellTextController::OnIncrementValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellTextController_OnIncrementValue_m3037034012 (MemoryCellTextController_t3948011966 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void GameController/<RunSingleCommand>c__IteratorF::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CRunSingleCommandU3Ec__IteratorF__ctor_m2145467515 (U3CRunSingleCommandU3Ec__IteratorF_t1661767859 * __this, const RuntimeMethod* method);
// System.Int32 MemoryCellController::GetValue()
extern "C" IL2CPP_METHOD_ATTR int32_t MemoryCellController_GetValue_m1999499772 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method);
// System.Void RegisterController::Zeroize()
extern "C" IL2CPP_METHOD_ATTR void RegisterController_Zeroize_m519661814 (RegisterController_t92122650 * __this, const RuntimeMethod* method);
// System.Void GridController::Zeroize()
extern "C" IL2CPP_METHOD_ATTR void GridController_Zeroize_m2160003636 (GridController_t1732845400 * __this, const RuntimeMethod* method);
// System.Void JobController::PlaceColors()
extern "C" IL2CPP_METHOD_ATTR void JobController_PlaceColors_m928630922 (JobController_t2362869387 * __this, const RuntimeMethod* method);
// System.Void JobController::EraseColors()
extern "C" IL2CPP_METHOD_ATTR void JobController_EraseColors_m1147765506 (JobController_t2362869387 * __this, const RuntimeMethod* method);
// MemoryCellController[] GridController::GetGrid()
extern "C" IL2CPP_METHOD_ATTR MemoryCellControllerU5BU5D_t1776215942* GridController_GetGrid_m1085035811 (GridController_t1732845400 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void MemoryCellController::SetValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_SetValue_m3908445948 (MemoryCellController_t341130527 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void GameController::PlaceColors()
extern "C" IL2CPP_METHOD_ATTR void GameController_PlaceColors_m1849823443 (GameController_t2330501625 * __this, const RuntimeMethod* method);
// System.Void StartButtonController::OnStart()
extern "C" IL2CPP_METHOD_ATTR void StartButtonController_OnStart_m4261485478 (StartButtonController_t3651918395 * __this, const RuntimeMethod* method);
// System.Void HaltButtonController::ShowPrice(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HaltButtonController_ShowPrice_m2029584194 (HaltButtonController_t306459615 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GameController::EraseColors()
extern "C" IL2CPP_METHOD_ATTR void GameController_EraseColors_m68052623 (GameController_t2330501625 * __this, const RuntimeMethod* method);
// System.Void StartButtonController::OnEnd()
extern "C" IL2CPP_METHOD_ATTR void StartButtonController_OnEnd_m2111963269 (StartButtonController_t3651918395 * __this, const RuntimeMethod* method);
// System.Void ScoreController/Promise::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Promise__ctor_m1650648743 (Promise_t592223531 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.IEnumerator ScoreController::ShowScore(ScoreController/Promise)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ScoreController_ShowScore_m861725830 (ScoreController_t484565259 * __this, Promise_t592223531 * ___callback0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void MoneyController::ResetMoney()
extern "C" IL2CPP_METHOD_ATTR void MoneyController_ResetMoney_m208388443 (MoneyController_t851075799 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.IEnumerator RegisterRetriever::NavToRegister(Register)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RegisterRetriever_NavToRegister_m3179150175 (RegisterRetriever_t3846945983 * __this, int32_t ___r0, const RuntimeMethod* method);
// System.Collections.IEnumerator RegisterRetriever::ReadRegister(Register)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RegisterRetriever_ReadRegister_m94153405 (RegisterRetriever_t3846945983 * __this, int32_t ___r0, const RuntimeMethod* method);
// System.Int32 RegisterController::GetRegisterValue(Register)
extern "C" IL2CPP_METHOD_ATTR int32_t RegisterController_GetRegisterValue_m259583444 (RegisterController_t92122650 * __this, int32_t ___r0, const RuntimeMethod* method);
// System.Collections.IEnumerator RegisterController::SetRegisterValue(Register,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RegisterController_SetRegisterValue_m2854146444 (RegisterController_t92122650 * __this, int32_t ___r0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator MemoryRetriever::NavToCell(MemoryCellController)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MemoryRetriever_NavToCell_m793505524 (MemoryRetriever_t2760707818 * __this, MemoryCellController_t341130527 * ___cell0, const RuntimeMethod* method);
// System.Collections.IEnumerator MemoryRetriever::ReadRegister(MemoryCellController[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MemoryRetriever_ReadRegister_m1624939673 (MemoryRetriever_t2760707818 * __this, MemoryCellControllerU5BU5D_t1776215942* ___cells0, const RuntimeMethod* method);
// System.Int32 GridController::GetValue(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t GridController_GetValue_m3171713634 (GridController_t1732845400 * __this, int32_t ___address0, int32_t ___number1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Collections.IEnumerator RegisterRetriever::WriteRegister(Register,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RegisterRetriever_WriteRegister_m967670532 (RegisterRetriever_t3846945983 * __this, int32_t ___r0, int32_t ___value1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,GameController/Instruction>::get_Item(!0)
inline Instruction_t85629626 * Dictionary_2_get_Item_m3745926530 (Dictionary_2_t3269310253 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Instruction_t85629626 * (*) (Dictionary_2_t3269310253 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m107019914_gshared)(__this, p0, method);
}
// System.Collections.IEnumerator GameController/Instruction::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Instruction_Invoke_m4069483801 (Instruction_t85629626 * __this, int32_t ___arg0, const RuntimeMethod* method);
// System.Void JobController::CheckColoredCellStatus()
extern "C" IL2CPP_METHOD_ATTR void JobController_CheckColoredCellStatus_m3890777666 (JobController_t2362869387 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GameController::RunSingleCommand()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_RunSingleCommand_m2188203666 (GameController_t2330501625 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator MemoryRetriever::WriteRegister(MemoryCellController[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MemoryRetriever_WriteRegister_m363603130 (MemoryRetriever_t2760707818 * __this, MemoryCellControllerU5BU5D_t1776215942* ___cells0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Comparison`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m1173778154 (Comparison_1_t888567798 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t888567798 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m793514796_gshared)(__this, p0, p1, method);
}
// System.Void System.Array::Sort<UnityEngine.GameObject>(!!0[],System.Comparison`1<!!0>)
inline void Array_Sort_TisGameObject_t1113636619_m169164030 (RuntimeObject * __this /* static, unused */, GameObjectU5BU5D_t3328599146* p0, Comparison_1_t888567798 * p1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject * /* static, unused */, GameObjectU5BU5D_t3328599146*, Comparison_1_t888567798 *, const RuntimeMethod*))Array_Sort_TisRuntimeObject_m3805426608_gshared)(__this /* static, unused */, p0, p1, method);
}
// System.Void MyAudioController::PlayAudio(AudioType)
extern "C" IL2CPP_METHOD_ATTR void MyAudioController_PlayAudio_m852245086 (MyAudioController_t2840361766 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void MoneyController::HaltRequest()
extern "C" IL2CPP_METHOD_ATTR void MoneyController_HaltRequest_m2586438083 (MoneyController_t851075799 * __this, const RuntimeMethod* method);
// System.Void HaltButtonController::SetBackgroundActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HaltButtonController_SetBackgroundActive_m478962628 (HaltButtonController_t306459615 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t1536577757 * Component_GetComponent_TisTextMesh_t1536577757_m1070281259 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t1536577757 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.String System.String::ToUpper()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToUpper_m3324454496 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_text_m446189179 (TextMesh_t1536577757 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
inline void Dictionary_2__ctor_m4247274435 (Dictionary_2_t736164020 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t736164020 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m2461861952 (Dictionary_2_t736164020 * __this, int32_t p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t736164020 *, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_m2059424751_gshared)(__this, p0, p1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_m98595422 (Dictionary_2_t736164020 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t736164020 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m107019914_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>::.ctor()
inline void Dictionary_2__ctor_m1971266820 (Dictionary_2_t755207947 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t755207947 *, const RuntimeMethod*))Dictionary_2__ctor_m722674581_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<MemoryCellController>::.ctor()
inline void List_1__ctor_m1040324814 (List_1_t1813205269 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1813205269 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>::Add(!0,!1)
inline void Dictionary_2_Add_m2407688608 (Dictionary_2_t755207947 * __this, int32_t p0, List_1_t1813205269 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t755207947 *, int32_t, List_1_t1813205269 *, const RuntimeMethod*))Dictionary_2_Add_m2051684623_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ColorTypes,UnityEngine.Material>::.ctor()
inline void Dictionary_2__ctor_m1879769881 (Dictionary_2_t3577345097 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3577345097 *, const RuntimeMethod*))Dictionary_2__ctor_m722674581_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ColorTypes,UnityEngine.Material>::Add(!0,!1)
inline void Dictionary_2_Add_m2473192422 (Dictionary_2_t3577345097 * __this, int32_t p0, Material_t340375123 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3577345097 *, int32_t, Material_t340375123 *, const RuntimeMethod*))Dictionary_2_Add_m2051684623_gshared)(__this, p0, p1, method);
}
// System.Void JobController::MakeColor(MemoryCellController,ColorTypes)
extern "C" IL2CPP_METHOD_ATTR void JobController_MakeColor_m2005006609 (JobController_t2362869387 * __this, MemoryCellController_t341130527 * ___cell0, int32_t ___type1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>::get_Item(!0)
inline List_1_t1813205269 * Dictionary_2_get_Item_m1369846687 (Dictionary_2_t755207947 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  List_1_t1813205269 * (*) (Dictionary_2_t755207947 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2340420906_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<MemoryCellController>::Add(!0)
inline void List_1_Add_m2952656512 (List_1_t1813205269 * __this, MemoryCellController_t341130527 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1813205269 *, MemoryCellController_t341130527 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3235626157 * Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<ColorTypes,UnityEngine.Material>::get_Item(!0)
inline Material_t340375123 * Dictionary_2_get_Item_m2156887850 (Dictionary_2_t3577345097 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Material_t340375123 * (*) (Dictionary_2_t3577345097 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2340420906_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_material_m1157964140 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m3006960551 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void JobController::SetValuePreview(MemoryCellController,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JobController_SetValuePreview_m3527689404 (JobController_t2362869387 * __this, MemoryCellController_t341130527 * ___cell0, int32_t ___value1, const RuntimeMethod* method);
// System.Void MemoryCellController::SetPreviewNumber(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_SetPreviewNumber_m1180977413 (MemoryCellController_t341130527 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Void MemoryCellController::SetPreviewNumberActivation(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_SetPreviewNumberActivation_m1905526410 (MemoryCellController_t341130527 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<MemoryCellController>::GetEnumerator()
inline Enumerator_t3702449146  List_1_GetEnumerator_m4293003108 (List_1_t1813205269 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3702449146  (*) (List_1_t1813205269 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<MemoryCellController>::get_Current()
inline MemoryCellController_t341130527 * Enumerator_get_Current_m356741492 (Enumerator_t3702449146 * __this, const RuntimeMethod* method)
{
	return ((  MemoryCellController_t341130527 * (*) (Enumerator_t3702449146 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Void MemoryCellController::Flash(System.String)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_Flash_m4241161679 (MemoryCellController_t341130527 * __this, String_t* ___animationName0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<MemoryCellController>::MoveNext()
inline bool Enumerator_MoveNext_m1078081596 (Enumerator_t3702449146 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3702449146 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<MemoryCellController>::Dispose()
inline void Enumerator_Dispose_m399582602 (Enumerator_t3702449146 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3702449146 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<MemoryCellController>::get_Count()
inline int32_t List_1_get_Count_m1576969321 (List_1_t1813205269 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1813205269 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void MoneyController::OnChangeRequest(TransactionType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MoneyController_OnChangeRequest_m784516296 (MoneyController_t851075799 * __this, int32_t ___type0, int32_t ___numberCells1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MemoryCellController>::Clear()
inline void List_1_Clear_m1330880791 (List_1_t1813205269 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1813205269 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Boolean JobController/Condition::Invoke(MemoryCellController)
extern "C" IL2CPP_METHOD_ATTR bool Condition_Invoke_m2954690072 (Condition_t2788105126 * __this, MemoryCellController_t341130527 * ___cell0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MemoryCellController[]>::.ctor()
inline void List_1__ctor_m295390 (List_1_t3248290684 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3248290684 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void JobController/Condition::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Condition__ctor_m2344701788 (Condition_t2788105126 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean JobController::All(MemoryCellController[],System.Int32,System.Int32,JobController/Condition)
extern "C" IL2CPP_METHOD_ATTR bool JobController_All_m484570251 (JobController_t2362869387 * __this, MemoryCellControllerU5BU5D_t1776215942* ___grid0, int32_t ___start1, int32_t ___end2, Condition_t2788105126 * ___condition3, const RuntimeMethod* method);
// MemoryCellController[] JobController::SubList(MemoryCellController[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR MemoryCellControllerU5BU5D_t1776215942* JobController_SubList_m3878992697 (JobController_t2362869387 * __this, MemoryCellControllerU5BU5D_t1776215942* ___grid0, int32_t ___start1, int32_t ___end2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MemoryCellController[]>::Add(!0)
inline void List_1_Add_m2808974330 (List_1_t3248290684 * __this, MemoryCellControllerU5BU5D_t1776215942* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3248290684 *, MemoryCellControllerU5BU5D_t1776215942*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>::GetEnumerator()
inline Enumerator_t2709390722  Dictionary_2_GetEnumerator_m1147574700 (Dictionary_2_t755207947 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2709390722  (*) (Dictionary_2_t755207947 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m4194139666_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>::get_Current()
inline KeyValuePair_2_t3152880114  Enumerator_get_Current_m2330634133 (Enumerator_t2709390722 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t3152880114  (*) (Enumerator_t2709390722 *, const RuntimeMethod*))Enumerator_get_Current_m3538697536_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m3337906097 (KeyValuePair_2_t3152880114 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t3152880114 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2223328121_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>::get_Value()
inline List_1_t1813205269 * KeyValuePair_2_get_Value_m3086670186 (KeyValuePair_2_t3152880114 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t1813205269 * (*) (KeyValuePair_2_t3152880114 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3742229510_gshared)(__this, method);
}
// System.Collections.Generic.List`1<MemoryCellController[]> JobController::OrangeGetPossible()
extern "C" IL2CPP_METHOD_ATTR List_1_t3248290684 * JobController_OrangeGetPossible_m3473682360 (JobController_t2362869387 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<MemoryCellController[]>::get_Count()
inline int32_t List_1_get_Count_m857304069 (List_1_t3248290684 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3248290684 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<MemoryCellController[]>::get_Item(System.Int32)
inline MemoryCellControllerU5BU5D_t1776215942* List_1_get_Item_m1408411301 (List_1_t3248290684 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  MemoryCellControllerU5BU5D_t1776215942* (*) (List_1_t3248290684 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void JobController::PlaceScattered(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void JobController_PlaceScattered_m403991863 (JobController_t2362869387 * __this, bool ___singleValue0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<MemoryCellController[]> JobController::LightBlueGetPossible()
extern "C" IL2CPP_METHOD_ATTR List_1_t3248290684 * JobController_LightBlueGetPossible_m1447588275 (JobController_t2362869387 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>::MoveNext()
inline bool Enumerator_MoveNext_m2914257994 (Enumerator_t2709390722 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2709390722 *, const RuntimeMethod*))Enumerator_MoveNext_m268941728_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<ColorTypes,System.Collections.Generic.List`1<MemoryCellController>>::Dispose()
inline void Enumerator_Dispose_m2802568476 (Enumerator_t2709390722 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2709390722 *, const RuntimeMethod*))Enumerator_Dispose_m2563722421_gshared)(__this, method);
}
// System.Int32 MemoryCellController::GetPreviewNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t MemoryCellController_GetPreviewNumber_m1316447138 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method);
// System.Void JobController::JobFails(ColorTypes)
extern "C" IL2CPP_METHOD_ATTR void JobController_JobFails_m4088475263 (JobController_t2362869387 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void JobController::JobSuccess(ColorTypes,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JobController_JobSuccess_m2853302862 (JobController_t2362869387 * __this, int32_t ___type0, int32_t ___multiplier1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2924350851 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void StartButtonController::OnClick()
extern "C" IL2CPP_METHOD_ATTR void StartButtonController_OnClick_m1406823117 (StartButtonController_t3651918395 * __this, const RuntimeMethod* method);
// System.Void HaltButtonController::OnClick()
extern "C" IL2CPP_METHOD_ATTR void HaltButtonController_OnClick_m3408310238 (HaltButtonController_t306459615 * __this, const RuntimeMethod* method);
// System.Void RandomButtonController::OnClick()
extern "C" IL2CPP_METHOD_ATTR void RandomButtonController_OnClick_m3198826867 (RandomButtonController_t2952941430 * __this, const RuntimeMethod* method);
// System.Void ClearButtonController::OnClick()
extern "C" IL2CPP_METHOD_ATTR void ClearButtonController_OnClick_m290409787 (ClearButtonController_t1437245373 * __this, const RuntimeMethod* method);
// System.Void GameController::OnNavigation(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameController_OnNavigation_m2564189584 (GameController_t2330501625 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void GameController::OnModifyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GameController_OnModifyValue_m3053158791 (GameController_t2330501625 * __this, int32_t ___value0, const RuntimeMethod* method);
// StartState GameController::GetStartState()
extern "C" IL2CPP_METHOD_ATTR int32_t GameController_GetStartState_m1526516771 (GameController_t2330501625 * __this, const RuntimeMethod* method);
// System.Void GameController::ClearHoverAndSelection()
extern "C" IL2CPP_METHOD_ATTR void GameController_ClearHoverAndSelection_m1951568472 (GameController_t2330501625 * __this, const RuntimeMethod* method);
// System.Void GameController::OnKeyPress(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameController_OnKeyPress_m2100150495 (GameController_t2330501625 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ICellListener>::.ctor()
inline void List_1__ctor_m3103785141 (List_1_t599095547 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t599095547 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animation>()
inline Animation_t3648466861 * Component_GetComponent_TisAnimation_t3648466861_m4214971628 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Animation_t3648466861 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Animation_get_isPlaying_m1022540967 (Animation_t3648466861 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::Stop()
extern "C" IL2CPP_METHOD_ATTR void Animation_Stop_m195768787 (Animation_t3648466861 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m27531216 (Animation_t3648466861 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean GameController::IsStarted()
extern "C" IL2CPP_METHOD_ATTR bool GameController_IsStarted_m2426894938 (GameController_t2330501625 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<MemoryCellTextController>()
inline MemoryCellTextController_t3948011966 * Component_GetComponent_TisMemoryCellTextController_t3948011966_m1603530173 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  MemoryCellTextController_t3948011966 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Int32 MemoryCellTextController::GetValue()
extern "C" IL2CPP_METHOD_ATTR int32_t MemoryCellTextController_GetValue_m632222587 (MemoryCellTextController_t3948011966 * __this, const RuntimeMethod* method);
// System.Void MemoryCellTextController::SetValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellTextController_SetValue_m2137140209 (MemoryCellTextController_t3948011966 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ICellListener>::Add(!0)
inline void List_1_Add_m166453353 (List_1_t599095547 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t599095547 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<ICellListener>::GetEnumerator()
inline Enumerator_t2488339424  List_1_GetEnumerator_m790014197 (List_1_t599095547 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2488339424  (*) (List_1_t599095547 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<ICellListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m3129680102 (Enumerator_t2488339424 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t2488339424 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ICellListener>::MoveNext()
inline bool Enumerator_MoveNext_m2057191379 (Enumerator_t2488339424 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2488339424 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ICellListener>::Dispose()
inline void Enumerator_Dispose_m2684005343 (Enumerator_t2488339424 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2488339424 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m3200964102 (Dictionary_2_t2736202052 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2736202052 *, const RuntimeMethod*))Dictionary_2__ctor_m2253601317_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3800595820 (Dictionary_2_t2736202052 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2736202052 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m411961606_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m4246191156 (Dictionary_2_t736164020 * __this, int32_t p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t736164020 *, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m3327106492_gshared)(__this, p0, p1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m2904897546 (Dictionary_2_t2736202052 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2736202052 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m1594212577_gshared)(__this, p0, method);
}
// !!0 UnityEngine.Component::GetComponent<MemoryCellController>()
inline MemoryCellController_t341130527 * Component_GetComponent_TisMemoryCellController_t341130527_m2697602882 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  MemoryCellController_t341130527 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void MemoryCellController::OnChange()
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_OnChange_m2113182999 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method);
// System.String UnityEngine.TextMesh::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* TextMesh_get_text_m3732510240 (TextMesh_t1536577757 * __this, const RuntimeMethod* method);
// System.String System.String::ToLower()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m2029374922 (String_t* __this, const RuntimeMethod* method);
// System.String MemoryCellTextController::GetText()
extern "C" IL2CPP_METHOD_ATTR String_t* MemoryCellTextController_GetText_m2250117343 (MemoryCellTextController_t3948011966 * __this, const RuntimeMethod* method);
// System.Void MemoryRetriever/<NavToLocation>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToLocationU3Ec__Iterator0__ctor_m3791989060 (U3CNavToLocationU3Ec__Iterator0_t4015647092 * __this, const RuntimeMethod* method);
// System.Void MemoryRetriever/<ReadRegister>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CReadRegisterU3Ec__Iterator1__ctor_m4214098343 (U3CReadRegisterU3Ec__Iterator1_t3336726364 * __this, const RuntimeMethod* method);
// System.Void MemoryRetriever/<WriteRegister>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWriteRegisterU3Ec__Iterator2__ctor_m4292689646 (U3CWriteRegisterU3Ec__Iterator2_t4073638105 * __this, const RuntimeMethod* method);
// System.Void MemoryRetriever/<NavToCell>c__Iterator3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToCellU3Ec__Iterator3__ctor_m3540430257 (U3CNavToCellU3Ec__Iterator3_t181564031 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator MemoryRetriever::NavToLocation(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MemoryRetriever_NavToLocation_m2039806366 (MemoryRetriever_t2760707818 * __this, Vector3_t3722313464  ___loc0, float ___duration1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.LineRenderer::GetPosition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  LineRenderer_GetPosition_m2445830628 (LineRenderer_t3154350270 * __this, int32_t p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m2111131184 (LineRenderer_t3154350270 * __this, int32_t p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_op_Implicit_m2665280078 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_color_m1285272663 (TextMesh_t1536577757 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C" IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m3125854227 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" IL2CPP_METHOD_ATTR void ParticleSystem_Play_m882713458 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method);
// System.Void MoneyController::ChangeMoney(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MoneyController_ChangeMoney_m1476776209 (MoneyController_t851075799 * __this, float ___value0, const RuntimeMethod* method);
// System.Void MoneyController::NegativeChange()
extern "C" IL2CPP_METHOD_ATTR void MoneyController_NegativeChange_m3064309921 (MoneyController_t851075799 * __this, const RuntimeMethod* method);
// System.Void MoneyController::PositiveChange()
extern "C" IL2CPP_METHOD_ATTR void MoneyController_PositiveChange_m1536743399 (MoneyController_t851075799 * __this, const RuntimeMethod* method);
// System.Void MoneyController::SetMoney(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MoneyController_SetMoney_m3460632506 (MoneyController_t851075799 * __this, float ___money0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
extern "C" IL2CPP_METHOD_ATTR String_t* Component_get_tag_m2716693327 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void GameController::OnHoverChange(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void GameController_OnHoverChange_m1353772088 (GameController_t2330501625 * __this, GameObject_t1113636619 * ___hover0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<IButton>()
inline RuntimeObject* GameObject_GetComponent_TisIButton_t407737688_m276308076 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t3935305588 * Component_GetComponent_TisAudioSource_t3935305588_m1977431131 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<AudioType,UnityEngine.AudioClip>::.ctor()
inline void Dictionary_2__ctor_m528326273 (Dictionary_2_t336392811 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t336392811 *, const RuntimeMethod*))Dictionary_2__ctor_m2395383438_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<AudioType,UnityEngine.AudioClip>::Add(!0,!1)
inline void Dictionary_2_Add_m2711931129 (Dictionary_2_t336392811 * __this, int32_t p0, AudioClip_t3680889665 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t336392811 *, int32_t, AudioClip_t3680889665 *, const RuntimeMethod*))Dictionary_2_Add_m255877592_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m1896551654 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<AudioType,UnityEngine.AudioClip>::get_Item(!0)
inline AudioClip_t3680889665 * Dictionary_2_get_Item_m3988276343 (Dictionary_2_t336392811 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  AudioClip_t3680889665 * (*) (Dictionary_2_t336392811 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2805272936_gshared)(__this, p0, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method);
// System.Void GameController::OnRandomButtonPress()
extern "C" IL2CPP_METHOD_ATTR void GameController_OnRandomButtonPress_m2916944372 (GameController_t2330501625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Register,MemoryCellController[]>::.ctor()
inline void Dictionary_2__ctor_m1349605170 (Dictionary_2_t2269235889 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2269235889 *, const RuntimeMethod*))Dictionary_2__ctor_m1025393733_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Register,MemoryCellController[]>::Add(!0,!1)
inline void Dictionary_2_Add_m3056715029 (Dictionary_2_t2269235889 * __this, int32_t p0, MemoryCellControllerU5BU5D_t1776215942* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2269235889 *, int32_t, MemoryCellControllerU5BU5D_t1776215942*, const RuntimeMethod*))Dictionary_2_Add_m3573319183_gshared)(__this, p0, p1, method);
}
// !1 System.Collections.Generic.Dictionary`2<Register,MemoryCellController[]>::get_Item(!0)
inline MemoryCellControllerU5BU5D_t1776215942* Dictionary_2_get_Item_m431267327 (Dictionary_2_t2269235889 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  MemoryCellControllerU5BU5D_t1776215942* (*) (Dictionary_2_t2269235889 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2495418061_gshared)(__this, p0, method);
}
// System.Void RegisterController/<SetRegisterValue>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSetRegisterValueU3Ec__Iterator0__ctor_m4061791358 (U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<Register,MemoryCellController[]>::GetEnumerator()
inline Enumerator_t4223418664  Dictionary_2_GetEnumerator_m3222356229 (Dictionary_2_t2269235889 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4223418664  (*) (Dictionary_2_t2269235889 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m668766315_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<Register,MemoryCellController[]>::get_Current()
inline KeyValuePair_2_t371940760  Enumerator_get_Current_m4146803787 (Enumerator_t4223418664 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t371940760  (*) (Enumerator_t4223418664 *, const RuntimeMethod*))Enumerator_get_Current_m105623793_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<Register,MemoryCellController[]>::get_Value()
inline MemoryCellControllerU5BU5D_t1776215942* KeyValuePair_2_get_Value_m2056550861 (KeyValuePair_2_t371940760 * __this, const RuntimeMethod* method)
{
	return ((  MemoryCellControllerU5BU5D_t1776215942* (*) (KeyValuePair_2_t371940760 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1072577912_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Register,MemoryCellController[]>::MoveNext()
inline bool Enumerator_MoveNext_m2179132367 (Enumerator_t4223418664 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4223418664 *, const RuntimeMethod*))Enumerator_MoveNext_m2635973845_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Register,MemoryCellController[]>::Dispose()
inline void Enumerator_Dispose_m1741642658 (Enumerator_t4223418664 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4223418664 *, const RuntimeMethod*))Enumerator_Dispose_m2038195703_gshared)(__this, method);
}
// System.Void RegisterRetriever/<NavToLocation>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToLocationU3Ec__Iterator0__ctor_m3659070628 (U3CNavToLocationU3Ec__Iterator0_t3710408863 * __this, const RuntimeMethod* method);
// System.Void RegisterRetriever/<ReadRegister>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CReadRegisterU3Ec__Iterator1__ctor_m579505668 (U3CReadRegisterU3Ec__Iterator1_t958219891 * __this, const RuntimeMethod* method);
// System.Void RegisterRetriever/<WriteRegister>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWriteRegisterU3Ec__Iterator2__ctor_m1627323521 (U3CWriteRegisterU3Ec__Iterator2_t2150749546 * __this, const RuntimeMethod* method);
// System.Void RegisterRetriever/<NavToRegister>c__Iterator3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToRegisterU3Ec__Iterator3__ctor_m4192858418 (U3CNavToRegisterU3Ec__Iterator3_t1882082193 * __this, const RuntimeMethod* method);
// MemoryCellController[] RegisterController::GetMemoryCells(Register)
extern "C" IL2CPP_METHOD_ATTR MemoryCellControllerU5BU5D_t1776215942* RegisterController_GetMemoryCells_m2658175571 (RegisterController_t92122650 * __this, int32_t ___r0, const RuntimeMethod* method);
// System.Collections.IEnumerator RegisterRetriever::NavToLocation(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RegisterRetriever_NavToLocation_m3638182089 (RegisterRetriever_t3846945983 * __this, Vector3_t3722313464  ___loc0, float ___duration1, const RuntimeMethod* method);
// System.Void ScoreController/<ShowScore>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CShowScoreU3Ec__Iterator0__ctor_m2408711026 (U3CShowScoreU3Ec__Iterator0_t3828744793 * __this, const RuntimeMethod* method);
// System.Single MoneyController::GetValue()
extern "C" IL2CPP_METHOD_ATTR float MoneyController_GetValue_m4147633666 (MoneyController_t851075799 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool ParticleSystem_get_isPlaying_m1820717466 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method);
// System.Void ScoreController/Promise::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Promise_Invoke_m2120887265 (Promise_t592223531 * __this, const RuntimeMethod* method);
// System.Void SelectController::Clear()
extern "C" IL2CPP_METHOD_ATTR void SelectController_Clear_m1824686167 (SelectController_t3183435330 * __this, const RuntimeMethod* method);
// System.Void MemoryCellController::SetSelected(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_SetSelected_m3073455519 (MemoryCellController_t341130527 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GameController::OnSelectionChange(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void GameController_OnSelectionChange_m4096359809 (GameController_t2330501625 * __this, GameObject_t1113636619 * ___selection0, const RuntimeMethod* method);
// System.Void GameController::OnStartButtonPress()
extern "C" IL2CPP_METHOD_ATTR void GameController_OnStartButtonPress_m3391101166 (GameController_t2330501625 * __this, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void BuildController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BuildController__ctor_m258695187 (BuildController_t964035277 * __this, const RuntimeMethod* method)
{
	{
		__this->set_columnGap_7((1.2f));
		__this->set_rowGap_8((-1.2f));
		__this->set_xPreviewOffset_10((0.29f));
		__this->set_yPreviewOffset_11((0.251f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuildController::Start()
extern "C" IL2CPP_METHOD_ATTR void BuildController_Start_m3736787037 (BuildController_t964035277 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void BuildController::Update()
extern "C" IL2CPP_METHOD_ATTR void BuildController_Update_m3005149869 (BuildController_t964035277 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BuildController_Update_m3005149869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral3452614595, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		BuildController_NumberGridCells_m1171950474(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void BuildController::NumberGridCells()
extern "C" IL2CPP_METHOD_ATTR void BuildController_NumberGridCells_m1171950474 (BuildController_t964035277 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BuildController_NumberGridCells_m1171950474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MemoryCellController_t341130527 * V_2 = NULL;
	{
		V_0 = ((int32_t)80);
		V_1 = 0;
		MemoryCellController_t341130527 * L_0 = __this->get_firstCell_6();
		V_2 = L_0;
		goto IL_002c;
	}

IL_0011:
	{
		MemoryCellController_t341130527 * L_1 = V_2;
		int32_t L_2 = V_1;
		L_1->set_gridNumber_7(L_2);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		MemoryCellController_t341130527 * L_5 = V_2;
		GameObject_t1113636619 * L_6 = L_5->get_right_5();
		MemoryCellController_t341130527 * L_7 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_6, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.Void BuildController::PlacePreviewText()
extern "C" IL2CPP_METHOD_ATTR void BuildController_PlacePreviewText_m2187190577 (BuildController_t964035277 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BuildController_PlacePreviewText_m2187190577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t1113636619 * V_3 = NULL;
	{
		GameObjectU5BU5D_t3328599146* L_0 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral355311145, /*hidden argument*/NULL);
		__this->set_memoryCells_12(L_0);
		GameObjectU5BU5D_t3328599146* L_1 = __this->get_memoryCells_12();
		V_1 = L_1;
		V_2 = 0;
		goto IL_004e;
	}

IL_001e:
	{
		GameObjectU5BU5D_t3328599146* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		GameObject_t1113636619 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		GameObject_t1113636619 * L_6 = V_0;
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Transform_Find_m1729760951(L_7, _stringLiteral3554759439, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		GameObject_t1113636619 * L_10 = V_3;
		GameObject_set_tag_m2353670106(L_10, _stringLiteral3691716456, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = V_3;
		GameObject_SetActive_m796801857(L_11, (bool)0, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_13 = V_2;
		GameObjectU5BU5D_t3328599146* L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}
}
// System.Void BuildController::MakeMemoryGrid()
extern "C" IL2CPP_METHOD_ATTR void BuildController_MakeMemoryGrid_m2592733654 (BuildController_t964035277 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BuildController_MakeMemoryGrid_m2592733654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t2585711361 * V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t1113636619 * V_4 = NULL;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	GameObject_t1113636619 * V_6 = NULL;
	GameObject_t1113636619 * V_7 = NULL;
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		List_1_t4057786103 * L_0 = (List_1_t4057786103 *)il2cpp_codegen_object_new(List_1_t4057786103_il2cpp_TypeInfo_var);
		List_1__ctor_m2048782325(L_0, /*hidden argument*/List_1__ctor_m2048782325_RuntimeMethod_var);
		__this->set_grid_9(L_0);
		V_1 = 0;
		goto IL_00b6;
	}

IL_0014:
	{
		List_1_t2585711361 * L_1 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m3526297712(L_1, /*hidden argument*/List_1__ctor_m3526297712_RuntimeMethod_var);
		V_2 = L_1;
		V_3 = 0;
		goto IL_009f;
	}

IL_0021:
	{
		GameObject_t1113636619 * L_2 = __this->get_memoryCell_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_3 = Object_Instantiate_TisGameObject_t1113636619_m587845175(NULL /*static, unused*/, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m587845175_RuntimeMethod_var);
		V_4 = L_3;
		GameObject_t1113636619 * L_4 = V_4;
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_set_parent_m786917804(L_5, L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = V_4;
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_columnGap_7();
		int32_t L_10 = V_3;
		float L_11 = __this->get_rowGap_8();
		int32_t L_12 = V_1;
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		float L_15 = (&V_5)->get_z_2();
		Vector3_t3722313464  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m3353183577((&L_16), ((float)il2cpp_codegen_multiply((float)L_9, (float)(((float)((float)L_10))))), ((float)il2cpp_codegen_multiply((float)L_11, (float)(((float)((float)L_12))))), L_15, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_8, L_16, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_17 = V_0;
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		GameObject_t1113636619 * L_19 = V_4;
		MemoryCellController_t341130527 * L_20 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_19, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		GameObject_t1113636619 * L_21 = V_0;
		L_20->set_left_4(L_21);
	}

IL_0090:
	{
		GameObject_t1113636619 * L_22 = V_4;
		V_0 = L_22;
		List_1_t2585711361 * L_23 = V_2;
		GameObject_t1113636619 * L_24 = V_4;
		List_1_Add_m989991498(L_23, L_24, /*hidden argument*/List_1_Add_m989991498_RuntimeMethod_var);
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)8)))
		{
			goto IL_0021;
		}
	}
	{
		List_1_t4057786103 * L_27 = __this->get_grid_9();
		List_1_t2585711361 * L_28 = V_2;
		List_1_Add_m2745993839(L_27, L_28, /*hidden argument*/List_1_Add_m2745993839_RuntimeMethod_var);
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) < ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		GameObject_t1113636619 * L_31 = V_0;
		V_6 = L_31;
		GameObject_t1113636619 * L_32 = V_0;
		V_7 = L_32;
		goto IL_00ee;
	}

IL_00c8:
	{
		GameObject_t1113636619 * L_33 = V_7;
		MemoryCellController_t341130527 * L_34 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_33, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		GameObject_t1113636619 * L_35 = L_34->get_left_4();
		MemoryCellController_t341130527 * L_36 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_35, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		GameObject_t1113636619 * L_37 = V_7;
		L_36->set_right_5(L_37);
		GameObject_t1113636619 * L_38 = V_7;
		MemoryCellController_t341130527 * L_39 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_38, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		GameObject_t1113636619 * L_40 = L_39->get_left_4();
		V_7 = L_40;
	}

IL_00ee:
	{
		GameObject_t1113636619 * L_41 = V_7;
		MemoryCellController_t341130527 * L_42 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_41, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		GameObject_t1113636619 * L_43 = L_42->get_left_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_44 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_43, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_00c8;
		}
	}
	{
		GameObject_t1113636619 * L_45 = V_7;
		MemoryCellController_t341130527 * L_46 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_45, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		GameObject_t1113636619 * L_47 = V_6;
		L_46->set_left_4(L_47);
		GameObject_t1113636619 * L_48 = V_6;
		MemoryCellController_t341130527 * L_49 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_48, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		GameObject_t1113636619 * L_50 = V_7;
		L_49->set_right_5(L_50);
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
// System.Void ClearButtonController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ClearButtonController__ctor_m1693854718 (ClearButtonController_t1437245373 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ClearButtonController::Start()
extern "C" IL2CPP_METHOD_ATTR void ClearButtonController_Start_m3359924338 (ClearButtonController_t1437245373 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClearButtonController_Start_m3359924338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ClearButtonController_t1437245373_StaticFields*)il2cpp_codegen_static_fields_for(ClearButtonController_t1437245373_il2cpp_TypeInfo_var))->set_instance_4(__this);
		return;
	}
}
// System.Void ClearButtonController::SetBackgroundActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ClearButtonController_SetBackgroundActive_m2367142597 (ClearButtonController_t1437245373 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_1 = __this->get_background_6();
		Color_t2555686324  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Color__ctor_m2943235014((&L_2), (1.0f), (1.0f), (1.0f), (0.5882353f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_1, L_2, /*hidden argument*/NULL);
		__this->set_hover_7((bool)1);
		goto IL_0061;
	}

IL_0036:
	{
		SpriteRenderer_t3235626157 * L_3 = __this->get_background_6();
		Color_t2555686324  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Color__ctor_m2943235014((&L_4), (1.0f), (1.0f), (1.0f), (0.196078435f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_3, L_4, /*hidden argument*/NULL);
		__this->set_hover_7((bool)0);
	}

IL_0061:
	{
		return;
	}
}
// System.Void ClearButtonController::OnClick()
extern "C" IL2CPP_METHOD_ATTR void ClearButtonController_OnClick_m290409787 (ClearButtonController_t1437245373 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClearButtonController_OnClick_m290409787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_hover_7();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		GameController_t2330501625 * L_1 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		GameController_ZeroizeGrid_m2026413229(L_1, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void ClearButtonController::Update()
extern "C" IL2CPP_METHOD_ATTR void ClearButtonController_Update_m2707972019 (ClearButtonController_t1437245373 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void ClickController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ClickController__ctor_m2327245759 (ClickController_t166689076 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ClickController::Start()
extern "C" IL2CPP_METHOD_ATTR void ClickController_Start_m3989203999 (ClickController_t166689076 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ClickController::Update()
extern "C" IL2CPP_METHOD_ATTR void ClickController_Update_m2888674610 (ClickController_t166689076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClickController_Update_m2888674610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		GameController_t2330501625 * L_1 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		GameController_OnClick_m4207123697(L_1, /*hidden argument*/NULL);
	}

IL_0015:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DotController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DotController__ctor_m2957657142 (DotController_t3465465747 * __this, const RuntimeMethod* method)
{
	{
		__this->set_offset_6((0.25f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DotController::Start()
extern "C" IL2CPP_METHOD_ATTR void DotController_Start_m4025632696 (DotController_t3465465747 * __this, const RuntimeMethod* method)
{
	MemoryCellController_t341130527 * V_0 = NULL;
	MemoryCellControllerU5BU5D_t1776215942* V_1 = NULL;
	int32_t V_2 = 0;
	{
		MemoryCellControllerU5BU5D_t1776215942* L_0 = __this->get_cells_5();
		V_1 = L_0;
		V_2 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		MemoryCellController_t341130527 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		MemoryCellController_t341130527 * L_5 = V_0;
		MemoryCellController_AddListener_m3359123159(L_5, __this, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_7 = V_2;
		MemoryCellControllerU5BU5D_t1776215942* L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void DotController::OnChange()
extern "C" IL2CPP_METHOD_ATTR void DotController_OnChange_m1074922731 (DotController_t3465465747 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotController_OnChange_m1074922731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MemoryCellController_t341130527 * V_1 = NULL;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		GameController_t2330501625 * L_0 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		MemoryCellControllerU5BU5D_t1776215942* L_1 = __this->get_cells_5();
		int32_t L_2 = GameController_CellsToInteger_m1331874051(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)80))))
		{
			goto IL_0071;
		}
	}
	{
		GridController_t1732845400 * L_4 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_5 = V_0;
		MemoryCellControllerU5BU5D_t1776215942* L_6 = GridController_GetCells_m210042790(L_4, L_5, 1, /*hidden argument*/NULL);
		int32_t L_7 = 0;
		MemoryCellController_t341130527 * L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		MemoryCellController_t341130527 * L_9 = V_1;
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		GameObject_t1113636619 * L_13 = __this->get_dot_4();
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		float L_15 = (&V_2)->get_x_0();
		float L_16 = __this->get_offset_6();
		float L_17 = (&V_2)->get_y_1();
		float L_18 = __this->get_offset_6();
		float L_19 = (&V_2)->get_z_2();
		Vector3_t3722313464  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector3__ctor_m3353183577((&L_20), ((float)il2cpp_codegen_subtract((float)L_15, (float)L_16)), ((float)il2cpp_codegen_subtract((float)L_17, (float)L_18)), L_19, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_14, L_20, /*hidden argument*/NULL);
	}

IL_0071:
	{
		return;
	}
}
// System.Void DotController::Update()
extern "C" IL2CPP_METHOD_ATTR void DotController_Update_m3864441178 (DotController_t3465465747 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void FlashController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FlashController__ctor_m3526475398 (FlashController_t265141757 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FlashController::Start()
extern "C" IL2CPP_METHOD_ATTR void FlashController_Start_m4000745138 (FlashController_t265141757 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlashController_Start_m4000745138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_0, (0.3f), /*hidden argument*/NULL);
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
// System.Void GameController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameController__ctor_m1587060996 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// StartState GameController::GetStartState()
extern "C" IL2CPP_METHOD_ATTR int32_t GameController_GetStartState_m1526516771 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_startState_12();
		return L_0;
	}
}
// System.Boolean GameController::IsStarted()
extern "C" IL2CPP_METHOD_ATTR bool GameController_IsStarted_m2426894938 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_startState_12();
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Void GameController::Awake()
extern "C" IL2CPP_METHOD_ATTR void GameController_Awake_m4256893697 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Awake_m4256893697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->set_instance_4(__this);
		Dictionary_2_t3269310253 * L_0 = (Dictionary_2_t3269310253 *)il2cpp_codegen_object_new(Dictionary_2_t3269310253_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2604517258(L_0, /*hidden argument*/Dictionary_2__ctor_m2604517258_RuntimeMethod_var);
		__this->set_instructionLookup_11(L_0);
		Dictionary_2_t3269310253 * L_1 = __this->get_instructionLookup_11();
		intptr_t L_2 = (intptr_t)GameController_Add_m2699199007_RuntimeMethod_var;
		Instruction_t85629626 * L_3 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_3, __this, (intptr_t)L_2, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_1, 0, L_3, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_4 = __this->get_instructionLookup_11();
		intptr_t L_5 = (intptr_t)GameController_Sub_m443598057_RuntimeMethod_var;
		Instruction_t85629626 * L_6 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_6, __this, (intptr_t)L_5, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_4, ((int32_t)256), L_6, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_7 = __this->get_instructionLookup_11();
		intptr_t L_8 = (intptr_t)GameController_Mult_m2885893828_RuntimeMethod_var;
		Instruction_t85629626 * L_9 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_9, __this, (intptr_t)L_8, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_7, ((int32_t)512), L_9, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_10 = __this->get_instructionLookup_11();
		intptr_t L_11 = (intptr_t)GameController_Beq_m1571955107_RuntimeMethod_var;
		Instruction_t85629626 * L_12 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_12, __this, (intptr_t)L_11, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_10, ((int32_t)768), L_12, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_13 = __this->get_instructionLookup_11();
		intptr_t L_14 = (intptr_t)GameController_Blt_m4200121158_RuntimeMethod_var;
		Instruction_t85629626 * L_15 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_15, __this, (intptr_t)L_14, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_13, ((int32_t)1024), L_15, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_16 = __this->get_instructionLookup_11();
		intptr_t L_17 = (intptr_t)GameController_Bgt_m4199929199_RuntimeMethod_var;
		Instruction_t85629626 * L_18 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_18, __this, (intptr_t)L_17, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_16, ((int32_t)1280), L_18, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_19 = __this->get_instructionLookup_11();
		intptr_t L_20 = (intptr_t)GameController_Noop_m389482402_RuntimeMethod_var;
		Instruction_t85629626 * L_21 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_21, __this, (intptr_t)L_20, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_19, ((int32_t)1536), L_21, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_22 = __this->get_instructionLookup_11();
		intptr_t L_23 = (intptr_t)GameController_Noop_m389482402_RuntimeMethod_var;
		Instruction_t85629626 * L_24 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_24, __this, (intptr_t)L_23, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_22, ((int32_t)1792), L_24, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_25 = __this->get_instructionLookup_11();
		intptr_t L_26 = (intptr_t)GameController_Add_direct_m562424337_RuntimeMethod_var;
		Instruction_t85629626 * L_27 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_27, __this, (intptr_t)L_26, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_25, ((int32_t)2048), L_27, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_28 = __this->get_instructionLookup_11();
		intptr_t L_29 = (intptr_t)GameController_Sub_direct_m3952882190_RuntimeMethod_var;
		Instruction_t85629626 * L_30 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_30, __this, (intptr_t)L_29, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_28, ((int32_t)2304), L_30, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_31 = __this->get_instructionLookup_11();
		intptr_t L_32 = (intptr_t)GameController_Mult_direct_m2251156255_RuntimeMethod_var;
		Instruction_t85629626 * L_33 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_33, __this, (intptr_t)L_32, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_31, ((int32_t)2560), L_33, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_34 = __this->get_instructionLookup_11();
		intptr_t L_35 = (intptr_t)GameController_Beq_direct_m1164106537_RuntimeMethod_var;
		Instruction_t85629626 * L_36 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_36, __this, (intptr_t)L_35, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_34, ((int32_t)2816), L_36, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_37 = __this->get_instructionLookup_11();
		intptr_t L_38 = (intptr_t)GameController_StoreA_m1004311925_RuntimeMethod_var;
		Instruction_t85629626 * L_39 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_39, __this, (intptr_t)L_38, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_37, ((int32_t)3072), L_39, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_40 = __this->get_instructionLookup_11();
		intptr_t L_41 = (intptr_t)GameController_LoadA_m3428745796_RuntimeMethod_var;
		Instruction_t85629626 * L_42 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_42, __this, (intptr_t)L_41, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_40, ((int32_t)3328), L_42, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_43 = __this->get_instructionLookup_11();
		intptr_t L_44 = (intptr_t)GameController_LoadB_m4054000755_RuntimeMethod_var;
		Instruction_t85629626 * L_45 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_45, __this, (intptr_t)L_44, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_43, ((int32_t)3584), L_45, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		Dictionary_2_t3269310253 * L_46 = __this->get_instructionLookup_11();
		intptr_t L_47 = (intptr_t)GameController_Halt_m2881740881_RuntimeMethod_var;
		Instruction_t85629626 * L_48 = (Instruction_t85629626 *)il2cpp_codegen_object_new(Instruction_t85629626_il2cpp_TypeInfo_var);
		Instruction__ctor_m3666721541(L_48, __this, (intptr_t)L_47, /*hidden argument*/NULL);
		Dictionary_2_Add_m1152581691(L_46, ((int32_t)3840), L_48, /*hidden argument*/Dictionary_2_Add_m1152581691_RuntimeMethod_var);
		return;
	}
}
// System.Collections.IEnumerator GameController::Add(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_Add_m2699199007 (GameController_t2330501625 * __this, int32_t ___not_used0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Add_m2699199007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAddU3Ec__Iterator0_t3148152499 * V_0 = NULL;
	{
		U3CAddU3Ec__Iterator0_t3148152499 * L_0 = (U3CAddU3Ec__Iterator0_t3148152499 *)il2cpp_codegen_object_new(U3CAddU3Ec__Iterator0_t3148152499_il2cpp_TypeInfo_var);
		U3CAddU3Ec__Iterator0__ctor_m4010620100(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAddU3Ec__Iterator0_t3148152499 * L_1 = V_0;
		L_1->set_U24this_3(__this);
		U3CAddU3Ec__Iterator0_t3148152499 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator GameController::Sub(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_Sub_m443598057 (GameController_t2330501625 * __this, int32_t ___not_used0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Sub_m443598057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSubU3Ec__Iterator1_t3982968060 * V_0 = NULL;
	{
		U3CSubU3Ec__Iterator1_t3982968060 * L_0 = (U3CSubU3Ec__Iterator1_t3982968060 *)il2cpp_codegen_object_new(U3CSubU3Ec__Iterator1_t3982968060_il2cpp_TypeInfo_var);
		U3CSubU3Ec__Iterator1__ctor_m3664539713(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSubU3Ec__Iterator1_t3982968060 * L_1 = V_0;
		L_1->set_U24this_3(__this);
		U3CSubU3Ec__Iterator1_t3982968060 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator GameController::Mult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_Mult_m2885893828 (GameController_t2330501625 * __this, int32_t ___not_used0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Mult_m2885893828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CMultU3Ec__Iterator2_t1074165843 * V_0 = NULL;
	{
		U3CMultU3Ec__Iterator2_t1074165843 * L_0 = (U3CMultU3Ec__Iterator2_t1074165843 *)il2cpp_codegen_object_new(U3CMultU3Ec__Iterator2_t1074165843_il2cpp_TypeInfo_var);
		U3CMultU3Ec__Iterator2__ctor_m3742223020(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CMultU3Ec__Iterator2_t1074165843 * L_1 = V_0;
		L_1->set_U24this_3(__this);
		U3CMultU3Ec__Iterator2_t1074165843 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator GameController::Beq(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_Beq_m1571955107 (GameController_t2330501625 * __this, int32_t ___addr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Beq_m1571955107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CBeqU3Ec__Iterator3_t3786537701 * V_0 = NULL;
	{
		U3CBeqU3Ec__Iterator3_t3786537701 * L_0 = (U3CBeqU3Ec__Iterator3_t3786537701 *)il2cpp_codegen_object_new(U3CBeqU3Ec__Iterator3_t3786537701_il2cpp_TypeInfo_var);
		U3CBeqU3Ec__Iterator3__ctor_m2152543583(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CBeqU3Ec__Iterator3_t3786537701 * L_1 = V_0;
		int32_t L_2 = ___addr0;
		L_1->set_addr_0(L_2);
		U3CBeqU3Ec__Iterator3_t3786537701 * L_3 = V_0;
		L_3->set_U24this_2(__this);
		U3CBeqU3Ec__Iterator3_t3786537701 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator GameController::Blt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_Blt_m4200121158 (GameController_t2330501625 * __this, int32_t ___addr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Blt_m4200121158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CBltU3Ec__Iterator4_t1297701914 * V_0 = NULL;
	{
		U3CBltU3Ec__Iterator4_t1297701914 * L_0 = (U3CBltU3Ec__Iterator4_t1297701914 *)il2cpp_codegen_object_new(U3CBltU3Ec__Iterator4_t1297701914_il2cpp_TypeInfo_var);
		U3CBltU3Ec__Iterator4__ctor_m2685749935(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CBltU3Ec__Iterator4_t1297701914 * L_1 = V_0;
		int32_t L_2 = ___addr0;
		L_1->set_addr_0(L_2);
		U3CBltU3Ec__Iterator4_t1297701914 * L_3 = V_0;
		L_3->set_U24this_2(__this);
		U3CBltU3Ec__Iterator4_t1297701914 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator GameController::Bgt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_Bgt_m4199929199 (GameController_t2330501625 * __this, int32_t ___addr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Bgt_m4199929199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CBgtU3Ec__Iterator5_t2367511551 * V_0 = NULL;
	{
		U3CBgtU3Ec__Iterator5_t2367511551 * L_0 = (U3CBgtU3Ec__Iterator5_t2367511551 *)il2cpp_codegen_object_new(U3CBgtU3Ec__Iterator5_t2367511551_il2cpp_TypeInfo_var);
		U3CBgtU3Ec__Iterator5__ctor_m3699279023(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CBgtU3Ec__Iterator5_t2367511551 * L_1 = V_0;
		int32_t L_2 = ___addr0;
		L_1->set_addr_0(L_2);
		U3CBgtU3Ec__Iterator5_t2367511551 * L_3 = V_0;
		L_3->set_U24this_2(__this);
		U3CBgtU3Ec__Iterator5_t2367511551 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator GameController::Noop(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_Noop_m389482402 (GameController_t2330501625 * __this, int32_t ___not_used0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Noop_m389482402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CNoopU3Ec__Iterator6_t1304308506 * V_0 = NULL;
	{
		U3CNoopU3Ec__Iterator6_t1304308506 * L_0 = (U3CNoopU3Ec__Iterator6_t1304308506 *)il2cpp_codegen_object_new(U3CNoopU3Ec__Iterator6_t1304308506_il2cpp_TypeInfo_var);
		U3CNoopU3Ec__Iterator6__ctor_m1181195169(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CNoopU3Ec__Iterator6_t1304308506 * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator GameController::Add_direct(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_Add_direct_m562424337 (GameController_t2330501625 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Add_direct_m562424337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAdd_directU3Ec__Iterator7_t2744499443 * V_0 = NULL;
	{
		U3CAdd_directU3Ec__Iterator7_t2744499443 * L_0 = (U3CAdd_directU3Ec__Iterator7_t2744499443 *)il2cpp_codegen_object_new(U3CAdd_directU3Ec__Iterator7_t2744499443_il2cpp_TypeInfo_var);
		U3CAdd_directU3Ec__Iterator7__ctor_m830292697(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAdd_directU3Ec__Iterator7_t2744499443 * L_1 = V_0;
		int32_t L_2 = ___value0;
		L_1->set_value_1(L_2);
		U3CAdd_directU3Ec__Iterator7_t2744499443 * L_3 = V_0;
		L_3->set_U24this_3(__this);
		U3CAdd_directU3Ec__Iterator7_t2744499443 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator GameController::Sub_direct(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_Sub_direct_m3952882190 (GameController_t2330501625 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Sub_direct_m3952882190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSub_directU3Ec__Iterator8_t3735332119 * V_0 = NULL;
	{
		U3CSub_directU3Ec__Iterator8_t3735332119 * L_0 = (U3CSub_directU3Ec__Iterator8_t3735332119 *)il2cpp_codegen_object_new(U3CSub_directU3Ec__Iterator8_t3735332119_il2cpp_TypeInfo_var);
		U3CSub_directU3Ec__Iterator8__ctor_m782922007(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSub_directU3Ec__Iterator8_t3735332119 * L_1 = V_0;
		int32_t L_2 = ___value0;
		L_1->set_value_1(L_2);
		U3CSub_directU3Ec__Iterator8_t3735332119 * L_3 = V_0;
		L_3->set_U24this_3(__this);
		U3CSub_directU3Ec__Iterator8_t3735332119 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator GameController::Mult_direct(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_Mult_direct_m2251156255 (GameController_t2330501625 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Mult_direct_m2251156255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CMult_directU3Ec__Iterator9_t1002618766 * V_0 = NULL;
	{
		U3CMult_directU3Ec__Iterator9_t1002618766 * L_0 = (U3CMult_directU3Ec__Iterator9_t1002618766 *)il2cpp_codegen_object_new(U3CMult_directU3Ec__Iterator9_t1002618766_il2cpp_TypeInfo_var);
		U3CMult_directU3Ec__Iterator9__ctor_m4217450488(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CMult_directU3Ec__Iterator9_t1002618766 * L_1 = V_0;
		int32_t L_2 = ___value0;
		L_1->set_value_1(L_2);
		U3CMult_directU3Ec__Iterator9_t1002618766 * L_3 = V_0;
		L_3->set_U24this_3(__this);
		U3CMult_directU3Ec__Iterator9_t1002618766 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator GameController::Beq_direct(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_Beq_direct_m1164106537 (GameController_t2330501625 * __this, int32_t ___addr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Beq_direct_m1164106537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CBeq_directU3Ec__IteratorA_t2534323723 * V_0 = NULL;
	{
		U3CBeq_directU3Ec__IteratorA_t2534323723 * L_0 = (U3CBeq_directU3Ec__IteratorA_t2534323723 *)il2cpp_codegen_object_new(U3CBeq_directU3Ec__IteratorA_t2534323723_il2cpp_TypeInfo_var);
		U3CBeq_directU3Ec__IteratorA__ctor_m2104965596(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CBeq_directU3Ec__IteratorA_t2534323723 * L_1 = V_0;
		int32_t L_2 = ___addr0;
		L_1->set_addr_0(L_2);
		U3CBeq_directU3Ec__IteratorA_t2534323723 * L_3 = V_0;
		L_3->set_U24this_3(__this);
		U3CBeq_directU3Ec__IteratorA_t2534323723 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator GameController::StoreA(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_StoreA_m1004311925 (GameController_t2330501625 * __this, int32_t ___addr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_StoreA_m1004311925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStoreAU3Ec__IteratorB_t2675201460 * V_0 = NULL;
	{
		U3CStoreAU3Ec__IteratorB_t2675201460 * L_0 = (U3CStoreAU3Ec__IteratorB_t2675201460 *)il2cpp_codegen_object_new(U3CStoreAU3Ec__IteratorB_t2675201460_il2cpp_TypeInfo_var);
		U3CStoreAU3Ec__IteratorB__ctor_m3461366879(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStoreAU3Ec__IteratorB_t2675201460 * L_1 = V_0;
		int32_t L_2 = ___addr0;
		L_1->set_addr_0(L_2);
		U3CStoreAU3Ec__IteratorB_t2675201460 * L_3 = V_0;
		L_3->set_U24this_2(__this);
		U3CStoreAU3Ec__IteratorB_t2675201460 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator GameController::LoadA(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_LoadA_m3428745796 (GameController_t2330501625 * __this, int32_t ___addr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_LoadA_m3428745796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAU3Ec__IteratorC_t606953003 * V_0 = NULL;
	{
		U3CLoadAU3Ec__IteratorC_t606953003 * L_0 = (U3CLoadAU3Ec__IteratorC_t606953003 *)il2cpp_codegen_object_new(U3CLoadAU3Ec__IteratorC_t606953003_il2cpp_TypeInfo_var);
		U3CLoadAU3Ec__IteratorC__ctor_m1619967299(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLoadAU3Ec__IteratorC_t606953003 * L_1 = V_0;
		int32_t L_2 = ___addr0;
		L_1->set_addr_0(L_2);
		U3CLoadAU3Ec__IteratorC_t606953003 * L_3 = V_0;
		L_3->set_U24this_2(__this);
		U3CLoadAU3Ec__IteratorC_t606953003 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator GameController::LoadB(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_LoadB_m4054000755 (GameController_t2330501625 * __this, int32_t ___addr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_LoadB_m4054000755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadBU3Ec__IteratorD_t607250828 * V_0 = NULL;
	{
		U3CLoadBU3Ec__IteratorD_t607250828 * L_0 = (U3CLoadBU3Ec__IteratorD_t607250828 *)il2cpp_codegen_object_new(U3CLoadBU3Ec__IteratorD_t607250828_il2cpp_TypeInfo_var);
		U3CLoadBU3Ec__IteratorD__ctor_m1650332740(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLoadBU3Ec__IteratorD_t607250828 * L_1 = V_0;
		int32_t L_2 = ___addr0;
		L_1->set_addr_0(L_2);
		U3CLoadBU3Ec__IteratorD_t607250828 * L_3 = V_0;
		L_3->set_U24this_2(__this);
		U3CLoadBU3Ec__IteratorD_t607250828 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator GameController::Halt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_Halt_m2881740881 (GameController_t2330501625 * __this, int32_t ___not_used0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Halt_m2881740881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CHaltU3Ec__IteratorE_t4199766070 * V_0 = NULL;
	{
		U3CHaltU3Ec__IteratorE_t4199766070 * L_0 = (U3CHaltU3Ec__IteratorE_t4199766070 *)il2cpp_codegen_object_new(U3CHaltU3Ec__IteratorE_t4199766070_il2cpp_TypeInfo_var);
		U3CHaltU3Ec__IteratorE__ctor_m3096474998(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CHaltU3Ec__IteratorE_t4199766070 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CHaltU3Ec__IteratorE_t4199766070 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GameController::OnSelectionChange(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void GameController_OnSelectionChange_m4096359809 (GameController_t2330501625 * __this, GameObject_t1113636619 * ___selection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_OnSelectionChange_m4096359809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_currentSelection_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_currentSelection_9();
		RuntimeObject* L_3 = GameObject_GetComponent_TisISelectable_t4034466499_m4123480996(L_2, /*hidden argument*/GameObject_GetComponent_TisISelectable_t4034466499_m4123480996_RuntimeMethod_var);
		InterfaceActionInvoker0::Invoke(3 /* System.Void ISelectable::OnUnSelect() */, ISelectable_t4034466499_il2cpp_TypeInfo_var, L_3);
	}

IL_0021:
	{
		GameObject_t1113636619 * L_4 = ___selection0;
		__this->set_currentSelection_9(L_4);
		return;
	}
}
// System.Void GameController::OnHoverChange(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void GameController_OnHoverChange_m1353772088 (GameController_t2330501625 * __this, GameObject_t1113636619 * ___hover0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_OnHoverChange_m1353772088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ___hover0;
		__this->set_currentHover_10(L_0);
		GameObject_t1113636619 * L_1 = __this->get_currentHover_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		HoverController_t423031069 * L_3 = ((HoverController_t423031069_StaticFields*)il2cpp_codegen_static_fields_for(HoverController_t423031069_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_4 = __this->get_currentHover_10();
		MemoryCellController_t341130527 * L_5 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_4, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		int32_t L_6 = L_5->get_gridNumber_7();
		HoverController_SetValue_m2464880987(L_3, L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void GameController::ClearHoverAndSelection()
extern "C" IL2CPP_METHOD_ATTR void GameController_ClearHoverAndSelection_m1951568472 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_ClearHoverAndSelection_m1951568472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_currentHover_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_currentHover_10();
		RuntimeObject* L_3 = GameObject_GetComponent_TisISelectable_t4034466499_m4123480996(L_2, /*hidden argument*/GameObject_GetComponent_TisISelectable_t4034466499_m4123480996_RuntimeMethod_var);
		InterfaceActionInvoker0::Invoke(1 /* System.Void ISelectable::OnHoverOut() */, ISelectable_t4034466499_il2cpp_TypeInfo_var, L_3);
	}

IL_0021:
	{
		__this->set_currentHover_10((GameObject_t1113636619 *)NULL);
		GameObject_t1113636619 * L_4 = __this->get_currentSelection_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		GameObject_t1113636619 * L_6 = __this->get_currentSelection_9();
		RuntimeObject* L_7 = GameObject_GetComponent_TisISelectable_t4034466499_m4123480996(L_6, /*hidden argument*/GameObject_GetComponent_TisISelectable_t4034466499_m4123480996_RuntimeMethod_var);
		InterfaceActionInvoker0::Invoke(3 /* System.Void ISelectable::OnUnSelect() */, ISelectable_t4034466499_il2cpp_TypeInfo_var, L_7);
	}

IL_0049:
	{
		__this->set_currentSelection_9((GameObject_t1113636619 *)NULL);
		HoverController_t423031069 * L_8 = ((HoverController_t423031069_StaticFields*)il2cpp_codegen_static_fields_for(HoverController_t423031069_il2cpp_TypeInfo_var))->get_instance_4();
		HoverController_SetValue_m2464880987(L_8, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::OnClick()
extern "C" IL2CPP_METHOD_ATTR void GameController_OnClick_m4207123697 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_OnClick_m4207123697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_currentHover_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_currentHover_10();
		MemoryCellController_t341130527 * L_3 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_2, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		bool L_4 = MemoryCellController_GetSelected_m2735042582(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t1113636619 * L_5 = __this->get_currentHover_10();
		RuntimeObject* L_6 = GameObject_GetComponent_TisISelectable_t4034466499_m4123480996(L_5, /*hidden argument*/GameObject_GetComponent_TisISelectable_t4034466499_m4123480996_RuntimeMethod_var);
		InterfaceActionInvoker0::Invoke(2 /* System.Void ISelectable::OnSelect() */, ISelectable_t4034466499_il2cpp_TypeInfo_var, L_6);
	}

IL_0036:
	{
		return;
	}
}
// System.Void GameController::OnNavigation(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameController_OnNavigation_m2564189584 (GameController_t2330501625 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_OnNavigation_m2564189584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_currentSelection_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral742876383, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006f;
		}
	}
	{
		GameObject_t1113636619 * L_4 = __this->get_currentSelection_9();
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = __this->get_currentSelection_9();
		MemoryCellController_t341130527 * L_6 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_5, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		GameObject_t1113636619 * L_7 = L_6->get_right_5();
		V_0 = L_7;
		goto IL_004a;
	}

IL_003e:
	{
		GameObject_t1113636619 * L_8 = V_0;
		MemoryCellController_t341130527 * L_9 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_8, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		GameObject_t1113636619 * L_10 = L_9->get_right_5();
		V_0 = L_10;
	}

IL_004a:
	{
		GameObject_t1113636619 * L_11 = V_0;
		MemoryCellController_t341130527 * L_12 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_11, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		bool L_13 = MemoryCellController_IsLocked_m3584109461(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_003e;
		}
	}
	{
		GameObject_t1113636619 * L_14 = V_0;
		MemoryCellController_t341130527 * L_15 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_14, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		RuntimeObject* L_16 = Component_GetComponent_TisISelectable_t4034466499_m3006303143(L_15, /*hidden argument*/Component_GetComponent_TisISelectable_t4034466499_m3006303143_RuntimeMethod_var);
		InterfaceActionInvoker0::Invoke(2 /* System.Void ISelectable::OnSelect() */, ISelectable_t4034466499_il2cpp_TypeInfo_var, L_16);
		goto IL_00b8;
	}

IL_006f:
	{
		GameObject_t1113636619 * L_17 = __this->get_currentSelection_9();
		V_1 = L_17;
		GameObject_t1113636619 * L_18 = __this->get_currentSelection_9();
		MemoryCellController_t341130527 * L_19 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_18, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		GameObject_t1113636619 * L_20 = L_19->get_left_4();
		V_1 = L_20;
		goto IL_0098;
	}

IL_008c:
	{
		GameObject_t1113636619 * L_21 = V_1;
		MemoryCellController_t341130527 * L_22 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_21, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		GameObject_t1113636619 * L_23 = L_22->get_left_4();
		V_1 = L_23;
	}

IL_0098:
	{
		GameObject_t1113636619 * L_24 = V_1;
		MemoryCellController_t341130527 * L_25 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_24, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		bool L_26 = MemoryCellController_IsLocked_m3584109461(L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_008c;
		}
	}
	{
		GameObject_t1113636619 * L_27 = V_1;
		MemoryCellController_t341130527 * L_28 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_27, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		RuntimeObject* L_29 = Component_GetComponent_TisISelectable_t4034466499_m3006303143(L_28, /*hidden argument*/Component_GetComponent_TisISelectable_t4034466499_m3006303143_RuntimeMethod_var);
		InterfaceActionInvoker0::Invoke(2 /* System.Void ISelectable::OnSelect() */, ISelectable_t4034466499_il2cpp_TypeInfo_var, L_29);
	}

IL_00b8:
	{
		return;
	}
}
// System.Void GameController::OnKeyPress(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameController_OnKeyPress_m2100150495 (GameController_t2330501625 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_OnKeyPress_m2100150495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_currentSelection_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_currentSelection_9();
		MemoryCellTextController_t3948011966 * L_3 = GameObject_GetComponent_TisMemoryCellTextController_t3948011966_m899497081(L_2, /*hidden argument*/GameObject_GetComponent_TisMemoryCellTextController_t3948011966_m899497081_RuntimeMethod_var);
		String_t* L_4 = ___value0;
		MemoryCellTextController_SetText_m1465277909(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void GameController::OnModifyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GameController_OnModifyValue_m3053158791 (GameController_t2330501625 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_OnModifyValue_m3053158791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_currentSelection_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_currentSelection_9();
		MemoryCellTextController_t3948011966 * L_3 = GameObject_GetComponent_TisMemoryCellTextController_t3948011966_m899497081(L_2, /*hidden argument*/GameObject_GetComponent_TisMemoryCellTextController_t3948011966_m899497081_RuntimeMethod_var);
		int32_t L_4 = ___value0;
		MemoryCellTextController_OnIncrementValue_m3037034012(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Collections.IEnumerator GameController::RunSingleCommand()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameController_RunSingleCommand_m2188203666 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_RunSingleCommand_m2188203666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRunSingleCommandU3Ec__IteratorF_t1661767859 * V_0 = NULL;
	{
		U3CRunSingleCommandU3Ec__IteratorF_t1661767859 * L_0 = (U3CRunSingleCommandU3Ec__IteratorF_t1661767859 *)il2cpp_codegen_object_new(U3CRunSingleCommandU3Ec__IteratorF_t1661767859_il2cpp_TypeInfo_var);
		U3CRunSingleCommandU3Ec__IteratorF__ctor_m2145467515(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRunSingleCommandU3Ec__IteratorF_t1661767859 * L_1 = V_0;
		L_1->set_U24this_5(__this);
		U3CRunSingleCommandU3Ec__IteratorF_t1661767859 * L_2 = V_0;
		return L_2;
	}
}
// System.Int32 GameController::CellsToInteger(MemoryCellController[])
extern "C" IL2CPP_METHOD_ATTR int32_t GameController_CellsToInteger_m1331874051 (GameController_t2330501625 * __this, MemoryCellControllerU5BU5D_t1776215942* ___cells0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_CellsToInteger_m1331874051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		MemoryCellControllerU5BU5D_t1776215942* L_0 = ___cells0;
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		V_1 = 0;
		V_2 = 0;
		goto IL_002e;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		MemoryCellControllerU5BU5D_t1776215942* L_2 = ___cells0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		MemoryCellController_t341130527 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = MemoryCellController_GetValue_m1999499772(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		int32_t L_8 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = powf((2.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)), (int32_t)1))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)(((int32_t)((int32_t)L_9)))))));
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}
}
// System.Void GameController::ZeroizeGrid()
extern "C" IL2CPP_METHOD_ATTR void GameController_ZeroizeGrid_m2026413229 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_ZeroizeGrid_m2026413229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RegisterController_t92122650 * L_0 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		RegisterController_Zeroize_m519661814(L_0, /*hidden argument*/NULL);
		GridController_t1732845400 * L_1 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		GridController_Zeroize_m2160003636(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::PlaceColors()
extern "C" IL2CPP_METHOD_ATTR void GameController_PlaceColors_m1849823443 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_PlaceColors_m1849823443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JobController_t2362869387 * L_0 = ((JobController_t2362869387_StaticFields*)il2cpp_codegen_static_fields_for(JobController_t2362869387_il2cpp_TypeInfo_var))->get_instance_4();
		JobController_PlaceColors_m928630922(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::EraseColors()
extern "C" IL2CPP_METHOD_ATTR void GameController_EraseColors_m68052623 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_EraseColors_m68052623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JobController_t2362869387 * L_0 = ((JobController_t2362869387_StaticFields*)il2cpp_codegen_static_fields_for(JobController_t2362869387_il2cpp_TypeInfo_var))->get_instance_4();
		JobController_EraseColors_m1147765506(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::OnRandomButtonPress()
extern "C" IL2CPP_METHOD_ATTR void GameController_OnRandomButtonPress_m2916944372 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_OnRandomButtonPress_m2916944372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryCellControllerU5BU5D_t1776215942* V_0 = NULL;
	MemoryCellController_t341130527 * V_1 = NULL;
	MemoryCellControllerU5BU5D_t1776215942* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		GridController_t1732845400 * L_0 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		MemoryCellControllerU5BU5D_t1776215942* L_1 = GridController_GetGrid_m1085035811(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MemoryCellControllerU5BU5D_t1776215942* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_002e;
	}

IL_0014:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		MemoryCellController_t341130527 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		int32_t L_7 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)14), /*hidden argument*/NULL);
		V_4 = L_7;
		MemoryCellController_t341130527 * L_8 = V_1;
		int32_t L_9 = V_4;
		MemoryCellController_SetValue_m3908445948(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_11 = V_3;
		MemoryCellControllerU5BU5D_t1776215942* L_12 = V_2;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		MemoryCellControllerU5BU5D_t1776215942* L_13 = V_0;
		MemoryCellControllerU5BU5D_t1776215942* L_14 = V_0;
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))), (int32_t)3));
		MemoryCellController_t341130527 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		MemoryCellController_SetValue_m3908445948(L_16, ((int32_t)15), /*hidden argument*/NULL);
		MemoryCellControllerU5BU5D_t1776215942* L_17 = V_0;
		MemoryCellControllerU5BU5D_t1776215942* L_18 = V_0;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))), (int32_t)2));
		MemoryCellController_t341130527 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		MemoryCellController_SetValue_m3908445948(L_20, 0, /*hidden argument*/NULL);
		MemoryCellControllerU5BU5D_t1776215942* L_21 = V_0;
		MemoryCellControllerU5BU5D_t1776215942* L_22 = V_0;
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))), (int32_t)1));
		MemoryCellController_t341130527 * L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		MemoryCellController_SetValue_m3908445948(L_24, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::OnStartButtonPress()
extern "C" IL2CPP_METHOD_ATTR void GameController_OnStartButtonPress_m3391101166 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_OnStartButtonPress_m3391101166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_startState_12();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00d5;
			}
			case 2:
			{
				goto IL_0086;
			}
			case 3:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_00da;
	}

IL_0022:
	{
		__this->set_startState_12(1);
		GameController_ZeroizeGrid_m2026413229(__this, /*hidden argument*/NULL);
		GameController_PlaceColors_m1849823443(__this, /*hidden argument*/NULL);
		__this->set_startState_12(2);
		StartButtonController_t3651918395 * L_2 = ((StartButtonController_t3651918395_StaticFields*)il2cpp_codegen_static_fields_for(StartButtonController_t3651918395_il2cpp_TypeInfo_var))->get_instance_4();
		StartButtonController_OnStart_m4261485478(L_2, /*hidden argument*/NULL);
		RandomButtonController_t2952941430 * L_3 = ((RandomButtonController_t2952941430_StaticFields*)il2cpp_codegen_static_fields_for(RandomButtonController_t2952941430_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
		ClearButtonController_t1437245373 * L_5 = ((ClearButtonController_t1437245373_StaticFields*)il2cpp_codegen_static_fields_for(ClearButtonController_t1437245373_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_6, (bool)0, /*hidden argument*/NULL);
		MoneyController_t851075799 * L_7 = ((MoneyController_t851075799_StaticFields*)il2cpp_codegen_static_fields_for(MoneyController_t851075799_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_8, (bool)1, /*hidden argument*/NULL);
		HaltButtonController_t306459615 * L_9 = ((HaltButtonController_t306459615_StaticFields*)il2cpp_codegen_static_fields_for(HaltButtonController_t306459615_il2cpp_TypeInfo_var))->get_instance_4();
		HaltButtonController_ShowPrice_m2029584194(L_9, (bool)1, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_0086:
	{
		__this->set_startState_12(3);
		GameController_ZeroizeGrid_m2026413229(__this, /*hidden argument*/NULL);
		GameController_EraseColors_m68052623(__this, /*hidden argument*/NULL);
		MoneyController_t851075799 * L_10 = ((MoneyController_t851075799_StaticFields*)il2cpp_codegen_static_fields_for(MoneyController_t851075799_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_11, (bool)0, /*hidden argument*/NULL);
		StartButtonController_t3651918395 * L_12 = ((StartButtonController_t3651918395_StaticFields*)il2cpp_codegen_static_fields_for(StartButtonController_t3651918395_il2cpp_TypeInfo_var))->get_instance_4();
		StartButtonController_OnEnd_m2111963269(L_12, /*hidden argument*/NULL);
		ScoreController_t484565259 * L_13 = ((ScoreController_t484565259_StaticFields*)il2cpp_codegen_static_fields_for(ScoreController_t484565259_il2cpp_TypeInfo_var))->get_instance_4();
		intptr_t L_14 = (intptr_t)GameController_U3COnStartButtonPressU3Em__0_m691761543_RuntimeMethod_var;
		Promise_t592223531 * L_15 = (Promise_t592223531 *)il2cpp_codegen_object_new(Promise_t592223531_il2cpp_TypeInfo_var);
		Promise__ctor_m1650648743(L_15, __this, (intptr_t)L_14, /*hidden argument*/NULL);
		RuntimeObject* L_16 = ScoreController_ShowScore_m861725830(L_13, L_15, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_16, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_00d5:
	{
		goto IL_00da;
	}

IL_00da:
	{
		return;
	}
}
// System.Void GameController::Update()
extern "C" IL2CPP_METHOD_ATTR void GameController_Update_m217025042 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void GameController::<OnStartButtonPress>m__0()
extern "C" IL2CPP_METHOD_ATTR void GameController_U3COnStartButtonPressU3Em__0_m691761543 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_U3COnStartButtonPressU3Em__0_m691761543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_startState_12(0);
		MoneyController_t851075799 * L_0 = ((MoneyController_t851075799_StaticFields*)il2cpp_codegen_static_fields_for(MoneyController_t851075799_il2cpp_TypeInfo_var))->get_instance_4();
		MoneyController_ResetMoney_m208388443(L_0, /*hidden argument*/NULL);
		RandomButtonController_t2952941430 * L_1 = ((RandomButtonController_t2952941430_StaticFields*)il2cpp_codegen_static_fields_for(RandomButtonController_t2952941430_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		ClearButtonController_t1437245373 * L_3 = ((ClearButtonController_t1437245373_StaticFields*)il2cpp_codegen_static_fields_for(ClearButtonController_t1437245373_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_4, (bool)1, /*hidden argument*/NULL);
		HaltButtonController_t306459615 * L_5 = ((HaltButtonController_t306459615_StaticFields*)il2cpp_codegen_static_fields_for(HaltButtonController_t306459615_il2cpp_TypeInfo_var))->get_instance_4();
		HaltButtonController_ShowPrice_m2029584194(L_5, (bool)0, /*hidden argument*/NULL);
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
// System.Void GameController/<Add>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CAddU3Ec__Iterator0__ctor_m4010620100 (U3CAddU3Ec__Iterator0_t3148152499 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<Add>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CAddU3Ec__Iterator0_MoveNext_m683788724 (U3CAddU3Ec__Iterator0_t3148152499 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAddU3Ec__Iterator0_MoveNext_m683788724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_006f;
			}
			case 2:
			{
				goto IL_00a9;
			}
			case 3:
			{
				goto IL_00f4;
			}
			case 4:
			{
				goto IL_012e;
			}
			case 5:
			{
				goto IL_018c;
			}
			case 6:
			{
				goto IL_01cc;
			}
		}
	}
	{
		goto IL_01d3;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_2 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_3 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_4 = RegisterRetriever_NavToRegister_m3179150175(L_3, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(L_2, L_4, /*hidden argument*/NULL);
		__this->set_U24current_4(L_5);
		bool L_6 = __this->get_U24disposing_5();
		if (L_6)
		{
			goto IL_006a;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_006a:
	{
		goto IL_01d5;
	}

IL_006f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597547, /*hidden argument*/NULL);
		GameController_t2330501625 * L_7 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_8 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_9 = RegisterRetriever_ReadRegister_m94153405(L_8, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_10 = MonoBehaviour_StartCoroutine_m3411253000(L_7, L_9, /*hidden argument*/NULL);
		__this->set_U24current_4(L_10);
		bool L_11 = __this->get_U24disposing_5();
		if (L_11)
		{
			goto IL_00a4;
		}
	}
	{
		__this->set_U24PC_6(2);
	}

IL_00a4:
	{
		goto IL_01d5;
	}

IL_00a9:
	{
		RegisterController_t92122650 * L_12 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_13 = RegisterController_GetRegisterValue_m259583444(L_12, 2, /*hidden argument*/NULL);
		__this->set_U3CaU3E__0_0(L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1289984270, /*hidden argument*/NULL);
		GameController_t2330501625 * L_14 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_15 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_16 = RegisterRetriever_NavToRegister_m3179150175(L_15, 3, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_17 = MonoBehaviour_StartCoroutine_m3411253000(L_14, L_16, /*hidden argument*/NULL);
		__this->set_U24current_4(L_17);
		bool L_18 = __this->get_U24disposing_5();
		if (L_18)
		{
			goto IL_00ef;
		}
	}
	{
		__this->set_U24PC_6(3);
	}

IL_00ef:
	{
		goto IL_01d5;
	}

IL_00f4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597544, /*hidden argument*/NULL);
		GameController_t2330501625 * L_19 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_20 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_21 = RegisterRetriever_ReadRegister_m94153405(L_20, 3, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_22 = MonoBehaviour_StartCoroutine_m3411253000(L_19, L_21, /*hidden argument*/NULL);
		__this->set_U24current_4(L_22);
		bool L_23 = __this->get_U24disposing_5();
		if (L_23)
		{
			goto IL_0129;
		}
	}
	{
		__this->set_U24PC_6(4);
	}

IL_0129:
	{
		goto IL_01d5;
	}

IL_012e:
	{
		RegisterController_t92122650 * L_24 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_25 = RegisterController_GetRegisterValue_m259583444(L_24, 3, /*hidden argument*/NULL);
		__this->set_U3CbU3E__0_1(L_25);
		int32_t L_26 = __this->get_U3CaU3E__0_0();
		int32_t L_27 = __this->get_U3CbU3E__0_1();
		__this->set_U3CansU3E__0_2(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27)));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_28 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_29 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_30 = RegisterRetriever_NavToRegister_m3179150175(L_29, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_31 = MonoBehaviour_StartCoroutine_m3411253000(L_28, L_30, /*hidden argument*/NULL);
		__this->set_U24current_4(L_31);
		bool L_32 = __this->get_U24disposing_5();
		if (L_32)
		{
			goto IL_0187;
		}
	}
	{
		__this->set_U24PC_6(5);
	}

IL_0187:
	{
		goto IL_01d5;
	}

IL_018c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1124711163, /*hidden argument*/NULL);
		GameController_t2330501625 * L_33 = __this->get_U24this_3();
		RegisterController_t92122650 * L_34 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_35 = __this->get_U3CansU3E__0_2();
		RuntimeObject* L_36 = RegisterController_SetRegisterValue_m2854146444(L_34, 2, L_35, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_37 = MonoBehaviour_StartCoroutine_m3411253000(L_33, L_36, /*hidden argument*/NULL);
		__this->set_U24current_4(L_37);
		bool L_38 = __this->get_U24disposing_5();
		if (L_38)
		{
			goto IL_01c7;
		}
	}
	{
		__this->set_U24PC_6(6);
	}

IL_01c7:
	{
		goto IL_01d5;
	}

IL_01cc:
	{
		__this->set_U24PC_6((-1));
	}

IL_01d3:
	{
		return (bool)0;
	}

IL_01d5:
	{
		return (bool)1;
	}
}
// System.Object GameController/<Add>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CAddU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4015179245 (U3CAddU3Ec__Iterator0_t3148152499 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object GameController/<Add>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CAddU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m598835489 (U3CAddU3Ec__Iterator0_t3148152499 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void GameController/<Add>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CAddU3Ec__Iterator0_Dispose_m570104882 (U3CAddU3Ec__Iterator0_t3148152499 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void GameController/<Add>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CAddU3Ec__Iterator0_Reset_m2247347303 (U3CAddU3Ec__Iterator0_t3148152499 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAddU3Ec__Iterator0_Reset_m2247347303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CAddU3Ec__Iterator0_Reset_m2247347303_RuntimeMethod_var);
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
// System.Void GameController/<Add_direct>c__Iterator7::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CAdd_directU3Ec__Iterator7__ctor_m830292697 (U3CAdd_directU3Ec__Iterator7_t2744499443 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<Add_direct>c__Iterator7::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CAdd_directU3Ec__Iterator7_MoveNext_m1408249038 (U3CAdd_directU3Ec__Iterator7_t2744499443 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAdd_directU3Ec__Iterator7_MoveNext_m1408249038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0067;
			}
			case 2:
			{
				goto IL_00a1;
			}
			case 3:
			{
				goto IL_00ff;
			}
			case 4:
			{
				goto IL_013f;
			}
		}
	}
	{
		goto IL_0146;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_2 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_3 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_4 = RegisterRetriever_NavToRegister_m3179150175(L_3, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(L_2, L_4, /*hidden argument*/NULL);
		__this->set_U24current_4(L_5);
		bool L_6 = __this->get_U24disposing_5();
		if (L_6)
		{
			goto IL_0062;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_0062:
	{
		goto IL_0148;
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597547, /*hidden argument*/NULL);
		GameController_t2330501625 * L_7 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_8 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_9 = RegisterRetriever_ReadRegister_m94153405(L_8, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_10 = MonoBehaviour_StartCoroutine_m3411253000(L_7, L_9, /*hidden argument*/NULL);
		__this->set_U24current_4(L_10);
		bool L_11 = __this->get_U24disposing_5();
		if (L_11)
		{
			goto IL_009c;
		}
	}
	{
		__this->set_U24PC_6(2);
	}

IL_009c:
	{
		goto IL_0148;
	}

IL_00a1:
	{
		RegisterController_t92122650 * L_12 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_13 = RegisterController_GetRegisterValue_m259583444(L_12, 2, /*hidden argument*/NULL);
		__this->set_U3CaU3E__0_0(L_13);
		int32_t L_14 = __this->get_U3CaU3E__0_0();
		int32_t L_15 = __this->get_value_1();
		__this->set_U3CansU3E__0_2(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15)));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_16 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_17 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_18 = RegisterRetriever_NavToRegister_m3179150175(L_17, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_19 = MonoBehaviour_StartCoroutine_m3411253000(L_16, L_18, /*hidden argument*/NULL);
		__this->set_U24current_4(L_19);
		bool L_20 = __this->get_U24disposing_5();
		if (L_20)
		{
			goto IL_00fa;
		}
	}
	{
		__this->set_U24PC_6(3);
	}

IL_00fa:
	{
		goto IL_0148;
	}

IL_00ff:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1124711163, /*hidden argument*/NULL);
		GameController_t2330501625 * L_21 = __this->get_U24this_3();
		RegisterController_t92122650 * L_22 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_23 = __this->get_U3CansU3E__0_2();
		RuntimeObject* L_24 = RegisterController_SetRegisterValue_m2854146444(L_22, 2, L_23, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_25 = MonoBehaviour_StartCoroutine_m3411253000(L_21, L_24, /*hidden argument*/NULL);
		__this->set_U24current_4(L_25);
		bool L_26 = __this->get_U24disposing_5();
		if (L_26)
		{
			goto IL_013a;
		}
	}
	{
		__this->set_U24PC_6(4);
	}

IL_013a:
	{
		goto IL_0148;
	}

IL_013f:
	{
		__this->set_U24PC_6((-1));
	}

IL_0146:
	{
		return (bool)0;
	}

IL_0148:
	{
		return (bool)1;
	}
}
// System.Object GameController/<Add_direct>c__Iterator7::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CAdd_directU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4128164360 (U3CAdd_directU3Ec__Iterator7_t2744499443 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object GameController/<Add_direct>c__Iterator7::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CAdd_directU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m2538173198 (U3CAdd_directU3Ec__Iterator7_t2744499443 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void GameController/<Add_direct>c__Iterator7::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CAdd_directU3Ec__Iterator7_Dispose_m3463124543 (U3CAdd_directU3Ec__Iterator7_t2744499443 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void GameController/<Add_direct>c__Iterator7::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CAdd_directU3Ec__Iterator7_Reset_m2729642281 (U3CAdd_directU3Ec__Iterator7_t2744499443 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAdd_directU3Ec__Iterator7_Reset_m2729642281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CAdd_directU3Ec__Iterator7_Reset_m2729642281_RuntimeMethod_var);
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
// System.Void GameController/<Beq>c__Iterator3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CBeqU3Ec__Iterator3__ctor_m2152543583 (U3CBeqU3Ec__Iterator3_t3786537701 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<Beq>c__Iterator3::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CBeqU3Ec__Iterator3_MoveNext_m1067914218 (U3CBeqU3Ec__Iterator3_t3786537701 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBeqU3Ec__Iterator3_MoveNext_m1067914218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_00b0;
			}
			case 3:
			{
				goto IL_0106;
			}
			case 4:
			{
				goto IL_0146;
			}
		}
	}
	{
		goto IL_014d;
	}

IL_002d:
	{
		int32_t L_2 = __this->get_addr_0();
		__this->set_addr_0(((int32_t)((int32_t)L_2%(int32_t)((int32_t)80))));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_3 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_4 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_5 = RegisterRetriever_NavToRegister_m3179150175(L_4, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_6 = MonoBehaviour_StartCoroutine_m3411253000(L_3, L_5, /*hidden argument*/NULL);
		__this->set_U24current_3(L_6);
		bool L_7 = __this->get_U24disposing_4();
		if (L_7)
		{
			goto IL_0071;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0071:
	{
		goto IL_014f;
	}

IL_0076:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597547, /*hidden argument*/NULL);
		GameController_t2330501625 * L_8 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_9 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_10 = RegisterRetriever_ReadRegister_m94153405(L_9, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_11 = MonoBehaviour_StartCoroutine_m3411253000(L_8, L_10, /*hidden argument*/NULL);
		__this->set_U24current_3(L_11);
		bool L_12 = __this->get_U24disposing_4();
		if (L_12)
		{
			goto IL_00ab;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_00ab:
	{
		goto IL_014f;
	}

IL_00b0:
	{
		RegisterController_t92122650 * L_13 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_14 = RegisterController_GetRegisterValue_m259583444(L_13, 2, /*hidden argument*/NULL);
		__this->set_U3CaU3E__0_1(L_14);
		int32_t L_15 = __this->get_U3CaU3E__0_1();
		if (L_15)
		{
			goto IL_0146;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2343299646, /*hidden argument*/NULL);
		GameController_t2330501625 * L_16 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_17 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_18 = RegisterRetriever_NavToRegister_m3179150175(L_17, 1, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_19 = MonoBehaviour_StartCoroutine_m3411253000(L_16, L_18, /*hidden argument*/NULL);
		__this->set_U24current_3(L_19);
		bool L_20 = __this->get_U24disposing_4();
		if (L_20)
		{
			goto IL_0101;
		}
	}
	{
		__this->set_U24PC_5(3);
	}

IL_0101:
	{
		goto IL_014f;
	}

IL_0106:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1120451338, /*hidden argument*/NULL);
		GameController_t2330501625 * L_21 = __this->get_U24this_2();
		RegisterController_t92122650 * L_22 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_23 = __this->get_addr_0();
		RuntimeObject* L_24 = RegisterController_SetRegisterValue_m2854146444(L_22, 1, L_23, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_25 = MonoBehaviour_StartCoroutine_m3411253000(L_21, L_24, /*hidden argument*/NULL);
		__this->set_U24current_3(L_25);
		bool L_26 = __this->get_U24disposing_4();
		if (L_26)
		{
			goto IL_0141;
		}
	}
	{
		__this->set_U24PC_5(4);
	}

IL_0141:
	{
		goto IL_014f;
	}

IL_0146:
	{
		__this->set_U24PC_5((-1));
	}

IL_014d:
	{
		return (bool)0;
	}

IL_014f:
	{
		return (bool)1;
	}
}
// System.Object GameController/<Beq>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CBeqU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1239859270 (U3CBeqU3Ec__Iterator3_t3786537701 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object GameController/<Beq>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CBeqU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m1248382682 (U3CBeqU3Ec__Iterator3_t3786537701 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void GameController/<Beq>c__Iterator3::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CBeqU3Ec__Iterator3_Dispose_m2009062832 (U3CBeqU3Ec__Iterator3_t3786537701 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void GameController/<Beq>c__Iterator3::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CBeqU3Ec__Iterator3_Reset_m994925334 (U3CBeqU3Ec__Iterator3_t3786537701 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBeqU3Ec__Iterator3_Reset_m994925334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CBeqU3Ec__Iterator3_Reset_m994925334_RuntimeMethod_var);
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
// System.Void GameController/<Beq_direct>c__IteratorA::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CBeq_directU3Ec__IteratorA__ctor_m2104965596 (U3CBeq_directU3Ec__IteratorA_t2534323723 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<Beq_direct>c__IteratorA::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CBeq_directU3Ec__IteratorA_MoveNext_m2761525037 (U3CBeq_directU3Ec__IteratorA_t2534323723 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBeq_directU3Ec__IteratorA_MoveNext_m2761525037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_0090;
			}
			case 2:
			{
				goto IL_00da;
			}
			case 3:
			{
				goto IL_0136;
			}
			case 4:
			{
				goto IL_0170;
			}
			case 5:
			{
				goto IL_01c7;
			}
			case 6:
			{
				goto IL_0207;
			}
		}
	}
	{
		goto IL_021d;
	}

IL_0035:
	{
		int32_t L_2 = __this->get_addr_0();
		__this->set_addr_0(((int32_t)((int32_t)L_2%(int32_t)((int32_t)80))));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2357329106, /*hidden argument*/NULL);
		GameController_t2330501625 * L_3 = __this->get_U24this_3();
		MemoryRetriever_t2760707818 * L_4 = ((MemoryRetriever_t2760707818_StaticFields*)il2cpp_codegen_static_fields_for(MemoryRetriever_t2760707818_il2cpp_TypeInfo_var))->get_instance_4();
		GridController_t1732845400 * L_5 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_6 = __this->get_addr_0();
		MemoryCellControllerU5BU5D_t1776215942* L_7 = GridController_GetCells_m210042790(L_5, L_6, 1, /*hidden argument*/NULL);
		int32_t L_8 = 0;
		MemoryCellController_t341130527 * L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		RuntimeObject* L_10 = MemoryRetriever_NavToCell_m793505524(L_4, L_9, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_11 = MonoBehaviour_StartCoroutine_m3411253000(L_3, L_10, /*hidden argument*/NULL);
		__this->set_U24current_4(L_11);
		bool L_12 = __this->get_U24disposing_5();
		if (L_12)
		{
			goto IL_008b;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_008b:
	{
		goto IL_021f;
	}

IL_0090:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3125160222, /*hidden argument*/NULL);
		GameController_t2330501625 * L_13 = __this->get_U24this_3();
		MemoryRetriever_t2760707818 * L_14 = ((MemoryRetriever_t2760707818_StaticFields*)il2cpp_codegen_static_fields_for(MemoryRetriever_t2760707818_il2cpp_TypeInfo_var))->get_instance_4();
		GridController_t1732845400 * L_15 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_16 = __this->get_addr_0();
		MemoryCellControllerU5BU5D_t1776215942* L_17 = GridController_GetCells_m210042790(L_15, L_16, 2, /*hidden argument*/NULL);
		RuntimeObject* L_18 = MemoryRetriever_ReadRegister_m1624939673(L_14, L_17, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_19 = MonoBehaviour_StartCoroutine_m3411253000(L_13, L_18, /*hidden argument*/NULL);
		__this->set_U24current_4(L_19);
		bool L_20 = __this->get_U24disposing_5();
		if (L_20)
		{
			goto IL_00d5;
		}
	}
	{
		__this->set_U24PC_6(2);
	}

IL_00d5:
	{
		goto IL_021f;
	}

IL_00da:
	{
		GridController_t1732845400 * L_21 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_22 = __this->get_addr_0();
		int32_t L_23 = GridController_GetValue_m3171713634(L_21, L_22, 2, /*hidden argument*/NULL);
		__this->set_U3CaddressValueU3E__0_1(L_23);
		int32_t L_24 = __this->get_U3CaddressValueU3E__0_1();
		if (L_24)
		{
			goto IL_0216;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_25 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_26 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_27 = RegisterRetriever_NavToRegister_m3179150175(L_26, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_28 = MonoBehaviour_StartCoroutine_m3411253000(L_25, L_27, /*hidden argument*/NULL);
		__this->set_U24current_4(L_28);
		bool L_29 = __this->get_U24disposing_5();
		if (L_29)
		{
			goto IL_0131;
		}
	}
	{
		__this->set_U24PC_6(3);
	}

IL_0131:
	{
		goto IL_021f;
	}

IL_0136:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597547, /*hidden argument*/NULL);
		GameController_t2330501625 * L_30 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_31 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_32 = RegisterRetriever_ReadRegister_m94153405(L_31, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_33 = MonoBehaviour_StartCoroutine_m3411253000(L_30, L_32, /*hidden argument*/NULL);
		__this->set_U24current_4(L_33);
		bool L_34 = __this->get_U24disposing_5();
		if (L_34)
		{
			goto IL_016b;
		}
	}
	{
		__this->set_U24PC_6(4);
	}

IL_016b:
	{
		goto IL_021f;
	}

IL_0170:
	{
		RegisterController_t92122650 * L_35 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_36 = RegisterController_GetRegisterValue_m259583444(L_35, 2, /*hidden argument*/NULL);
		__this->set_U3CaU3E__1_2(L_36);
		int32_t L_37 = __this->get_U3CaU3E__1_2();
		if ((((int32_t)L_37) < ((int32_t)0)))
		{
			goto IL_020c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2343299646, /*hidden argument*/NULL);
		GameController_t2330501625 * L_38 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_39 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_40 = RegisterRetriever_NavToRegister_m3179150175(L_39, 1, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_41 = MonoBehaviour_StartCoroutine_m3411253000(L_38, L_40, /*hidden argument*/NULL);
		__this->set_U24current_4(L_41);
		bool L_42 = __this->get_U24disposing_5();
		if (L_42)
		{
			goto IL_01c2;
		}
	}
	{
		__this->set_U24PC_6(5);
	}

IL_01c2:
	{
		goto IL_021f;
	}

IL_01c7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1120451338, /*hidden argument*/NULL);
		GameController_t2330501625 * L_43 = __this->get_U24this_3();
		RegisterController_t92122650 * L_44 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_45 = __this->get_U3CaU3E__1_2();
		RuntimeObject* L_46 = RegisterController_SetRegisterValue_m2854146444(L_44, 1, L_45, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_47 = MonoBehaviour_StartCoroutine_m3411253000(L_43, L_46, /*hidden argument*/NULL);
		__this->set_U24current_4(L_47);
		bool L_48 = __this->get_U24disposing_5();
		if (L_48)
		{
			goto IL_0202;
		}
	}
	{
		__this->set_U24PC_6(6);
	}

IL_0202:
	{
		goto IL_021f;
	}

IL_0207:
	{
		goto IL_0216;
	}

IL_020c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1679077419, /*hidden argument*/NULL);
	}

IL_0216:
	{
		__this->set_U24PC_6((-1));
	}

IL_021d:
	{
		return (bool)0;
	}

IL_021f:
	{
		return (bool)1;
	}
}
// System.Object GameController/<Beq_direct>c__IteratorA::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CBeq_directU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m698904801 (U3CBeq_directU3Ec__IteratorA_t2534323723 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object GameController/<Beq_direct>c__IteratorA::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CBeq_directU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1127058425 (U3CBeq_directU3Ec__IteratorA_t2534323723 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void GameController/<Beq_direct>c__IteratorA::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CBeq_directU3Ec__IteratorA_Dispose_m3079404177 (U3CBeq_directU3Ec__IteratorA_t2534323723 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void GameController/<Beq_direct>c__IteratorA::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CBeq_directU3Ec__IteratorA_Reset_m2702846444 (U3CBeq_directU3Ec__IteratorA_t2534323723 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBeq_directU3Ec__IteratorA_Reset_m2702846444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CBeq_directU3Ec__IteratorA_Reset_m2702846444_RuntimeMethod_var);
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
// System.Void GameController/<Bgt>c__Iterator5::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CBgtU3Ec__Iterator5__ctor_m3699279023 (U3CBgtU3Ec__Iterator5_t2367511551 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<Bgt>c__Iterator5::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CBgtU3Ec__Iterator5_MoveNext_m2653308382 (U3CBgtU3Ec__Iterator5_t2367511551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBgtU3Ec__Iterator5_MoveNext_m2653308382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_00b0;
			}
			case 3:
			{
				goto IL_0107;
			}
			case 4:
			{
				goto IL_0147;
			}
		}
	}
	{
		goto IL_014e;
	}

IL_002d:
	{
		int32_t L_2 = __this->get_addr_0();
		__this->set_addr_0(((int32_t)((int32_t)L_2%(int32_t)((int32_t)80))));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_3 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_4 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_5 = RegisterRetriever_NavToRegister_m3179150175(L_4, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_6 = MonoBehaviour_StartCoroutine_m3411253000(L_3, L_5, /*hidden argument*/NULL);
		__this->set_U24current_3(L_6);
		bool L_7 = __this->get_U24disposing_4();
		if (L_7)
		{
			goto IL_0071;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0071:
	{
		goto IL_0150;
	}

IL_0076:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597547, /*hidden argument*/NULL);
		GameController_t2330501625 * L_8 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_9 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_10 = RegisterRetriever_ReadRegister_m94153405(L_9, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_11 = MonoBehaviour_StartCoroutine_m3411253000(L_8, L_10, /*hidden argument*/NULL);
		__this->set_U24current_3(L_11);
		bool L_12 = __this->get_U24disposing_4();
		if (L_12)
		{
			goto IL_00ab;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_00ab:
	{
		goto IL_0150;
	}

IL_00b0:
	{
		RegisterController_t92122650 * L_13 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_14 = RegisterController_GetRegisterValue_m259583444(L_13, 2, /*hidden argument*/NULL);
		__this->set_U3CaU3E__0_1(L_14);
		int32_t L_15 = __this->get_U3CaU3E__0_1();
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0147;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2343299646, /*hidden argument*/NULL);
		GameController_t2330501625 * L_16 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_17 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_18 = RegisterRetriever_NavToRegister_m3179150175(L_17, 1, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_19 = MonoBehaviour_StartCoroutine_m3411253000(L_16, L_18, /*hidden argument*/NULL);
		__this->set_U24current_3(L_19);
		bool L_20 = __this->get_U24disposing_4();
		if (L_20)
		{
			goto IL_0102;
		}
	}
	{
		__this->set_U24PC_5(3);
	}

IL_0102:
	{
		goto IL_0150;
	}

IL_0107:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1120451338, /*hidden argument*/NULL);
		GameController_t2330501625 * L_21 = __this->get_U24this_2();
		RegisterController_t92122650 * L_22 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_23 = __this->get_addr_0();
		RuntimeObject* L_24 = RegisterController_SetRegisterValue_m2854146444(L_22, 1, L_23, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_25 = MonoBehaviour_StartCoroutine_m3411253000(L_21, L_24, /*hidden argument*/NULL);
		__this->set_U24current_3(L_25);
		bool L_26 = __this->get_U24disposing_4();
		if (L_26)
		{
			goto IL_0142;
		}
	}
	{
		__this->set_U24PC_5(4);
	}

IL_0142:
	{
		goto IL_0150;
	}

IL_0147:
	{
		__this->set_U24PC_5((-1));
	}

IL_014e:
	{
		return (bool)0;
	}

IL_0150:
	{
		return (bool)1;
	}
}
// System.Object GameController/<Bgt>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CBgtU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3567559684 (U3CBgtU3Ec__Iterator5_t2367511551 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object GameController/<Bgt>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CBgtU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m2555314746 (U3CBgtU3Ec__Iterator5_t2367511551 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void GameController/<Bgt>c__Iterator5::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CBgtU3Ec__Iterator5_Dispose_m2683060901 (U3CBgtU3Ec__Iterator5_t2367511551 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void GameController/<Bgt>c__Iterator5::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CBgtU3Ec__Iterator5_Reset_m1673367204 (U3CBgtU3Ec__Iterator5_t2367511551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBgtU3Ec__Iterator5_Reset_m1673367204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CBgtU3Ec__Iterator5_Reset_m1673367204_RuntimeMethod_var);
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
// System.Void GameController/<Blt>c__Iterator4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CBltU3Ec__Iterator4__ctor_m2685749935 (U3CBltU3Ec__Iterator4_t1297701914 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<Blt>c__Iterator4::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CBltU3Ec__Iterator4_MoveNext_m1715670044 (U3CBltU3Ec__Iterator4_t1297701914 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBltU3Ec__Iterator4_MoveNext_m1715670044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_00b0;
			}
			case 3:
			{
				goto IL_0107;
			}
			case 4:
			{
				goto IL_0147;
			}
		}
	}
	{
		goto IL_014e;
	}

IL_002d:
	{
		int32_t L_2 = __this->get_addr_0();
		__this->set_addr_0(((int32_t)((int32_t)L_2%(int32_t)((int32_t)80))));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_3 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_4 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_5 = RegisterRetriever_NavToRegister_m3179150175(L_4, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_6 = MonoBehaviour_StartCoroutine_m3411253000(L_3, L_5, /*hidden argument*/NULL);
		__this->set_U24current_3(L_6);
		bool L_7 = __this->get_U24disposing_4();
		if (L_7)
		{
			goto IL_0071;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0071:
	{
		goto IL_0150;
	}

IL_0076:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597547, /*hidden argument*/NULL);
		GameController_t2330501625 * L_8 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_9 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_10 = RegisterRetriever_ReadRegister_m94153405(L_9, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_11 = MonoBehaviour_StartCoroutine_m3411253000(L_8, L_10, /*hidden argument*/NULL);
		__this->set_U24current_3(L_11);
		bool L_12 = __this->get_U24disposing_4();
		if (L_12)
		{
			goto IL_00ab;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_00ab:
	{
		goto IL_0150;
	}

IL_00b0:
	{
		RegisterController_t92122650 * L_13 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_14 = RegisterController_GetRegisterValue_m259583444(L_13, 2, /*hidden argument*/NULL);
		__this->set_U3CaU3E__0_1(L_14);
		int32_t L_15 = __this->get_U3CaU3E__0_1();
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0147;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2343299646, /*hidden argument*/NULL);
		GameController_t2330501625 * L_16 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_17 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_18 = RegisterRetriever_NavToRegister_m3179150175(L_17, 1, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_19 = MonoBehaviour_StartCoroutine_m3411253000(L_16, L_18, /*hidden argument*/NULL);
		__this->set_U24current_3(L_19);
		bool L_20 = __this->get_U24disposing_4();
		if (L_20)
		{
			goto IL_0102;
		}
	}
	{
		__this->set_U24PC_5(3);
	}

IL_0102:
	{
		goto IL_0150;
	}

IL_0107:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1120451338, /*hidden argument*/NULL);
		GameController_t2330501625 * L_21 = __this->get_U24this_2();
		RegisterController_t92122650 * L_22 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_23 = __this->get_addr_0();
		RuntimeObject* L_24 = RegisterController_SetRegisterValue_m2854146444(L_22, 1, L_23, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_25 = MonoBehaviour_StartCoroutine_m3411253000(L_21, L_24, /*hidden argument*/NULL);
		__this->set_U24current_3(L_25);
		bool L_26 = __this->get_U24disposing_4();
		if (L_26)
		{
			goto IL_0142;
		}
	}
	{
		__this->set_U24PC_5(4);
	}

IL_0142:
	{
		goto IL_0150;
	}

IL_0147:
	{
		__this->set_U24PC_5((-1));
	}

IL_014e:
	{
		return (bool)0;
	}

IL_0150:
	{
		return (bool)1;
	}
}
// System.Object GameController/<Blt>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CBltU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3955070939 (U3CBltU3Ec__Iterator4_t1297701914 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object GameController/<Blt>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CBltU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1436329533 (U3CBltU3Ec__Iterator4_t1297701914 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void GameController/<Blt>c__Iterator4::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CBltU3Ec__Iterator4_Dispose_m1403050963 (U3CBltU3Ec__Iterator4_t1297701914 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void GameController/<Blt>c__Iterator4::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CBltU3Ec__Iterator4_Reset_m1195398374 (U3CBltU3Ec__Iterator4_t1297701914 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBltU3Ec__Iterator4_Reset_m1195398374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CBltU3Ec__Iterator4_Reset_m1195398374_RuntimeMethod_var);
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
// System.Void GameController/<Halt>c__IteratorE::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CHaltU3Ec__IteratorE__ctor_m3096474998 (U3CHaltU3Ec__IteratorE_t4199766070 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<Halt>c__IteratorE::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CHaltU3Ec__IteratorE_MoveNext_m2327161570 (U3CHaltU3Ec__IteratorE_t4199766070 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0048;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_0021:
	{
		GameController_t2330501625 * L_2 = __this->get_U24this_0();
		L_2->set_haltFlag_7((bool)1);
		__this->set_U24current_1(NULL);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0043:
	{
		goto IL_0051;
	}

IL_0048:
	{
		__this->set_U24PC_3((-1));
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		return (bool)1;
	}
}
// System.Object GameController/<Halt>c__IteratorE::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CHaltU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3852975533 (U3CHaltU3Ec__IteratorE_t4199766070 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object GameController/<Halt>c__IteratorE::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CHaltU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m125216673 (U3CHaltU3Ec__IteratorE_t4199766070 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void GameController/<Halt>c__IteratorE::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CHaltU3Ec__IteratorE_Dispose_m794283717 (U3CHaltU3Ec__IteratorE_t4199766070 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void GameController/<Halt>c__IteratorE::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CHaltU3Ec__IteratorE_Reset_m1048099070 (U3CHaltU3Ec__IteratorE_t4199766070 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CHaltU3Ec__IteratorE_Reset_m1048099070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CHaltU3Ec__IteratorE_Reset_m1048099070_RuntimeMethod_var);
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
// System.Void GameController/<LoadA>c__IteratorC::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadAU3Ec__IteratorC__ctor_m1619967299 (U3CLoadAU3Ec__IteratorC_t606953003 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<LoadA>c__IteratorC::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CLoadAU3Ec__IteratorC_MoveNext_m2776983765 (U3CLoadAU3Ec__IteratorC_t606953003 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadAU3Ec__IteratorC_MoveNext_m2776983765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0088;
			}
			case 2:
			{
				goto IL_00d2;
			}
			case 3:
			{
				goto IL_0123;
			}
			case 4:
			{
				goto IL_0163;
			}
		}
	}
	{
		goto IL_016a;
	}

IL_002d:
	{
		int32_t L_2 = __this->get_addr_0();
		__this->set_addr_0(((int32_t)((int32_t)L_2%(int32_t)((int32_t)80))));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2357329106, /*hidden argument*/NULL);
		GameController_t2330501625 * L_3 = __this->get_U24this_2();
		MemoryRetriever_t2760707818 * L_4 = ((MemoryRetriever_t2760707818_StaticFields*)il2cpp_codegen_static_fields_for(MemoryRetriever_t2760707818_il2cpp_TypeInfo_var))->get_instance_4();
		GridController_t1732845400 * L_5 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_6 = __this->get_addr_0();
		MemoryCellControllerU5BU5D_t1776215942* L_7 = GridController_GetCells_m210042790(L_5, L_6, 1, /*hidden argument*/NULL);
		int32_t L_8 = 0;
		MemoryCellController_t341130527 * L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		RuntimeObject* L_10 = MemoryRetriever_NavToCell_m793505524(L_4, L_9, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_11 = MonoBehaviour_StartCoroutine_m3411253000(L_3, L_10, /*hidden argument*/NULL);
		__this->set_U24current_3(L_11);
		bool L_12 = __this->get_U24disposing_4();
		if (L_12)
		{
			goto IL_0083;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0083:
	{
		goto IL_016c;
	}

IL_0088:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3125160222, /*hidden argument*/NULL);
		GameController_t2330501625 * L_13 = __this->get_U24this_2();
		MemoryRetriever_t2760707818 * L_14 = ((MemoryRetriever_t2760707818_StaticFields*)il2cpp_codegen_static_fields_for(MemoryRetriever_t2760707818_il2cpp_TypeInfo_var))->get_instance_4();
		GridController_t1732845400 * L_15 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_16 = __this->get_addr_0();
		MemoryCellControllerU5BU5D_t1776215942* L_17 = GridController_GetCells_m210042790(L_15, L_16, 2, /*hidden argument*/NULL);
		RuntimeObject* L_18 = MemoryRetriever_ReadRegister_m1624939673(L_14, L_17, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_19 = MonoBehaviour_StartCoroutine_m3411253000(L_13, L_18, /*hidden argument*/NULL);
		__this->set_U24current_3(L_19);
		bool L_20 = __this->get_U24disposing_4();
		if (L_20)
		{
			goto IL_00cd;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_00cd:
	{
		goto IL_016c;
	}

IL_00d2:
	{
		GridController_t1732845400 * L_21 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_22 = __this->get_addr_0();
		int32_t L_23 = GridController_GetValue_m3171713634(L_21, L_22, 2, /*hidden argument*/NULL);
		__this->set_U3CaddressValueU3E__0_1(L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_24 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_25 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_26 = RegisterRetriever_NavToRegister_m3179150175(L_25, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_27 = MonoBehaviour_StartCoroutine_m3411253000(L_24, L_26, /*hidden argument*/NULL);
		__this->set_U24current_3(L_27);
		bool L_28 = __this->get_U24disposing_4();
		if (L_28)
		{
			goto IL_011e;
		}
	}
	{
		__this->set_U24PC_5(3);
	}

IL_011e:
	{
		goto IL_016c;
	}

IL_0123:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1124711163, /*hidden argument*/NULL);
		GameController_t2330501625 * L_29 = __this->get_U24this_2();
		RegisterController_t92122650 * L_30 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_31 = __this->get_U3CaddressValueU3E__0_1();
		RuntimeObject* L_32 = RegisterController_SetRegisterValue_m2854146444(L_30, 2, L_31, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_33 = MonoBehaviour_StartCoroutine_m3411253000(L_29, L_32, /*hidden argument*/NULL);
		__this->set_U24current_3(L_33);
		bool L_34 = __this->get_U24disposing_4();
		if (L_34)
		{
			goto IL_015e;
		}
	}
	{
		__this->set_U24PC_5(4);
	}

IL_015e:
	{
		goto IL_016c;
	}

IL_0163:
	{
		__this->set_U24PC_5((-1));
	}

IL_016a:
	{
		return (bool)0;
	}

IL_016c:
	{
		return (bool)1;
	}
}
// System.Object GameController/<LoadA>c__IteratorC::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadAU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m988378390 (U3CLoadAU3Ec__IteratorC_t606953003 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object GameController/<LoadA>c__IteratorC::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadAU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m2184295533 (U3CLoadAU3Ec__IteratorC_t606953003 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void GameController/<LoadA>c__IteratorC::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadAU3Ec__IteratorC_Dispose_m4097206092 (U3CLoadAU3Ec__IteratorC_t606953003 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void GameController/<LoadA>c__IteratorC::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadAU3Ec__IteratorC_Reset_m77850182 (U3CLoadAU3Ec__IteratorC_t606953003 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadAU3Ec__IteratorC_Reset_m77850182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadAU3Ec__IteratorC_Reset_m77850182_RuntimeMethod_var);
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
// System.Void GameController/<LoadB>c__IteratorD::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBU3Ec__IteratorD__ctor_m1650332740 (U3CLoadBU3Ec__IteratorD_t607250828 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<LoadB>c__IteratorD::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CLoadBU3Ec__IteratorD_MoveNext_m2478543289 (U3CLoadBU3Ec__IteratorD_t607250828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadBU3Ec__IteratorD_MoveNext_m2478543289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0088;
			}
			case 2:
			{
				goto IL_00c8;
			}
			case 3:
			{
				goto IL_0119;
			}
			case 4:
			{
				goto IL_0159;
			}
		}
	}
	{
		goto IL_0160;
	}

IL_002d:
	{
		int32_t L_2 = __this->get_addr_0();
		__this->set_addr_0(((int32_t)((int32_t)L_2%(int32_t)((int32_t)80))));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2357329106, /*hidden argument*/NULL);
		GameController_t2330501625 * L_3 = __this->get_U24this_2();
		MemoryRetriever_t2760707818 * L_4 = ((MemoryRetriever_t2760707818_StaticFields*)il2cpp_codegen_static_fields_for(MemoryRetriever_t2760707818_il2cpp_TypeInfo_var))->get_instance_4();
		GridController_t1732845400 * L_5 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_6 = __this->get_addr_0();
		MemoryCellControllerU5BU5D_t1776215942* L_7 = GridController_GetCells_m210042790(L_5, L_6, 1, /*hidden argument*/NULL);
		int32_t L_8 = 0;
		MemoryCellController_t341130527 * L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		RuntimeObject* L_10 = MemoryRetriever_NavToCell_m793505524(L_4, L_9, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_11 = MonoBehaviour_StartCoroutine_m3411253000(L_3, L_10, /*hidden argument*/NULL);
		__this->set_U24current_3(L_11);
		bool L_12 = __this->get_U24disposing_4();
		if (L_12)
		{
			goto IL_0083;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0083:
	{
		goto IL_0162;
	}

IL_0088:
	{
		GameController_t2330501625 * L_13 = __this->get_U24this_2();
		MemoryRetriever_t2760707818 * L_14 = ((MemoryRetriever_t2760707818_StaticFields*)il2cpp_codegen_static_fields_for(MemoryRetriever_t2760707818_il2cpp_TypeInfo_var))->get_instance_4();
		GridController_t1732845400 * L_15 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_16 = __this->get_addr_0();
		MemoryCellControllerU5BU5D_t1776215942* L_17 = GridController_GetCells_m210042790(L_15, L_16, 2, /*hidden argument*/NULL);
		RuntimeObject* L_18 = MemoryRetriever_ReadRegister_m1624939673(L_14, L_17, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_19 = MonoBehaviour_StartCoroutine_m3411253000(L_13, L_18, /*hidden argument*/NULL);
		__this->set_U24current_3(L_19);
		bool L_20 = __this->get_U24disposing_4();
		if (L_20)
		{
			goto IL_00c3;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_00c3:
	{
		goto IL_0162;
	}

IL_00c8:
	{
		GridController_t1732845400 * L_21 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_22 = __this->get_addr_0();
		int32_t L_23 = GridController_GetValue_m3171713634(L_21, L_22, 2, /*hidden argument*/NULL);
		__this->set_U3CaddressValueU3E__0_1(L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1289984270, /*hidden argument*/NULL);
		GameController_t2330501625 * L_24 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_25 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_26 = RegisterRetriever_NavToRegister_m3179150175(L_25, 3, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_27 = MonoBehaviour_StartCoroutine_m3411253000(L_24, L_26, /*hidden argument*/NULL);
		__this->set_U24current_3(L_27);
		bool L_28 = __this->get_U24disposing_4();
		if (L_28)
		{
			goto IL_0114;
		}
	}
	{
		__this->set_U24PC_5(3);
	}

IL_0114:
	{
		goto IL_0162;
	}

IL_0119:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1124711164, /*hidden argument*/NULL);
		GameController_t2330501625 * L_29 = __this->get_U24this_2();
		RegisterController_t92122650 * L_30 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_31 = __this->get_U3CaddressValueU3E__0_1();
		RuntimeObject* L_32 = RegisterController_SetRegisterValue_m2854146444(L_30, 3, L_31, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_33 = MonoBehaviour_StartCoroutine_m3411253000(L_29, L_32, /*hidden argument*/NULL);
		__this->set_U24current_3(L_33);
		bool L_34 = __this->get_U24disposing_4();
		if (L_34)
		{
			goto IL_0154;
		}
	}
	{
		__this->set_U24PC_5(4);
	}

IL_0154:
	{
		goto IL_0162;
	}

IL_0159:
	{
		__this->set_U24PC_5((-1));
	}

IL_0160:
	{
		return (bool)0;
	}

IL_0162:
	{
		return (bool)1;
	}
}
// System.Object GameController/<LoadB>c__IteratorD::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadBU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1338484094 (U3CLoadBU3Ec__IteratorD_t607250828 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object GameController/<LoadB>c__IteratorD::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadBU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1257038796 (U3CLoadBU3Ec__IteratorD_t607250828 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void GameController/<LoadB>c__IteratorD::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBU3Ec__IteratorD_Dispose_m873567081 (U3CLoadBU3Ec__IteratorD_t607250828 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void GameController/<LoadB>c__IteratorD::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBU3Ec__IteratorD_Reset_m108217375 (U3CLoadBU3Ec__IteratorD_t607250828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadBU3Ec__IteratorD_Reset_m108217375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadBU3Ec__IteratorD_Reset_m108217375_RuntimeMethod_var);
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
// System.Void GameController/<Mult>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CMultU3Ec__Iterator2__ctor_m3742223020 (U3CMultU3Ec__Iterator2_t1074165843 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<Mult>c__Iterator2::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CMultU3Ec__Iterator2_MoveNext_m2376528863 (U3CMultU3Ec__Iterator2_t1074165843 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMultU3Ec__Iterator2_MoveNext_m2376528863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_006f;
			}
			case 2:
			{
				goto IL_00a9;
			}
			case 3:
			{
				goto IL_00f4;
			}
			case 4:
			{
				goto IL_012e;
			}
			case 5:
			{
				goto IL_018c;
			}
			case 6:
			{
				goto IL_01cc;
			}
		}
	}
	{
		goto IL_01d3;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_2 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_3 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_4 = RegisterRetriever_NavToRegister_m3179150175(L_3, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(L_2, L_4, /*hidden argument*/NULL);
		__this->set_U24current_4(L_5);
		bool L_6 = __this->get_U24disposing_5();
		if (L_6)
		{
			goto IL_006a;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_006a:
	{
		goto IL_01d5;
	}

IL_006f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597547, /*hidden argument*/NULL);
		GameController_t2330501625 * L_7 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_8 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_9 = RegisterRetriever_ReadRegister_m94153405(L_8, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_10 = MonoBehaviour_StartCoroutine_m3411253000(L_7, L_9, /*hidden argument*/NULL);
		__this->set_U24current_4(L_10);
		bool L_11 = __this->get_U24disposing_5();
		if (L_11)
		{
			goto IL_00a4;
		}
	}
	{
		__this->set_U24PC_6(2);
	}

IL_00a4:
	{
		goto IL_01d5;
	}

IL_00a9:
	{
		RegisterController_t92122650 * L_12 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_13 = RegisterController_GetRegisterValue_m259583444(L_12, 2, /*hidden argument*/NULL);
		__this->set_U3CaU3E__0_0(L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1289984270, /*hidden argument*/NULL);
		GameController_t2330501625 * L_14 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_15 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_16 = RegisterRetriever_NavToRegister_m3179150175(L_15, 3, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_17 = MonoBehaviour_StartCoroutine_m3411253000(L_14, L_16, /*hidden argument*/NULL);
		__this->set_U24current_4(L_17);
		bool L_18 = __this->get_U24disposing_5();
		if (L_18)
		{
			goto IL_00ef;
		}
	}
	{
		__this->set_U24PC_6(3);
	}

IL_00ef:
	{
		goto IL_01d5;
	}

IL_00f4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597544, /*hidden argument*/NULL);
		GameController_t2330501625 * L_19 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_20 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_21 = RegisterRetriever_ReadRegister_m94153405(L_20, 3, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_22 = MonoBehaviour_StartCoroutine_m3411253000(L_19, L_21, /*hidden argument*/NULL);
		__this->set_U24current_4(L_22);
		bool L_23 = __this->get_U24disposing_5();
		if (L_23)
		{
			goto IL_0129;
		}
	}
	{
		__this->set_U24PC_6(4);
	}

IL_0129:
	{
		goto IL_01d5;
	}

IL_012e:
	{
		RegisterController_t92122650 * L_24 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_25 = RegisterController_GetRegisterValue_m259583444(L_24, 3, /*hidden argument*/NULL);
		__this->set_U3CbU3E__0_1(L_25);
		int32_t L_26 = __this->get_U3CaU3E__0_0();
		int32_t L_27 = __this->get_U3CbU3E__0_1();
		__this->set_U3CansU3E__0_2(((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)L_27)));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_28 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_29 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_30 = RegisterRetriever_NavToRegister_m3179150175(L_29, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_31 = MonoBehaviour_StartCoroutine_m3411253000(L_28, L_30, /*hidden argument*/NULL);
		__this->set_U24current_4(L_31);
		bool L_32 = __this->get_U24disposing_5();
		if (L_32)
		{
			goto IL_0187;
		}
	}
	{
		__this->set_U24PC_6(5);
	}

IL_0187:
	{
		goto IL_01d5;
	}

IL_018c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1124711163, /*hidden argument*/NULL);
		GameController_t2330501625 * L_33 = __this->get_U24this_3();
		RegisterController_t92122650 * L_34 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_35 = __this->get_U3CansU3E__0_2();
		RuntimeObject* L_36 = RegisterController_SetRegisterValue_m2854146444(L_34, 2, L_35, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_37 = MonoBehaviour_StartCoroutine_m3411253000(L_33, L_36, /*hidden argument*/NULL);
		__this->set_U24current_4(L_37);
		bool L_38 = __this->get_U24disposing_5();
		if (L_38)
		{
			goto IL_01c7;
		}
	}
	{
		__this->set_U24PC_6(6);
	}

IL_01c7:
	{
		goto IL_01d5;
	}

IL_01cc:
	{
		__this->set_U24PC_6((-1));
	}

IL_01d3:
	{
		return (bool)0;
	}

IL_01d5:
	{
		return (bool)1;
	}
}
// System.Object GameController/<Mult>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CMultU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2209272078 (U3CMultU3Ec__Iterator2_t1074165843 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object GameController/<Mult>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CMultU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m2414362880 (U3CMultU3Ec__Iterator2_t1074165843 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void GameController/<Mult>c__Iterator2::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CMultU3Ec__Iterator2_Dispose_m1435444211 (U3CMultU3Ec__Iterator2_t1074165843 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void GameController/<Mult>c__Iterator2::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CMultU3Ec__Iterator2_Reset_m1679822752 (U3CMultU3Ec__Iterator2_t1074165843 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMultU3Ec__Iterator2_Reset_m1679822752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CMultU3Ec__Iterator2_Reset_m1679822752_RuntimeMethod_var);
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
// System.Void GameController/<Mult_direct>c__Iterator9::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CMult_directU3Ec__Iterator9__ctor_m4217450488 (U3CMult_directU3Ec__Iterator9_t1002618766 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<Mult_direct>c__Iterator9::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CMult_directU3Ec__Iterator9_MoveNext_m1479657131 (U3CMult_directU3Ec__Iterator9_t1002618766 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMult_directU3Ec__Iterator9_MoveNext_m1479657131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0067;
			}
			case 2:
			{
				goto IL_00a1;
			}
			case 3:
			{
				goto IL_00ff;
			}
			case 4:
			{
				goto IL_013f;
			}
		}
	}
	{
		goto IL_0146;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_2 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_3 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_4 = RegisterRetriever_NavToRegister_m3179150175(L_3, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(L_2, L_4, /*hidden argument*/NULL);
		__this->set_U24current_4(L_5);
		bool L_6 = __this->get_U24disposing_5();
		if (L_6)
		{
			goto IL_0062;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_0062:
	{
		goto IL_0148;
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597547, /*hidden argument*/NULL);
		GameController_t2330501625 * L_7 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_8 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_9 = RegisterRetriever_ReadRegister_m94153405(L_8, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_10 = MonoBehaviour_StartCoroutine_m3411253000(L_7, L_9, /*hidden argument*/NULL);
		__this->set_U24current_4(L_10);
		bool L_11 = __this->get_U24disposing_5();
		if (L_11)
		{
			goto IL_009c;
		}
	}
	{
		__this->set_U24PC_6(2);
	}

IL_009c:
	{
		goto IL_0148;
	}

IL_00a1:
	{
		RegisterController_t92122650 * L_12 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_13 = RegisterController_GetRegisterValue_m259583444(L_12, 2, /*hidden argument*/NULL);
		__this->set_U3CaU3E__0_0(L_13);
		int32_t L_14 = __this->get_U3CaU3E__0_0();
		int32_t L_15 = __this->get_value_1();
		__this->set_U3CansU3E__0_2(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15)));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_16 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_17 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_18 = RegisterRetriever_NavToRegister_m3179150175(L_17, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_19 = MonoBehaviour_StartCoroutine_m3411253000(L_16, L_18, /*hidden argument*/NULL);
		__this->set_U24current_4(L_19);
		bool L_20 = __this->get_U24disposing_5();
		if (L_20)
		{
			goto IL_00fa;
		}
	}
	{
		__this->set_U24PC_6(3);
	}

IL_00fa:
	{
		goto IL_0148;
	}

IL_00ff:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1124711163, /*hidden argument*/NULL);
		GameController_t2330501625 * L_21 = __this->get_U24this_3();
		RegisterController_t92122650 * L_22 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_23 = __this->get_U3CansU3E__0_2();
		RuntimeObject* L_24 = RegisterController_SetRegisterValue_m2854146444(L_22, 2, L_23, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_25 = MonoBehaviour_StartCoroutine_m3411253000(L_21, L_24, /*hidden argument*/NULL);
		__this->set_U24current_4(L_25);
		bool L_26 = __this->get_U24disposing_5();
		if (L_26)
		{
			goto IL_013a;
		}
	}
	{
		__this->set_U24PC_6(4);
	}

IL_013a:
	{
		goto IL_0148;
	}

IL_013f:
	{
		__this->set_U24PC_6((-1));
	}

IL_0146:
	{
		return (bool)0;
	}

IL_0148:
	{
		return (bool)1;
	}
}
// System.Object GameController/<Mult_direct>c__Iterator9::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CMult_directU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1261288566 (U3CMult_directU3Ec__Iterator9_t1002618766 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object GameController/<Mult_direct>c__Iterator9::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CMult_directU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m3963510625 (U3CMult_directU3Ec__Iterator9_t1002618766 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void GameController/<Mult_direct>c__Iterator9::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CMult_directU3Ec__Iterator9_Dispose_m1343266271 (U3CMult_directU3Ec__Iterator9_t1002618766 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void GameController/<Mult_direct>c__Iterator9::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CMult_directU3Ec__Iterator9_Reset_m471595003 (U3CMult_directU3Ec__Iterator9_t1002618766 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMult_directU3Ec__Iterator9_Reset_m471595003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CMult_directU3Ec__Iterator9_Reset_m471595003_RuntimeMethod_var);
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
// System.Void GameController/<Noop>c__Iterator6::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CNoopU3Ec__Iterator6__ctor_m1181195169 (U3CNoopU3Ec__Iterator6_t1304308506 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<Noop>c__Iterator6::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CNoopU3Ec__Iterator6_MoveNext_m2743264609 (U3CNoopU3Ec__Iterator6_t1304308506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNoopU3Ec__Iterator6_MoveNext_m2743264609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_2();
		V_0 = L_0;
		__this->set_U24PC_2((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0054;
			}
		}
	}
	{
		goto IL_005b;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3092710865, /*hidden argument*/NULL);
		GameController_t2330501625 * L_2 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_3 = L_2->get_moveSpeed_5();
		WaitForSeconds_t1699091251 * L_4 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U24current_0(L_4);
		bool L_5 = __this->get_U24disposing_1();
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		__this->set_U24PC_2(1);
	}

IL_004f:
	{
		goto IL_005d;
	}

IL_0054:
	{
		__this->set_U24PC_2((-1));
	}

IL_005b:
	{
		return (bool)0;
	}

IL_005d:
	{
		return (bool)1;
	}
}
// System.Object GameController/<Noop>c__Iterator6::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CNoopU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4017900360 (U3CNoopU3Ec__Iterator6_t1304308506 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Object GameController/<Noop>c__Iterator6::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CNoopU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1478487689 (U3CNoopU3Ec__Iterator6_t1304308506 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Void GameController/<Noop>c__Iterator6::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CNoopU3Ec__Iterator6_Dispose_m4152251020 (U3CNoopU3Ec__Iterator6_t1304308506 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_1((bool)1);
		__this->set_U24PC_2((-1));
		return;
	}
}
// System.Void GameController/<Noop>c__Iterator6::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CNoopU3Ec__Iterator6_Reset_m3824159933 (U3CNoopU3Ec__Iterator6_t1304308506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNoopU3Ec__Iterator6_Reset_m3824159933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CNoopU3Ec__Iterator6_Reset_m3824159933_RuntimeMethod_var);
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
// System.Void GameController/<RunSingleCommand>c__IteratorF::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CRunSingleCommandU3Ec__IteratorF__ctor_m2145467515 (U3CRunSingleCommandU3Ec__IteratorF_t1661767859 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<RunSingleCommand>c__IteratorF::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CRunSingleCommandU3Ec__IteratorF_MoveNext_m1356536275 (U3CRunSingleCommandU3Ec__IteratorF_t1661767859 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunSingleCommandU3Ec__IteratorF_MoveNext_m1356536275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_8();
		V_0 = L_0;
		__this->set_U24PC_8((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_00c4;
			}
			case 2:
			{
				goto IL_00fe;
			}
			case 3:
			{
				goto IL_0154;
			}
			case 4:
			{
				goto IL_01a1;
			}
			case 5:
			{
				goto IL_01ed;
			}
			case 6:
			{
				goto IL_0237;
			}
			case 7:
			{
				goto IL_029b;
			}
			case 8:
			{
				goto IL_02d5;
			}
			case 9:
			{
				goto IL_0316;
			}
			case 10:
			{
				goto IL_034a;
			}
			case 11:
			{
				goto IL_03f3;
			}
			case 12:
			{
				goto IL_0427;
			}
			case 13:
			{
				goto IL_0516;
			}
		}
	}
	{
		goto IL_051d;
	}

IL_0051:
	{
		HaltButtonController_t306459615 * L_2 = ((HaltButtonController_t306459615_StaticFields*)il2cpp_codegen_static_fields_for(HaltButtonController_t306459615_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		StartButtonController_t3651918395 * L_4 = ((StartButtonController_t3651918395_StaticFields*)il2cpp_codegen_static_fields_for(StartButtonController_t3651918395_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		RandomButtonController_t2952941430 * L_6 = ((RandomButtonController_t2952941430_StaticFields*)il2cpp_codegen_static_fields_for(RandomButtonController_t2952941430_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_7, (bool)0, /*hidden argument*/NULL);
		ClearButtonController_t1437245373 * L_8 = ((ClearButtonController_t1437245373_StaticFields*)il2cpp_codegen_static_fields_for(ClearButtonController_t1437245373_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_9, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3134474806, /*hidden argument*/NULL);
		GameController_t2330501625 * L_10 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_11 = L_10->get_moveSpeed_5();
		WaitForSeconds_t1699091251 * L_12 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_12, L_11, /*hidden argument*/NULL);
		__this->set_U24current_6(L_12);
		bool L_13 = __this->get_U24disposing_7();
		if (L_13)
		{
			goto IL_00bf;
		}
	}
	{
		__this->set_U24PC_8(1);
	}

IL_00bf:
	{
		goto IL_051f;
	}

IL_00c4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2343299646, /*hidden argument*/NULL);
		GameController_t2330501625 * L_14 = __this->get_U24this_5();
		RegisterRetriever_t3846945983 * L_15 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_16 = RegisterRetriever_NavToRegister_m3179150175(L_15, 1, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_17 = MonoBehaviour_StartCoroutine_m3411253000(L_14, L_16, /*hidden argument*/NULL);
		__this->set_U24current_6(L_17);
		bool L_18 = __this->get_U24disposing_7();
		if (L_18)
		{
			goto IL_00f9;
		}
	}
	{
		__this->set_U24PC_8(2);
	}

IL_00f9:
	{
		goto IL_051f;
	}

IL_00fe:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4054337690, /*hidden argument*/NULL);
		RegisterController_t92122650 * L_19 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_20 = RegisterController_GetRegisterValue_m259583444(L_19, 1, /*hidden argument*/NULL);
		__this->set_U3CpcU3E__0_0(L_20);
		GameController_t2330501625 * L_21 = __this->get_U24this_5();
		RegisterRetriever_t3846945983 * L_22 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_23 = __this->get_U3CpcU3E__0_0();
		RuntimeObject* L_24 = RegisterRetriever_WriteRegister_m967670532(L_22, 1, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)3))%(int32_t)((int32_t)80))), /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_25 = MonoBehaviour_StartCoroutine_m3411253000(L_21, L_24, /*hidden argument*/NULL);
		__this->set_U24current_6(L_25);
		bool L_26 = __this->get_U24disposing_7();
		if (L_26)
		{
			goto IL_014f;
		}
	}
	{
		__this->set_U24PC_8(3);
	}

IL_014f:
	{
		goto IL_051f;
	}

IL_0154:
	{
		int32_t L_27 = __this->get_U3CpcU3E__0_0();
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_28);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2063834088, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3134474806, /*hidden argument*/NULL);
		GameController_t2330501625 * L_31 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_32 = L_31->get_moveSpeed_5();
		WaitForSeconds_t1699091251 * L_33 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_33, L_32, /*hidden argument*/NULL);
		__this->set_U24current_6(L_33);
		bool L_34 = __this->get_U24disposing_7();
		if (L_34)
		{
			goto IL_019c;
		}
	}
	{
		__this->set_U24PC_8(4);
	}

IL_019c:
	{
		goto IL_051f;
	}

IL_01a1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2357329106, /*hidden argument*/NULL);
		GameController_t2330501625 * L_35 = __this->get_U24this_5();
		MemoryRetriever_t2760707818 * L_36 = ((MemoryRetriever_t2760707818_StaticFields*)il2cpp_codegen_static_fields_for(MemoryRetriever_t2760707818_il2cpp_TypeInfo_var))->get_instance_4();
		GridController_t1732845400 * L_37 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_38 = __this->get_U3CpcU3E__0_0();
		MemoryCellControllerU5BU5D_t1776215942* L_39 = GridController_GetCells_m210042790(L_37, L_38, 1, /*hidden argument*/NULL);
		int32_t L_40 = 0;
		MemoryCellController_t341130527 * L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		RuntimeObject* L_42 = MemoryRetriever_NavToCell_m793505524(L_36, L_41, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_43 = MonoBehaviour_StartCoroutine_m3411253000(L_35, L_42, /*hidden argument*/NULL);
		__this->set_U24current_6(L_43);
		bool L_44 = __this->get_U24disposing_7();
		if (L_44)
		{
			goto IL_01e8;
		}
	}
	{
		__this->set_U24PC_8(5);
	}

IL_01e8:
	{
		goto IL_051f;
	}

IL_01ed:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2133207370, /*hidden argument*/NULL);
		GameController_t2330501625 * L_45 = __this->get_U24this_5();
		MemoryRetriever_t2760707818 * L_46 = ((MemoryRetriever_t2760707818_StaticFields*)il2cpp_codegen_static_fields_for(MemoryRetriever_t2760707818_il2cpp_TypeInfo_var))->get_instance_4();
		GridController_t1732845400 * L_47 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_48 = __this->get_U3CpcU3E__0_0();
		MemoryCellControllerU5BU5D_t1776215942* L_49 = GridController_GetCells_m210042790(L_47, L_48, 3, /*hidden argument*/NULL);
		RuntimeObject* L_50 = MemoryRetriever_ReadRegister_m1624939673(L_46, L_49, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_51 = MonoBehaviour_StartCoroutine_m3411253000(L_45, L_50, /*hidden argument*/NULL);
		__this->set_U24current_6(L_51);
		bool L_52 = __this->get_U24disposing_7();
		if (L_52)
		{
			goto IL_0232;
		}
	}
	{
		__this->set_U24PC_8(6);
	}

IL_0232:
	{
		goto IL_051f;
	}

IL_0237:
	{
		GridController_t1732845400 * L_53 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_54 = __this->get_U3CpcU3E__0_0();
		int32_t L_55 = GridController_GetValue_m3171713634(L_53, L_54, 3, /*hidden argument*/NULL);
		__this->set_U3CaddressValueU3E__0_1(L_55);
		int32_t L_56 = __this->get_U3CaddressValueU3E__0_1();
		int32_t L_57 = L_56;
		RuntimeObject * L_58 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_57);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1812610328, L_58, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3134474806, /*hidden argument*/NULL);
		GameController_t2330501625 * L_60 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_61 = L_60->get_moveSpeed_5();
		WaitForSeconds_t1699091251 * L_62 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_62, L_61, /*hidden argument*/NULL);
		__this->set_U24current_6(L_62);
		bool L_63 = __this->get_U24disposing_7();
		if (L_63)
		{
			goto IL_0296;
		}
	}
	{
		__this->set_U24PC_8(7);
	}

IL_0296:
	{
		goto IL_051f;
	}

IL_029b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3419968473, /*hidden argument*/NULL);
		GameController_t2330501625 * L_64 = __this->get_U24this_5();
		RegisterRetriever_t3846945983 * L_65 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_66 = RegisterRetriever_NavToRegister_m3179150175(L_65, 0, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_67 = MonoBehaviour_StartCoroutine_m3411253000(L_64, L_66, /*hidden argument*/NULL);
		__this->set_U24current_6(L_67);
		bool L_68 = __this->get_U24disposing_7();
		if (L_68)
		{
			goto IL_02d0;
		}
	}
	{
		__this->set_U24PC_8(8);
	}

IL_02d0:
	{
		goto IL_051f;
	}

IL_02d5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2601465642, /*hidden argument*/NULL);
		GameController_t2330501625 * L_69 = __this->get_U24this_5();
		RegisterController_t92122650 * L_70 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_71 = __this->get_U3CaddressValueU3E__0_1();
		RuntimeObject* L_72 = RegisterController_SetRegisterValue_m2854146444(L_70, 0, L_71, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_73 = MonoBehaviour_StartCoroutine_m3411253000(L_69, L_72, /*hidden argument*/NULL);
		__this->set_U24current_6(L_73);
		bool L_74 = __this->get_U24disposing_7();
		if (L_74)
		{
			goto IL_0311;
		}
	}
	{
		__this->set_U24PC_8(((int32_t)9));
	}

IL_0311:
	{
		goto IL_051f;
	}

IL_0316:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3134474806, /*hidden argument*/NULL);
		GameController_t2330501625 * L_75 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_76 = L_75->get_moveSpeed_5();
		WaitForSeconds_t1699091251 * L_77 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_77, L_76, /*hidden argument*/NULL);
		__this->set_U24current_6(L_77);
		bool L_78 = __this->get_U24disposing_7();
		if (L_78)
		{
			goto IL_0345;
		}
	}
	{
		__this->set_U24PC_8(((int32_t)10));
	}

IL_0345:
	{
		goto IL_051f;
	}

IL_034a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3232667666, /*hidden argument*/NULL);
		int32_t L_79 = __this->get_U3CaddressValueU3E__0_1();
		__this->set_U3CinstructionU3E__0_2(((int32_t)((int32_t)((int32_t)3840)&(int32_t)L_79)));
		int32_t L_80 = __this->get_U3CaddressValueU3E__0_1();
		__this->set_U3CargU3E__0_3(((int32_t)((int32_t)((int32_t)255)&(int32_t)L_80)));
		int32_t L_81 = __this->get_U3CinstructionU3E__0_2();
		int32_t L_82 = L_81;
		RuntimeObject * L_83 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_82);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_84 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral665123506, L_83, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		int32_t L_85 = __this->get_U3CargU3E__0_3();
		int32_t L_86 = L_85;
		RuntimeObject * L_87 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_86);
		String_t* L_88 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral4084492156, L_87, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
		GameController_t2330501625 * L_89 = __this->get_U24this_5();
		GameController_t2330501625 * L_90 = __this->get_U24this_5();
		Dictionary_2_t3269310253 * L_91 = L_90->get_instructionLookup_11();
		int32_t L_92 = __this->get_U3CinstructionU3E__0_2();
		Instruction_t85629626 * L_93 = Dictionary_2_get_Item_m3745926530(L_91, L_92, /*hidden argument*/Dictionary_2_get_Item_m3745926530_RuntimeMethod_var);
		int32_t L_94 = __this->get_U3CargU3E__0_3();
		RuntimeObject* L_95 = Instruction_Invoke_m4069483801(L_93, L_94, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_96 = MonoBehaviour_StartCoroutine_m3411253000(L_89, L_95, /*hidden argument*/NULL);
		__this->set_U24current_6(L_96);
		bool L_97 = __this->get_U24disposing_7();
		if (L_97)
		{
			goto IL_03ee;
		}
	}
	{
		__this->set_U24PC_8(((int32_t)11));
	}

IL_03ee:
	{
		goto IL_051f;
	}

IL_03f3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3134474806, /*hidden argument*/NULL);
		GameController_t2330501625 * L_98 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_99 = L_98->get_moveSpeed_5();
		WaitForSeconds_t1699091251 * L_100 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_100, L_99, /*hidden argument*/NULL);
		__this->set_U24current_6(L_100);
		bool L_101 = __this->get_U24disposing_7();
		if (L_101)
		{
			goto IL_0422;
		}
	}
	{
		__this->set_U24PC_8(((int32_t)12));
	}

IL_0422:
	{
		goto IL_051f;
	}

IL_0427:
	{
		__this->set_U3CHALTU3E__0_4(((int32_t)3840));
		GameController_t2330501625 * L_102 = __this->get_U24this_5();
		bool L_103 = L_102->get_haltFlag_7();
		if (L_103)
		{
			goto IL_0453;
		}
	}
	{
		int32_t L_104 = __this->get_U3CinstructionU3E__0_2();
		int32_t L_105 = __this->get_U3CHALTU3E__0_4();
		if ((!(((uint32_t)L_104) == ((uint32_t)L_105))))
		{
			goto IL_04e5;
		}
	}

IL_0453:
	{
		GameController_t2330501625 * L_106 = __this->get_U24this_5();
		L_106->set_haltFlag_7((bool)0);
		GameController_t2330501625 * L_107 = __this->get_U24this_5();
		L_107->set_isRunning_8((bool)0);
		HaltButtonController_t306459615 * L_108 = ((HaltButtonController_t306459615_StaticFields*)il2cpp_codegen_static_fields_for(HaltButtonController_t306459615_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_109 = Component_get_gameObject_m442555142(L_108, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_109, (bool)0, /*hidden argument*/NULL);
		JobController_t2362869387 * L_110 = ((JobController_t2362869387_StaticFields*)il2cpp_codegen_static_fields_for(JobController_t2362869387_il2cpp_TypeInfo_var))->get_instance_4();
		JobController_CheckColoredCellStatus_m3890777666(L_110, /*hidden argument*/NULL);
		GameController_t2330501625 * L_111 = __this->get_U24this_5();
		int32_t L_112 = L_111->get_startState_12();
		if ((!(((uint32_t)L_112) == ((uint32_t)2))))
		{
			goto IL_04a0;
		}
	}
	{
		JobController_t2362869387 * L_113 = ((JobController_t2362869387_StaticFields*)il2cpp_codegen_static_fields_for(JobController_t2362869387_il2cpp_TypeInfo_var))->get_instance_4();
		JobController_PlaceColors_m928630922(L_113, /*hidden argument*/NULL);
	}

IL_04a0:
	{
		StartButtonController_t3651918395 * L_114 = ((StartButtonController_t3651918395_StaticFields*)il2cpp_codegen_static_fields_for(StartButtonController_t3651918395_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_115 = Component_get_gameObject_m442555142(L_114, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_115, (bool)1, /*hidden argument*/NULL);
		GameController_t2330501625 * L_116 = __this->get_U24this_5();
		int32_t L_117 = L_116->get_startState_12();
		if (L_117)
		{
			goto IL_04e0;
		}
	}
	{
		RandomButtonController_t2952941430 * L_118 = ((RandomButtonController_t2952941430_StaticFields*)il2cpp_codegen_static_fields_for(RandomButtonController_t2952941430_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_119 = Component_get_gameObject_m442555142(L_118, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_119, (bool)1, /*hidden argument*/NULL);
		ClearButtonController_t1437245373 * L_120 = ((ClearButtonController_t1437245373_StaticFields*)il2cpp_codegen_static_fields_for(ClearButtonController_t1437245373_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_121 = Component_get_gameObject_m442555142(L_120, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_121, (bool)1, /*hidden argument*/NULL);
	}

IL_04e0:
	{
		goto IL_0516;
	}

IL_04e5:
	{
		GameController_t2330501625 * L_122 = __this->get_U24this_5();
		GameController_t2330501625 * L_123 = __this->get_U24this_5();
		RuntimeObject* L_124 = GameController_RunSingleCommand_m2188203666(L_123, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_125 = MonoBehaviour_StartCoroutine_m3411253000(L_122, L_124, /*hidden argument*/NULL);
		__this->set_U24current_6(L_125);
		bool L_126 = __this->get_U24disposing_7();
		if (L_126)
		{
			goto IL_0511;
		}
	}
	{
		__this->set_U24PC_8(((int32_t)13));
	}

IL_0511:
	{
		goto IL_051f;
	}

IL_0516:
	{
		__this->set_U24PC_8((-1));
	}

IL_051d:
	{
		return (bool)0;
	}

IL_051f:
	{
		return (bool)1;
	}
}
// System.Object GameController/<RunSingleCommand>c__IteratorF::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CRunSingleCommandU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6709772 (U3CRunSingleCommandU3Ec__IteratorF_t1661767859 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object GameController/<RunSingleCommand>c__IteratorF::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CRunSingleCommandU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m4264190585 (U3CRunSingleCommandU3Ec__IteratorF_t1661767859 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Void GameController/<RunSingleCommand>c__IteratorF::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CRunSingleCommandU3Ec__IteratorF_Dispose_m1473041254 (U3CRunSingleCommandU3Ec__IteratorF_t1661767859 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_7((bool)1);
		__this->set_U24PC_8((-1));
		return;
	}
}
// System.Void GameController/<RunSingleCommand>c__IteratorF::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CRunSingleCommandU3Ec__IteratorF_Reset_m4233164763 (U3CRunSingleCommandU3Ec__IteratorF_t1661767859 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunSingleCommandU3Ec__IteratorF_Reset_m4233164763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CRunSingleCommandU3Ec__IteratorF_Reset_m4233164763_RuntimeMethod_var);
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
// System.Void GameController/<StoreA>c__IteratorB::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStoreAU3Ec__IteratorB__ctor_m3461366879 (U3CStoreAU3Ec__IteratorB_t2675201460 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<StoreA>c__IteratorB::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStoreAU3Ec__IteratorB_MoveNext_m2286935874 (U3CStoreAU3Ec__IteratorB_t2675201460 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStoreAU3Ec__IteratorB_MoveNext_m2286935874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_00b0;
			}
			case 3:
			{
				goto IL_010d;
			}
			case 4:
			{
				goto IL_015d;
			}
		}
	}
	{
		goto IL_0164;
	}

IL_002d:
	{
		int32_t L_2 = __this->get_addr_0();
		__this->set_addr_0(((int32_t)((int32_t)L_2%(int32_t)((int32_t)80))));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_3 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_4 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_5 = RegisterRetriever_NavToRegister_m3179150175(L_4, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_6 = MonoBehaviour_StartCoroutine_m3411253000(L_3, L_5, /*hidden argument*/NULL);
		__this->set_U24current_3(L_6);
		bool L_7 = __this->get_U24disposing_4();
		if (L_7)
		{
			goto IL_0071;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0071:
	{
		goto IL_0166;
	}

IL_0076:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597547, /*hidden argument*/NULL);
		GameController_t2330501625 * L_8 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_9 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_10 = RegisterRetriever_ReadRegister_m94153405(L_9, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_11 = MonoBehaviour_StartCoroutine_m3411253000(L_8, L_10, /*hidden argument*/NULL);
		__this->set_U24current_3(L_11);
		bool L_12 = __this->get_U24disposing_4();
		if (L_12)
		{
			goto IL_00ab;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_00ab:
	{
		goto IL_0166;
	}

IL_00b0:
	{
		RegisterController_t92122650 * L_13 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_14 = RegisterController_GetRegisterValue_m259583444(L_13, 2, /*hidden argument*/NULL);
		__this->set_U3CaU3E__0_1(L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2357329106, /*hidden argument*/NULL);
		GameController_t2330501625 * L_15 = __this->get_U24this_2();
		MemoryRetriever_t2760707818 * L_16 = ((MemoryRetriever_t2760707818_StaticFields*)il2cpp_codegen_static_fields_for(MemoryRetriever_t2760707818_il2cpp_TypeInfo_var))->get_instance_4();
		GridController_t1732845400 * L_17 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_18 = __this->get_addr_0();
		MemoryCellControllerU5BU5D_t1776215942* L_19 = GridController_GetCells_m210042790(L_17, L_18, 1, /*hidden argument*/NULL);
		int32_t L_20 = 0;
		MemoryCellController_t341130527 * L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		RuntimeObject* L_22 = MemoryRetriever_NavToCell_m793505524(L_16, L_21, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_23 = MonoBehaviour_StartCoroutine_m3411253000(L_15, L_22, /*hidden argument*/NULL);
		__this->set_U24current_3(L_23);
		bool L_24 = __this->get_U24disposing_4();
		if (L_24)
		{
			goto IL_0108;
		}
	}
	{
		__this->set_U24PC_5(3);
	}

IL_0108:
	{
		goto IL_0166;
	}

IL_010d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral628489988, /*hidden argument*/NULL);
		GameController_t2330501625 * L_25 = __this->get_U24this_2();
		MemoryRetriever_t2760707818 * L_26 = ((MemoryRetriever_t2760707818_StaticFields*)il2cpp_codegen_static_fields_for(MemoryRetriever_t2760707818_il2cpp_TypeInfo_var))->get_instance_4();
		GridController_t1732845400 * L_27 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_28 = __this->get_addr_0();
		MemoryCellControllerU5BU5D_t1776215942* L_29 = GridController_GetCells_m210042790(L_27, L_28, 2, /*hidden argument*/NULL);
		int32_t L_30 = __this->get_U3CaU3E__0_1();
		RuntimeObject* L_31 = MemoryRetriever_WriteRegister_m363603130(L_26, L_29, L_30, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_32 = MonoBehaviour_StartCoroutine_m3411253000(L_25, L_31, /*hidden argument*/NULL);
		__this->set_U24current_3(L_32);
		bool L_33 = __this->get_U24disposing_4();
		if (L_33)
		{
			goto IL_0158;
		}
	}
	{
		__this->set_U24PC_5(4);
	}

IL_0158:
	{
		goto IL_0166;
	}

IL_015d:
	{
		__this->set_U24PC_5((-1));
	}

IL_0164:
	{
		return (bool)0;
	}

IL_0166:
	{
		return (bool)1;
	}
}
// System.Object GameController/<StoreA>c__IteratorB::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStoreAU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1759321113 (U3CStoreAU3Ec__IteratorB_t2675201460 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object GameController/<StoreA>c__IteratorB::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStoreAU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m3178213897 (U3CStoreAU3Ec__IteratorB_t2675201460 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void GameController/<StoreA>c__IteratorB::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStoreAU3Ec__IteratorB_Dispose_m3305288009 (U3CStoreAU3Ec__IteratorB_t2675201460 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void GameController/<StoreA>c__IteratorB::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStoreAU3Ec__IteratorB_Reset_m671374887 (U3CStoreAU3Ec__IteratorB_t2675201460 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStoreAU3Ec__IteratorB_Reset_m671374887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStoreAU3Ec__IteratorB_Reset_m671374887_RuntimeMethod_var);
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
// System.Void GameController/<Sub>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSubU3Ec__Iterator1__ctor_m3664539713 (U3CSubU3Ec__Iterator1_t3982968060 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<Sub>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CSubU3Ec__Iterator1_MoveNext_m796892529 (U3CSubU3Ec__Iterator1_t3982968060 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSubU3Ec__Iterator1_MoveNext_m796892529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_006f;
			}
			case 2:
			{
				goto IL_00a9;
			}
			case 3:
			{
				goto IL_00f4;
			}
			case 4:
			{
				goto IL_012e;
			}
			case 5:
			{
				goto IL_018c;
			}
			case 6:
			{
				goto IL_01cc;
			}
		}
	}
	{
		goto IL_01d3;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_2 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_3 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_4 = RegisterRetriever_NavToRegister_m3179150175(L_3, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(L_2, L_4, /*hidden argument*/NULL);
		__this->set_U24current_4(L_5);
		bool L_6 = __this->get_U24disposing_5();
		if (L_6)
		{
			goto IL_006a;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_006a:
	{
		goto IL_01d5;
	}

IL_006f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597547, /*hidden argument*/NULL);
		GameController_t2330501625 * L_7 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_8 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_9 = RegisterRetriever_ReadRegister_m94153405(L_8, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_10 = MonoBehaviour_StartCoroutine_m3411253000(L_7, L_9, /*hidden argument*/NULL);
		__this->set_U24current_4(L_10);
		bool L_11 = __this->get_U24disposing_5();
		if (L_11)
		{
			goto IL_00a4;
		}
	}
	{
		__this->set_U24PC_6(2);
	}

IL_00a4:
	{
		goto IL_01d5;
	}

IL_00a9:
	{
		RegisterController_t92122650 * L_12 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_13 = RegisterController_GetRegisterValue_m259583444(L_12, 2, /*hidden argument*/NULL);
		__this->set_U3CaU3E__0_0(L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1289984270, /*hidden argument*/NULL);
		GameController_t2330501625 * L_14 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_15 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_16 = RegisterRetriever_NavToRegister_m3179150175(L_15, 3, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_17 = MonoBehaviour_StartCoroutine_m3411253000(L_14, L_16, /*hidden argument*/NULL);
		__this->set_U24current_4(L_17);
		bool L_18 = __this->get_U24disposing_5();
		if (L_18)
		{
			goto IL_00ef;
		}
	}
	{
		__this->set_U24PC_6(3);
	}

IL_00ef:
	{
		goto IL_01d5;
	}

IL_00f4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597544, /*hidden argument*/NULL);
		GameController_t2330501625 * L_19 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_20 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_21 = RegisterRetriever_ReadRegister_m94153405(L_20, 3, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_22 = MonoBehaviour_StartCoroutine_m3411253000(L_19, L_21, /*hidden argument*/NULL);
		__this->set_U24current_4(L_22);
		bool L_23 = __this->get_U24disposing_5();
		if (L_23)
		{
			goto IL_0129;
		}
	}
	{
		__this->set_U24PC_6(4);
	}

IL_0129:
	{
		goto IL_01d5;
	}

IL_012e:
	{
		RegisterController_t92122650 * L_24 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_25 = RegisterController_GetRegisterValue_m259583444(L_24, 3, /*hidden argument*/NULL);
		__this->set_U3CbU3E__0_1(L_25);
		int32_t L_26 = __this->get_U3CaU3E__0_0();
		int32_t L_27 = __this->get_U3CbU3E__0_1();
		__this->set_U3CansU3E__0_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_27)));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_28 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_29 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_30 = RegisterRetriever_NavToRegister_m3179150175(L_29, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_31 = MonoBehaviour_StartCoroutine_m3411253000(L_28, L_30, /*hidden argument*/NULL);
		__this->set_U24current_4(L_31);
		bool L_32 = __this->get_U24disposing_5();
		if (L_32)
		{
			goto IL_0187;
		}
	}
	{
		__this->set_U24PC_6(5);
	}

IL_0187:
	{
		goto IL_01d5;
	}

IL_018c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1124711163, /*hidden argument*/NULL);
		GameController_t2330501625 * L_33 = __this->get_U24this_3();
		RegisterController_t92122650 * L_34 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_35 = __this->get_U3CansU3E__0_2();
		RuntimeObject* L_36 = RegisterController_SetRegisterValue_m2854146444(L_34, 2, L_35, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_37 = MonoBehaviour_StartCoroutine_m3411253000(L_33, L_36, /*hidden argument*/NULL);
		__this->set_U24current_4(L_37);
		bool L_38 = __this->get_U24disposing_5();
		if (L_38)
		{
			goto IL_01c7;
		}
	}
	{
		__this->set_U24PC_6(6);
	}

IL_01c7:
	{
		goto IL_01d5;
	}

IL_01cc:
	{
		__this->set_U24PC_6((-1));
	}

IL_01d3:
	{
		return (bool)0;
	}

IL_01d5:
	{
		return (bool)1;
	}
}
// System.Object GameController/<Sub>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSubU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m595742270 (U3CSubU3Ec__Iterator1_t3982968060 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object GameController/<Sub>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSubU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m2121280611 (U3CSubU3Ec__Iterator1_t3982968060 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void GameController/<Sub>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CSubU3Ec__Iterator1_Dispose_m3036016466 (U3CSubU3Ec__Iterator1_t3982968060 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void GameController/<Sub>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CSubU3Ec__Iterator1_Reset_m510293744 (U3CSubU3Ec__Iterator1_t3982968060 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSubU3Ec__Iterator1_Reset_m510293744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSubU3Ec__Iterator1_Reset_m510293744_RuntimeMethod_var);
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
// System.Void GameController/<Sub_direct>c__Iterator8::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSub_directU3Ec__Iterator8__ctor_m782922007 (U3CSub_directU3Ec__Iterator8_t3735332119 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController/<Sub_direct>c__Iterator8::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CSub_directU3Ec__Iterator8_MoveNext_m2296366602 (U3CSub_directU3Ec__Iterator8_t3735332119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSub_directU3Ec__Iterator8_MoveNext_m2296366602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0067;
			}
			case 2:
			{
				goto IL_00a1;
			}
			case 3:
			{
				goto IL_00ff;
			}
			case 4:
			{
				goto IL_013f;
			}
		}
	}
	{
		goto IL_0146;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_2 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_3 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_4 = RegisterRetriever_NavToRegister_m3179150175(L_3, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(L_2, L_4, /*hidden argument*/NULL);
		__this->set_U24current_4(L_5);
		bool L_6 = __this->get_U24disposing_5();
		if (L_6)
		{
			goto IL_0062;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_0062:
	{
		goto IL_0148;
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4058597547, /*hidden argument*/NULL);
		GameController_t2330501625 * L_7 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_8 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_9 = RegisterRetriever_ReadRegister_m94153405(L_8, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_10 = MonoBehaviour_StartCoroutine_m3411253000(L_7, L_9, /*hidden argument*/NULL);
		__this->set_U24current_4(L_10);
		bool L_11 = __this->get_U24disposing_5();
		if (L_11)
		{
			goto IL_009c;
		}
	}
	{
		__this->set_U24PC_6(2);
	}

IL_009c:
	{
		goto IL_0148;
	}

IL_00a1:
	{
		RegisterController_t92122650 * L_12 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_13 = RegisterController_GetRegisterValue_m259583444(L_12, 2, /*hidden argument*/NULL);
		__this->set_U3CaU3E__0_0(L_13);
		int32_t L_14 = __this->get_U3CaU3E__0_0();
		int32_t L_15 = __this->get_value_1();
		__this->set_U3CansU3E__0_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4010973454, /*hidden argument*/NULL);
		GameController_t2330501625 * L_16 = __this->get_U24this_3();
		RegisterRetriever_t3846945983 * L_17 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_18 = RegisterRetriever_NavToRegister_m3179150175(L_17, 2, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_19 = MonoBehaviour_StartCoroutine_m3411253000(L_16, L_18, /*hidden argument*/NULL);
		__this->set_U24current_4(L_19);
		bool L_20 = __this->get_U24disposing_5();
		if (L_20)
		{
			goto IL_00fa;
		}
	}
	{
		__this->set_U24PC_6(3);
	}

IL_00fa:
	{
		goto IL_0148;
	}

IL_00ff:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1124711163, /*hidden argument*/NULL);
		GameController_t2330501625 * L_21 = __this->get_U24this_3();
		RegisterController_t92122650 * L_22 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_23 = __this->get_U3CansU3E__0_2();
		RuntimeObject* L_24 = RegisterController_SetRegisterValue_m2854146444(L_22, 2, L_23, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_25 = MonoBehaviour_StartCoroutine_m3411253000(L_21, L_24, /*hidden argument*/NULL);
		__this->set_U24current_4(L_25);
		bool L_26 = __this->get_U24disposing_5();
		if (L_26)
		{
			goto IL_013a;
		}
	}
	{
		__this->set_U24PC_6(4);
	}

IL_013a:
	{
		goto IL_0148;
	}

IL_013f:
	{
		__this->set_U24PC_6((-1));
	}

IL_0146:
	{
		return (bool)0;
	}

IL_0148:
	{
		return (bool)1;
	}
}
// System.Object GameController/<Sub_direct>c__Iterator8::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSub_directU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m557283746 (U3CSub_directU3Ec__Iterator8_t3735332119 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object GameController/<Sub_direct>c__Iterator8::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSub_directU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m2756901277 (U3CSub_directU3Ec__Iterator8_t3735332119 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void GameController/<Sub_direct>c__Iterator8::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CSub_directU3Ec__Iterator8_Dispose_m831650438 (U3CSub_directU3Ec__Iterator8_t3735332119 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void GameController/<Sub_direct>c__Iterator8::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CSub_directU3Ec__Iterator8_Reset_m2923706211 (U3CSub_directU3Ec__Iterator8_t3735332119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSub_directU3Ec__Iterator8_Reset_m2923706211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSub_directU3Ec__Iterator8_Reset_m2923706211_RuntimeMethod_var);
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
// System.Void GameController/Instruction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Instruction__ctor_m3666721541 (Instruction_t85629626 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Collections.IEnumerator GameController/Instruction::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Instruction_Invoke_m4069483801 (Instruction_t85629626 * __this, int32_t ___arg0, const RuntimeMethod* method)
{
	RuntimeObject* result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		Instruction_Invoke_m4069483801((Instruction_t85629626 *)__this->get_prev_9(), ___arg0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___arg0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(targetMethod, targetThis, ___arg0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(targetMethod, targetThis, ___arg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg0);
					else
						result = VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg0);
				}
			}
			else
			{
				typedef RuntimeObject* (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult GameController/Instruction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Instruction_BeginInvoke_m1856297584 (Instruction_t85629626 * __this, int32_t ___arg0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Instruction_BeginInvoke_m1856297584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___arg0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Collections.IEnumerator GameController/Instruction::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Instruction_EndInvoke_m2195274108 (Instruction_t85629626 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GridController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GridController__ctor_m3326306249 (GridController_t1732845400 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GridController::Awake()
extern "C" IL2CPP_METHOD_ATTR void GridController_Awake_m369855814 (GridController_t1732845400 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridController_Awake_m369855814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->set_instance_4(__this);
		return;
	}
}
// System.Void GridController::Start()
extern "C" IL2CPP_METHOD_ATTR void GridController_Start_m1311215461 (GridController_t1732845400 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridController_Start_m1311215461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_t3328599146* V_0 = NULL;
	int32_t V_1 = 0;
	GameObjectU5BU5D_t3328599146* G_B2_0 = NULL;
	GameObjectU5BU5D_t3328599146* G_B1_0 = NULL;
	{
		((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->set_instance_4(__this);
		GameObjectU5BU5D_t3328599146* L_0 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral355311145, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObjectU5BU5D_t3328599146* L_1 = V_0;
		Comparison_1_t888567798 * L_2 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_002a;
		}
	}
	{
		intptr_t L_3 = (intptr_t)GridController_U3CStartU3Em__0_m2654551278_RuntimeMethod_var;
		Comparison_1_t888567798 * L_4 = (Comparison_1_t888567798 *)il2cpp_codegen_object_new(Comparison_1_t888567798_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m1173778154(L_4, NULL, (intptr_t)L_3, /*hidden argument*/Comparison_1__ctor_m1173778154_RuntimeMethod_var);
		((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_6(L_4);
		G_B2_0 = G_B1_0;
	}

IL_002a:
	{
		Comparison_1_t888567798 * L_5 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		Array_Sort_TisGameObject_t1113636619_m169164030(NULL /*static, unused*/, G_B2_0, L_5, /*hidden argument*/Array_Sort_TisGameObject_t1113636619_m169164030_RuntimeMethod_var);
		MemoryCellControllerU5BU5D_t1776215942* L_6 = (MemoryCellControllerU5BU5D_t1776215942*)SZArrayNew(MemoryCellControllerU5BU5D_t1776215942_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->set_grid_5(L_6);
		V_1 = 0;
		goto IL_005c;
	}

IL_0048:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_7 = __this->get_grid_5();
		int32_t L_8 = V_1;
		GameObjectU5BU5D_t3328599146* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		GameObject_t1113636619 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		MemoryCellController_t341130527 * L_13 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_12, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		ArrayElementTypeCheck (L_7, L_13);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (MemoryCellController_t341130527 *)L_13);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_005c:
	{
		int32_t L_15 = V_1;
		GameObjectU5BU5D_t3328599146* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}
}
// MemoryCellController[] GridController::GetCells(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR MemoryCellControllerU5BU5D_t1776215942* GridController_GetCells_m210042790 (GridController_t1732845400 * __this, int32_t ___address0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridController_GetCells_m210042790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryCellControllerU5BU5D_t1776215942* V_0 = NULL;
	MemoryCellController_t341130527 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___number1;
		MemoryCellControllerU5BU5D_t1776215942* L_1 = (MemoryCellControllerU5BU5D_t1776215942*)SZArrayNew(MemoryCellControllerU5BU5D_t1776215942_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		MemoryCellControllerU5BU5D_t1776215942* L_2 = __this->get_grid_5();
		int32_t L_3 = ___address0;
		int32_t L_4 = L_3;
		MemoryCellController_t341130527 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_2 = 0;
		goto IL_002b;
	}

IL_0017:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_6 = V_0;
		int32_t L_7 = V_2;
		MemoryCellController_t341130527 * L_8 = V_1;
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (MemoryCellController_t341130527 *)L_8);
		MemoryCellController_t341130527 * L_9 = V_1;
		GameObject_t1113636619 * L_10 = L_9->get_right_5();
		MemoryCellController_t341130527 * L_11 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_10, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		V_1 = L_11;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___number1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0017;
		}
	}
	{
		MemoryCellControllerU5BU5D_t1776215942* L_15 = V_0;
		return L_15;
	}
}
// System.Int32 GridController::GetValue(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t GridController_GetValue_m3171713634 (GridController_t1732845400 * __this, int32_t ___address0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridController_GetValue_m3171713634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	MemoryCellController_t341130527 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___number1;
		Int32U5BU5D_t385246372* L_1 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		MemoryCellControllerU5BU5D_t1776215942* L_2 = __this->get_grid_5();
		int32_t L_3 = ___address0;
		int32_t L_4 = L_3;
		MemoryCellController_t341130527 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_2 = 0;
		goto IL_0030;
	}

IL_0017:
	{
		Int32U5BU5D_t385246372* L_6 = V_0;
		int32_t L_7 = V_2;
		MemoryCellController_t341130527 * L_8 = V_1;
		int32_t L_9 = MemoryCellController_GetValue_m1999499772(L_8, /*hidden argument*/NULL);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_9);
		MemoryCellController_t341130527 * L_10 = V_1;
		GameObject_t1113636619 * L_11 = L_10->get_right_5();
		MemoryCellController_t341130527 * L_12 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_11, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		V_1 = L_12;
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = ___number1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0017;
		}
	}
	{
		V_3 = 0;
		int32_t L_16 = ___number1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_17 = powf((16.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1))))));
		V_4 = (((int32_t)((int32_t)L_17)));
		V_5 = 0;
		goto IL_0068;
	}

IL_0052:
	{
		int32_t L_18 = V_3;
		Int32U5BU5D_t385246372* L_19 = V_0;
		int32_t L_20 = V_5;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)L_23))));
		int32_t L_24 = V_4;
		V_4 = ((int32_t)((int32_t)L_24>>(int32_t)4));
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_26 = V_5;
		int32_t L_27 = ___number1;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_28 = V_3;
		return L_28;
	}
}
// System.Void GridController::Zeroize()
extern "C" IL2CPP_METHOD_ATTR void GridController_Zeroize_m2160003636 (GridController_t1732845400 * __this, const RuntimeMethod* method)
{
	MemoryCellController_t341130527 * V_0 = NULL;
	MemoryCellControllerU5BU5D_t1776215942* V_1 = NULL;
	int32_t V_2 = 0;
	{
		MemoryCellControllerU5BU5D_t1776215942* L_0 = __this->get_grid_5();
		V_1 = L_0;
		V_2 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		MemoryCellController_t341130527 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		MemoryCellController_t341130527 * L_5 = V_0;
		MemoryCellController_SetValue_m3908445948(L_5, 0, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_7 = V_2;
		MemoryCellControllerU5BU5D_t1776215942* L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// MemoryCellController[] GridController::GetGrid()
extern "C" IL2CPP_METHOD_ATTR MemoryCellControllerU5BU5D_t1776215942* GridController_GetGrid_m1085035811 (GridController_t1732845400 * __this, const RuntimeMethod* method)
{
	{
		MemoryCellControllerU5BU5D_t1776215942* L_0 = __this->get_grid_5();
		return L_0;
	}
}
// System.Void GridController::Update()
extern "C" IL2CPP_METHOD_ATTR void GridController_Update_m4033894849 (GridController_t1732845400 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 GridController::<Start>m__0(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR int32_t GridController_U3CStartU3Em__0_m2654551278 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___a0, GameObject_t1113636619 * ___b1, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		GameObject_t1113636619 * L_0 = ___a0;
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_1();
		GameObject_t1113636619 * L_4 = ___b1;
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_y_1();
		if ((!(((float)L_3) > ((float)L_7))))
		{
			goto IL_002d;
		}
	}
	{
		return (-1);
	}

IL_002d:
	{
		GameObject_t1113636619 * L_8 = ___a0;
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = (&V_2)->get_y_1();
		GameObject_t1113636619 * L_12 = ___b1;
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		float L_15 = (&V_3)->get_y_1();
		if ((!(((float)L_11) < ((float)L_15))))
		{
			goto IL_005a;
		}
	}
	{
		return 1;
	}

IL_005a:
	{
		GameObject_t1113636619 * L_16 = ___a0;
		Transform_t3600365921 * L_17 = GameObject_get_transform_m1369836730(L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Transform_get_position_m36019626(L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		float L_19 = (&V_4)->get_x_0();
		GameObject_t1113636619 * L_20 = ___b1;
		Transform_t3600365921 * L_21 = GameObject_get_transform_m1369836730(L_20, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = Transform_get_position_m36019626(L_21, /*hidden argument*/NULL);
		V_5 = L_22;
		float L_23 = (&V_5)->get_x_0();
		if ((!(((float)L_19) < ((float)L_23))))
		{
			goto IL_0089;
		}
	}
	{
		return (-1);
	}

IL_0089:
	{
		return 1;
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
// System.Void HaltButtonController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HaltButtonController__ctor_m440631635 (HaltButtonController_t306459615 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HaltButtonController::Start()
extern "C" IL2CPP_METHOD_ATTR void HaltButtonController_Start_m136301739 (HaltButtonController_t306459615 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HaltButtonController_Start_m136301739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((HaltButtonController_t306459615_StaticFields*)il2cpp_codegen_static_fields_for(HaltButtonController_t306459615_il2cpp_TypeInfo_var))->set_instance_4(__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		HaltButtonController_ShowPrice_m2029584194(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HaltButtonController::SetBackgroundActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HaltButtonController_SetBackgroundActive_m478962628 (HaltButtonController_t306459615 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_1 = __this->get_background_7();
		Color_t2555686324  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Color__ctor_m2943235014((&L_2), (1.0f), (1.0f), (1.0f), (0.5882353f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_1, L_2, /*hidden argument*/NULL);
		__this->set_hover_8((bool)1);
		goto IL_0061;
	}

IL_0036:
	{
		SpriteRenderer_t3235626157 * L_3 = __this->get_background_7();
		Color_t2555686324  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Color__ctor_m2943235014((&L_4), (1.0f), (1.0f), (1.0f), (0.196078435f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_3, L_4, /*hidden argument*/NULL);
		__this->set_hover_8((bool)0);
	}

IL_0061:
	{
		return;
	}
}
// System.Void HaltButtonController::ShowPrice(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HaltButtonController_ShowPrice_m2029584194 (HaltButtonController_t306459615 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		TextMesh_t1536577757 * L_0 = __this->get_price_5();
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		bool L_2 = ___value0;
		GameObject_SetActive_m796801857(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HaltButtonController::OnClick()
extern "C" IL2CPP_METHOD_ATTR void HaltButtonController_OnClick_m3408310238 (HaltButtonController_t306459615 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HaltButtonController_OnClick_m3408310238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_hover_8();
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		GameController_t2330501625 * L_1 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		bool L_2 = L_1->get_haltFlag_7();
		if (L_2)
		{
			goto IL_004d;
		}
	}
	{
		GameController_t2330501625 * L_3 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		L_3->set_haltFlag_7((bool)1);
		MyAudioController_t2840361766 * L_4 = ((MyAudioController_t2840361766_StaticFields*)il2cpp_codegen_static_fields_for(MyAudioController_t2840361766_il2cpp_TypeInfo_var))->get_instance_4();
		MyAudioController_PlayAudio_m852245086(L_4, 2, /*hidden argument*/NULL);
		MoneyController_t851075799 * L_5 = ((MoneyController_t851075799_StaticFields*)il2cpp_codegen_static_fields_for(MoneyController_t851075799_il2cpp_TypeInfo_var))->get_instance_4();
		MoneyController_HaltRequest_m2586438083(L_5, /*hidden argument*/NULL);
		HaltButtonController_SetBackgroundActive_m478962628(__this, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}
}
// System.Void HaltButtonController::Update()
extern "C" IL2CPP_METHOD_ATTR void HaltButtonController_Update_m3766421907 (HaltButtonController_t306459615 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void HelpController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HelpController__ctor_m3966850409 (HelpController_t2343372652 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HelpController::Start()
extern "C" IL2CPP_METHOD_ATTR void HelpController_Start_m2721595179 (HelpController_t2343372652 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelpController_Start_m2721595179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((HelpController_t2343372652_StaticFields*)il2cpp_codegen_static_fields_for(HelpController_t2343372652_il2cpp_TypeInfo_var))->set_instance_4(__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HelpController::Update()
extern "C" IL2CPP_METHOD_ATTR void HelpController_Update_m3415817457 (HelpController_t2343372652 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void HoverController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HoverController__ctor_m937858452 (HoverController_t423031069 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoverController::Start()
extern "C" IL2CPP_METHOD_ATTR void HoverController_Start_m150923030 (HoverController_t423031069 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoverController_Start_m150923030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((HoverController_t423031069_StaticFields*)il2cpp_codegen_static_fields_for(HoverController_t423031069_il2cpp_TypeInfo_var))->set_instance_4(__this);
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t1281789340* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral3452614544);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614544);
		StringU5BU5D_t1281789340* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteral3452614543);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral3452614542);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614541);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3452614541);
		StringU5BU5D_t1281789340* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral3452614540);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614540);
		StringU5BU5D_t1281789340* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral3452614539);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3452614539);
		StringU5BU5D_t1281789340* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral3452614538);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3452614538);
		StringU5BU5D_t1281789340* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614537);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3452614537);
		StringU5BU5D_t1281789340* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral3452614552);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3452614552);
		StringU5BU5D_t1281789340* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral3452614551);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3452614551);
		StringU5BU5D_t1281789340* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral3452614591);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral3452614591);
		StringU5BU5D_t1281789340* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614590);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral3452614590);
		StringU5BU5D_t1281789340* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteral3452614589);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral3452614589);
		StringU5BU5D_t1281789340* L_14 = L_13;
		ArrayElementTypeCheck (L_14, _stringLiteral3452614588);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3452614588);
		StringU5BU5D_t1281789340* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteral3452614587);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral3452614587);
		StringU5BU5D_t1281789340* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteral3452614586);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral3452614586);
		__this->set_hex_6(L_16);
		TextMesh_t1536577757 * L_17 = Component_GetComponent_TisTextMesh_t1536577757_m1070281259(__this, /*hidden argument*/Component_GetComponent_TisTextMesh_t1536577757_m1070281259_RuntimeMethod_var);
		__this->set_text_5(L_17);
		return;
	}
}
// System.Void HoverController::SetValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HoverController_SetValue_m2464880987 (HoverController_t423031069 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoverController_SetValue_m2464880987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = __this->get_hex_6();
		int32_t L_1 = ___value0;
		int32_t L_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)240)&(int32_t)L_1))>>(int32_t)4));
		String_t* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4 = String_ToUpper_m3324454496(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		StringU5BU5D_t1281789340* L_5 = __this->get_hex_6();
		int32_t L_6 = ___value0;
		int32_t L_7 = ((int32_t)((int32_t)((int32_t)15)&(int32_t)L_6));
		String_t* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		String_t* L_9 = String_ToUpper_m3324454496(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		TextMesh_t1536577757 * L_10 = __this->get_text_5();
		String_t* L_11 = V_0;
		String_t* L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral4177891647, L_11, L_12, /*hidden argument*/NULL);
		TextMesh_set_text_m446189179(L_10, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoverController::Update()
extern "C" IL2CPP_METHOD_ATTR void HoverController_Update_m3367553574 (HoverController_t423031069 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void InstructionPreview::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InstructionPreview__ctor_m2896975100 (InstructionPreview_t1842191950 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InstructionPreview::Start()
extern "C" IL2CPP_METHOD_ATTR void InstructionPreview_Start_m3049030252 (InstructionPreview_t1842191950 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstructionPreview_Start_m3049030252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryCellController_t341130527 * V_0 = NULL;
	MemoryCellControllerU5BU5D_t1776215942* V_1 = NULL;
	int32_t V_2 = 0;
	{
		TextMesh_t1536577757 * L_0 = Component_GetComponent_TisTextMesh_t1536577757_m1070281259(__this, /*hidden argument*/Component_GetComponent_TisTextMesh_t1536577757_m1070281259_RuntimeMethod_var);
		__this->set_text_5(L_0);
		MemoryCellControllerU5BU5D_t1776215942* L_1 = __this->get_cells_4();
		V_1 = L_1;
		V_2 = 0;
		goto IL_0029;
	}

IL_001a:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		MemoryCellController_t341130527 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		MemoryCellController_t341130527 * L_6 = V_0;
		MemoryCellController_AddListener_m3359123159(L_6, __this, /*hidden argument*/NULL);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		MemoryCellControllerU5BU5D_t1776215942* L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		Dictionary_2_t736164020 * L_10 = (Dictionary_2_t736164020 *)il2cpp_codegen_object_new(Dictionary_2_t736164020_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4247274435(L_10, /*hidden argument*/Dictionary_2__ctor_m4247274435_RuntimeMethod_var);
		__this->set_instcLookup_6(L_10);
		Dictionary_2_t736164020 * L_11 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_11, 0, _stringLiteral3265744085, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_12 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_12, 1, _stringLiteral2103927725, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_13 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_13, 2, _stringLiteral2731976705, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_14 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_14, 3, _stringLiteral2956502355, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_15 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_15, 4, _stringLiteral2553807652, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_16 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_16, 5, _stringLiteral2553086756, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_17 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_17, 6, _stringLiteral3092710865, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_18 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_18, 7, _stringLiteral3092710865, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_19 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_19, 8, _stringLiteral30821554, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_20 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_20, ((int32_t)9), _stringLiteral2430498717, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_21 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_21, ((int32_t)10), _stringLiteral2458464327, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_22 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_22, ((int32_t)11), _stringLiteral4244357453, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_23 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_23, ((int32_t)12), _stringLiteral681307922, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_24 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_24, ((int32_t)13), _stringLiteral3537415198, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_25 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_25, ((int32_t)14), _stringLiteral3537415201, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_26 = __this->get_instcLookup_6();
		Dictionary_2_Add_m2461861952(L_26, ((int32_t)15), _stringLiteral2731190278, /*hidden argument*/Dictionary_2_Add_m2461861952_RuntimeMethod_var);
		return;
	}
}
// System.Void InstructionPreview::OnChange()
extern "C" IL2CPP_METHOD_ATTR void InstructionPreview_OnChange_m491049653 (InstructionPreview_t1842191950 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstructionPreview_OnChange_m491049653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameController_t2330501625 * L_0 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		MemoryCellControllerU5BU5D_t1776215942* L_1 = __this->get_cells_4();
		int32_t L_2 = GameController_CellsToInteger_m1331874051(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		TextMesh_t1536577757 * L_3 = __this->get_text_5();
		Dictionary_2_t736164020 * L_4 = __this->get_instcLookup_6();
		int32_t L_5 = V_0;
		String_t* L_6 = Dictionary_2_get_Item_m98595422(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m98595422_RuntimeMethod_var);
		TextMesh_set_text_m446189179(L_3, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InstructionPreview::Update()
extern "C" IL2CPP_METHOD_ATTR void InstructionPreview_Update_m2004962504 (InstructionPreview_t1842191950 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void JobController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JobController__ctor_m2514373974 (JobController_t2362869387 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JobController::Start()
extern "C" IL2CPP_METHOD_ATTR void JobController_Start_m2736888868 (JobController_t2362869387 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_Start_m2736888868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ColorTypesU5BU5D_t438535719* V_1 = NULL;
	int32_t V_2 = 0;
	{
		((JobController_t2362869387_StaticFields*)il2cpp_codegen_static_fields_for(JobController_t2362869387_il2cpp_TypeInfo_var))->set_instance_4(__this);
		ColorTypesU5BU5D_t438535719* L_0 = (ColorTypesU5BU5D_t438535719*)SZArrayNew(ColorTypesU5BU5D_t438535719_il2cpp_TypeInfo_var, (uint32_t)6);
		ColorTypesU5BU5D_t438535719* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2DC4E70AB31EF6C8908F896CAD1C6BC75F7FA65E27_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		__this->set_colorTypesIter_15(L_1);
		Dictionary_2_t755207947 * L_3 = (Dictionary_2_t755207947 *)il2cpp_codegen_object_new(Dictionary_2_t755207947_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1971266820(L_3, /*hidden argument*/Dictionary_2__ctor_m1971266820_RuntimeMethod_var);
		__this->set_coloredCells_13(L_3);
		ColorTypesU5BU5D_t438535719* L_4 = __this->get_colorTypesIter_15();
		V_1 = L_4;
		V_2 = 0;
		goto IL_004f;
	}

IL_0036:
	{
		ColorTypesU5BU5D_t438535719* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		int32_t L_8 = (int32_t)(L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		Dictionary_2_t755207947 * L_9 = __this->get_coloredCells_13();
		int32_t L_10 = V_0;
		List_1_t1813205269 * L_11 = (List_1_t1813205269 *)il2cpp_codegen_object_new(List_1_t1813205269_il2cpp_TypeInfo_var);
		List_1__ctor_m1040324814(L_11, /*hidden argument*/List_1__ctor_m1040324814_RuntimeMethod_var);
		Dictionary_2_Add_m2407688608(L_9, L_10, L_11, /*hidden argument*/Dictionary_2_Add_m2407688608_RuntimeMethod_var);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = V_2;
		ColorTypesU5BU5D_t438535719* L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		Dictionary_2_t3577345097 * L_15 = (Dictionary_2_t3577345097 *)il2cpp_codegen_object_new(Dictionary_2_t3577345097_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1879769881(L_15, /*hidden argument*/Dictionary_2__ctor_m1879769881_RuntimeMethod_var);
		__this->set_materialLookup_14(L_15);
		Dictionary_2_t3577345097 * L_16 = __this->get_materialLookup_14();
		Material_t340375123 * L_17 = __this->get_orange_6();
		Dictionary_2_Add_m2473192422(L_16, 1, L_17, /*hidden argument*/Dictionary_2_Add_m2473192422_RuntimeMethod_var);
		Dictionary_2_t3577345097 * L_18 = __this->get_materialLookup_14();
		Material_t340375123 * L_19 = __this->get_purple_7();
		Dictionary_2_Add_m2473192422(L_18, 2, L_19, /*hidden argument*/Dictionary_2_Add_m2473192422_RuntimeMethod_var);
		Dictionary_2_t3577345097 * L_20 = __this->get_materialLookup_14();
		Material_t340375123 * L_21 = __this->get_pink_8();
		Dictionary_2_Add_m2473192422(L_20, 3, L_21, /*hidden argument*/Dictionary_2_Add_m2473192422_RuntimeMethod_var);
		Dictionary_2_t3577345097 * L_22 = __this->get_materialLookup_14();
		Material_t340375123 * L_23 = __this->get_yellow_9();
		Dictionary_2_Add_m2473192422(L_22, 4, L_23, /*hidden argument*/Dictionary_2_Add_m2473192422_RuntimeMethod_var);
		Dictionary_2_t3577345097 * L_24 = __this->get_materialLookup_14();
		Material_t340375123 * L_25 = __this->get_light_blue_10();
		Dictionary_2_Add_m2473192422(L_24, 5, L_25, /*hidden argument*/Dictionary_2_Add_m2473192422_RuntimeMethod_var);
		Dictionary_2_t3577345097 * L_26 = __this->get_materialLookup_14();
		Material_t340375123 * L_27 = __this->get_dark_blue_11();
		Dictionary_2_Add_m2473192422(L_26, 6, L_27, /*hidden argument*/Dictionary_2_Add_m2473192422_RuntimeMethod_var);
		return;
	}
}
// System.Void JobController::MakeColor(System.Int32,System.Int32,ColorTypes)
extern "C" IL2CPP_METHOD_ATTR void JobController_MakeColor_m1505895067 (JobController_t2362869387 * __this, int32_t ___row0, int32_t ___col1, int32_t ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_MakeColor_m1505895067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MemoryCellController_t341130527 * V_1 = NULL;
	{
		int32_t L_0 = ___row0;
		int32_t L_1 = ___col1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)8)), (int32_t)L_1));
		GridController_t1732845400 * L_2 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_3 = V_0;
		MemoryCellControllerU5BU5D_t1776215942* L_4 = GridController_GetCells_m210042790(L_2, L_3, 1, /*hidden argument*/NULL);
		int32_t L_5 = 0;
		MemoryCellController_t341130527 * L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		MemoryCellController_t341130527 * L_7 = V_1;
		int32_t L_8 = ___type2;
		JobController_MakeColor_m2005006609(__this, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JobController::MakeColor(MemoryCellController,ColorTypes)
extern "C" IL2CPP_METHOD_ATTR void JobController_MakeColor_m2005006609 (JobController_t2362869387 * __this, MemoryCellController_t341130527 * ___cell0, int32_t ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_MakeColor_m2005006609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t755207947 * L_0 = __this->get_coloredCells_13();
		int32_t L_1 = ___type1;
		List_1_t1813205269 * L_2 = Dictionary_2_get_Item_m1369846687(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m1369846687_RuntimeMethod_var);
		MemoryCellController_t341130527 * L_3 = ___cell0;
		List_1_Add_m2952656512(L_2, L_3, /*hidden argument*/List_1_Add_m2952656512_RuntimeMethod_var);
		MemoryCellController_t341130527 * L_4 = ___cell0;
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Transform_Find_m1729760951(L_5, _stringLiteral446682791, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_7 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(L_6, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		Dictionary_2_t3577345097 * L_8 = __this->get_materialLookup_14();
		int32_t L_9 = ___type1;
		Material_t340375123 * L_10 = Dictionary_2_get_Item_m2156887850(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m2156887850_RuntimeMethod_var);
		Renderer_set_material_m1157964140(L_7, L_10, /*hidden argument*/NULL);
		MemoryCellController_t341130527 * L_11 = ___cell0;
		L_11->set_isColored_6((bool)1);
		GameObject_t1113636619 * L_12 = __this->get_sparks_12();
		MemoryCellController_t341130527 * L_13 = ___cell0;
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = Transform_get_position_m36019626(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_16 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_12, L_15, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		return;
	}
}
// System.Void JobController::SetValuePreview(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JobController_SetValuePreview_m1220275342 (JobController_t2362869387 * __this, int32_t ___row0, int32_t ___col1, int32_t ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_SetValuePreview_m1220275342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MemoryCellController_t341130527 * V_1 = NULL;
	{
		int32_t L_0 = ___value2;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___value2;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)15))))
		{
			goto IL_001f;
		}
	}

IL_000f:
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_2, _stringLiteral3163887172, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, JobController_SetValuePreview_m1220275342_RuntimeMethod_var);
	}

IL_001f:
	{
		int32_t L_3 = ___row0;
		int32_t L_4 = ___col1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)8)), (int32_t)L_4));
		GridController_t1732845400 * L_5 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_6 = V_0;
		MemoryCellControllerU5BU5D_t1776215942* L_7 = GridController_GetCells_m210042790(L_5, L_6, 1, /*hidden argument*/NULL);
		int32_t L_8 = 0;
		MemoryCellController_t341130527 * L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		MemoryCellController_t341130527 * L_10 = V_1;
		int32_t L_11 = ___value2;
		JobController_SetValuePreview_m3527689404(__this, L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JobController::SetValuePreview(MemoryCellController,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JobController_SetValuePreview_m3527689404 (JobController_t2362869387 * __this, MemoryCellController_t341130527 * ___cell0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_SetValuePreview_m3527689404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___value1;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)15))))
		{
			goto IL_001f;
		}
	}

IL_000f:
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_2, _stringLiteral3163887172, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, JobController_SetValuePreview_m3527689404_RuntimeMethod_var);
	}

IL_001f:
	{
		MemoryCellController_t341130527 * L_3 = ___cell0;
		int32_t L_4 = ___value1;
		MemoryCellController_SetPreviewNumber_m1180977413(L_3, L_4, /*hidden argument*/NULL);
		MemoryCellController_t341130527 * L_5 = ___cell0;
		MemoryCellController_SetPreviewNumberActivation_m1905526410(L_5, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JobController::JobFails(ColorTypes)
extern "C" IL2CPP_METHOD_ATTR void JobController_JobFails_m4088475263 (JobController_t2362869387 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_JobFails_m4088475263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryCellController_t341130527 * V_0 = NULL;
	Enumerator_t3702449146  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t755207947 * L_0 = __this->get_coloredCells_13();
		int32_t L_1 = ___type0;
		List_1_t1813205269 * L_2 = Dictionary_2_get_Item_m1369846687(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m1369846687_RuntimeMethod_var);
		Enumerator_t3702449146  L_3 = List_1_GetEnumerator_m4293003108(L_2, /*hidden argument*/List_1_GetEnumerator_m4293003108_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0017:
		{
			MemoryCellController_t341130527 * L_4 = Enumerator_get_Current_m356741492((Enumerator_t3702449146 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m356741492_RuntimeMethod_var);
			V_0 = L_4;
			MemoryCellController_t341130527 * L_5 = V_0;
			MemoryCellController_SetValue_m3908445948(L_5, 0, /*hidden argument*/NULL);
			MemoryCellController_t341130527 * L_6 = V_0;
			MemoryCellController_Flash_m4241161679(L_6, _stringLiteral389518009, /*hidden argument*/NULL);
		}

IL_0031:
		{
			bool L_7 = Enumerator_MoveNext_m1078081596((Enumerator_t3702449146 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m1078081596_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0017;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m399582602((Enumerator_t3702449146 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m399582602_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		MoneyController_t851075799 * L_8 = ((MoneyController_t851075799_StaticFields*)il2cpp_codegen_static_fields_for(MoneyController_t851075799_il2cpp_TypeInfo_var))->get_instance_4();
		Dictionary_2_t755207947 * L_9 = __this->get_coloredCells_13();
		int32_t L_10 = ___type0;
		List_1_t1813205269 * L_11 = Dictionary_2_get_Item_m1369846687(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_m1369846687_RuntimeMethod_var);
		int32_t L_12 = List_1_get_Count_m1576969321(L_11, /*hidden argument*/List_1_get_Count_m1576969321_RuntimeMethod_var);
		MoneyController_OnChangeRequest_m784516296(L_8, 2, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JobController::JobSuccess(ColorTypes,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JobController_JobSuccess_m2853302862 (JobController_t2362869387 * __this, int32_t ___type0, int32_t ___multiplier1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_JobSuccess_m2853302862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryCellController_t341130527 * V_0 = NULL;
	Enumerator_t3702449146  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t755207947 * L_0 = __this->get_coloredCells_13();
		int32_t L_1 = ___type0;
		List_1_t1813205269 * L_2 = Dictionary_2_get_Item_m1369846687(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m1369846687_RuntimeMethod_var);
		Enumerator_t3702449146  L_3 = List_1_GetEnumerator_m4293003108(L_2, /*hidden argument*/List_1_GetEnumerator_m4293003108_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0058;
		}

IL_0017:
		{
			MemoryCellController_t341130527 * L_4 = Enumerator_get_Current_m356741492((Enumerator_t3702449146 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m356741492_RuntimeMethod_var);
			V_0 = L_4;
			MemoryCellController_t341130527 * L_5 = V_0;
			Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
			Transform_t3600365921 * L_7 = Transform_Find_m1729760951(L_6, _stringLiteral446682791, /*hidden argument*/NULL);
			SpriteRenderer_t3235626157 * L_8 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(L_7, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
			Material_t340375123 * L_9 = __this->get_normal_5();
			Renderer_set_material_m1157964140(L_8, L_9, /*hidden argument*/NULL);
			MemoryCellController_t341130527 * L_10 = V_0;
			MemoryCellController_SetPreviewNumberActivation_m1905526410(L_10, (bool)0, /*hidden argument*/NULL);
			MemoryCellController_t341130527 * L_11 = V_0;
			L_11->set_isColored_6((bool)0);
			MemoryCellController_t341130527 * L_12 = V_0;
			MemoryCellController_Flash_m4241161679(L_12, _stringLiteral4065542169, /*hidden argument*/NULL);
		}

IL_0058:
		{
			bool L_13 = Enumerator_MoveNext_m1078081596((Enumerator_t3702449146 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m1078081596_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0017;
			}
		}

IL_0064:
		{
			IL2CPP_LEAVE(0x77, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m399582602((Enumerator_t3702449146 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m399582602_RuntimeMethod_var);
		IL2CPP_END_FINALLY(105)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_JUMP_TBL(0x77, IL_0077)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0077:
	{
		MoneyController_t851075799 * L_14 = ((MoneyController_t851075799_StaticFields*)il2cpp_codegen_static_fields_for(MoneyController_t851075799_il2cpp_TypeInfo_var))->get_instance_4();
		Dictionary_2_t755207947 * L_15 = __this->get_coloredCells_13();
		int32_t L_16 = ___type0;
		List_1_t1813205269 * L_17 = Dictionary_2_get_Item_m1369846687(L_15, L_16, /*hidden argument*/Dictionary_2_get_Item_m1369846687_RuntimeMethod_var);
		int32_t L_18 = List_1_get_Count_m1576969321(L_17, /*hidden argument*/List_1_get_Count_m1576969321_RuntimeMethod_var);
		int32_t L_19 = ___multiplier1;
		MoneyController_OnChangeRequest_m784516296(L_14, 1, ((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)L_19)), /*hidden argument*/NULL);
		Dictionary_2_t755207947 * L_20 = __this->get_coloredCells_13();
		int32_t L_21 = ___type0;
		List_1_t1813205269 * L_22 = Dictionary_2_get_Item_m1369846687(L_20, L_21, /*hidden argument*/Dictionary_2_get_Item_m1369846687_RuntimeMethod_var);
		List_1_Clear_m1330880791(L_22, /*hidden argument*/List_1_Clear_m1330880791_RuntimeMethod_var);
		return;
	}
}
// System.Boolean JobController::All(MemoryCellController[],System.Int32,System.Int32,JobController/Condition)
extern "C" IL2CPP_METHOD_ATTR bool JobController_All_m484570251 (JobController_t2362869387 * __this, MemoryCellControllerU5BU5D_t1776215942* ___grid0, int32_t ___start1, int32_t ___end2, Condition_t2788105126 * ___condition3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___start1;
		V_0 = L_0;
		goto IL_001c;
	}

IL_0007:
	{
		Condition_t2788105126 * L_1 = ___condition3;
		MemoryCellControllerU5BU5D_t1776215942* L_2 = ___grid0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		MemoryCellController_t341130527 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6 = Condition_Invoke_m2954690072(L_1, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___end2;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)1;
	}
}
// MemoryCellController[] JobController::SubList(MemoryCellController[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR MemoryCellControllerU5BU5D_t1776215942* JobController_SubList_m3878992697 (JobController_t2362869387 * __this, MemoryCellControllerU5BU5D_t1776215942* ___grid0, int32_t ___start1, int32_t ___end2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_SubList_m3878992697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MemoryCellControllerU5BU5D_t1776215942* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		MemoryCellControllerU5BU5D_t1776215942* L_3 = (MemoryCellControllerU5BU5D_t1776215942*)SZArrayNew(MemoryCellControllerU5BU5D_t1776215942_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		V_2 = 0;
		goto IL_001e;
	}

IL_0012:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_4 = V_1;
		int32_t L_5 = V_2;
		MemoryCellControllerU5BU5D_t1776215942* L_6 = ___grid0;
		int32_t L_7 = ___start1;
		int32_t L_8 = V_2;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		MemoryCellController_t341130527 * L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		ArrayElementTypeCheck (L_4, L_10);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (MemoryCellController_t341130527 *)L_10);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0012;
		}
	}
	{
		MemoryCellControllerU5BU5D_t1776215942* L_14 = V_1;
		return L_14;
	}
}
// System.Collections.Generic.List`1<MemoryCellController[]> JobController::OrangeGetPossible()
extern "C" IL2CPP_METHOD_ATTR List_1_t3248290684 * JobController_OrangeGetPossible_m3473682360 (JobController_t2362869387 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_OrangeGetPossible_m3473682360_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryCellControllerU5BU5D_t1776215942* V_0 = NULL;
	List_1_t3248290684 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	MemoryCellControllerU5BU5D_t1776215942* G_B4_2 = NULL;
	JobController_t2362869387 * G_B4_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	MemoryCellControllerU5BU5D_t1776215942* G_B3_2 = NULL;
	JobController_t2362869387 * G_B3_3 = NULL;
	{
		GridController_t1732845400 * L_0 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		MemoryCellControllerU5BU5D_t1776215942* L_1 = GridController_GetGrid_m1085035811(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t3248290684 * L_2 = (List_1_t3248290684 *)il2cpp_codegen_object_new(List_1_t3248290684_il2cpp_TypeInfo_var);
		List_1__ctor_m295390(L_2, /*hidden argument*/List_1__ctor_m295390_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = ((int32_t)24);
		goto IL_0073;
	}

IL_0019:
	{
		V_3 = 2;
		goto IL_0068;
	}

IL_0020:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_3 = V_0;
		int32_t L_4 = V_2;
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		Condition_t2788105126 * L_7 = ((JobController_t2362869387_StaticFields*)il2cpp_codegen_static_fields_for(JobController_t2362869387_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_16();
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)), (int32_t)1));
		G_B3_1 = L_4;
		G_B3_2 = L_3;
		G_B3_3 = __this;
		if (L_7)
		{
			G_B4_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)), (int32_t)1));
			G_B4_1 = L_4;
			G_B4_2 = L_3;
			G_B4_3 = __this;
			goto IL_0040;
		}
	}
	{
		intptr_t L_8 = (intptr_t)JobController_U3COrangeGetPossibleU3Em__0_m1944873447_RuntimeMethod_var;
		Condition_t2788105126 * L_9 = (Condition_t2788105126 *)il2cpp_codegen_object_new(Condition_t2788105126_il2cpp_TypeInfo_var);
		Condition__ctor_m2344701788(L_9, NULL, (intptr_t)L_8, /*hidden argument*/NULL);
		((JobController_t2362869387_StaticFields*)il2cpp_codegen_static_fields_for(JobController_t2362869387_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_16(L_9);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0040:
	{
		Condition_t2788105126 * L_10 = ((JobController_t2362869387_StaticFields*)il2cpp_codegen_static_fields_for(JobController_t2362869387_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_16();
		bool L_11 = JobController_All_m484570251(G_B4_3, G_B4_2, G_B4_1, G_B4_0, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0064;
		}
	}
	{
		List_1_t3248290684 * L_13 = V_1;
		MemoryCellControllerU5BU5D_t1776215942* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t L_16 = V_2;
		int32_t L_17 = V_3;
		MemoryCellControllerU5BU5D_t1776215942* L_18 = JobController_SubList_m3878992697(__this, L_14, L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		List_1_Add_m2808974330(L_13, L_18, /*hidden argument*/List_1_Add_m2808974330_RuntimeMethod_var);
	}

IL_0064:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) <= ((int32_t)5)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0073:
	{
		int32_t L_22 = V_2;
		MemoryCellControllerU5BU5D_t1776215942* L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))), (int32_t)5)))))
		{
			goto IL_0019;
		}
	}
	{
		List_1_t3248290684 * L_24 = V_1;
		return L_24;
	}
}
// System.Collections.Generic.List`1<MemoryCellController[]> JobController::LightBlueGetPossible()
extern "C" IL2CPP_METHOD_ATTR List_1_t3248290684 * JobController_LightBlueGetPossible_m1447588275 (JobController_t2362869387 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_LightBlueGetPossible_m1447588275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryCellControllerU5BU5D_t1776215942* V_0 = NULL;
	List_1_t3248290684 * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	MemoryCellControllerU5BU5D_t1776215942* G_B3_2 = NULL;
	JobController_t2362869387 * G_B3_3 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	MemoryCellControllerU5BU5D_t1776215942* G_B2_2 = NULL;
	JobController_t2362869387 * G_B2_3 = NULL;
	{
		GridController_t1732845400 * L_0 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		MemoryCellControllerU5BU5D_t1776215942* L_1 = GridController_GetGrid_m1085035811(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t3248290684 * L_2 = (List_1_t3248290684 *)il2cpp_codegen_object_new(List_1_t3248290684_il2cpp_TypeInfo_var);
		List_1__ctor_m295390(L_2, /*hidden argument*/List_1__ctor_m295390_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = ((int32_t)24);
		goto IL_005f;
	}

IL_0019:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_3 = V_0;
		int32_t L_4 = V_2;
		int32_t L_5 = V_2;
		Condition_t2788105126 * L_6 = ((JobController_t2362869387_StaticFields*)il2cpp_codegen_static_fields_for(JobController_t2362869387_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_17();
		G_B2_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)4)), (int32_t)1));
		G_B2_1 = L_4;
		G_B2_2 = L_3;
		G_B2_3 = __this;
		if (L_6)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)4)), (int32_t)1));
			G_B3_1 = L_4;
			G_B3_2 = L_3;
			G_B3_3 = __this;
			goto IL_0039;
		}
	}
	{
		intptr_t L_7 = (intptr_t)JobController_U3CLightBlueGetPossibleU3Em__1_m3461975711_RuntimeMethod_var;
		Condition_t2788105126 * L_8 = (Condition_t2788105126 *)il2cpp_codegen_object_new(Condition_t2788105126_il2cpp_TypeInfo_var);
		Condition__ctor_m2344701788(L_8, NULL, (intptr_t)L_7, /*hidden argument*/NULL);
		((JobController_t2362869387_StaticFields*)il2cpp_codegen_static_fields_for(JobController_t2362869387_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_17(L_8);
		G_B3_0 = G_B2_0;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0039:
	{
		Condition_t2788105126 * L_9 = ((JobController_t2362869387_StaticFields*)il2cpp_codegen_static_fields_for(JobController_t2362869387_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_17();
		bool L_10 = JobController_All_m484570251(G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		List_1_t3248290684 * L_12 = V_1;
		MemoryCellControllerU5BU5D_t1776215942* L_13 = V_0;
		int32_t L_14 = V_2;
		int32_t L_15 = V_2;
		MemoryCellControllerU5BU5D_t1776215942* L_16 = JobController_SubList_m3878992697(__this, L_13, L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)4)), /*hidden argument*/NULL);
		List_1_Add_m2808974330(L_12, L_16, /*hidden argument*/List_1_Add_m2808974330_RuntimeMethod_var);
	}

IL_005b:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_18 = V_2;
		MemoryCellControllerU5BU5D_t1776215942* L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))), (int32_t)4)))))
		{
			goto IL_0019;
		}
	}
	{
		List_1_t3248290684 * L_20 = V_1;
		return L_20;
	}
}
// System.Void JobController::PlaceScattered(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void JobController_PlaceScattered_m403991863 (JobController_t2362869387 * __this, bool ___singleValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_PlaceScattered_m403991863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryCellControllerU5BU5D_t1776215942* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	MemoryCellController_t341130527 * V_4 = NULL;
	MemoryCellController_t341130527 * G_B4_0 = NULL;
	JobController_t2362869387 * G_B4_1 = NULL;
	MemoryCellController_t341130527 * G_B3_0 = NULL;
	JobController_t2362869387 * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	MemoryCellController_t341130527 * G_B5_1 = NULL;
	JobController_t2362869387 * G_B5_2 = NULL;
	{
		GridController_t1732845400 * L_0 = ((GridController_t1732845400_StaticFields*)il2cpp_codegen_static_fields_for(GridController_t1732845400_il2cpp_TypeInfo_var))->get_instance_4();
		MemoryCellControllerU5BU5D_t1776215942* L_1 = GridController_GetGrid_m1085035811(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)15), /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Random_Range_m4054026115(NULL /*static, unused*/, 1, 3, /*hidden argument*/NULL);
		V_2 = L_3;
		V_3 = 0;
		goto IL_0070;
	}

IL_0023:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_4 = V_0;
		MemoryCellControllerU5BU5D_t1776215942* L_5 = V_0;
		int32_t L_6 = Random_Range_m4054026115(NULL /*static, unused*/, ((int32_t)16), ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		MemoryCellController_t341130527 * L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		MemoryCellController_t341130527 * L_9 = V_4;
		bool L_10 = L_9->get_isColored_6();
		if (L_10)
		{
			goto IL_006c;
		}
	}
	{
		MemoryCellController_t341130527 * L_11 = V_4;
		bool L_12 = ___singleValue0;
		G_B3_0 = L_11;
		G_B3_1 = __this;
		if (!L_12)
		{
			G_B4_0 = L_11;
			G_B4_1 = __this;
			goto IL_004e;
		}
	}
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_004f;
	}

IL_004e:
	{
		G_B5_0 = 3;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_004f:
	{
		JobController_MakeColor_m2005006609(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
		MemoryCellController_t341130527 * L_13 = V_4;
		int32_t L_14 = V_1;
		JobController_SetValuePreview_m3527689404(__this, L_13, L_14, /*hidden argument*/NULL);
		bool L_15 = ___singleValue0;
		if (L_15)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_16 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)15), /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_006c:
	{
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0070:
	{
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void JobController::PlaceColors()
extern "C" IL2CPP_METHOD_ATTR void JobController_PlaceColors_m928630922 (JobController_t2362869387 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_PlaceColors_m928630922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t3152880114  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t2709390722  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	List_1_t1813205269 * V_3 = NULL;
	List_1_t3248290684 * V_4 = NULL;
	int32_t V_5 = 0;
	MemoryCellControllerU5BU5D_t1776215942* V_6 = NULL;
	int32_t V_7 = 0;
	MemoryCellController_t341130527 * V_8 = NULL;
	MemoryCellControllerU5BU5D_t1776215942* V_9 = NULL;
	int32_t V_10 = 0;
	List_1_t3248290684 * V_11 = NULL;
	int32_t V_12 = 0;
	MemoryCellControllerU5BU5D_t1776215942* V_13 = NULL;
	int32_t V_14 = 0;
	MemoryCellController_t341130527 * V_15 = NULL;
	MemoryCellControllerU5BU5D_t1776215942* V_16 = NULL;
	int32_t V_17 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t755207947 * L_0 = __this->get_coloredCells_13();
		Enumerator_t2709390722  L_1 = Dictionary_2_GetEnumerator_m1147574700(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m1147574700_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0145;
		}

IL_0011:
		{
			KeyValuePair_2_t3152880114  L_2 = Enumerator_get_Current_m2330634133((Enumerator_t2709390722 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2330634133_RuntimeMethod_var);
			V_0 = L_2;
			int32_t L_3 = KeyValuePair_2_get_Key_m3337906097((KeyValuePair_2_t3152880114 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m3337906097_RuntimeMethod_var);
			V_2 = L_3;
			List_1_t1813205269 * L_4 = KeyValuePair_2_get_Value_m3086670186((KeyValuePair_2_t3152880114 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3086670186_RuntimeMethod_var);
			V_3 = L_4;
			List_1_t1813205269 * L_5 = V_3;
			int32_t L_6 = List_1_get_Count_m1576969321(L_5, /*hidden argument*/List_1_get_Count_m1576969321_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0145;
			}
		}

IL_0034:
		{
			int32_t L_7 = V_2;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0055;
				}
				case 1:
				{
					goto IL_00bf;
				}
				case 2:
				{
					goto IL_00cb;
				}
				case 3:
				{
					goto IL_00d7;
				}
				case 4:
				{
					goto IL_00dc;
				}
			}
		}

IL_0050:
		{
			goto IL_0145;
		}

IL_0055:
		{
			List_1_t3248290684 * L_8 = JobController_OrangeGetPossible_m3473682360(__this, /*hidden argument*/NULL);
			V_4 = L_8;
			List_1_t3248290684 * L_9 = V_4;
			int32_t L_10 = List_1_get_Count_m857304069(L_9, /*hidden argument*/List_1_get_Count_m857304069_RuntimeMethod_var);
			int32_t L_11 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
			V_5 = L_11;
			List_1_t3248290684 * L_12 = V_4;
			int32_t L_13 = V_5;
			MemoryCellControllerU5BU5D_t1776215942* L_14 = List_1_get_Item_m1408411301(L_12, L_13, /*hidden argument*/List_1_get_Item_m1408411301_RuntimeMethod_var);
			V_6 = L_14;
			int32_t L_15 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)15), /*hidden argument*/NULL);
			V_7 = L_15;
			MemoryCellControllerU5BU5D_t1776215942* L_16 = V_6;
			V_9 = L_16;
			V_10 = 0;
			goto IL_00af;
		}

IL_008f:
		{
			MemoryCellControllerU5BU5D_t1776215942* L_17 = V_9;
			int32_t L_18 = V_10;
			int32_t L_19 = L_18;
			MemoryCellController_t341130527 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
			V_8 = L_20;
			MemoryCellController_t341130527 * L_21 = V_8;
			JobController_MakeColor_m2005006609(__this, L_21, 1, /*hidden argument*/NULL);
			MemoryCellController_t341130527 * L_22 = V_8;
			int32_t L_23 = V_7;
			JobController_SetValuePreview_m3527689404(__this, L_22, L_23, /*hidden argument*/NULL);
			int32_t L_24 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		}

IL_00af:
		{
			int32_t L_25 = V_10;
			MemoryCellControllerU5BU5D_t1776215942* L_26 = V_9;
			if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
			{
				goto IL_008f;
			}
		}

IL_00ba:
		{
			goto IL_0145;
		}

IL_00bf:
		{
			JobController_PlaceScattered_m403991863(__this, (bool)1, /*hidden argument*/NULL);
			goto IL_0145;
		}

IL_00cb:
		{
			JobController_PlaceScattered_m403991863(__this, (bool)0, /*hidden argument*/NULL);
			goto IL_0145;
		}

IL_00d7:
		{
			goto IL_0145;
		}

IL_00dc:
		{
			List_1_t3248290684 * L_27 = JobController_LightBlueGetPossible_m1447588275(__this, /*hidden argument*/NULL);
			V_11 = L_27;
			List_1_t3248290684 * L_28 = V_11;
			int32_t L_29 = List_1_get_Count_m857304069(L_28, /*hidden argument*/List_1_get_Count_m857304069_RuntimeMethod_var);
			int32_t L_30 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
			V_12 = L_30;
			List_1_t3248290684 * L_31 = V_11;
			int32_t L_32 = V_12;
			MemoryCellControllerU5BU5D_t1776215942* L_33 = List_1_get_Item_m1408411301(L_31, L_32, /*hidden argument*/List_1_get_Item_m1408411301_RuntimeMethod_var);
			V_13 = L_33;
			V_14 = 1;
			MemoryCellControllerU5BU5D_t1776215942* L_34 = V_13;
			V_16 = L_34;
			V_17 = 0;
			goto IL_0135;
		}

IL_010f:
		{
			MemoryCellControllerU5BU5D_t1776215942* L_35 = V_16;
			int32_t L_36 = V_17;
			int32_t L_37 = L_36;
			MemoryCellController_t341130527 * L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
			V_15 = L_38;
			MemoryCellController_t341130527 * L_39 = V_15;
			JobController_MakeColor_m2005006609(__this, L_39, 5, /*hidden argument*/NULL);
			MemoryCellController_t341130527 * L_40 = V_15;
			int32_t L_41 = V_14;
			JobController_SetValuePreview_m3527689404(__this, L_40, L_41, /*hidden argument*/NULL);
			int32_t L_42 = V_14;
			V_14 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)2));
			int32_t L_43 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		}

IL_0135:
		{
			int32_t L_44 = V_17;
			MemoryCellControllerU5BU5D_t1776215942* L_45 = V_16;
			if ((((int32_t)L_44) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length)))))))
			{
				goto IL_010f;
			}
		}

IL_0140:
		{
			goto IL_0145;
		}

IL_0145:
		{
			bool L_46 = Enumerator_MoveNext_m2914257994((Enumerator_t2709390722 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2914257994_RuntimeMethod_var);
			if (L_46)
			{
				goto IL_0011;
			}
		}

IL_0151:
		{
			IL2CPP_LEAVE(0x164, FINALLY_0156);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0156;
	}

FINALLY_0156:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2802568476((Enumerator_t2709390722 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2802568476_RuntimeMethod_var);
		IL2CPP_END_FINALLY(342)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(342)
	{
		IL2CPP_JUMP_TBL(0x164, IL_0164)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0164:
	{
		return;
	}
}
// System.Void JobController::CheckColoredCellStatus()
extern "C" IL2CPP_METHOD_ATTR void JobController_CheckColoredCellStatus_m3890777666 (JobController_t2362869387 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_CheckColoredCellStatus_m3890777666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ColorTypesU5BU5D_t438535719* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	MemoryCellController_t341130527 * V_7 = NULL;
	Enumerator_t3702449146  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		ColorTypesU5BU5D_t438535719* L_0 = __this->get_colorTypesIter_15();
		V_1 = L_0;
		V_2 = 0;
		goto IL_00d9;
	}

IL_000e:
	{
		ColorTypesU5BU5D_t438535719* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		int32_t L_4 = (int32_t)(L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Dictionary_2_t755207947 * L_5 = __this->get_coloredCells_13();
		int32_t L_6 = V_0;
		List_1_t1813205269 * L_7 = Dictionary_2_get_Item_m1369846687(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m1369846687_RuntimeMethod_var);
		int32_t L_8 = List_1_get_Count_m1576969321(L_7, /*hidden argument*/List_1_get_Count_m1576969321_RuntimeMethod_var);
		V_3 = L_8;
		int32_t L_9 = V_3;
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_00d5;
	}

IL_002f:
	{
		V_4 = 0;
		V_5 = 0;
		V_6 = 1;
		Dictionary_2_t755207947 * L_10 = __this->get_coloredCells_13();
		int32_t L_11 = V_0;
		List_1_t1813205269 * L_12 = Dictionary_2_get_Item_m1369846687(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_m1369846687_RuntimeMethod_var);
		Enumerator_t3702449146  L_13 = List_1_GetEnumerator_m4293003108(L_12, /*hidden argument*/List_1_GetEnumerator_m4293003108_RuntimeMethod_var);
		V_8 = L_13;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_0050:
		{
			MemoryCellController_t341130527 * L_14 = Enumerator_get_Current_m356741492((Enumerator_t3702449146 *)(&V_8), /*hidden argument*/Enumerator_get_Current_m356741492_RuntimeMethod_var);
			V_7 = L_14;
			MemoryCellController_t341130527 * L_15 = V_7;
			int32_t L_16 = MemoryCellController_GetValue_m1999499772(L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_006b;
			}
		}

IL_0065:
		{
			int32_t L_17 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		}

IL_006b:
		{
			MemoryCellController_t341130527 * L_18 = V_7;
			int32_t L_19 = MemoryCellController_GetPreviewNumber_m1316447138(L_18, /*hidden argument*/NULL);
			MemoryCellController_t341130527 * L_20 = V_7;
			int32_t L_21 = MemoryCellController_GetValue_m1999499772(L_20, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_19) == ((uint32_t)L_21))))
			{
				goto IL_0084;
			}
		}

IL_007e:
		{
			int32_t L_22 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		}

IL_0084:
		{
			bool L_23 = Enumerator_MoveNext_m1078081596((Enumerator_t3702449146 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_m1078081596_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0050;
			}
		}

IL_0090:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0095);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0095;
	}

FINALLY_0095:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m399582602((Enumerator_t3702449146 *)(&V_8), /*hidden argument*/Enumerator_Dispose_m399582602_RuntimeMethod_var);
		IL2CPP_END_FINALLY(149)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(149)
	{
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a3:
	{
		int32_t L_24 = V_4;
		if (!L_24)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_25 = V_5;
		int32_t L_26 = V_3;
		if ((((int32_t)L_25) >= ((int32_t)L_26)))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_27 = V_0;
		JobController_JobFails_m4088475263(__this, L_27, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_00be:
	{
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_6;
		JobController_JobSuccess_m2853302862(__this, L_30, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00d5:
	{
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00d9:
	{
		int32_t L_34 = V_2;
		ColorTypesU5BU5D_t438535719* L_35 = V_1;
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void JobController::EraseColors()
extern "C" IL2CPP_METHOD_ATTR void JobController_EraseColors_m1147765506 (JobController_t2362869387 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JobController_EraseColors_m1147765506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ColorTypesU5BU5D_t438535719* V_1 = NULL;
	int32_t V_2 = 0;
	MemoryCellController_t341130527 * V_3 = NULL;
	Enumerator_t3702449146  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		ColorTypesU5BU5D_t438535719* L_0 = __this->get_colorTypesIter_15();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0094;
	}

IL_000e:
	{
		ColorTypesU5BU5D_t438535719* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		int32_t L_4 = (int32_t)(L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Dictionary_2_t755207947 * L_5 = __this->get_coloredCells_13();
		int32_t L_6 = V_0;
		List_1_t1813205269 * L_7 = Dictionary_2_get_Item_m1369846687(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m1369846687_RuntimeMethod_var);
		Enumerator_t3702449146  L_8 = List_1_GetEnumerator_m4293003108(L_7, /*hidden argument*/List_1_GetEnumerator_m4293003108_RuntimeMethod_var);
		V_4 = L_8;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_002a:
		{
			MemoryCellController_t341130527 * L_9 = Enumerator_get_Current_m356741492((Enumerator_t3702449146 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m356741492_RuntimeMethod_var);
			V_3 = L_9;
			MemoryCellController_t341130527 * L_10 = V_3;
			Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(L_10, /*hidden argument*/NULL);
			Transform_t3600365921 * L_12 = Transform_Find_m1729760951(L_11, _stringLiteral446682791, /*hidden argument*/NULL);
			SpriteRenderer_t3235626157 * L_13 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(L_12, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
			Material_t340375123 * L_14 = __this->get_normal_5();
			Renderer_set_material_m1157964140(L_13, L_14, /*hidden argument*/NULL);
			MemoryCellController_t341130527 * L_15 = V_3;
			L_15->set_isColored_6((bool)0);
			MemoryCellController_t341130527 * L_16 = V_3;
			MemoryCellController_SetPreviewNumberActivation_m1905526410(L_16, (bool)0, /*hidden argument*/NULL);
		}

IL_0060:
		{
			bool L_17 = Enumerator_MoveNext_m1078081596((Enumerator_t3702449146 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m1078081596_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_002a;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m399582602((Enumerator_t3702449146 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m399582602_RuntimeMethod_var);
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007f:
	{
		Dictionary_2_t755207947 * L_18 = __this->get_coloredCells_13();
		int32_t L_19 = V_0;
		List_1_t1813205269 * L_20 = Dictionary_2_get_Item_m1369846687(L_18, L_19, /*hidden argument*/Dictionary_2_get_Item_m1369846687_RuntimeMethod_var);
		List_1_Clear_m1330880791(L_20, /*hidden argument*/List_1_Clear_m1330880791_RuntimeMethod_var);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0094:
	{
		int32_t L_22 = V_2;
		ColorTypesU5BU5D_t438535719* L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void JobController::Update()
extern "C" IL2CPP_METHOD_ATTR void JobController_Update_m2631762217 (JobController_t2362869387 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean JobController::<OrangeGetPossible>m__0(MemoryCellController)
extern "C" IL2CPP_METHOD_ATTR bool JobController_U3COrangeGetPossibleU3Em__0_m1944873447 (RuntimeObject * __this /* static, unused */, MemoryCellController_t341130527 * ___cell0, const RuntimeMethod* method)
{
	{
		MemoryCellController_t341130527 * L_0 = ___cell0;
		bool L_1 = L_0->get_isColored_6();
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean JobController::<LightBlueGetPossible>m__1(MemoryCellController)
extern "C" IL2CPP_METHOD_ATTR bool JobController_U3CLightBlueGetPossibleU3Em__1_m3461975711 (RuntimeObject * __this /* static, unused */, MemoryCellController_t341130527 * ___cell0, const RuntimeMethod* method)
{
	{
		MemoryCellController_t341130527 * L_0 = ___cell0;
		bool L_1 = L_0->get_isColored_6();
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void JobController/Condition::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Condition__ctor_m2344701788 (Condition_t2788105126 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean JobController/Condition::Invoke(MemoryCellController)
extern "C" IL2CPP_METHOD_ATTR bool Condition_Invoke_m2954690072 (Condition_t2788105126 * __this, MemoryCellController_t341130527 * ___cell0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Condition_Invoke_m2954690072((Condition_t2788105126 *)__this->get_prev_9(), ___cell0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, MemoryCellController_t341130527 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___cell0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, MemoryCellController_t341130527 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___cell0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, MemoryCellController_t341130527 * >::Invoke(targetMethod, targetThis, ___cell0);
					else
						result = GenericVirtFuncInvoker1< bool, MemoryCellController_t341130527 * >::Invoke(targetMethod, targetThis, ___cell0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, MemoryCellController_t341130527 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cell0);
					else
						result = VirtFuncInvoker1< bool, MemoryCellController_t341130527 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cell0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, MemoryCellController_t341130527 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cell0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___cell0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___cell0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___cell0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___cell0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (MemoryCellController_t341130527 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cell0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult JobController/Condition::BeginInvoke(MemoryCellController,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Condition_BeginInvoke_m133270798 (Condition_t2788105126 * __this, MemoryCellController_t341130527 * ___cell0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cell0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean JobController/Condition::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Condition_EndInvoke_m1245290984 (Condition_t2788105126 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KeyEventController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void KeyEventController__ctor_m435984736 (KeyEventController_t2268638968 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KeyEventController::Start()
extern "C" IL2CPP_METHOD_ATTR void KeyEventController_Start_m3726438264 (KeyEventController_t2268638968 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyEventController_Start_m3726438264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t1281789340* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral3452614544);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614544);
		StringU5BU5D_t1281789340* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteral3452614543);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral3452614542);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614541);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3452614541);
		StringU5BU5D_t1281789340* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral3452614540);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614540);
		StringU5BU5D_t1281789340* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral3452614539);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3452614539);
		StringU5BU5D_t1281789340* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral3452614538);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3452614538);
		StringU5BU5D_t1281789340* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614537);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3452614537);
		StringU5BU5D_t1281789340* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral3452614552);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3452614552);
		StringU5BU5D_t1281789340* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral3452614551);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3452614551);
		StringU5BU5D_t1281789340* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral3452614591);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral3452614591);
		StringU5BU5D_t1281789340* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614590);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral3452614590);
		StringU5BU5D_t1281789340* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteral3452614589);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral3452614589);
		StringU5BU5D_t1281789340* L_14 = L_13;
		ArrayElementTypeCheck (L_14, _stringLiteral3452614588);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3452614588);
		StringU5BU5D_t1281789340* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteral3452614587);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral3452614587);
		StringU5BU5D_t1281789340* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteral3452614586);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral3452614586);
		__this->set_keys_4(L_16);
		return;
	}
}
// System.Void KeyEventController::Update()
extern "C" IL2CPP_METHOD_ATTR void KeyEventController_Update_m3514856996 (KeyEventController_t2268638968 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyEventController_Update_m3514856996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		StartButtonController_t3651918395 * L_1 = ((StartButtonController_t3651918395_StaticFields*)il2cpp_codegen_static_fields_for(StartButtonController_t3651918395_il2cpp_TypeInfo_var))->get_instance_4();
		StartButtonController_OnClick_m1406823117(L_1, /*hidden argument*/NULL);
		HaltButtonController_t306459615 * L_2 = ((HaltButtonController_t306459615_StaticFields*)il2cpp_codegen_static_fields_for(HaltButtonController_t306459615_il2cpp_TypeInfo_var))->get_instance_4();
		HaltButtonController_OnClick_m3408310238(L_2, /*hidden argument*/NULL);
		RandomButtonController_t2952941430 * L_3 = ((RandomButtonController_t2952941430_StaticFields*)il2cpp_codegen_static_fields_for(RandomButtonController_t2952941430_il2cpp_TypeInfo_var))->get_instance_4();
		RandomButtonController_OnClick_m3198826867(L_3, /*hidden argument*/NULL);
		ClearButtonController_t1437245373 * L_4 = ((ClearButtonController_t1437245373_StaticFields*)il2cpp_codegen_static_fields_for(ClearButtonController_t1437245373_il2cpp_TypeInfo_var))->get_instance_4();
		ClearButtonController_OnClick_m290409787(L_4, /*hidden argument*/NULL);
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral3452614608, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0077;
		}
	}
	{
		HelpController_t2343372652 * L_6 = ((HelpController_t2343372652_StaticFields*)il2cpp_codegen_static_fields_for(HelpController_t2343372652_il2cpp_TypeInfo_var))->get_instance_4();
		HelpController_t2343372652 * L_7 = ((HelpController_t2343372652_StaticFields*)il2cpp_codegen_static_fields_for(HelpController_t2343372652_il2cpp_TypeInfo_var))->get_instance_4();
		bool L_8 = L_7->get_isOpen_5();
		L_6->set_isOpen_5((bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0));
		HelpController_t2343372652 * L_9 = ((HelpController_t2343372652_StaticFields*)il2cpp_codegen_static_fields_for(HelpController_t2343372652_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		HelpController_t2343372652 * L_11 = ((HelpController_t2343372652_StaticFields*)il2cpp_codegen_static_fields_for(HelpController_t2343372652_il2cpp_TypeInfo_var))->get_instance_4();
		bool L_12 = L_11->get_isOpen_5();
		GameObject_SetActive_m796801857(L_10, L_12, /*hidden argument*/NULL);
		goto IL_01c5;
	}

IL_0077:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_13 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral742876383, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00a5;
		}
	}
	{
		GameController_t2330501625 * L_14 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		GameController_OnNavigation_m2564189584(L_14, _stringLiteral742876383, /*hidden argument*/NULL);
		MyAudioController_t2840361766 * L_15 = ((MyAudioController_t2840361766_StaticFields*)il2cpp_codegen_static_fields_for(MyAudioController_t2840361766_il2cpp_TypeInfo_var))->get_instance_4();
		MyAudioController_PlayAudio_m852245086(L_15, 6, /*hidden argument*/NULL);
		goto IL_01c5;
	}

IL_00a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_16 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral4249957872, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00d3;
		}
	}
	{
		GameController_t2330501625 * L_17 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		GameController_OnNavigation_m2564189584(L_17, _stringLiteral4249957872, /*hidden argument*/NULL);
		MyAudioController_t2840361766 * L_18 = ((MyAudioController_t2840361766_StaticFields*)il2cpp_codegen_static_fields_for(MyAudioController_t2840361766_il2cpp_TypeInfo_var))->get_instance_4();
		MyAudioController_PlayAudio_m852245086(L_18, 6, /*hidden argument*/NULL);
		goto IL_01c5;
	}

IL_00d3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_19 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral3455760331, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00fd;
		}
	}
	{
		GameController_t2330501625 * L_20 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		GameController_OnModifyValue_m3053158791(L_20, 1, /*hidden argument*/NULL);
		MyAudioController_t2840361766 * L_21 = ((MyAudioController_t2840361766_StaticFields*)il2cpp_codegen_static_fields_for(MyAudioController_t2840361766_il2cpp_TypeInfo_var))->get_instance_4();
		MyAudioController_PlayAudio_m852245086(L_21, 4, /*hidden argument*/NULL);
		goto IL_01c5;
	}

IL_00fd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_22 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral60121299, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0127;
		}
	}
	{
		GameController_t2330501625 * L_23 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		GameController_OnModifyValue_m3053158791(L_23, (-1), /*hidden argument*/NULL);
		MyAudioController_t2840361766 * L_24 = ((MyAudioController_t2840361766_StaticFields*)il2cpp_codegen_static_fields_for(MyAudioController_t2840361766_il2cpp_TypeInfo_var))->get_instance_4();
		MyAudioController_PlayAudio_m852245086(L_24, 4, /*hidden argument*/NULL);
		goto IL_01c5;
	}

IL_0127:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_25 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral3134897496, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0180;
		}
	}
	{
		GameController_t2330501625 * L_26 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		bool L_27 = L_26->get_isRunning_8();
		if (L_27)
		{
			goto IL_017b;
		}
	}
	{
		GameController_t2330501625 * L_28 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_29 = GameController_GetStartState_m1526516771(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_29) == ((int32_t)3)))
		{
			goto IL_017b;
		}
	}
	{
		GameController_t2330501625 * L_30 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		L_30->set_isRunning_8((bool)1);
		GameController_t2330501625 * L_31 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		GameController_ClearHoverAndSelection_m1951568472(L_31, /*hidden argument*/NULL);
		GameController_t2330501625 * L_32 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_33 = GameController_RunSingleCommand_m2188203666(L_32, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_33, /*hidden argument*/NULL);
	}

IL_017b:
	{
		goto IL_01c5;
	}

IL_0180:
	{
		StringU5BU5D_t1281789340* L_34 = __this->get_keys_4();
		V_1 = L_34;
		V_2 = 0;
		goto IL_01bc;
	}

IL_018e:
	{
		StringU5BU5D_t1281789340* L_35 = V_1;
		int32_t L_36 = V_2;
		int32_t L_37 = L_36;
		String_t* L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = L_38;
		String_t* L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_40 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_01b8;
		}
	}
	{
		GameController_t2330501625 * L_41 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		String_t* L_42 = V_0;
		GameController_OnKeyPress_m2100150495(L_41, L_42, /*hidden argument*/NULL);
		MyAudioController_t2840361766 * L_43 = ((MyAudioController_t2840361766_StaticFields*)il2cpp_codegen_static_fields_for(MyAudioController_t2840361766_il2cpp_TypeInfo_var))->get_instance_4();
		MyAudioController_PlayAudio_m852245086(L_43, 4, /*hidden argument*/NULL);
		goto IL_01c5;
	}

IL_01b8:
	{
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_01bc:
	{
		int32_t L_45 = V_2;
		StringU5BU5D_t1281789340* L_46 = V_1;
		if ((((int32_t)L_45) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_46)->max_length)))))))
		{
			goto IL_018e;
		}
	}

IL_01c5:
	{
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
// System.Void MemoryCellController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController__ctor_m1223025108 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MemoryCellController::Awake()
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_Awake_m1380669347 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellController_Awake_m1380669347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t599095547 * L_0 = (List_1_t599095547 *)il2cpp_codegen_object_new(List_1_t599095547_il2cpp_TypeInfo_var);
		List_1__ctor_m3103785141(L_0, /*hidden argument*/List_1__ctor_m3103785141_RuntimeMethod_var);
		__this->set_listeners_9(L_0);
		Animation_t3648466861 * L_1 = Component_GetComponent_TisAnimation_t3648466861_m4214971628(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t3648466861_m4214971628_RuntimeMethod_var);
		__this->set_clip_10(L_1);
		return;
	}
}
// System.Void MemoryCellController::Start()
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_Start_m3595601684 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellController_Start_m3595601684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t1281789340* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral3452614544);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614544);
		StringU5BU5D_t1281789340* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteral3452614543);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral3452614542);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614541);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3452614541);
		StringU5BU5D_t1281789340* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral3452614540);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614540);
		StringU5BU5D_t1281789340* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral3452614539);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3452614539);
		StringU5BU5D_t1281789340* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral3452614538);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3452614538);
		StringU5BU5D_t1281789340* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614537);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3452614537);
		StringU5BU5D_t1281789340* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral3452614552);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3452614552);
		StringU5BU5D_t1281789340* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral3452614551);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3452614551);
		StringU5BU5D_t1281789340* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral3452614591);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral3452614591);
		StringU5BU5D_t1281789340* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614590);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral3452614590);
		StringU5BU5D_t1281789340* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteral3452614589);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral3452614589);
		StringU5BU5D_t1281789340* L_14 = L_13;
		ArrayElementTypeCheck (L_14, _stringLiteral3452614588);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3452614588);
		StringU5BU5D_t1281789340* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteral3452614587);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral3452614587);
		StringU5BU5D_t1281789340* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteral3452614586);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral3452614586);
		__this->set_keys_12(L_16);
		return;
	}
}
// System.Boolean MemoryCellController::IsLocked()
extern "C" IL2CPP_METHOD_ATTR bool MemoryCellController_IsLocked_m3584109461 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isColored_6();
		return L_0;
	}
}
// System.Void MemoryCellController::Flash(System.String)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_Flash_m4241161679 (MemoryCellController_t341130527 * __this, String_t* ___animationName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellController_Flash_m4241161679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animation_t3648466861 * L_0 = __this->get_clip_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Animation_t3648466861 * L_2 = __this->get_clip_10();
		bool L_3 = Animation_get_isPlaying_m1022540967(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Animation_t3648466861 * L_4 = __this->get_clip_10();
		Animation_Stop_m195768787(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		Animation_t3648466861 * L_5 = __this->get_clip_10();
		String_t* L_6 = ___animationName0;
		Animation_Play_m27531216(L_5, L_6, /*hidden argument*/NULL);
		String_t* L_7 = ___animationName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m920492651(NULL /*static, unused*/, L_7, _stringLiteral389518009, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		MoneyController_t851075799 * L_9 = ((MoneyController_t851075799_StaticFields*)il2cpp_codegen_static_fields_for(MoneyController_t851075799_il2cpp_TypeInfo_var))->get_instance_4();
		MoneyController_OnChangeRequest_m784516296(L_9, 0, 1, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Boolean MemoryCellController::GetSelected()
extern "C" IL2CPP_METHOD_ATTR bool MemoryCellController_GetSelected_m2735042582 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_selected_8();
		return L_0;
	}
}
// System.Void MemoryCellController::SetSelected(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_SetSelected_m3073455519 (MemoryCellController_t341130527 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_selected_8(L_0);
		return;
	}
}
// System.Int32 MemoryCellController::GetValue()
extern "C" IL2CPP_METHOD_ATTR int32_t MemoryCellController_GetValue_m1999499772 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellController_GetValue_m1999499772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameController_t2330501625 * L_0 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		bool L_1 = L_0->get_isRunning_8();
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		GameController_t2330501625 * L_2 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		bool L_3 = GameController_IsStarted_m2426894938(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		MemoryCellController_Flash_m4241161679(__this, _stringLiteral389518009, /*hidden argument*/NULL);
	}

IL_0029:
	{
		MemoryCellTextController_t3948011966 * L_4 = Component_GetComponent_TisMemoryCellTextController_t3948011966_m1603530173(__this, /*hidden argument*/Component_GetComponent_TisMemoryCellTextController_t3948011966_m1603530173_RuntimeMethod_var);
		int32_t L_5 = MemoryCellTextController_GetValue_m632222587(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void MemoryCellController::SetValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_SetValue_m3908445948 (MemoryCellController_t341130527 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellController_SetValue_m3908445948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryCellTextController_t3948011966 * L_0 = Component_GetComponent_TisMemoryCellTextController_t3948011966_m1603530173(__this, /*hidden argument*/Component_GetComponent_TisMemoryCellTextController_t3948011966_m1603530173_RuntimeMethod_var);
		int32_t L_1 = ___value0;
		MemoryCellTextController_SetValue_m2137140209(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MemoryCellController::AddListener(ICellListener)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_AddListener_m3359123159 (MemoryCellController_t341130527 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellController_AddListener_m3359123159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t599095547 * L_0 = __this->get_listeners_9();
		RuntimeObject* L_1 = ___listener0;
		List_1_Add_m166453353(L_0, L_1, /*hidden argument*/List_1_Add_m166453353_RuntimeMethod_var);
		return;
	}
}
// System.Void MemoryCellController::OnChange()
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_OnChange_m2113182999 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellController_OnChange_m2113182999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Enumerator_t2488339424  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t599095547 * L_0 = __this->get_listeners_9();
		Enumerator_t2488339424  L_1 = List_1_GetEnumerator_m790014197(L_0, /*hidden argument*/List_1_GetEnumerator_m790014197_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0011:
		{
			RuntimeObject* L_2 = Enumerator_get_Current_m3129680102((Enumerator_t2488339424 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3129680102_RuntimeMethod_var);
			V_0 = L_2;
			RuntimeObject* L_3 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void ICellListener::OnChange() */, ICellListener_t3421988101_il2cpp_TypeInfo_var, L_3);
		}

IL_001f:
		{
			bool L_4 = Enumerator_MoveNext_m2057191379((Enumerator_t2488339424 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2057191379_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0011;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2684005343((Enumerator_t2488339424 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2684005343_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003e:
	{
		return;
	}
}
// System.Void MemoryCellController::SetPreviewNumberActivation(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_SetPreviewNumberActivation_m1905526410 (MemoryCellController_t341130527 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellController_SetPreviewNumberActivation_m1905526410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Transform_Find_m1729760951(L_1, _stringLiteral3554759439, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		bool L_4 = ___value0;
		GameObject_SetActive_m796801857(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MemoryCellController::SetPreviewNumber(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_SetPreviewNumber_m1180977413 (MemoryCellController_t341130527 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellController_SetPreviewNumber_m1180977413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___number0;
		__this->set_previewNumber_11(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Transform_Find_m1729760951(L_2, _stringLiteral3554759439, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_4 = Component_GetComponent_TisTextMesh_t1536577757_m1070281259(L_3, /*hidden argument*/Component_GetComponent_TisTextMesh_t1536577757_m1070281259_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_5 = __this->get_keys_12();
		int32_t L_6 = __this->get_previewNumber_11();
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		String_t* L_9 = String_ToUpper_m3324454496(L_8, /*hidden argument*/NULL);
		TextMesh_set_text_m446189179(L_4, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 MemoryCellController::GetPreviewNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t MemoryCellController_GetPreviewNumber_m1316447138 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_previewNumber_11();
		return L_0;
	}
}
// System.Void MemoryCellController::Update()
extern "C" IL2CPP_METHOD_ATTR void MemoryCellController_Update_m729900216 (MemoryCellController_t341130527 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void MemoryCellTextController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MemoryCellTextController__ctor_m2408969069 (MemoryCellTextController_t3948011966 * __this, const RuntimeMethod* method)
{
	{
		__this->set_range_5(((int32_t)16));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MemoryCellTextController::Start()
extern "C" IL2CPP_METHOD_ATTR void MemoryCellTextController_Start_m351409437 (MemoryCellTextController_t3948011966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellTextController_Start_m351409437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Dictionary_2_t2736202052 * L_0 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3200964102(L_0, /*hidden argument*/Dictionary_2__ctor_m3200964102_RuntimeMethod_var);
		__this->set_lookup_7(L_0);
		Dictionary_2_t736164020 * L_1 = (Dictionary_2_t736164020 *)il2cpp_codegen_object_new(Dictionary_2_t736164020_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4247274435(L_1, /*hidden argument*/Dictionary_2__ctor_m4247274435_RuntimeMethod_var);
		__this->set_rlookup_8(L_1);
		StringU5BU5D_t1281789340* L_2 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t1281789340* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral3452614544);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614544);
		StringU5BU5D_t1281789340* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614543);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral3452614542);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral3452614541);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3452614541);
		StringU5BU5D_t1281789340* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral3452614540);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614540);
		StringU5BU5D_t1281789340* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614539);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3452614539);
		StringU5BU5D_t1281789340* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral3452614538);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3452614538);
		StringU5BU5D_t1281789340* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral3452614537);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3452614537);
		StringU5BU5D_t1281789340* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral3452614552);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3452614552);
		StringU5BU5D_t1281789340* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614551);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3452614551);
		StringU5BU5D_t1281789340* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteral3452614591);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral3452614591);
		StringU5BU5D_t1281789340* L_14 = L_13;
		ArrayElementTypeCheck (L_14, _stringLiteral3452614590);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral3452614590);
		StringU5BU5D_t1281789340* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteral3452614589);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral3452614589);
		StringU5BU5D_t1281789340* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteral3452614588);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3452614588);
		StringU5BU5D_t1281789340* L_17 = L_16;
		ArrayElementTypeCheck (L_17, _stringLiteral3452614587);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral3452614587);
		StringU5BU5D_t1281789340* L_18 = L_17;
		ArrayElementTypeCheck (L_18, _stringLiteral3452614586);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral3452614586);
		__this->set_keys_9(L_18);
		Int32U5BU5D_t385246372* L_19 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		Int32U5BU5D_t385246372* L_20 = L_19;
		RuntimeFieldHandle_t1871169219  L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D0E084FFC26A48083CAF4F0C48B4F4750FD4E4CB2_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_20, L_21, /*hidden argument*/NULL);
		__this->set_values_10(L_20);
		V_0 = 0;
		goto IL_0103;
	}

IL_00c9:
	{
		Dictionary_2_t2736202052 * L_22 = __this->get_lookup_7();
		StringU5BU5D_t1281789340* L_23 = __this->get_keys_9();
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		String_t* L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		Int32U5BU5D_t385246372* L_27 = __this->get_values_10();
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		Dictionary_2_set_Item_m3800595820(L_22, L_26, L_30, /*hidden argument*/Dictionary_2_set_Item_m3800595820_RuntimeMethod_var);
		Dictionary_2_t736164020 * L_31 = __this->get_rlookup_8();
		Int32U5BU5D_t385246372* L_32 = __this->get_values_10();
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		StringU5BU5D_t1281789340* L_36 = __this->get_keys_9();
		int32_t L_37 = V_0;
		int32_t L_38 = L_37;
		String_t* L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		Dictionary_2_set_Item_m4246191156(L_31, L_35, L_39, /*hidden argument*/Dictionary_2_set_Item_m4246191156_RuntimeMethod_var);
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_0103:
	{
		int32_t L_41 = V_0;
		StringU5BU5D_t1281789340* L_42 = __this->get_keys_9();
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_42)->max_length)))))))
		{
			goto IL_00c9;
		}
	}
	{
		return;
	}
}
// System.Void MemoryCellTextController::OnIncrementValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellTextController_OnIncrementValue_m3037034012 (MemoryCellTextController_t3948011966 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_numberValue_6();
		int32_t L_1 = ___value0;
		int32_t L_2 = __this->get_range_5();
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))%(int32_t)L_2));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_range_5();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		MemoryCellTextController_SetValue_m2137140209(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MemoryCellTextController::SetText(System.String)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellTextController_SetText_m1465277909 (MemoryCellTextController_t3948011966 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellTextController_SetText_m1465277909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Dictionary_2_t2736202052 * L_0 = __this->get_lookup_7();
		String_t* L_1 = ___value0;
		int32_t L_2 = Dictionary_2_get_Item_m2904897546(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m2904897546_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_range_5();
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		__this->set_numberValue_6(L_5);
		TextMesh_t1536577757 * L_6 = __this->get_text_4();
		String_t* L_7 = ___value0;
		String_t* L_8 = String_ToUpper_m3324454496(L_7, /*hidden argument*/NULL);
		TextMesh_set_text_m446189179(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0031:
	{
		MemoryCellController_t341130527 * L_9 = Component_GetComponent_TisMemoryCellController_t341130527_m2697602882(__this, /*hidden argument*/Component_GetComponent_TisMemoryCellController_t341130527_m2697602882_RuntimeMethod_var);
		MemoryCellController_OnChange_m2113182999(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MemoryCellTextController::SetValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MemoryCellTextController_SetValue_m2137140209 (MemoryCellTextController_t3948011966 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellTextController_SetValue_m2137140209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___number0;
		int32_t L_1 = __this->get_range_5();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_2 = ___number0;
		__this->set_numberValue_6(L_2);
		TextMesh_t1536577757 * L_3 = __this->get_text_4();
		Dictionary_2_t736164020 * L_4 = __this->get_rlookup_8();
		int32_t L_5 = __this->get_numberValue_6();
		String_t* L_6 = Dictionary_2_get_Item_m98595422(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m98595422_RuntimeMethod_var);
		String_t* L_7 = String_ToUpper_m3324454496(L_6, /*hidden argument*/NULL);
		TextMesh_set_text_m446189179(L_3, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		MemoryCellController_t341130527 * L_8 = Component_GetComponent_TisMemoryCellController_t341130527_m2697602882(__this, /*hidden argument*/Component_GetComponent_TisMemoryCellController_t341130527_m2697602882_RuntimeMethod_var);
		MemoryCellController_OnChange_m2113182999(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.String MemoryCellTextController::GetText()
extern "C" IL2CPP_METHOD_ATTR String_t* MemoryCellTextController_GetText_m2250117343 (MemoryCellTextController_t3948011966 * __this, const RuntimeMethod* method)
{
	{
		TextMesh_t1536577757 * L_0 = __this->get_text_4();
		String_t* L_1 = TextMesh_get_text_m3732510240(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_ToLower_m2029374922(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 MemoryCellTextController::GetValue()
extern "C" IL2CPP_METHOD_ATTR int32_t MemoryCellTextController_GetValue_m632222587 (MemoryCellTextController_t3948011966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryCellTextController_GetValue_m632222587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2736202052 * L_0 = __this->get_lookup_7();
		String_t* L_1 = MemoryCellTextController_GetText_m2250117343(__this, /*hidden argument*/NULL);
		int32_t L_2 = Dictionary_2_get_Item_m2904897546(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m2904897546_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void MemoryCellTextController::Update()
extern "C" IL2CPP_METHOD_ATTR void MemoryCellTextController_Update_m2799477589 (MemoryCellTextController_t3948011966 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void MemoryRetriever::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MemoryRetriever__ctor_m2699429456 (MemoryRetriever_t2760707818 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MemoryRetriever::Start()
extern "C" IL2CPP_METHOD_ATTR void MemoryRetriever_Start_m2921303712 (MemoryRetriever_t2760707818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryRetriever_Start_m2921303712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MemoryRetriever_t2760707818_StaticFields*)il2cpp_codegen_static_fields_for(MemoryRetriever_t2760707818_il2cpp_TypeInfo_var))->set_instance_4(__this);
		return;
	}
}
// System.Collections.IEnumerator MemoryRetriever::NavToLocation(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MemoryRetriever_NavToLocation_m2039806366 (MemoryRetriever_t2760707818 * __this, Vector3_t3722313464  ___loc0, float ___duration1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryRetriever_NavToLocation_m2039806366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CNavToLocationU3Ec__Iterator0_t4015647092 * V_0 = NULL;
	{
		U3CNavToLocationU3Ec__Iterator0_t4015647092 * L_0 = (U3CNavToLocationU3Ec__Iterator0_t4015647092 *)il2cpp_codegen_object_new(U3CNavToLocationU3Ec__Iterator0_t4015647092_il2cpp_TypeInfo_var);
		U3CNavToLocationU3Ec__Iterator0__ctor_m3791989060(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CNavToLocationU3Ec__Iterator0_t4015647092 * L_1 = V_0;
		Vector3_t3722313464  L_2 = ___loc0;
		L_1->set_loc_6(L_2);
		U3CNavToLocationU3Ec__Iterator0_t4015647092 * L_3 = V_0;
		float L_4 = ___duration1;
		L_3->set_duration_7(L_4);
		U3CNavToLocationU3Ec__Iterator0_t4015647092 * L_5 = V_0;
		L_5->set_U24this_8(__this);
		U3CNavToLocationU3Ec__Iterator0_t4015647092 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator MemoryRetriever::ReadRegister(MemoryCellController[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MemoryRetriever_ReadRegister_m1624939673 (MemoryRetriever_t2760707818 * __this, MemoryCellControllerU5BU5D_t1776215942* ___cells0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryRetriever_ReadRegister_m1624939673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CReadRegisterU3Ec__Iterator1_t3336726364 * V_0 = NULL;
	{
		U3CReadRegisterU3Ec__Iterator1_t3336726364 * L_0 = (U3CReadRegisterU3Ec__Iterator1_t3336726364 *)il2cpp_codegen_object_new(U3CReadRegisterU3Ec__Iterator1_t3336726364_il2cpp_TypeInfo_var);
		U3CReadRegisterU3Ec__Iterator1__ctor_m4214098343(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CReadRegisterU3Ec__Iterator1_t3336726364 * L_1 = V_0;
		MemoryCellControllerU5BU5D_t1776215942* L_2 = ___cells0;
		L_1->set_cells_0(L_2);
		U3CReadRegisterU3Ec__Iterator1_t3336726364 * L_3 = V_0;
		L_3->set_U24this_4(__this);
		U3CReadRegisterU3Ec__Iterator1_t3336726364 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator MemoryRetriever::WriteRegister(MemoryCellController[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MemoryRetriever_WriteRegister_m363603130 (MemoryRetriever_t2760707818 * __this, MemoryCellControllerU5BU5D_t1776215942* ___cells0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryRetriever_WriteRegister_m363603130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWriteRegisterU3Ec__Iterator2_t4073638105 * V_0 = NULL;
	{
		U3CWriteRegisterU3Ec__Iterator2_t4073638105 * L_0 = (U3CWriteRegisterU3Ec__Iterator2_t4073638105 *)il2cpp_codegen_object_new(U3CWriteRegisterU3Ec__Iterator2_t4073638105_il2cpp_TypeInfo_var);
		U3CWriteRegisterU3Ec__Iterator2__ctor_m4292689646(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWriteRegisterU3Ec__Iterator2_t4073638105 * L_1 = V_0;
		MemoryCellControllerU5BU5D_t1776215942* L_2 = ___cells0;
		L_1->set_cells_0(L_2);
		U3CWriteRegisterU3Ec__Iterator2_t4073638105 * L_3 = V_0;
		int32_t L_4 = ___value1;
		L_3->set_value_4(L_4);
		U3CWriteRegisterU3Ec__Iterator2_t4073638105 * L_5 = V_0;
		L_5->set_U24this_7(__this);
		U3CWriteRegisterU3Ec__Iterator2_t4073638105 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator MemoryRetriever::NavToCell(MemoryCellController)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MemoryRetriever_NavToCell_m793505524 (MemoryRetriever_t2760707818 * __this, MemoryCellController_t341130527 * ___cell0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryRetriever_NavToCell_m793505524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CNavToCellU3Ec__Iterator3_t181564031 * V_0 = NULL;
	{
		U3CNavToCellU3Ec__Iterator3_t181564031 * L_0 = (U3CNavToCellU3Ec__Iterator3_t181564031 *)il2cpp_codegen_object_new(U3CNavToCellU3Ec__Iterator3_t181564031_il2cpp_TypeInfo_var);
		U3CNavToCellU3Ec__Iterator3__ctor_m3540430257(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CNavToCellU3Ec__Iterator3_t181564031 * L_1 = V_0;
		MemoryCellController_t341130527 * L_2 = ___cell0;
		L_1->set_cell_0(L_2);
		U3CNavToCellU3Ec__Iterator3_t181564031 * L_3 = V_0;
		L_3->set_U24this_1(__this);
		U3CNavToCellU3Ec__Iterator3_t181564031 * L_4 = V_0;
		return L_4;
	}
}
// System.Void MemoryRetriever::Update()
extern "C" IL2CPP_METHOD_ATTR void MemoryRetriever_Update_m1868197792 (MemoryRetriever_t2760707818 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void MemoryRetriever/<NavToCell>c__Iterator3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToCellU3Ec__Iterator3__ctor_m3540430257 (U3CNavToCellU3Ec__Iterator3_t181564031 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MemoryRetriever/<NavToCell>c__Iterator3::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CNavToCellU3Ec__Iterator3_MoveNext_m1949612875 (U3CNavToCellU3Ec__Iterator3_t181564031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNavToCellU3Ec__Iterator3_MoveNext_m1949612875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0074;
			}
			case 2:
			{
				goto IL_009d;
			}
		}
	}
	{
		goto IL_00a4;
	}

IL_0025:
	{
		MemoryRetriever_t2760707818 * L_2 = __this->get_U24this_1();
		MemoryRetriever_t2760707818 * L_3 = __this->get_U24this_1();
		MemoryCellController_t341130527 * L_4 = __this->get_cell_0();
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		GameController_t2330501625 * L_8 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_9 = L_8->get_moveSpeed_5();
		RuntimeObject* L_10 = MemoryRetriever_NavToLocation_m2039806366(L_3, L_7, L_9, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_11 = MonoBehaviour_StartCoroutine_m3411253000(L_2, L_10, /*hidden argument*/NULL);
		__this->set_U24current_2(L_11);
		bool L_12 = __this->get_U24disposing_3();
		if (L_12)
		{
			goto IL_006f;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_006f:
	{
		goto IL_00a6;
	}

IL_0074:
	{
		GameController_t2330501625 * L_13 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_14 = L_13->get_readSpeed_6();
		WaitForSeconds_t1699091251 * L_15 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_15, L_14, /*hidden argument*/NULL);
		__this->set_U24current_2(L_15);
		bool L_16 = __this->get_U24disposing_3();
		if (L_16)
		{
			goto IL_0098;
		}
	}
	{
		__this->set_U24PC_4(2);
	}

IL_0098:
	{
		goto IL_00a6;
	}

IL_009d:
	{
		__this->set_U24PC_4((-1));
	}

IL_00a4:
	{
		return (bool)0;
	}

IL_00a6:
	{
		return (bool)1;
	}
}
// System.Object MemoryRetriever/<NavToCell>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CNavToCellU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2808578315 (U3CNavToCellU3Ec__Iterator3_t181564031 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object MemoryRetriever/<NavToCell>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CNavToCellU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m3606609223 (U3CNavToCellU3Ec__Iterator3_t181564031 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void MemoryRetriever/<NavToCell>c__Iterator3::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToCellU3Ec__Iterator3_Dispose_m571773923 (U3CNavToCellU3Ec__Iterator3_t181564031 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void MemoryRetriever/<NavToCell>c__Iterator3::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToCellU3Ec__Iterator3_Reset_m1692122529 (U3CNavToCellU3Ec__Iterator3_t181564031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNavToCellU3Ec__Iterator3_Reset_m1692122529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CNavToCellU3Ec__Iterator3_Reset_m1692122529_RuntimeMethod_var);
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
// System.Void MemoryRetriever/<NavToLocation>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToLocationU3Ec__Iterator0__ctor_m3791989060 (U3CNavToLocationU3Ec__Iterator0_t4015647092 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MemoryRetriever/<NavToLocation>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CNavToLocationU3Ec__Iterator0_MoveNext_m3238083041 (U3CNavToLocationU3Ec__Iterator0_t4015647092 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNavToLocationU3Ec__Iterator0_MoveNext_m3238083041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	{
		int32_t L_0 = __this->get_U24PC_11();
		V_0 = L_0;
		__this->set_U24PC_11((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_02c4;
			}
			case 2:
			{
				goto IL_02f5;
			}
		}
	}
	{
		goto IL_02fc;
	}

IL_0025:
	{
		__this->set_U3CthresholdU3E__0_0((0.05f));
		MemoryRetriever_t2760707818 * L_2 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_3 = L_2->get_hLine_5();
		Vector3_t3722313464  L_4 = LineRenderer_GetPosition_m2445830628(L_3, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_y_1();
		__this->set_U3ChsU3E__0_1(L_5);
		MemoryRetriever_t2760707818 * L_6 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_7 = L_6->get_vLine_6();
		Vector3_t3722313464  L_8 = LineRenderer_GetPosition_m2445830628(L_7, 0, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = (&V_2)->get_x_0();
		__this->set_U3CvsU3E__0_2(L_9);
		__this->set_U3CelapsedU3E__0_3((0.0f));
		__this->set_U3ChDoneU3E__0_4((bool)0);
		__this->set_U3CvDoneU3E__0_5((bool)0);
		goto IL_02c4;
	}

IL_008c:
	{
		float L_10 = __this->get_U3CelapsedU3E__0_3();
		float L_11 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CelapsedU3E__0_3(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
		bool L_12 = __this->get_U3ChDoneU3E__0_4();
		if (L_12)
		{
			goto IL_0167;
		}
	}
	{
		float L_13 = __this->get_U3ChsU3E__0_1();
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), (0.0f), L_13, (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464 * L_15 = __this->get_address_of_loc_6();
		float L_16 = L_15->get_y_1();
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m3353183577((&L_17), (0.0f), L_16, (0.0f), /*hidden argument*/NULL);
		float L_18 = __this->get_U3CelapsedU3E__0_3();
		float L_19 = __this->get_duration_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_20 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_14, L_17, ((float)((float)L_18/(float)L_19)), /*hidden argument*/NULL);
		V_3 = L_20;
		MemoryRetriever_t2760707818 * L_21 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_22 = L_21->get_hLine_5();
		Vector3_t3722313464  L_23 = LineRenderer_GetPosition_m2445830628(L_22, 0, /*hidden argument*/NULL);
		V_4 = L_23;
		MemoryRetriever_t2760707818 * L_24 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_25 = L_24->get_hLine_5();
		float L_26 = (&V_4)->get_x_0();
		float L_27 = (&V_3)->get_y_1();
		float L_28 = (&V_4)->get_z_2();
		Vector3_t3722313464  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Vector3__ctor_m3353183577((&L_29), L_26, L_27, L_28, /*hidden argument*/NULL);
		LineRenderer_SetPosition_m2111131184(L_25, 0, L_29, /*hidden argument*/NULL);
		MemoryRetriever_t2760707818 * L_30 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_31 = L_30->get_hLine_5();
		Vector3_t3722313464  L_32 = LineRenderer_GetPosition_m2445830628(L_31, 1, /*hidden argument*/NULL);
		V_5 = L_32;
		MemoryRetriever_t2760707818 * L_33 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_34 = L_33->get_hLine_5();
		float L_35 = (&V_5)->get_x_0();
		float L_36 = (&V_3)->get_y_1();
		float L_37 = (&V_5)->get_z_2();
		Vector3_t3722313464  L_38;
		memset(&L_38, 0, sizeof(L_38));
		Vector3__ctor_m3353183577((&L_38), L_35, L_36, L_37, /*hidden argument*/NULL);
		LineRenderer_SetPosition_m2111131184(L_34, 1, L_38, /*hidden argument*/NULL);
	}

IL_0167:
	{
		bool L_39 = __this->get_U3CvDoneU3E__0_5();
		if (L_39)
		{
			goto IL_0231;
		}
	}
	{
		float L_40 = __this->get_U3CvsU3E__0_2();
		Vector3_t3722313464  L_41;
		memset(&L_41, 0, sizeof(L_41));
		Vector3__ctor_m3353183577((&L_41), L_40, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464 * L_42 = __this->get_address_of_loc_6();
		float L_43 = L_42->get_x_0();
		Vector3_t3722313464  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector3__ctor_m3353183577((&L_44), L_43, (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_45 = __this->get_U3CelapsedU3E__0_3();
		float L_46 = __this->get_duration_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_47 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_41, L_44, ((float)((float)L_45/(float)L_46)), /*hidden argument*/NULL);
		V_6 = L_47;
		MemoryRetriever_t2760707818 * L_48 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_49 = L_48->get_vLine_6();
		Vector3_t3722313464  L_50 = LineRenderer_GetPosition_m2445830628(L_49, 0, /*hidden argument*/NULL);
		V_7 = L_50;
		MemoryRetriever_t2760707818 * L_51 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_52 = L_51->get_vLine_6();
		float L_53 = (&V_6)->get_x_0();
		float L_54 = (&V_7)->get_y_1();
		float L_55 = (&V_7)->get_z_2();
		Vector3_t3722313464  L_56;
		memset(&L_56, 0, sizeof(L_56));
		Vector3__ctor_m3353183577((&L_56), L_53, L_54, L_55, /*hidden argument*/NULL);
		LineRenderer_SetPosition_m2111131184(L_52, 0, L_56, /*hidden argument*/NULL);
		MemoryRetriever_t2760707818 * L_57 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_58 = L_57->get_vLine_6();
		Vector3_t3722313464  L_59 = LineRenderer_GetPosition_m2445830628(L_58, 1, /*hidden argument*/NULL);
		V_8 = L_59;
		MemoryRetriever_t2760707818 * L_60 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_61 = L_60->get_vLine_6();
		float L_62 = (&V_6)->get_x_0();
		float L_63 = (&V_8)->get_y_1();
		float L_64 = (&V_8)->get_z_2();
		Vector3_t3722313464  L_65;
		memset(&L_65, 0, sizeof(L_65));
		Vector3__ctor_m3353183577((&L_65), L_62, L_63, L_64, /*hidden argument*/NULL);
		LineRenderer_SetPosition_m2111131184(L_61, 1, L_65, /*hidden argument*/NULL);
	}

IL_0231:
	{
		MemoryRetriever_t2760707818 * L_66 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_67 = L_66->get_hLine_5();
		Vector3_t3722313464  L_68 = LineRenderer_GetPosition_m2445830628(L_67, 0, /*hidden argument*/NULL);
		V_9 = L_68;
		float L_69 = (&V_9)->get_y_1();
		Vector3_t3722313464 * L_70 = __this->get_address_of_loc_6();
		float L_71 = L_70->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_72 = fabsf(((float)il2cpp_codegen_subtract((float)L_69, (float)L_71)));
		float L_73 = __this->get_U3CthresholdU3E__0_0();
		__this->set_U3ChDoneU3E__0_4((bool)((((int32_t)((!(((float)L_72) <= ((float)L_73)))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		MemoryRetriever_t2760707818 * L_74 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_75 = L_74->get_vLine_6();
		Vector3_t3722313464  L_76 = LineRenderer_GetPosition_m2445830628(L_75, 0, /*hidden argument*/NULL);
		V_10 = L_76;
		float L_77 = (&V_10)->get_x_0();
		Vector3_t3722313464 * L_78 = __this->get_address_of_loc_6();
		float L_79 = L_78->get_x_0();
		float L_80 = fabsf(((float)il2cpp_codegen_subtract((float)L_77, (float)L_79)));
		float L_81 = __this->get_U3CthresholdU3E__0_0();
		__this->set_U3CvDoneU3E__0_5((bool)((((int32_t)((!(((float)L_80) <= ((float)L_81)))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		__this->set_U24current_9(NULL);
		bool L_82 = __this->get_U24disposing_10();
		if (L_82)
		{
			goto IL_02bf;
		}
	}
	{
		__this->set_U24PC_11(1);
	}

IL_02bf:
	{
		goto IL_02fe;
	}

IL_02c4:
	{
		bool L_83 = __this->get_U3ChDoneU3E__0_4();
		if (!L_83)
		{
			goto IL_008c;
		}
	}
	{
		bool L_84 = __this->get_U3CvDoneU3E__0_5();
		if (!L_84)
		{
			goto IL_008c;
		}
	}
	{
		__this->set_U24current_9(NULL);
		bool L_85 = __this->get_U24disposing_10();
		if (L_85)
		{
			goto IL_02f0;
		}
	}
	{
		__this->set_U24PC_11(2);
	}

IL_02f0:
	{
		goto IL_02fe;
	}

IL_02f5:
	{
		__this->set_U24PC_11((-1));
	}

IL_02fc:
	{
		return (bool)0;
	}

IL_02fe:
	{
		return (bool)1;
	}
}
// System.Object MemoryRetriever/<NavToLocation>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CNavToLocationU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1751186916 (U3CNavToLocationU3Ec__Iterator0_t4015647092 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_9();
		return L_0;
	}
}
// System.Object MemoryRetriever/<NavToLocation>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CNavToLocationU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m977367019 (U3CNavToLocationU3Ec__Iterator0_t4015647092 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_9();
		return L_0;
	}
}
// System.Void MemoryRetriever/<NavToLocation>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToLocationU3Ec__Iterator0_Dispose_m1425707707 (U3CNavToLocationU3Ec__Iterator0_t4015647092 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_10((bool)1);
		__this->set_U24PC_11((-1));
		return;
	}
}
// System.Void MemoryRetriever/<NavToLocation>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToLocationU3Ec__Iterator0_Reset_m2368915856 (U3CNavToLocationU3Ec__Iterator0_t4015647092 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNavToLocationU3Ec__Iterator0_Reset_m2368915856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CNavToLocationU3Ec__Iterator0_Reset_m2368915856_RuntimeMethod_var);
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
// System.Void MemoryRetriever/<ReadRegister>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CReadRegisterU3Ec__Iterator1__ctor_m4214098343 (U3CReadRegisterU3Ec__Iterator1_t3336726364 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MemoryRetriever/<ReadRegister>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CReadRegisterU3Ec__Iterator1_MoveNext_m2796807338 (U3CReadRegisterU3Ec__Iterator1_t3336726364 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReadRegisterU3Ec__Iterator1_MoveNext_m2796807338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_009f;
			}
			case 2:
			{
				goto IL_00ee;
			}
		}
	}
	{
		goto IL_0116;
	}

IL_0025:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_2 = __this->get_cells_0();
		__this->set_U24locvar0_1(L_2);
		__this->set_U24locvar1_2(0);
		goto IL_00fc;
	}

IL_003d:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_3 = __this->get_U24locvar0_1();
		int32_t L_4 = __this->get_U24locvar1_2();
		int32_t L_5 = L_4;
		MemoryCellController_t341130527 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		__this->set_U3CcellU3E__1_3(L_6);
		MemoryRetriever_t2760707818 * L_7 = __this->get_U24this_4();
		MemoryRetriever_t2760707818 * L_8 = __this->get_U24this_4();
		MemoryCellController_t341130527 * L_9 = __this->get_U3CcellU3E__1_3();
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		GameController_t2330501625 * L_13 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_14 = L_13->get_readSpeed_6();
		RuntimeObject* L_15 = MemoryRetriever_NavToLocation_m2039806366(L_8, L_12, L_14, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_16 = MonoBehaviour_StartCoroutine_m3411253000(L_7, L_15, /*hidden argument*/NULL);
		__this->set_U24current_5(L_16);
		bool L_17 = __this->get_U24disposing_6();
		if (L_17)
		{
			goto IL_009a;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_009a:
	{
		goto IL_0118;
	}

IL_009f:
	{
		MemoryRetriever_t2760707818 * L_18 = __this->get_U24this_4();
		GameObject_t1113636619 * L_19 = L_18->get_whiteFlash_7();
		MemoryCellController_t341130527 * L_20 = __this->get_U3CcellU3E__1_3();
		Transform_t3600365921 * L_21 = Component_get_transform_m3162698980(L_20, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = Transform_get_position_m36019626(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_23 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_19, L_22, L_23, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		GameController_t2330501625 * L_24 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_25 = L_24->get_readSpeed_6();
		WaitForSeconds_t1699091251 * L_26 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_26, L_25, /*hidden argument*/NULL);
		__this->set_U24current_5(L_26);
		bool L_27 = __this->get_U24disposing_6();
		if (L_27)
		{
			goto IL_00e9;
		}
	}
	{
		__this->set_U24PC_7(2);
	}

IL_00e9:
	{
		goto IL_0118;
	}

IL_00ee:
	{
		int32_t L_28 = __this->get_U24locvar1_2();
		__this->set_U24locvar1_2(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
	}

IL_00fc:
	{
		int32_t L_29 = __this->get_U24locvar1_2();
		MemoryCellControllerU5BU5D_t1776215942* L_30 = __this->get_U24locvar0_1();
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_003d;
		}
	}
	{
		__this->set_U24PC_7((-1));
	}

IL_0116:
	{
		return (bool)0;
	}

IL_0118:
	{
		return (bool)1;
	}
}
// System.Object MemoryRetriever/<ReadRegister>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CReadRegisterU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3114616790 (U3CReadRegisterU3Ec__Iterator1_t3336726364 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object MemoryRetriever/<ReadRegister>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CReadRegisterU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3582370533 (U3CReadRegisterU3Ec__Iterator1_t3336726364 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void MemoryRetriever/<ReadRegister>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CReadRegisterU3Ec__Iterator1_Dispose_m925926503 (U3CReadRegisterU3Ec__Iterator1_t3336726364 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		return;
	}
}
// System.Void MemoryRetriever/<ReadRegister>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CReadRegisterU3Ec__Iterator1_Reset_m1240346802 (U3CReadRegisterU3Ec__Iterator1_t3336726364 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReadRegisterU3Ec__Iterator1_Reset_m1240346802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CReadRegisterU3Ec__Iterator1_Reset_m1240346802_RuntimeMethod_var);
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
// System.Void MemoryRetriever/<WriteRegister>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWriteRegisterU3Ec__Iterator2__ctor_m4292689646 (U3CWriteRegisterU3Ec__Iterator2_t4073638105 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MemoryRetriever/<WriteRegister>c__Iterator2::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CWriteRegisterU3Ec__Iterator2_MoveNext_m283940854 (U3CWriteRegisterU3Ec__Iterator2_t4073638105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWriteRegisterU3Ec__Iterator2_MoveNext_m283940854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_10();
		V_0 = L_0;
		__this->set_U24PC_10((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_00ed;
			}
			case 2:
			{
				goto IL_014d;
			}
		}
	}
	{
		goto IL_0173;
	}

IL_0025:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_2 = __this->get_cells_0();
		__this->set_U3CpacketsU3E__0_1((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
		int32_t L_3 = __this->get_U3CpacketsU3E__0_1();
		__this->set_U3CmaskU3E__0_2(((int32_t)((int32_t)((int32_t)15)<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1))))&(int32_t)((int32_t)31))))));
		__this->set_U3CpU3E__1_3(0);
		goto IL_015b;
	}

IL_0055:
	{
		int32_t L_4 = __this->get_U3CmaskU3E__0_2();
		int32_t L_5 = __this->get_value_4();
		int32_t L_6 = __this->get_U3CpacketsU3E__0_1();
		int32_t L_7 = __this->get_U3CpU3E__1_3();
		__this->set_U3CvU3E__2_5(((int32_t)((int32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))>>(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), (int32_t)1))))&(int32_t)((int32_t)31))))));
		int32_t L_8 = __this->get_U3CmaskU3E__0_2();
		__this->set_U3CmaskU3E__0_2(((int32_t)((int32_t)L_8>>(int32_t)4)));
		MemoryCellControllerU5BU5D_t1776215942* L_9 = __this->get_cells_0();
		int32_t L_10 = __this->get_U3CpU3E__1_3();
		int32_t L_11 = L_10;
		MemoryCellController_t341130527 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		__this->set_U3CcellU3E__2_6(L_12);
		MemoryRetriever_t2760707818 * L_13 = __this->get_U24this_7();
		MemoryRetriever_t2760707818 * L_14 = __this->get_U24this_7();
		MemoryCellController_t341130527 * L_15 = __this->get_U3CcellU3E__2_6();
		GameObject_t1113636619 * L_16 = Component_get_gameObject_m442555142(L_15, /*hidden argument*/NULL);
		Transform_t3600365921 * L_17 = GameObject_get_transform_m1369836730(L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Transform_get_position_m36019626(L_17, /*hidden argument*/NULL);
		GameController_t2330501625 * L_19 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_20 = L_19->get_readSpeed_6();
		RuntimeObject* L_21 = MemoryRetriever_NavToLocation_m2039806366(L_14, L_18, L_20, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_22 = MonoBehaviour_StartCoroutine_m3411253000(L_13, L_21, /*hidden argument*/NULL);
		__this->set_U24current_8(L_22);
		bool L_23 = __this->get_U24disposing_9();
		if (L_23)
		{
			goto IL_00e8;
		}
	}
	{
		__this->set_U24PC_10(1);
	}

IL_00e8:
	{
		goto IL_0175;
	}

IL_00ed:
	{
		MemoryRetriever_t2760707818 * L_24 = __this->get_U24this_7();
		GameObject_t1113636619 * L_25 = L_24->get_whiteFlash_7();
		MemoryCellController_t341130527 * L_26 = __this->get_U3CcellU3E__2_6();
		Transform_t3600365921 * L_27 = Component_get_transform_m3162698980(L_26, /*hidden argument*/NULL);
		Vector3_t3722313464  L_28 = Transform_get_position_m36019626(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_29 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_25, L_28, L_29, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		MemoryCellController_t341130527 * L_30 = __this->get_U3CcellU3E__2_6();
		int32_t L_31 = __this->get_U3CvU3E__2_5();
		MemoryCellController_SetValue_m3908445948(L_30, L_31, /*hidden argument*/NULL);
		GameController_t2330501625 * L_32 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_33 = L_32->get_readSpeed_6();
		WaitForSeconds_t1699091251 * L_34 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_34, L_33, /*hidden argument*/NULL);
		__this->set_U24current_8(L_34);
		bool L_35 = __this->get_U24disposing_9();
		if (L_35)
		{
			goto IL_0148;
		}
	}
	{
		__this->set_U24PC_10(2);
	}

IL_0148:
	{
		goto IL_0175;
	}

IL_014d:
	{
		int32_t L_36 = __this->get_U3CpU3E__1_3();
		__this->set_U3CpU3E__1_3(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
	}

IL_015b:
	{
		int32_t L_37 = __this->get_U3CpU3E__1_3();
		int32_t L_38 = __this->get_U3CpacketsU3E__0_1();
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0055;
		}
	}
	{
		__this->set_U24PC_10((-1));
	}

IL_0173:
	{
		return (bool)0;
	}

IL_0175:
	{
		return (bool)1;
	}
}
// System.Object MemoryRetriever/<WriteRegister>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWriteRegisterU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3243820213 (U3CWriteRegisterU3Ec__Iterator2_t4073638105 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_8();
		return L_0;
	}
}
// System.Object MemoryRetriever/<WriteRegister>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWriteRegisterU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m3602421452 (U3CWriteRegisterU3Ec__Iterator2_t4073638105 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_8();
		return L_0;
	}
}
// System.Void MemoryRetriever/<WriteRegister>c__Iterator2::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CWriteRegisterU3Ec__Iterator2_Dispose_m2835245146 (U3CWriteRegisterU3Ec__Iterator2_t4073638105 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_9((bool)1);
		__this->set_U24PC_10((-1));
		return;
	}
}
// System.Void MemoryRetriever/<WriteRegister>c__Iterator2::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CWriteRegisterU3Ec__Iterator2_Reset_m1422638738 (U3CWriteRegisterU3Ec__Iterator2_t4073638105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWriteRegisterU3Ec__Iterator2_Reset_m1422638738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CWriteRegisterU3Ec__Iterator2_Reset_m1422638738_RuntimeMethod_var);
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
// System.Void MoneyController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MoneyController__ctor_m2866502500 (MoneyController_t851075799 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currentMoney_8((100.0f));
		__this->set_readAmount_9((5.2f));
		__this->set_successAmount_10((36.15f));
		__this->set_factor_11((1.2f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyController::Start()
extern "C" IL2CPP_METHOD_ATTR void MoneyController_Start_m684390902 (MoneyController_t851075799 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoneyController_Start_m684390902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MoneyController_t851075799_StaticFields*)il2cpp_codegen_static_fields_for(MoneyController_t851075799_il2cpp_TypeInfo_var))->set_instance_4(__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyController::SetMoney(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MoneyController_SetMoney_m3460632506 (MoneyController_t851075799 * __this, float ___money0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoneyController_SetMoney_m3460632506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		float L_0 = ___money0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		TextMesh_t1536577757 * L_1 = __this->get_text_5();
		Vector4_t3319028937  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector4__ctor_m2498754347((&L_2), (0.7176471f), (0.219607845f), (0.184313729f), (1.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_3 = Color_op_Implicit_m2665280078(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		TextMesh_set_color_m1285272663(L_1, L_3, /*hidden argument*/NULL);
		float L_4 = ___money0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = bankers_roundf(((float)il2cpp_codegen_multiply((float)L_4, (float)(100.0f))));
		float L_6 = ((float)((float)((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_5))/(float)(100.0f)));
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral718504107, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		TextMesh_t1536577757 * L_9 = __this->get_text_5();
		String_t* L_10 = V_0;
		String_t* L_11 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3450255240, L_10, _stringLiteral3452614535, /*hidden argument*/NULL);
		TextMesh_set_text_m446189179(L_9, L_11, /*hidden argument*/NULL);
		goto IL_00dd;
	}

IL_007c:
	{
		TextMesh_t1536577757 * L_12 = __this->get_text_5();
		Vector4_t3319028937  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector4__ctor_m2498754347((&L_13), (0.184313729f), (0.7176471f), (0.3137255f), (1.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_14 = Color_op_Implicit_m2665280078(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		TextMesh_set_color_m1285272663(L_12, L_14, /*hidden argument*/NULL);
		float L_15 = ___money0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_16 = bankers_roundf(((float)il2cpp_codegen_multiply((float)L_15, (float)(100.0f))));
		float L_17 = ((float)((float)L_16/(float)(100.0f)));
		RuntimeObject * L_18 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral718504107, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		TextMesh_t1536577757 * L_20 = __this->get_text_5();
		String_t* L_21 = V_1;
		String_t* L_22 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614524, L_21, /*hidden argument*/NULL);
		TextMesh_set_text_m446189179(L_20, L_22, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		return;
	}
}
// System.Single MoneyController::GetValue()
extern "C" IL2CPP_METHOD_ATTR float MoneyController_GetValue_m4147633666 (MoneyController_t851075799 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_currentMoney_8();
		return L_0;
	}
}
// System.Void MoneyController::NegativeChange()
extern "C" IL2CPP_METHOD_ATTR void MoneyController_NegativeChange_m3064309921 (MoneyController_t851075799 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoneyController_NegativeChange_m3064309921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParticleSystem_t1800779281 * L_0 = __this->get_badParticleSystem_7();
		ParticleSystem_Stop_m3125854227(L_0, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_1 = __this->get_badParticleSystem_7();
		ParticleSystem_Play_m882713458(L_1, /*hidden argument*/NULL);
		MyAudioController_t2840361766 * L_2 = ((MyAudioController_t2840361766_StaticFields*)il2cpp_codegen_static_fields_for(MyAudioController_t2840361766_il2cpp_TypeInfo_var))->get_instance_4();
		MyAudioController_PlayAudio_m852245086(L_2, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyController::PositiveChange()
extern "C" IL2CPP_METHOD_ATTR void MoneyController_PositiveChange_m1536743399 (MoneyController_t851075799 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoneyController_PositiveChange_m1536743399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParticleSystem_t1800779281 * L_0 = __this->get_goodParticleSystem_6();
		ParticleSystem_Stop_m3125854227(L_0, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_1 = __this->get_goodParticleSystem_6();
		ParticleSystem_Play_m882713458(L_1, /*hidden argument*/NULL);
		MyAudioController_t2840361766 * L_2 = ((MyAudioController_t2840361766_StaticFields*)il2cpp_codegen_static_fields_for(MyAudioController_t2840361766_il2cpp_TypeInfo_var))->get_instance_4();
		MyAudioController_PlayAudio_m852245086(L_2, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyController::OnChangeRequest(TransactionType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MoneyController_OnChangeRequest_m784516296 (MoneyController_t851075799 * __this, int32_t ___type0, int32_t ___numberCells1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoneyController_OnChangeRequest_m784516296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___type0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_2 = ___numberCells1;
		float L_3 = __this->get_readAmount_9();
		MoneyController_ChangeMoney_m1476776209(__this, ((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)(-1), (int32_t)L_2))))), (float)L_3)), /*hidden argument*/NULL);
		goto IL_0049;
	}

IL_0023:
	{
		int32_t L_4 = ___type0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_5 = ___numberCells1;
		float L_6 = __this->get_successAmount_10();
		float L_7 = __this->get_factor_11();
		int32_t L_8 = ___numberCells1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = powf(L_7, (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1))))));
		MoneyController_ChangeMoney_m1476776209(__this, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_5))), (float)L_6)), (float)L_9)), /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Void MoneyController::ChangeMoney(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MoneyController_ChangeMoney_m1476776209 (MoneyController_t851075799 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoneyController_ChangeMoney_m1476776209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0016;
		}
	}
	{
		MoneyController_NegativeChange_m3064309921(__this, /*hidden argument*/NULL);
		goto IL_001c;
	}

IL_0016:
	{
		MoneyController_PositiveChange_m1536743399(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		float L_1 = __this->get_currentMoney_8();
		float L_2 = ___value0;
		__this->set_currentMoney_8(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		float L_3 = __this->get_currentMoney_8();
		MoneyController_SetMoney_m3460632506(__this, L_3, /*hidden argument*/NULL);
		HaltButtonController_t306459615 * L_4 = ((HaltButtonController_t306459615_StaticFields*)il2cpp_codegen_static_fields_for(HaltButtonController_t306459615_il2cpp_TypeInfo_var))->get_instance_4();
		float L_5 = __this->get_currentMoney_8();
		HaltButtonController_ShowPrice_m2029584194(L_4, (bool)((((float)L_5) > ((float)(0.0f)))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyController::ResetMoney()
extern "C" IL2CPP_METHOD_ATTR void MoneyController_ResetMoney_m208388443 (MoneyController_t851075799 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoneyController_ResetMoney_m208388443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_currentMoney_8((100.0f));
		float L_0 = __this->get_currentMoney_8();
		MoneyController_SetMoney_m3460632506(__this, L_0, /*hidden argument*/NULL);
		HaltButtonController_t306459615 * L_1 = ((HaltButtonController_t306459615_StaticFields*)il2cpp_codegen_static_fields_for(HaltButtonController_t306459615_il2cpp_TypeInfo_var))->get_instance_4();
		HaltButtonController_ShowPrice_m2029584194(L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyController::HaltRequest()
extern "C" IL2CPP_METHOD_ATTR void MoneyController_HaltRequest_m2586438083 (MoneyController_t851075799 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_currentMoney_8();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = __this->get_currentMoney_8();
		MoneyController_ChangeMoney_m1476776209(__this, ((float)il2cpp_codegen_multiply((float)(-0.1f), (float)L_1)), /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void MoneyController::Update()
extern "C" IL2CPP_METHOD_ATTR void MoneyController_Update_m3117138827 (MoneyController_t851075799 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void MouseColliderController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MouseColliderController__ctor_m1705002459 (MouseColliderController_t664166756 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseColliderController::Start()
extern "C" IL2CPP_METHOD_ATTR void MouseColliderController_Start_m3100501061 (MouseColliderController_t664166756 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MouseColliderController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void MouseColliderController_OnTriggerEnter2D_m3456761160 (MouseColliderController_t664166756 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseColliderController_OnTriggerEnter2D_m3456761160_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___collision0;
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral3120702562, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		Collider2D_t2806799626 * L_3 = ___collision0;
		String_t* L_4 = Component_get_tag_m2716693327(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, _stringLiteral355311145, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00a2;
		}
	}

IL_002a:
	{
		GameController_t2330501625 * L_6 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		bool L_7 = L_6->get_isRunning_8();
		if (L_7)
		{
			goto IL_0073;
		}
	}
	{
		Collider2D_t2806799626 * L_8 = ___collision0;
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
		MemoryCellController_t341130527 * L_10 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_9, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		bool L_11 = MemoryCellController_IsLocked_m3584109461(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0073;
		}
	}
	{
		Collider2D_t2806799626 * L_12 = ___collision0;
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
		RuntimeObject* L_14 = GameObject_GetComponent_TisISelectable_t4034466499_m4123480996(L_13, /*hidden argument*/GameObject_GetComponent_TisISelectable_t4034466499_m4123480996_RuntimeMethod_var);
		InterfaceActionInvoker0::Invoke(0 /* System.Void ISelectable::OnHoverOver() */, ISelectable_t4034466499_il2cpp_TypeInfo_var, L_14);
		GameController_t2330501625 * L_15 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		Collider2D_t2806799626 * L_16 = ___collision0;
		GameObject_t1113636619 * L_17 = Component_get_gameObject_m442555142(L_16, /*hidden argument*/NULL);
		GameController_OnHoverChange_m1353772088(L_15, L_17, /*hidden argument*/NULL);
		goto IL_00a2;
	}

IL_0073:
	{
		Collider2D_t2806799626 * L_18 = ___collision0;
		GameObject_t1113636619 * L_19 = Component_get_gameObject_m442555142(L_18, /*hidden argument*/NULL);
		MemoryCellController_t341130527 * L_20 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_19, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		bool L_21 = MemoryCellController_IsLocked_m3584109461(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00a2;
		}
	}
	{
		HoverController_t423031069 * L_22 = ((HoverController_t423031069_StaticFields*)il2cpp_codegen_static_fields_for(HoverController_t423031069_il2cpp_TypeInfo_var))->get_instance_4();
		Collider2D_t2806799626 * L_23 = ___collision0;
		GameObject_t1113636619 * L_24 = Component_get_gameObject_m442555142(L_23, /*hidden argument*/NULL);
		MemoryCellController_t341130527 * L_25 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_24, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		int32_t L_26 = L_25->get_gridNumber_7();
		HoverController_SetValue_m2464880987(L_22, L_26, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		Collider2D_t2806799626 * L_27 = ___collision0;
		String_t* L_28 = Component_get_tag_m2716693327(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m920492651(NULL /*static, unused*/, L_28, _stringLiteral1208991571, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00d7;
		}
	}
	{
		Collider2D_t2806799626 * L_30 = ___collision0;
		GameObject_t1113636619 * L_31 = Component_get_gameObject_m442555142(L_30, /*hidden argument*/NULL);
		Transform_t3600365921 * L_32 = GameObject_get_transform_m1369836730(L_31, /*hidden argument*/NULL);
		Transform_t3600365921 * L_33 = Transform_get_parent_m835071599(L_32, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_34 = Component_get_gameObject_m442555142(L_33, /*hidden argument*/NULL);
		RuntimeObject* L_35 = GameObject_GetComponent_TisIButton_t407737688_m276308076(L_34, /*hidden argument*/GameObject_GetComponent_TisIButton_t407737688_m276308076_RuntimeMethod_var);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void IButton::SetBackgroundActive(System.Boolean) */, IButton_t407737688_il2cpp_TypeInfo_var, L_35, (bool)1);
	}

IL_00d7:
	{
		return;
	}
}
// System.Void MouseColliderController::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void MouseColliderController_OnTriggerExit2D_m3702676283 (MouseColliderController_t664166756 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseColliderController_OnTriggerExit2D_m3702676283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___collision0;
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral3120702562, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		Collider2D_t2806799626 * L_3 = ___collision0;
		String_t* L_4 = Component_get_tag_m2716693327(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, _stringLiteral355311145, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0069;
		}
	}

IL_002a:
	{
		GameController_t2330501625 * L_6 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		bool L_7 = L_6->get_isRunning_8();
		if (L_7)
		{
			goto IL_0069;
		}
	}
	{
		Collider2D_t2806799626 * L_8 = ___collision0;
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
		MemoryCellController_t341130527 * L_10 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_9, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		bool L_11 = MemoryCellController_IsLocked_m3584109461(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0069;
		}
	}
	{
		Collider2D_t2806799626 * L_12 = ___collision0;
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
		RuntimeObject* L_14 = GameObject_GetComponent_TisISelectable_t4034466499_m4123480996(L_13, /*hidden argument*/GameObject_GetComponent_TisISelectable_t4034466499_m4123480996_RuntimeMethod_var);
		InterfaceActionInvoker0::Invoke(1 /* System.Void ISelectable::OnHoverOut() */, ISelectable_t4034466499_il2cpp_TypeInfo_var, L_14);
		GameController_t2330501625 * L_15 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		GameController_OnHoverChange_m1353772088(L_15, (GameObject_t1113636619 *)NULL, /*hidden argument*/NULL);
	}

IL_0069:
	{
		Collider2D_t2806799626 * L_16 = ___collision0;
		String_t* L_17 = Component_get_tag_m2716693327(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_op_Equality_m920492651(NULL /*static, unused*/, L_17, _stringLiteral1208991571, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_009e;
		}
	}
	{
		Collider2D_t2806799626 * L_19 = ___collision0;
		GameObject_t1113636619 * L_20 = Component_get_gameObject_m442555142(L_19, /*hidden argument*/NULL);
		Transform_t3600365921 * L_21 = GameObject_get_transform_m1369836730(L_20, /*hidden argument*/NULL);
		Transform_t3600365921 * L_22 = Transform_get_parent_m835071599(L_21, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_23 = Component_get_gameObject_m442555142(L_22, /*hidden argument*/NULL);
		RuntimeObject* L_24 = GameObject_GetComponent_TisIButton_t407737688_m276308076(L_23, /*hidden argument*/GameObject_GetComponent_TisIButton_t407737688_m276308076_RuntimeMethod_var);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void IButton::SetBackgroundActive(System.Boolean) */, IButton_t407737688_il2cpp_TypeInfo_var, L_24, (bool)0);
	}

IL_009e:
	{
		return;
	}
}
// System.Void MouseColliderController::Update()
extern "C" IL2CPP_METHOD_ATTR void MouseColliderController_Update_m2479612976 (MouseColliderController_t664166756 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseColliderController_Update_m2479612976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Camera_ScreenToWorldPoint_m3978588570(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		(&V_0)->set_z_2((0.0f));
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = V_0;
		Transform_set_position_m3387557959(L_3, L_4, /*hidden argument*/NULL);
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
// System.Void MouseLight::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MouseLight__ctor_m1519689875 (MouseLight_t1369392169 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseLight::Start()
extern "C" IL2CPP_METHOD_ATTR void MouseLight_Start_m4062170681 (MouseLight_t1369392169 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MouseLight::Update()
extern "C" IL2CPP_METHOD_ATTR void MouseLight_Update_m1617277733 (MouseLight_t1369392169 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseLight_Update_m1617277733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Camera_ScreenToWorldPoint_m3978588570(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_z_2();
		(&V_0)->set_z_2(L_5);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = V_0;
		Transform_set_position_m3387557959(L_6, L_7, /*hidden argument*/NULL);
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
// System.Void MyAudioController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MyAudioController__ctor_m724227962 (MyAudioController_t2840361766 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MyAudioController::Start()
extern "C" IL2CPP_METHOD_ATTR void MyAudioController_Start_m416947410 (MyAudioController_t2840361766 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyAudioController_Start_m416947410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MyAudioController_t2840361766_StaticFields*)il2cpp_codegen_static_fields_for(MyAudioController_t2840361766_il2cpp_TypeInfo_var))->set_instance_4(__this);
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_source_13(L_0);
		Dictionary_2_t336392811 * L_1 = (Dictionary_2_t336392811 *)il2cpp_codegen_object_new(Dictionary_2_t336392811_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m528326273(L_1, /*hidden argument*/Dictionary_2__ctor_m528326273_RuntimeMethod_var);
		__this->set_lookup_12(L_1);
		Dictionary_2_t336392811 * L_2 = __this->get_lookup_12();
		AudioClip_t3680889665 * L_3 = __this->get_Cash_Positive_5();
		Dictionary_2_Add_m2711931129(L_2, 0, L_3, /*hidden argument*/Dictionary_2_Add_m2711931129_RuntimeMethod_var);
		Dictionary_2_t336392811 * L_4 = __this->get_lookup_12();
		AudioClip_t3680889665 * L_5 = __this->get_Cash_Negative_6();
		Dictionary_2_Add_m2711931129(L_4, 1, L_5, /*hidden argument*/Dictionary_2_Add_m2711931129_RuntimeMethod_var);
		Dictionary_2_t336392811 * L_6 = __this->get_lookup_12();
		AudioClip_t3680889665 * L_7 = __this->get_Halt_7();
		Dictionary_2_Add_m2711931129(L_6, 2, L_7, /*hidden argument*/Dictionary_2_Add_m2711931129_RuntimeMethod_var);
		Dictionary_2_t336392811 * L_8 = __this->get_lookup_12();
		AudioClip_t3680889665 * L_9 = __this->get_End_8();
		Dictionary_2_Add_m2711931129(L_8, 3, L_9, /*hidden argument*/Dictionary_2_Add_m2711931129_RuntimeMethod_var);
		Dictionary_2_t336392811 * L_10 = __this->get_lookup_12();
		AudioClip_t3680889665 * L_11 = __this->get_Tock_9();
		Dictionary_2_Add_m2711931129(L_10, 4, L_11, /*hidden argument*/Dictionary_2_Add_m2711931129_RuntimeMethod_var);
		Dictionary_2_t336392811 * L_12 = __this->get_lookup_12();
		AudioClip_t3680889665 * L_13 = __this->get_Start_Game_10();
		Dictionary_2_Add_m2711931129(L_12, 5, L_13, /*hidden argument*/Dictionary_2_Add_m2711931129_RuntimeMethod_var);
		Dictionary_2_t336392811 * L_14 = __this->get_lookup_12();
		AudioClip_t3680889665 * L_15 = __this->get_Nav_11();
		Dictionary_2_Add_m2711931129(L_14, 6, L_15, /*hidden argument*/Dictionary_2_Add_m2711931129_RuntimeMethod_var);
		return;
	}
}
// System.Void MyAudioController::PlayAudio(AudioType)
extern "C" IL2CPP_METHOD_ATTR void MyAudioController_PlayAudio_m852245086 (MyAudioController_t2840361766 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyAudioController_PlayAudio_m852245086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = __this->get_source_13();
		bool L_1 = AudioSource_get_isPlaying_m1896551654(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		AudioSource_t3935305588 * L_2 = __this->get_source_13();
		Dictionary_2_t336392811 * L_3 = __this->get_lookup_12();
		int32_t L_4 = ___type0;
		AudioClip_t3680889665 * L_5 = Dictionary_2_get_Item_m3988276343(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m3988276343_RuntimeMethod_var);
		AudioSource_set_clip_m31653938(L_2, L_5, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_6 = __this->get_source_13();
		AudioSource_Play_m48294159(L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
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
// System.Void NumericalPreview::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NumericalPreview__ctor_m711751241 (NumericalPreview_t136486070 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumericalPreview::Start()
extern "C" IL2CPP_METHOD_ATTR void NumericalPreview_Start_m3762534905 (NumericalPreview_t136486070 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NumericalPreview_Start_m3762534905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryCellController_t341130527 * V_0 = NULL;
	MemoryCellControllerU5BU5D_t1776215942* V_1 = NULL;
	int32_t V_2 = 0;
	{
		TextMesh_t1536577757 * L_0 = Component_GetComponent_TisTextMesh_t1536577757_m1070281259(__this, /*hidden argument*/Component_GetComponent_TisTextMesh_t1536577757_m1070281259_RuntimeMethod_var);
		__this->set_text_5(L_0);
		StringU5BU5D_t1281789340* L_1 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t1281789340* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteral3452614544);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614544);
		StringU5BU5D_t1281789340* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral3452614543);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614542);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral3452614541);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3452614541);
		StringU5BU5D_t1281789340* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral3452614540);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614540);
		StringU5BU5D_t1281789340* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral3452614539);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3452614539);
		StringU5BU5D_t1281789340* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614538);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3452614538);
		StringU5BU5D_t1281789340* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral3452614537);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3452614537);
		StringU5BU5D_t1281789340* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral3452614552);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3452614552);
		StringU5BU5D_t1281789340* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral3452614551);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3452614551);
		StringU5BU5D_t1281789340* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614591);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral3452614591);
		StringU5BU5D_t1281789340* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteral3452614590);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral3452614590);
		StringU5BU5D_t1281789340* L_14 = L_13;
		ArrayElementTypeCheck (L_14, _stringLiteral3452614589);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral3452614589);
		StringU5BU5D_t1281789340* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteral3452614588);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3452614588);
		StringU5BU5D_t1281789340* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteral3452614587);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral3452614587);
		StringU5BU5D_t1281789340* L_17 = L_16;
		ArrayElementTypeCheck (L_17, _stringLiteral3452614586);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral3452614586);
		__this->set_hex_6(L_17);
		MemoryCellControllerU5BU5D_t1776215942* L_18 = __this->get_cells_4();
		V_1 = L_18;
		V_2 = 0;
		goto IL_00bd;
	}

IL_00ae:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_19 = V_1;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		MemoryCellController_t341130527 * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = L_22;
		MemoryCellController_t341130527 * L_23 = V_0;
		MemoryCellController_AddListener_m3359123159(L_23, __this, /*hidden argument*/NULL);
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00bd:
	{
		int32_t L_25 = V_2;
		MemoryCellControllerU5BU5D_t1776215942* L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_00ae;
		}
	}
	{
		return;
	}
}
// System.Void NumericalPreview::OnChange()
extern "C" IL2CPP_METHOD_ATTR void NumericalPreview_OnChange_m4171116027 (NumericalPreview_t136486070 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NumericalPreview_OnChange_m4171116027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		GameController_t2330501625 * L_0 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		MemoryCellControllerU5BU5D_t1776215942* L_1 = __this->get_cells_4();
		int32_t L_2 = GameController_CellsToInteger_m1331874051(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t1281789340* L_3 = __this->get_hex_6();
		int32_t L_4 = V_0;
		int32_t L_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)240)&(int32_t)L_4))>>(int32_t)4));
		String_t* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		String_t* L_7 = String_ToUpper_m3324454496(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		StringU5BU5D_t1281789340* L_8 = __this->get_hex_6();
		int32_t L_9 = V_0;
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)15)&(int32_t)L_9));
		String_t* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		String_t* L_12 = String_ToUpper_m3324454496(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14^(int32_t)((int32_t)255)));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)(-1)));
	}

IL_0050:
	{
		TextMesh_t1536577757 * L_17 = __this->get_text_5();
		StringU5BU5D_t1281789340* L_18 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t1281789340* L_19 = L_18;
		ArrayElementTypeCheck (L_19, _stringLiteral3456284560);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3456284560);
		StringU5BU5D_t1281789340* L_20 = L_19;
		String_t* L_21 = V_1;
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_21);
		StringU5BU5D_t1281789340* L_22 = L_20;
		String_t* L_23 = V_2;
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_23);
		StringU5BU5D_t1281789340* L_24 = L_22;
		ArrayElementTypeCheck (L_24, _stringLiteral3451041664);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3451041664);
		StringU5BU5D_t1281789340* L_25 = L_24;
		String_t* L_26 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_26);
		StringU5BU5D_t1281789340* L_27 = L_25;
		ArrayElementTypeCheck (L_27, _stringLiteral3452614535);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m1809518182(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		TextMesh_set_text_m446189179(L_17, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumericalPreview::Update()
extern "C" IL2CPP_METHOD_ATTR void NumericalPreview_Update_m4188469239 (NumericalPreview_t136486070 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void RandomButtonController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RandomButtonController__ctor_m2095109628 (RandomButtonController_t2952941430 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RandomButtonController::Start()
extern "C" IL2CPP_METHOD_ATTR void RandomButtonController_Start_m2170053092 (RandomButtonController_t2952941430 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RandomButtonController_Start_m2170053092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((RandomButtonController_t2952941430_StaticFields*)il2cpp_codegen_static_fields_for(RandomButtonController_t2952941430_il2cpp_TypeInfo_var))->set_instance_4(__this);
		return;
	}
}
// System.Void RandomButtonController::SetBackgroundActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RandomButtonController_SetBackgroundActive_m4292742529 (RandomButtonController_t2952941430 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_1 = __this->get_background_6();
		Color_t2555686324  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Color__ctor_m2943235014((&L_2), (1.0f), (1.0f), (1.0f), (0.5882353f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_1, L_2, /*hidden argument*/NULL);
		__this->set_hover_7((bool)1);
		goto IL_0061;
	}

IL_0036:
	{
		SpriteRenderer_t3235626157 * L_3 = __this->get_background_6();
		Color_t2555686324  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Color__ctor_m2943235014((&L_4), (1.0f), (1.0f), (1.0f), (0.196078435f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_3, L_4, /*hidden argument*/NULL);
		__this->set_hover_7((bool)0);
	}

IL_0061:
	{
		return;
	}
}
// System.Void RandomButtonController::OnClick()
extern "C" IL2CPP_METHOD_ATTR void RandomButtonController_OnClick_m3198826867 (RandomButtonController_t2952941430 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RandomButtonController_OnClick_m3198826867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_hover_7();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		GameController_t2330501625 * L_1 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		GameController_OnRandomButtonPress_m2916944372(L_1, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void RandomButtonController::Update()
extern "C" IL2CPP_METHOD_ATTR void RandomButtonController_Update_m358209050 (RandomButtonController_t2952941430 * __this, const RuntimeMethod* method)
{
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RegisterController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RegisterController__ctor_m840233314 (RegisterController_t92122650 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RegisterController::Start()
extern "C" IL2CPP_METHOD_ATTR void RegisterController_Start_m1772117868 (RegisterController_t92122650 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegisterController_Start_m1772117868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->set_instance_4(__this);
		Dictionary_2_t2269235889 * L_0 = (Dictionary_2_t2269235889 *)il2cpp_codegen_object_new(Dictionary_2_t2269235889_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1349605170(L_0, /*hidden argument*/Dictionary_2__ctor_m1349605170_RuntimeMethod_var);
		__this->set_registerLookup_9(L_0);
		Dictionary_2_t2269235889 * L_1 = __this->get_registerLookup_9();
		MemoryCellControllerU5BU5D_t1776215942* L_2 = __this->get_instcCells_5();
		Dictionary_2_Add_m3056715029(L_1, 0, L_2, /*hidden argument*/Dictionary_2_Add_m3056715029_RuntimeMethod_var);
		Dictionary_2_t2269235889 * L_3 = __this->get_registerLookup_9();
		MemoryCellControllerU5BU5D_t1776215942* L_4 = __this->get_pcCells_6();
		Dictionary_2_Add_m3056715029(L_3, 1, L_4, /*hidden argument*/Dictionary_2_Add_m3056715029_RuntimeMethod_var);
		Dictionary_2_t2269235889 * L_5 = __this->get_registerLookup_9();
		MemoryCellControllerU5BU5D_t1776215942* L_6 = __this->get_aCells_7();
		Dictionary_2_Add_m3056715029(L_5, 2, L_6, /*hidden argument*/Dictionary_2_Add_m3056715029_RuntimeMethod_var);
		Dictionary_2_t2269235889 * L_7 = __this->get_registerLookup_9();
		MemoryCellControllerU5BU5D_t1776215942* L_8 = __this->get_bCells_8();
		Dictionary_2_Add_m3056715029(L_7, 3, L_8, /*hidden argument*/Dictionary_2_Add_m3056715029_RuntimeMethod_var);
		return;
	}
}
// System.Int32 RegisterController::GetRegisterValue(Register)
extern "C" IL2CPP_METHOD_ATTR int32_t RegisterController_GetRegisterValue_m259583444 (RegisterController_t92122650 * __this, int32_t ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegisterController_GetRegisterValue_m259583444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameController_t2330501625 * L_0 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		Dictionary_2_t2269235889 * L_1 = __this->get_registerLookup_9();
		int32_t L_2 = ___r0;
		MemoryCellControllerU5BU5D_t1776215942* L_3 = Dictionary_2_get_Item_m431267327(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_m431267327_RuntimeMethod_var);
		int32_t L_4 = GameController_CellsToInteger_m1331874051(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = ___r0;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = ___r0;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_003d;
		}
	}

IL_0025:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)127))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8^(int32_t)((int32_t)255)));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)(-1)));
	}

IL_003d:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Collections.IEnumerator RegisterController::SetRegisterValue(Register,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RegisterController_SetRegisterValue_m2854146444 (RegisterController_t92122650 * __this, int32_t ___r0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegisterController_SetRegisterValue_m2854146444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * V_0 = NULL;
	{
		U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * L_0 = (U3CSetRegisterValueU3Ec__Iterator0_t2371385909 *)il2cpp_codegen_object_new(U3CSetRegisterValueU3Ec__Iterator0_t2371385909_il2cpp_TypeInfo_var);
		U3CSetRegisterValueU3Ec__Iterator0__ctor_m4061791358(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * L_1 = V_0;
		int32_t L_2 = ___r0;
		L_1->set_r_0(L_2);
		U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * L_3 = V_0;
		int32_t L_4 = ___value1;
		L_3->set_value_1(L_4);
		U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * L_5 = V_0;
		L_5->set_U24this_2(__this);
		U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * L_6 = V_0;
		return L_6;
	}
}
// MemoryCellController[] RegisterController::GetMemoryCells(Register)
extern "C" IL2CPP_METHOD_ATTR MemoryCellControllerU5BU5D_t1776215942* RegisterController_GetMemoryCells_m2658175571 (RegisterController_t92122650 * __this, int32_t ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegisterController_GetMemoryCells_m2658175571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2269235889 * L_0 = __this->get_registerLookup_9();
		int32_t L_1 = ___r0;
		MemoryCellControllerU5BU5D_t1776215942* L_2 = Dictionary_2_get_Item_m431267327(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m431267327_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void RegisterController::Zeroize()
extern "C" IL2CPP_METHOD_ATTR void RegisterController_Zeroize_m519661814 (RegisterController_t92122650 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegisterController_Zeroize_m519661814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t371940760  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t4223418664  V_1;
	memset(&V_1, 0, sizeof(V_1));
	MemoryCellControllerU5BU5D_t1776215942* V_2 = NULL;
	MemoryCellController_t341130527 * V_3 = NULL;
	MemoryCellControllerU5BU5D_t1776215942* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2269235889 * L_0 = __this->get_registerLookup_9();
		Enumerator_t4223418664  L_1 = Dictionary_2_GetEnumerator_m3222356229(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3222356229_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0011:
		{
			KeyValuePair_2_t371940760  L_2 = Enumerator_get_Current_m4146803787((Enumerator_t4223418664 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4146803787_RuntimeMethod_var);
			V_0 = L_2;
			MemoryCellControllerU5BU5D_t1776215942* L_3 = KeyValuePair_2_get_Value_m2056550861((KeyValuePair_2_t371940760 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m2056550861_RuntimeMethod_var);
			V_2 = L_3;
			MemoryCellControllerU5BU5D_t1776215942* L_4 = V_2;
			V_4 = L_4;
			V_5 = 0;
			goto IL_003f;
		}

IL_002c:
		{
			MemoryCellControllerU5BU5D_t1776215942* L_5 = V_4;
			int32_t L_6 = V_5;
			int32_t L_7 = L_6;
			MemoryCellController_t341130527 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
			V_3 = L_8;
			MemoryCellController_t341130527 * L_9 = V_3;
			MemoryCellController_SetValue_m3908445948(L_9, 0, /*hidden argument*/NULL);
			int32_t L_10 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_003f:
		{
			int32_t L_11 = V_5;
			MemoryCellControllerU5BU5D_t1776215942* L_12 = V_4;
			if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
			{
				goto IL_002c;
			}
		}

IL_004a:
		{
			bool L_13 = Enumerator_MoveNext_m2179132367((Enumerator_t4223418664 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2179132367_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0011;
			}
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x69, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1741642658((Enumerator_t4223418664 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m1741642658_RuntimeMethod_var);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0069:
	{
		return;
	}
}
// System.Void RegisterController::Update()
extern "C" IL2CPP_METHOD_ATTR void RegisterController_Update_m1635656436 (RegisterController_t92122650 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void RegisterController/<SetRegisterValue>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSetRegisterValueU3Ec__Iterator0__ctor_m4061791358 (U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RegisterController/<SetRegisterValue>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CSetRegisterValueU3Ec__Iterator0_MoveNext_m1850746191 (U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSetRegisterValueU3Ec__Iterator0_MoveNext_m1850746191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00c0;
			}
		}
	}
	{
		goto IL_00c7;
	}

IL_0021:
	{
		int32_t L_2 = __this->get_r_0();
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = __this->get_r_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0085;
		}
	}

IL_0039:
	{
		int32_t L_4 = __this->get_value_1();
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_5 = __this->get_value_1();
		__this->set_value_1(((int32_t)((int32_t)L_5&(int32_t)((int32_t)255))));
		int32_t L_6 = __this->get_value_1();
		__this->set_value_1(((int32_t)((int32_t)L_6^(int32_t)((int32_t)255))));
		int32_t L_7 = __this->get_value_1();
		__this->set_value_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		int32_t L_8 = __this->get_value_1();
		__this->set_value_1(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)(-1))));
	}

IL_0085:
	{
		RegisterController_t92122650 * L_9 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_10 = ((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_11 = __this->get_r_0();
		int32_t L_12 = __this->get_value_1();
		RuntimeObject* L_13 = RegisterRetriever_WriteRegister_m967670532(L_10, L_11, L_12, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_14 = MonoBehaviour_StartCoroutine_m3411253000(L_9, L_13, /*hidden argument*/NULL);
		__this->set_U24current_3(L_14);
		bool L_15 = __this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00bb;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00bb:
	{
		goto IL_00c9;
	}

IL_00c0:
	{
		__this->set_U24PC_5((-1));
	}

IL_00c7:
	{
		return (bool)0;
	}

IL_00c9:
	{
		return (bool)1;
	}
}
// System.Object RegisterController/<SetRegisterValue>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSetRegisterValueU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2893438152 (U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object RegisterController/<SetRegisterValue>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSetRegisterValueU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2031957251 (U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void RegisterController/<SetRegisterValue>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CSetRegisterValueU3Ec__Iterator0_Dispose_m3688679826 (U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void RegisterController/<SetRegisterValue>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CSetRegisterValueU3Ec__Iterator0_Reset_m4000158150 (U3CSetRegisterValueU3Ec__Iterator0_t2371385909 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSetRegisterValueU3Ec__Iterator0_Reset_m4000158150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSetRegisterValueU3Ec__Iterator0_Reset_m4000158150_RuntimeMethod_var);
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
// System.Void RegisterObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RegisterObject__ctor_m171055435 (RegisterObject_t528985038 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RegisterObject::Start()
extern "C" IL2CPP_METHOD_ATTR void RegisterObject_Start_m1224046701 (RegisterObject_t528985038 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void RegisterObject::Update()
extern "C" IL2CPP_METHOD_ATTR void RegisterObject_Update_m946618817 (RegisterObject_t528985038 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void RegisterRetriever::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RegisterRetriever__ctor_m3222599496 (RegisterRetriever_t3846945983 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RegisterRetriever::Start()
extern "C" IL2CPP_METHOD_ATTR void RegisterRetriever_Start_m659403198 (RegisterRetriever_t3846945983 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegisterRetriever_Start_m659403198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((RegisterRetriever_t3846945983_StaticFields*)il2cpp_codegen_static_fields_for(RegisterRetriever_t3846945983_il2cpp_TypeInfo_var))->set_instance_4(__this);
		return;
	}
}
// System.Collections.IEnumerator RegisterRetriever::NavToLocation(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RegisterRetriever_NavToLocation_m3638182089 (RegisterRetriever_t3846945983 * __this, Vector3_t3722313464  ___loc0, float ___duration1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegisterRetriever_NavToLocation_m3638182089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CNavToLocationU3Ec__Iterator0_t3710408863 * V_0 = NULL;
	{
		U3CNavToLocationU3Ec__Iterator0_t3710408863 * L_0 = (U3CNavToLocationU3Ec__Iterator0_t3710408863 *)il2cpp_codegen_object_new(U3CNavToLocationU3Ec__Iterator0_t3710408863_il2cpp_TypeInfo_var);
		U3CNavToLocationU3Ec__Iterator0__ctor_m3659070628(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CNavToLocationU3Ec__Iterator0_t3710408863 * L_1 = V_0;
		Vector3_t3722313464  L_2 = ___loc0;
		L_1->set_loc_6(L_2);
		U3CNavToLocationU3Ec__Iterator0_t3710408863 * L_3 = V_0;
		float L_4 = ___duration1;
		L_3->set_duration_7(L_4);
		U3CNavToLocationU3Ec__Iterator0_t3710408863 * L_5 = V_0;
		L_5->set_U24this_8(__this);
		U3CNavToLocationU3Ec__Iterator0_t3710408863 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator RegisterRetriever::ReadRegister(Register)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RegisterRetriever_ReadRegister_m94153405 (RegisterRetriever_t3846945983 * __this, int32_t ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegisterRetriever_ReadRegister_m94153405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CReadRegisterU3Ec__Iterator1_t958219891 * V_0 = NULL;
	{
		U3CReadRegisterU3Ec__Iterator1_t958219891 * L_0 = (U3CReadRegisterU3Ec__Iterator1_t958219891 *)il2cpp_codegen_object_new(U3CReadRegisterU3Ec__Iterator1_t958219891_il2cpp_TypeInfo_var);
		U3CReadRegisterU3Ec__Iterator1__ctor_m579505668(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CReadRegisterU3Ec__Iterator1_t958219891 * L_1 = V_0;
		int32_t L_2 = ___r0;
		L_1->set_r_0(L_2);
		U3CReadRegisterU3Ec__Iterator1_t958219891 * L_3 = V_0;
		L_3->set_U24this_5(__this);
		U3CReadRegisterU3Ec__Iterator1_t958219891 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator RegisterRetriever::WriteRegister(Register,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RegisterRetriever_WriteRegister_m967670532 (RegisterRetriever_t3846945983 * __this, int32_t ___r0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegisterRetriever_WriteRegister_m967670532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWriteRegisterU3Ec__Iterator2_t2150749546 * V_0 = NULL;
	{
		U3CWriteRegisterU3Ec__Iterator2_t2150749546 * L_0 = (U3CWriteRegisterU3Ec__Iterator2_t2150749546 *)il2cpp_codegen_object_new(U3CWriteRegisterU3Ec__Iterator2_t2150749546_il2cpp_TypeInfo_var);
		U3CWriteRegisterU3Ec__Iterator2__ctor_m1627323521(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWriteRegisterU3Ec__Iterator2_t2150749546 * L_1 = V_0;
		int32_t L_2 = ___r0;
		L_1->set_r_0(L_2);
		U3CWriteRegisterU3Ec__Iterator2_t2150749546 * L_3 = V_0;
		int32_t L_4 = ___value1;
		L_3->set_value_6(L_4);
		U3CWriteRegisterU3Ec__Iterator2_t2150749546 * L_5 = V_0;
		L_5->set_U24this_7(__this);
		U3CWriteRegisterU3Ec__Iterator2_t2150749546 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator RegisterRetriever::NavToRegister(Register)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RegisterRetriever_NavToRegister_m3179150175 (RegisterRetriever_t3846945983 * __this, int32_t ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegisterRetriever_NavToRegister_m3179150175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CNavToRegisterU3Ec__Iterator3_t1882082193 * V_0 = NULL;
	{
		U3CNavToRegisterU3Ec__Iterator3_t1882082193 * L_0 = (U3CNavToRegisterU3Ec__Iterator3_t1882082193 *)il2cpp_codegen_object_new(U3CNavToRegisterU3Ec__Iterator3_t1882082193_il2cpp_TypeInfo_var);
		U3CNavToRegisterU3Ec__Iterator3__ctor_m4192858418(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CNavToRegisterU3Ec__Iterator3_t1882082193 * L_1 = V_0;
		int32_t L_2 = ___r0;
		L_1->set_r_0(L_2);
		U3CNavToRegisterU3Ec__Iterator3_t1882082193 * L_3 = V_0;
		L_3->set_U24this_2(__this);
		U3CNavToRegisterU3Ec__Iterator3_t1882082193 * L_4 = V_0;
		return L_4;
	}
}
// System.Void RegisterRetriever::Update()
extern "C" IL2CPP_METHOD_ATTR void RegisterRetriever_Update_m1643941811 (RegisterRetriever_t3846945983 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void RegisterRetriever/<NavToLocation>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToLocationU3Ec__Iterator0__ctor_m3659070628 (U3CNavToLocationU3Ec__Iterator0_t3710408863 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RegisterRetriever/<NavToLocation>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CNavToLocationU3Ec__Iterator0_MoveNext_m877806841 (U3CNavToLocationU3Ec__Iterator0_t3710408863 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNavToLocationU3Ec__Iterator0_MoveNext_m877806841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	{
		int32_t L_0 = __this->get_U24PC_11();
		V_0 = L_0;
		__this->set_U24PC_11((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_02c4;
			}
			case 2:
			{
				goto IL_02f5;
			}
		}
	}
	{
		goto IL_02fc;
	}

IL_0025:
	{
		__this->set_U3CthresholdU3E__0_0((0.05f));
		RegisterRetriever_t3846945983 * L_2 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_3 = L_2->get_hLine_5();
		Vector3_t3722313464  L_4 = LineRenderer_GetPosition_m2445830628(L_3, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_y_1();
		__this->set_U3ChsU3E__0_1(L_5);
		RegisterRetriever_t3846945983 * L_6 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_7 = L_6->get_vLine_6();
		Vector3_t3722313464  L_8 = LineRenderer_GetPosition_m2445830628(L_7, 0, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = (&V_2)->get_x_0();
		__this->set_U3CvsU3E__0_2(L_9);
		__this->set_U3CelapsedU3E__0_3((0.0f));
		__this->set_U3ChDoneU3E__0_4((bool)0);
		__this->set_U3CvDoneU3E__0_5((bool)0);
		goto IL_02c4;
	}

IL_008c:
	{
		float L_10 = __this->get_U3CelapsedU3E__0_3();
		float L_11 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CelapsedU3E__0_3(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
		bool L_12 = __this->get_U3ChDoneU3E__0_4();
		if (L_12)
		{
			goto IL_0167;
		}
	}
	{
		float L_13 = __this->get_U3ChsU3E__0_1();
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), (0.0f), L_13, (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464 * L_15 = __this->get_address_of_loc_6();
		float L_16 = L_15->get_y_1();
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m3353183577((&L_17), (0.0f), L_16, (0.0f), /*hidden argument*/NULL);
		float L_18 = __this->get_U3CelapsedU3E__0_3();
		float L_19 = __this->get_duration_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_20 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_14, L_17, ((float)((float)L_18/(float)L_19)), /*hidden argument*/NULL);
		V_3 = L_20;
		RegisterRetriever_t3846945983 * L_21 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_22 = L_21->get_hLine_5();
		Vector3_t3722313464  L_23 = LineRenderer_GetPosition_m2445830628(L_22, 0, /*hidden argument*/NULL);
		V_4 = L_23;
		RegisterRetriever_t3846945983 * L_24 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_25 = L_24->get_hLine_5();
		float L_26 = (&V_4)->get_x_0();
		float L_27 = (&V_3)->get_y_1();
		float L_28 = (&V_4)->get_z_2();
		Vector3_t3722313464  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Vector3__ctor_m3353183577((&L_29), L_26, L_27, L_28, /*hidden argument*/NULL);
		LineRenderer_SetPosition_m2111131184(L_25, 0, L_29, /*hidden argument*/NULL);
		RegisterRetriever_t3846945983 * L_30 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_31 = L_30->get_hLine_5();
		Vector3_t3722313464  L_32 = LineRenderer_GetPosition_m2445830628(L_31, 1, /*hidden argument*/NULL);
		V_5 = L_32;
		RegisterRetriever_t3846945983 * L_33 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_34 = L_33->get_hLine_5();
		float L_35 = (&V_5)->get_x_0();
		float L_36 = (&V_3)->get_y_1();
		float L_37 = (&V_5)->get_z_2();
		Vector3_t3722313464  L_38;
		memset(&L_38, 0, sizeof(L_38));
		Vector3__ctor_m3353183577((&L_38), L_35, L_36, L_37, /*hidden argument*/NULL);
		LineRenderer_SetPosition_m2111131184(L_34, 1, L_38, /*hidden argument*/NULL);
	}

IL_0167:
	{
		bool L_39 = __this->get_U3CvDoneU3E__0_5();
		if (L_39)
		{
			goto IL_0231;
		}
	}
	{
		float L_40 = __this->get_U3CvsU3E__0_2();
		Vector3_t3722313464  L_41;
		memset(&L_41, 0, sizeof(L_41));
		Vector3__ctor_m3353183577((&L_41), L_40, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464 * L_42 = __this->get_address_of_loc_6();
		float L_43 = L_42->get_x_0();
		Vector3_t3722313464  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector3__ctor_m3353183577((&L_44), L_43, (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_45 = __this->get_U3CelapsedU3E__0_3();
		float L_46 = __this->get_duration_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_47 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_41, L_44, ((float)((float)L_45/(float)L_46)), /*hidden argument*/NULL);
		V_6 = L_47;
		RegisterRetriever_t3846945983 * L_48 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_49 = L_48->get_vLine_6();
		Vector3_t3722313464  L_50 = LineRenderer_GetPosition_m2445830628(L_49, 0, /*hidden argument*/NULL);
		V_7 = L_50;
		RegisterRetriever_t3846945983 * L_51 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_52 = L_51->get_vLine_6();
		float L_53 = (&V_6)->get_x_0();
		float L_54 = (&V_7)->get_y_1();
		float L_55 = (&V_7)->get_z_2();
		Vector3_t3722313464  L_56;
		memset(&L_56, 0, sizeof(L_56));
		Vector3__ctor_m3353183577((&L_56), L_53, L_54, L_55, /*hidden argument*/NULL);
		LineRenderer_SetPosition_m2111131184(L_52, 0, L_56, /*hidden argument*/NULL);
		RegisterRetriever_t3846945983 * L_57 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_58 = L_57->get_vLine_6();
		Vector3_t3722313464  L_59 = LineRenderer_GetPosition_m2445830628(L_58, 1, /*hidden argument*/NULL);
		V_8 = L_59;
		RegisterRetriever_t3846945983 * L_60 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_61 = L_60->get_vLine_6();
		float L_62 = (&V_6)->get_x_0();
		float L_63 = (&V_8)->get_y_1();
		float L_64 = (&V_8)->get_z_2();
		Vector3_t3722313464  L_65;
		memset(&L_65, 0, sizeof(L_65));
		Vector3__ctor_m3353183577((&L_65), L_62, L_63, L_64, /*hidden argument*/NULL);
		LineRenderer_SetPosition_m2111131184(L_61, 1, L_65, /*hidden argument*/NULL);
	}

IL_0231:
	{
		RegisterRetriever_t3846945983 * L_66 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_67 = L_66->get_hLine_5();
		Vector3_t3722313464  L_68 = LineRenderer_GetPosition_m2445830628(L_67, 0, /*hidden argument*/NULL);
		V_9 = L_68;
		float L_69 = (&V_9)->get_y_1();
		Vector3_t3722313464 * L_70 = __this->get_address_of_loc_6();
		float L_71 = L_70->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_72 = fabsf(((float)il2cpp_codegen_subtract((float)L_69, (float)L_71)));
		float L_73 = __this->get_U3CthresholdU3E__0_0();
		__this->set_U3ChDoneU3E__0_4((bool)((((int32_t)((!(((float)L_72) <= ((float)L_73)))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		RegisterRetriever_t3846945983 * L_74 = __this->get_U24this_8();
		LineRenderer_t3154350270 * L_75 = L_74->get_vLine_6();
		Vector3_t3722313464  L_76 = LineRenderer_GetPosition_m2445830628(L_75, 0, /*hidden argument*/NULL);
		V_10 = L_76;
		float L_77 = (&V_10)->get_x_0();
		Vector3_t3722313464 * L_78 = __this->get_address_of_loc_6();
		float L_79 = L_78->get_x_0();
		float L_80 = fabsf(((float)il2cpp_codegen_subtract((float)L_77, (float)L_79)));
		float L_81 = __this->get_U3CthresholdU3E__0_0();
		__this->set_U3CvDoneU3E__0_5((bool)((((int32_t)((!(((float)L_80) <= ((float)L_81)))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		__this->set_U24current_9(NULL);
		bool L_82 = __this->get_U24disposing_10();
		if (L_82)
		{
			goto IL_02bf;
		}
	}
	{
		__this->set_U24PC_11(1);
	}

IL_02bf:
	{
		goto IL_02fe;
	}

IL_02c4:
	{
		bool L_83 = __this->get_U3ChDoneU3E__0_4();
		if (!L_83)
		{
			goto IL_008c;
		}
	}
	{
		bool L_84 = __this->get_U3CvDoneU3E__0_5();
		if (!L_84)
		{
			goto IL_008c;
		}
	}
	{
		__this->set_U24current_9(NULL);
		bool L_85 = __this->get_U24disposing_10();
		if (L_85)
		{
			goto IL_02f0;
		}
	}
	{
		__this->set_U24PC_11(2);
	}

IL_02f0:
	{
		goto IL_02fe;
	}

IL_02f5:
	{
		__this->set_U24PC_11((-1));
	}

IL_02fc:
	{
		return (bool)0;
	}

IL_02fe:
	{
		return (bool)1;
	}
}
// System.Object RegisterRetriever/<NavToLocation>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CNavToLocationU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1154006618 (U3CNavToLocationU3Ec__Iterator0_t3710408863 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_9();
		return L_0;
	}
}
// System.Object RegisterRetriever/<NavToLocation>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CNavToLocationU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1692139912 (U3CNavToLocationU3Ec__Iterator0_t3710408863 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_9();
		return L_0;
	}
}
// System.Void RegisterRetriever/<NavToLocation>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToLocationU3Ec__Iterator0_Dispose_m922828523 (U3CNavToLocationU3Ec__Iterator0_t3710408863 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_10((bool)1);
		__this->set_U24PC_11((-1));
		return;
	}
}
// System.Void RegisterRetriever/<NavToLocation>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToLocationU3Ec__Iterator0_Reset_m2020772596 (U3CNavToLocationU3Ec__Iterator0_t3710408863 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNavToLocationU3Ec__Iterator0_Reset_m2020772596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CNavToLocationU3Ec__Iterator0_Reset_m2020772596_RuntimeMethod_var);
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
// System.Void RegisterRetriever/<NavToRegister>c__Iterator3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToRegisterU3Ec__Iterator3__ctor_m4192858418 (U3CNavToRegisterU3Ec__Iterator3_t1882082193 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RegisterRetriever/<NavToRegister>c__Iterator3::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CNavToRegisterU3Ec__Iterator3_MoveNext_m3420129935 (U3CNavToRegisterU3Ec__Iterator3_t1882082193 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNavToRegisterU3Ec__Iterator3_MoveNext_m3420129935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_00b5;
			}
		}
	}
	{
		goto IL_00bc;
	}

IL_0025:
	{
		RegisterController_t92122650 * L_2 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_3 = __this->get_r_0();
		MemoryCellControllerU5BU5D_t1776215942* L_4 = RegisterController_GetMemoryCells_m2658175571(L_2, L_3, /*hidden argument*/NULL);
		int32_t L_5 = 0;
		MemoryCellController_t341130527 * L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		__this->set_U3CcellU3E__0_1(L_6);
		RegisterRetriever_t3846945983 * L_7 = __this->get_U24this_2();
		RegisterRetriever_t3846945983 * L_8 = __this->get_U24this_2();
		MemoryCellController_t341130527 * L_9 = __this->get_U3CcellU3E__0_1();
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		GameController_t2330501625 * L_13 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_14 = L_13->get_moveSpeed_5();
		RuntimeObject* L_15 = RegisterRetriever_NavToLocation_m3638182089(L_8, L_12, L_14, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_16 = MonoBehaviour_StartCoroutine_m3411253000(L_7, L_15, /*hidden argument*/NULL);
		__this->set_U24current_3(L_16);
		bool L_17 = __this->get_U24disposing_4();
		if (L_17)
		{
			goto IL_0087;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0087:
	{
		goto IL_00be;
	}

IL_008c:
	{
		GameController_t2330501625 * L_18 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_19 = L_18->get_readSpeed_6();
		WaitForSeconds_t1699091251 * L_20 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_20, L_19, /*hidden argument*/NULL);
		__this->set_U24current_3(L_20);
		bool L_21 = __this->get_U24disposing_4();
		if (L_21)
		{
			goto IL_00b0;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_00b0:
	{
		goto IL_00be;
	}

IL_00b5:
	{
		__this->set_U24PC_5((-1));
	}

IL_00bc:
	{
		return (bool)0;
	}

IL_00be:
	{
		return (bool)1;
	}
}
// System.Object RegisterRetriever/<NavToRegister>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CNavToRegisterU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m164312387 (U3CNavToRegisterU3Ec__Iterator3_t1882082193 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object RegisterRetriever/<NavToRegister>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CNavToRegisterU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m731909692 (U3CNavToRegisterU3Ec__Iterator3_t1882082193 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void RegisterRetriever/<NavToRegister>c__Iterator3::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToRegisterU3Ec__Iterator3_Dispose_m3089059559 (U3CNavToRegisterU3Ec__Iterator3_t1882082193 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void RegisterRetriever/<NavToRegister>c__Iterator3::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CNavToRegisterU3Ec__Iterator3_Reset_m3384423678 (U3CNavToRegisterU3Ec__Iterator3_t1882082193 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNavToRegisterU3Ec__Iterator3_Reset_m3384423678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CNavToRegisterU3Ec__Iterator3_Reset_m3384423678_RuntimeMethod_var);
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
// System.Void RegisterRetriever/<ReadRegister>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CReadRegisterU3Ec__Iterator1__ctor_m579505668 (U3CReadRegisterU3Ec__Iterator1_t958219891 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RegisterRetriever/<ReadRegister>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CReadRegisterU3Ec__Iterator1_MoveNext_m123120922 (U3CReadRegisterU3Ec__Iterator1_t958219891 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReadRegisterU3Ec__Iterator1_MoveNext_m123120922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_8();
		V_0 = L_0;
		__this->set_U24PC_8((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_0104;
			}
		}
	}
	{
		goto IL_012c;
	}

IL_0025:
	{
		RegisterController_t92122650 * L_2 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_3 = __this->get_r_0();
		MemoryCellControllerU5BU5D_t1776215942* L_4 = RegisterController_GetMemoryCells_m2658175571(L_2, L_3, /*hidden argument*/NULL);
		__this->set_U3CcellsU3E__0_1(L_4);
		MemoryCellControllerU5BU5D_t1776215942* L_5 = __this->get_U3CcellsU3E__0_1();
		__this->set_U24locvar0_2(L_5);
		__this->set_U24locvar1_3(0);
		goto IL_0112;
	}

IL_0053:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_6 = __this->get_U24locvar0_2();
		int32_t L_7 = __this->get_U24locvar1_3();
		int32_t L_8 = L_7;
		MemoryCellController_t341130527 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		__this->set_U3CcellU3E__1_4(L_9);
		RegisterRetriever_t3846945983 * L_10 = __this->get_U24this_5();
		RegisterRetriever_t3846945983 * L_11 = __this->get_U24this_5();
		MemoryCellController_t341130527 * L_12 = __this->get_U3CcellU3E__1_4();
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = Transform_get_position_m36019626(L_14, /*hidden argument*/NULL);
		GameController_t2330501625 * L_16 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_17 = L_16->get_readSpeed_6();
		RuntimeObject* L_18 = RegisterRetriever_NavToLocation_m3638182089(L_11, L_15, L_17, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_19 = MonoBehaviour_StartCoroutine_m3411253000(L_10, L_18, /*hidden argument*/NULL);
		__this->set_U24current_6(L_19);
		bool L_20 = __this->get_U24disposing_7();
		if (L_20)
		{
			goto IL_00b0;
		}
	}
	{
		__this->set_U24PC_8(1);
	}

IL_00b0:
	{
		goto IL_012e;
	}

IL_00b5:
	{
		RegisterRetriever_t3846945983 * L_21 = __this->get_U24this_5();
		GameObject_t1113636619 * L_22 = L_21->get_whiteFlash_7();
		MemoryCellController_t341130527 * L_23 = __this->get_U3CcellU3E__1_4();
		Transform_t3600365921 * L_24 = Component_get_transform_m3162698980(L_23, /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = Transform_get_position_m36019626(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_26 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_22, L_25, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		GameController_t2330501625 * L_27 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_28 = L_27->get_readSpeed_6();
		WaitForSeconds_t1699091251 * L_29 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_29, L_28, /*hidden argument*/NULL);
		__this->set_U24current_6(L_29);
		bool L_30 = __this->get_U24disposing_7();
		if (L_30)
		{
			goto IL_00ff;
		}
	}
	{
		__this->set_U24PC_8(2);
	}

IL_00ff:
	{
		goto IL_012e;
	}

IL_0104:
	{
		int32_t L_31 = __this->get_U24locvar1_3();
		__this->set_U24locvar1_3(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
	}

IL_0112:
	{
		int32_t L_32 = __this->get_U24locvar1_3();
		MemoryCellControllerU5BU5D_t1776215942* L_33 = __this->get_U24locvar0_2();
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))))))
		{
			goto IL_0053;
		}
	}
	{
		__this->set_U24PC_8((-1));
	}

IL_012c:
	{
		return (bool)0;
	}

IL_012e:
	{
		return (bool)1;
	}
}
// System.Object RegisterRetriever/<ReadRegister>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CReadRegisterU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2381076619 (U3CReadRegisterU3Ec__Iterator1_t958219891 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object RegisterRetriever/<ReadRegister>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CReadRegisterU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3826851382 (U3CReadRegisterU3Ec__Iterator1_t958219891 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Void RegisterRetriever/<ReadRegister>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CReadRegisterU3Ec__Iterator1_Dispose_m3118192033 (U3CReadRegisterU3Ec__Iterator1_t958219891 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_7((bool)1);
		__this->set_U24PC_8((-1));
		return;
	}
}
// System.Void RegisterRetriever/<ReadRegister>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CReadRegisterU3Ec__Iterator1_Reset_m1391842633 (U3CReadRegisterU3Ec__Iterator1_t958219891 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReadRegisterU3Ec__Iterator1_Reset_m1391842633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CReadRegisterU3Ec__Iterator1_Reset_m1391842633_RuntimeMethod_var);
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
// System.Void RegisterRetriever/<WriteRegister>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CWriteRegisterU3Ec__Iterator2__ctor_m1627323521 (U3CWriteRegisterU3Ec__Iterator2_t2150749546 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RegisterRetriever/<WriteRegister>c__Iterator2::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CWriteRegisterU3Ec__Iterator2_MoveNext_m2977294410 (U3CWriteRegisterU3Ec__Iterator2_t2150749546 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWriteRegisterU3Ec__Iterator2_MoveNext_m2977294410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	MemoryCellController_t341130527 * G_B8_0 = NULL;
	MemoryCellController_t341130527 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	MemoryCellController_t341130527 * G_B9_1 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_10();
		V_0 = L_0;
		__this->set_U24PC_10((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_00d1;
			}
			case 2:
			{
				goto IL_0153;
			}
		}
	}
	{
		goto IL_017b;
	}

IL_0025:
	{
		RegisterController_t92122650 * L_2 = ((RegisterController_t92122650_StaticFields*)il2cpp_codegen_static_fields_for(RegisterController_t92122650_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_3 = __this->get_r_0();
		MemoryCellControllerU5BU5D_t1776215942* L_4 = RegisterController_GetMemoryCells_m2658175571(L_2, L_3, /*hidden argument*/NULL);
		__this->set_U3CcellsU3E__0_1(L_4);
		MemoryCellControllerU5BU5D_t1776215942* L_5 = __this->get_U3CcellsU3E__0_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = powf((2.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), (int32_t)1))))));
		__this->set_U3CpowerU3E__0_2((((int32_t)((int32_t)L_6))));
		MemoryCellControllerU5BU5D_t1776215942* L_7 = __this->get_U3CcellsU3E__0_1();
		__this->set_U24locvar0_3(L_7);
		__this->set_U24locvar1_4(0);
		goto IL_0161;
	}

IL_006f:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_8 = __this->get_U24locvar0_3();
		int32_t L_9 = __this->get_U24locvar1_4();
		int32_t L_10 = L_9;
		MemoryCellController_t341130527 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		__this->set_U3CcellU3E__1_5(L_11);
		RegisterRetriever_t3846945983 * L_12 = __this->get_U24this_7();
		RegisterRetriever_t3846945983 * L_13 = __this->get_U24this_7();
		MemoryCellController_t341130527 * L_14 = __this->get_U3CcellU3E__1_5();
		GameObject_t1113636619 * L_15 = Component_get_gameObject_m442555142(L_14, /*hidden argument*/NULL);
		Transform_t3600365921 * L_16 = GameObject_get_transform_m1369836730(L_15, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = Transform_get_position_m36019626(L_16, /*hidden argument*/NULL);
		GameController_t2330501625 * L_18 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_19 = L_18->get_readSpeed_6();
		RuntimeObject* L_20 = RegisterRetriever_NavToLocation_m3638182089(L_13, L_17, L_19, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_21 = MonoBehaviour_StartCoroutine_m3411253000(L_12, L_20, /*hidden argument*/NULL);
		__this->set_U24current_8(L_21);
		bool L_22 = __this->get_U24disposing_9();
		if (L_22)
		{
			goto IL_00cc;
		}
	}
	{
		__this->set_U24PC_10(1);
	}

IL_00cc:
	{
		goto IL_017d;
	}

IL_00d1:
	{
		RegisterRetriever_t3846945983 * L_23 = __this->get_U24this_7();
		GameObject_t1113636619 * L_24 = L_23->get_whiteFlash_7();
		MemoryCellController_t341130527 * L_25 = __this->get_U3CcellU3E__1_5();
		Transform_t3600365921 * L_26 = Component_get_transform_m3162698980(L_25, /*hidden argument*/NULL);
		Vector3_t3722313464  L_27 = Transform_get_position_m36019626(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_28 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_24, L_27, L_28, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		MemoryCellController_t341130527 * L_29 = __this->get_U3CcellU3E__1_5();
		int32_t L_30 = __this->get_U3CpowerU3E__0_2();
		int32_t L_31 = __this->get_value_6();
		G_B7_0 = L_29;
		if ((((int32_t)((int32_t)((int32_t)L_30&(int32_t)L_31))) <= ((int32_t)0)))
		{
			G_B8_0 = L_29;
			goto IL_0116;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		goto IL_0117;
	}

IL_0116:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0117:
	{
		MemoryCellController_SetValue_m3908445948(G_B9_1, G_B9_0, /*hidden argument*/NULL);
		int32_t L_32 = __this->get_U3CpowerU3E__0_2();
		__this->set_U3CpowerU3E__0_2(((int32_t)((int32_t)L_32>>(int32_t)1)));
		GameController_t2330501625 * L_33 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		float L_34 = L_33->get_readSpeed_6();
		WaitForSeconds_t1699091251 * L_35 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_35, L_34, /*hidden argument*/NULL);
		__this->set_U24current_8(L_35);
		bool L_36 = __this->get_U24disposing_9();
		if (L_36)
		{
			goto IL_014e;
		}
	}
	{
		__this->set_U24PC_10(2);
	}

IL_014e:
	{
		goto IL_017d;
	}

IL_0153:
	{
		int32_t L_37 = __this->get_U24locvar1_4();
		__this->set_U24locvar1_4(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
	}

IL_0161:
	{
		int32_t L_38 = __this->get_U24locvar1_4();
		MemoryCellControllerU5BU5D_t1776215942* L_39 = __this->get_U24locvar0_3();
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length)))))))
		{
			goto IL_006f;
		}
	}
	{
		__this->set_U24PC_10((-1));
	}

IL_017b:
	{
		return (bool)0;
	}

IL_017d:
	{
		return (bool)1;
	}
}
// System.Object RegisterRetriever/<WriteRegister>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWriteRegisterU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m865743143 (U3CWriteRegisterU3Ec__Iterator2_t2150749546 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_8();
		return L_0;
	}
}
// System.Object RegisterRetriever/<WriteRegister>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CWriteRegisterU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m722960263 (U3CWriteRegisterU3Ec__Iterator2_t2150749546 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_8();
		return L_0;
	}
}
// System.Void RegisterRetriever/<WriteRegister>c__Iterator2::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CWriteRegisterU3Ec__Iterator2_Dispose_m542056373 (U3CWriteRegisterU3Ec__Iterator2_t2150749546 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_9((bool)1);
		__this->set_U24PC_10((-1));
		return;
	}
}
// System.Void RegisterRetriever/<WriteRegister>c__Iterator2::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CWriteRegisterU3Ec__Iterator2_Reset_m4106258889 (U3CWriteRegisterU3Ec__Iterator2_t2150749546 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWriteRegisterU3Ec__Iterator2_Reset_m4106258889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CWriteRegisterU3Ec__Iterator2_Reset_m4106258889_RuntimeMethod_var);
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
// System.Void RowColPreview::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RowColPreview__ctor_m2361153508 (RowColPreview_t334518614 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RowColPreview::Start()
extern "C" IL2CPP_METHOD_ATTR void RowColPreview_Start_m2887385298 (RowColPreview_t334518614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RowColPreview_Start_m2887385298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryCellController_t341130527 * V_0 = NULL;
	MemoryCellControllerU5BU5D_t1776215942* V_1 = NULL;
	int32_t V_2 = 0;
	MemoryCellController_t341130527 * V_3 = NULL;
	MemoryCellControllerU5BU5D_t1776215942* V_4 = NULL;
	int32_t V_5 = 0;
	MemoryCellController_t341130527 * V_6 = NULL;
	MemoryCellControllerU5BU5D_t1776215942* V_7 = NULL;
	int32_t V_8 = 0;
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t1281789340* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral3452614544);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614544);
		StringU5BU5D_t1281789340* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteral3452614543);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614543);
		StringU5BU5D_t1281789340* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral3452614542);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614542);
		StringU5BU5D_t1281789340* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614541);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3452614541);
		StringU5BU5D_t1281789340* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral3452614540);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614540);
		StringU5BU5D_t1281789340* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral3452614539);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3452614539);
		StringU5BU5D_t1281789340* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral3452614538);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3452614538);
		StringU5BU5D_t1281789340* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614537);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3452614537);
		StringU5BU5D_t1281789340* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral3452614552);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3452614552);
		StringU5BU5D_t1281789340* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral3452614551);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3452614551);
		StringU5BU5D_t1281789340* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral3452614591);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral3452614591);
		StringU5BU5D_t1281789340* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614590);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral3452614590);
		StringU5BU5D_t1281789340* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteral3452614589);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral3452614589);
		StringU5BU5D_t1281789340* L_14 = L_13;
		ArrayElementTypeCheck (L_14, _stringLiteral3452614588);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3452614588);
		StringU5BU5D_t1281789340* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteral3452614587);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral3452614587);
		StringU5BU5D_t1281789340* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteral3452614586);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral3452614586);
		__this->set_hex_8(L_16);
		TextMesh_t1536577757 * L_17 = Component_GetComponent_TisTextMesh_t1536577757_m1070281259(__this, /*hidden argument*/Component_GetComponent_TisTextMesh_t1536577757_m1070281259_RuntimeMethod_var);
		__this->set_text_7(L_17);
		MemoryCellControllerU5BU5D_t1776215942* L_18 = __this->get_cells_4();
		V_1 = L_18;
		V_2 = 0;
		goto IL_00bd;
	}

IL_00ae:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_19 = V_1;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		MemoryCellController_t341130527 * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = L_22;
		MemoryCellController_t341130527 * L_23 = V_0;
		MemoryCellController_AddListener_m3359123159(L_23, __this, /*hidden argument*/NULL);
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00bd:
	{
		int32_t L_25 = V_2;
		MemoryCellControllerU5BU5D_t1776215942* L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_00ae;
		}
	}
	{
		MemoryCellControllerU5BU5D_t1776215942* L_27 = __this->get_row_5();
		V_4 = L_27;
		V_5 = 0;
		goto IL_00e9;
	}

IL_00d6:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_28 = V_4;
		int32_t L_29 = V_5;
		int32_t L_30 = L_29;
		MemoryCellController_t341130527 * L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = L_31;
		MemoryCellController_t341130527 * L_32 = V_3;
		MemoryCellController_AddListener_m3359123159(L_32, __this, /*hidden argument*/NULL);
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00e9:
	{
		int32_t L_34 = V_5;
		MemoryCellControllerU5BU5D_t1776215942* L_35 = V_4;
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_00d6;
		}
	}
	{
		MemoryCellControllerU5BU5D_t1776215942* L_36 = __this->get_col_6();
		V_7 = L_36;
		V_8 = 0;
		goto IL_0119;
	}

IL_0104:
	{
		MemoryCellControllerU5BU5D_t1776215942* L_37 = V_7;
		int32_t L_38 = V_8;
		int32_t L_39 = L_38;
		MemoryCellController_t341130527 * L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		V_6 = L_40;
		MemoryCellController_t341130527 * L_41 = V_6;
		MemoryCellController_AddListener_m3359123159(L_41, __this, /*hidden argument*/NULL);
		int32_t L_42 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_0119:
	{
		int32_t L_43 = V_8;
		MemoryCellControllerU5BU5D_t1776215942* L_44 = V_7;
		if ((((int32_t)L_43) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_44)->max_length)))))))
		{
			goto IL_0104;
		}
	}
	{
		return;
	}
}
// System.Void RowColPreview::OnChange()
extern "C" IL2CPP_METHOD_ATTR void RowColPreview_OnChange_m2499042717 (RowColPreview_t334518614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RowColPreview_OnChange_m2499042717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	{
		GameController_t2330501625 * L_0 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		MemoryCellControllerU5BU5D_t1776215942* L_1 = __this->get_row_5();
		int32_t L_2 = GameController_CellsToInteger_m1331874051(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		String_t* L_3 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
		GameController_t2330501625 * L_4 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		MemoryCellControllerU5BU5D_t1776215942* L_5 = __this->get_col_6();
		int32_t L_6 = GameController_CellsToInteger_m1331874051(L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		String_t* L_7 = Int32_ToString_m141394615((int32_t*)(&V_3), /*hidden argument*/NULL);
		V_2 = L_7;
		GameController_t2330501625 * L_8 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		MemoryCellControllerU5BU5D_t1776215942* L_9 = __this->get_cells_4();
		int32_t L_10 = GameController_CellsToInteger_m1331874051(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		StringU5BU5D_t1281789340* L_11 = __this->get_hex_8();
		int32_t L_12 = V_4;
		int32_t L_13 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)240)&(int32_t)L_12))>>(int32_t)4));
		String_t* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		String_t* L_15 = String_ToUpper_m3324454496(L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		StringU5BU5D_t1281789340* L_16 = __this->get_hex_8();
		int32_t L_17 = V_4;
		int32_t L_18 = ((int32_t)((int32_t)((int32_t)15)&(int32_t)L_17));
		String_t* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		String_t* L_20 = String_ToUpper_m3324454496(L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		TextMesh_t1536577757 * L_21 = __this->get_text_7();
		StringU5BU5D_t1281789340* L_22 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t1281789340* L_23 = L_22;
		ArrayElementTypeCheck (L_23, _stringLiteral3456284560);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3456284560);
		StringU5BU5D_t1281789340* L_24 = L_23;
		String_t* L_25 = V_5;
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		StringU5BU5D_t1281789340* L_26 = L_24;
		String_t* L_27 = V_6;
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_27);
		StringU5BU5D_t1281789340* L_28 = L_26;
		ArrayElementTypeCheck (L_28, _stringLiteral3451041664);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3451041664);
		StringU5BU5D_t1281789340* L_29 = L_28;
		String_t* L_30 = V_0;
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_30);
		StringU5BU5D_t1281789340* L_31 = L_29;
		ArrayElementTypeCheck (L_31, _stringLiteral3450517380);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3450517380);
		StringU5BU5D_t1281789340* L_32 = L_31;
		String_t* L_33 = V_2;
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_33);
		StringU5BU5D_t1281789340* L_34 = L_32;
		ArrayElementTypeCheck (L_34, _stringLiteral3452614535);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m1809518182(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		TextMesh_set_text_m446189179(L_21, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RowColPreview::Update()
extern "C" IL2CPP_METHOD_ATTR void RowColPreview_Update_m2528848120 (RowColPreview_t334518614 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void ScoreController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScoreController__ctor_m3134765503 (ScoreController_t484565259 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::Start()
extern "C" IL2CPP_METHOD_ATTR void ScoreController_Start_m3550267491 (ScoreController_t484565259 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreController_Start_m3550267491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ScoreController_t484565259_StaticFields*)il2cpp_codegen_static_fields_for(ScoreController_t484565259_il2cpp_TypeInfo_var))->set_instance_4(__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator ScoreController::ShowScore(ScoreController/Promise)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ScoreController_ShowScore_m861725830 (ScoreController_t484565259 * __this, Promise_t592223531 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreController_ShowScore_m861725830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CShowScoreU3Ec__Iterator0_t3828744793 * V_0 = NULL;
	{
		U3CShowScoreU3Ec__Iterator0_t3828744793 * L_0 = (U3CShowScoreU3Ec__Iterator0_t3828744793 *)il2cpp_codegen_object_new(U3CShowScoreU3Ec__Iterator0_t3828744793_il2cpp_TypeInfo_var);
		U3CShowScoreU3Ec__Iterator0__ctor_m2408711026(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CShowScoreU3Ec__Iterator0_t3828744793 * L_1 = V_0;
		Promise_t592223531 * L_2 = ___callback0;
		L_1->set_callback_1(L_2);
		U3CShowScoreU3Ec__Iterator0_t3828744793 * L_3 = V_0;
		L_3->set_U24this_2(__this);
		U3CShowScoreU3Ec__Iterator0_t3828744793 * L_4 = V_0;
		return L_4;
	}
}
// System.Void ScoreController::Update()
extern "C" IL2CPP_METHOD_ATTR void ScoreController_Update_m2293081469 (ScoreController_t484565259 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void ScoreController/<ShowScore>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CShowScoreU3Ec__Iterator0__ctor_m2408711026 (U3CShowScoreU3Ec__Iterator0_t3828744793 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ScoreController/<ShowScore>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CShowScoreU3Ec__Iterator0_MoveNext_m3441307650 (U3CShowScoreU3Ec__Iterator0_t3828744793 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowScoreU3Ec__Iterator0_MoveNext_m3441307650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00f0;
			}
		}
	}
	{
		goto IL_0133;
	}

IL_0021:
	{
		ScoreController_t484565259 * L_2 = __this->get_U24this_2();
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		MoneyController_t851075799 * L_4 = ((MoneyController_t851075799_StaticFields*)il2cpp_codegen_static_fields_for(MoneyController_t851075799_il2cpp_TypeInfo_var))->get_instance_4();
		float L_5 = MoneyController_GetValue_m4147633666(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = bankers_roundf(((float)il2cpp_codegen_multiply((float)L_5, (float)(100.0f))));
		float L_7 = ((float)((float)L_6/(float)(100.0f)));
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral718504107, L_8, /*hidden argument*/NULL);
		__this->set_U3CmU3E__0_0(L_9);
		ScoreController_t484565259 * L_10 = __this->get_U24this_2();
		TextMesh_t1536577757 * L_11 = L_10->get_text_7();
		String_t* L_12 = __this->get_U3CmU3E__0_0();
		String_t* L_13 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2183717477, L_12, /*hidden argument*/NULL);
		TextMesh_set_text_m446189179(L_11, L_13, /*hidden argument*/NULL);
		ScoreController_t484565259 * L_14 = __this->get_U24this_2();
		ParticleSystem_t1800779281 * L_15 = L_14->get_ps1_5();
		bool L_16 = ParticleSystem_get_isPlaying_m1820717466(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00a7;
		}
	}
	{
		ScoreController_t484565259 * L_17 = __this->get_U24this_2();
		ParticleSystem_t1800779281 * L_18 = L_17->get_ps1_5();
		ParticleSystem_Play_m882713458(L_18, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		ScoreController_t484565259 * L_19 = __this->get_U24this_2();
		ParticleSystem_t1800779281 * L_20 = L_19->get_ps2_6();
		bool L_21 = ParticleSystem_get_isPlaying_m1820717466(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00cc;
		}
	}
	{
		ScoreController_t484565259 * L_22 = __this->get_U24this_2();
		ParticleSystem_t1800779281 * L_23 = L_22->get_ps2_6();
		ParticleSystem_Play_m882713458(L_23, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		WaitForSeconds_t1699091251 * L_24 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_24, (5.0f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_24);
		bool L_25 = __this->get_U24disposing_4();
		if (L_25)
		{
			goto IL_00eb;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00eb:
	{
		goto IL_0135;
	}

IL_00f0:
	{
		ScoreController_t484565259 * L_26 = __this->get_U24this_2();
		GameObject_t1113636619 * L_27 = Component_get_gameObject_m442555142(L_26, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_27, (bool)0, /*hidden argument*/NULL);
		ScoreController_t484565259 * L_28 = __this->get_U24this_2();
		ParticleSystem_t1800779281 * L_29 = L_28->get_ps1_5();
		ParticleSystem_Stop_m3125854227(L_29, /*hidden argument*/NULL);
		ScoreController_t484565259 * L_30 = __this->get_U24this_2();
		ParticleSystem_t1800779281 * L_31 = L_30->get_ps2_6();
		ParticleSystem_Stop_m3125854227(L_31, /*hidden argument*/NULL);
		Promise_t592223531 * L_32 = __this->get_callback_1();
		Promise_Invoke_m2120887265(L_32, /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_0133:
	{
		return (bool)0;
	}

IL_0135:
	{
		return (bool)1;
	}
}
// System.Object ScoreController/<ShowScore>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CShowScoreU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2393915195 (U3CShowScoreU3Ec__Iterator0_t3828744793 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object ScoreController/<ShowScore>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CShowScoreU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1285309298 (U3CShowScoreU3Ec__Iterator0_t3828744793 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void ScoreController/<ShowScore>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CShowScoreU3Ec__Iterator0_Dispose_m3587276329 (U3CShowScoreU3Ec__Iterator0_t3828744793 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void ScoreController/<ShowScore>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CShowScoreU3Ec__Iterator0_Reset_m1634145118 (U3CShowScoreU3Ec__Iterator0_t3828744793 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowScoreU3Ec__Iterator0_Reset_m1634145118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CShowScoreU3Ec__Iterator0_Reset_m1634145118_RuntimeMethod_var);
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
extern "C"  void DelegatePInvokeWrapper_Promise_t592223531 (Promise_t592223531 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ScoreController/Promise::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Promise__ctor_m1650648743 (Promise_t592223531 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ScoreController/Promise::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Promise_Invoke_m2120887265 (Promise_t592223531 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Promise_Invoke_m2120887265((Promise_t592223531 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ScoreController/Promise::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Promise_BeginInvoke_m3532331758 (Promise_t592223531 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void ScoreController/Promise::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Promise_EndInvoke_m4240899339 (Promise_t592223531 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SelectController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SelectController__ctor_m985919253 (SelectController_t3183435330 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectController::OnHoverOut()
extern "C" IL2CPP_METHOD_ATTR void SelectController_OnHoverOut_m3317595871 (SelectController_t3183435330 * __this, const RuntimeMethod* method)
{
	{
		MemoryCellController_t341130527 * L_0 = __this->get_ctrl_7();
		bool L_1 = MemoryCellController_GetSelected_m2735042582(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		SelectController_Clear_m1824686167(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_normal_4();
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void SelectController::OnHoverOver()
extern "C" IL2CPP_METHOD_ATTR void SelectController_OnHoverOver_m2511660063 (SelectController_t3183435330 * __this, const RuntimeMethod* method)
{
	{
		MemoryCellController_t341130527 * L_0 = __this->get_ctrl_7();
		bool L_1 = MemoryCellController_GetSelected_m2735042582(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		SelectController_Clear_m1824686167(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_hover_5();
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void SelectController::OnSelect()
extern "C" IL2CPP_METHOD_ATTR void SelectController_OnSelect_m1726554407 (SelectController_t3183435330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectController_OnSelect_m1726554407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryCellController_t341130527 * L_0 = __this->get_ctrl_7();
		MemoryCellController_SetSelected_m3073455519(L_0, (bool)1, /*hidden argument*/NULL);
		SelectController_Clear_m1824686167(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_selected_6();
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		GameController_t2330501625 * L_2 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameController_OnSelectionChange_m4096359809(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectController::OnUnSelect()
extern "C" IL2CPP_METHOD_ATTR void SelectController_OnUnSelect_m3889732917 (SelectController_t3183435330 * __this, const RuntimeMethod* method)
{
	{
		MemoryCellController_t341130527 * L_0 = __this->get_ctrl_7();
		MemoryCellController_SetSelected_m3073455519(L_0, (bool)0, /*hidden argument*/NULL);
		SelectController_Clear_m1824686167(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_normal_4();
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectController::Clear()
extern "C" IL2CPP_METHOD_ATTR void SelectController_Clear_m1824686167 (SelectController_t3183435330 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_normal_4();
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_selected_6();
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_hover_5();
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectController::Start()
extern "C" IL2CPP_METHOD_ATTR void SelectController_Start_m574008149 (SelectController_t3183435330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectController_Start_m574008149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		MemoryCellController_t341130527 * L_1 = GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790(L_0, /*hidden argument*/GameObject_GetComponent_TisMemoryCellController_t341130527_m94169790_RuntimeMethod_var);
		__this->set_ctrl_7(L_1);
		return;
	}
}
// System.Void SelectController::Update()
extern "C" IL2CPP_METHOD_ATTR void SelectController_Update_m727010683 (SelectController_t3183435330 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void SparksController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SparksController__ctor_m3541765572 (SparksController_t751236625 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SparksController::Start()
extern "C" IL2CPP_METHOD_ATTR void SparksController_Start_m3621341166 (SparksController_t751236625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SparksController_Start_m3621341166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_0, (5.0f), /*hidden argument*/NULL);
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
// System.Void StartButtonController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StartButtonController__ctor_m1364888717 (StartButtonController_t3651918395 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartButtonController::Start()
extern "C" IL2CPP_METHOD_ATTR void StartButtonController_Start_m1031881367 (StartButtonController_t3651918395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StartButtonController_Start_m1031881367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((StartButtonController_t3651918395_StaticFields*)il2cpp_codegen_static_fields_for(StartButtonController_t3651918395_il2cpp_TypeInfo_var))->set_instance_4(__this);
		return;
	}
}
// System.Void StartButtonController::SetBackgroundActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void StartButtonController_SetBackgroundActive_m1627246484 (StartButtonController_t3651918395 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_1 = __this->get_background_6();
		Color_t2555686324  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Color__ctor_m2943235014((&L_2), (1.0f), (1.0f), (1.0f), (0.5882353f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_1, L_2, /*hidden argument*/NULL);
		__this->set_hover_7((bool)1);
		goto IL_0061;
	}

IL_0036:
	{
		SpriteRenderer_t3235626157 * L_3 = __this->get_background_6();
		Color_t2555686324  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Color__ctor_m2943235014((&L_4), (1.0f), (1.0f), (1.0f), (0.196078435f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_3, L_4, /*hidden argument*/NULL);
		__this->set_hover_7((bool)0);
	}

IL_0061:
	{
		return;
	}
}
// System.Void StartButtonController::OnStart()
extern "C" IL2CPP_METHOD_ATTR void StartButtonController_OnStart_m4261485478 (StartButtonController_t3651918395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StartButtonController_OnStart_m4261485478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextMesh_t1536577757 * L_0 = __this->get_text_5();
		TextMesh_set_text_m446189179(L_0, _stringLiteral1843313009, /*hidden argument*/NULL);
		MyAudioController_t2840361766 * L_1 = ((MyAudioController_t2840361766_StaticFields*)il2cpp_codegen_static_fields_for(MyAudioController_t2840361766_il2cpp_TypeInfo_var))->get_instance_4();
		MyAudioController_PlayAudio_m852245086(L_1, 5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartButtonController::OnEnd()
extern "C" IL2CPP_METHOD_ATTR void StartButtonController_OnEnd_m2111963269 (StartButtonController_t3651918395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StartButtonController_OnEnd_m2111963269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextMesh_t1536577757 * L_0 = __this->get_text_5();
		TextMesh_set_text_m446189179(L_0, _stringLiteral3173980668, /*hidden argument*/NULL);
		MyAudioController_t2840361766 * L_1 = ((MyAudioController_t2840361766_StaticFields*)il2cpp_codegen_static_fields_for(MyAudioController_t2840361766_il2cpp_TypeInfo_var))->get_instance_4();
		MyAudioController_PlayAudio_m852245086(L_1, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartButtonController::OnClick()
extern "C" IL2CPP_METHOD_ATTR void StartButtonController_OnClick_m1406823117 (StartButtonController_t3651918395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StartButtonController_OnClick_m1406823117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_hover_7();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		GameController_t2330501625 * L_1 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_instance_4();
		GameController_OnStartButtonPress_m3391101166(L_1, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void StartButtonController::Update()
extern "C" IL2CPP_METHOD_ATTR void StartButtonController_Update_m601912846 (StartButtonController_t3651918395 * __this, const RuntimeMethod* method)
{
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
