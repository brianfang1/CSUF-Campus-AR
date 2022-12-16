#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
struct GenericVirtualActionInvoker0
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.Expression>
struct Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ExternalDeclaration>
struct Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.FlowBase>
struct Dictionary_2_t7036DE9B0F2F80FBA9FBA3A30E3971F4F9DD9C37;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.INamedContent>
struct Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint>
struct Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListDefinition>
struct Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListElementDefinition>
struct Dictionary_2_tE97196D98524B83CDC1CBCD47EE15F32C15E13E5;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.VariableAssignment>
struct Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0;
// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.Choice>
struct FindQueryFunc_1_t336B67E9DF3943E1288CC482ACB0BBF4A96D7199;
// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.Divert>
struct FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911;
// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.IWeavePoint>
struct FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40;
// Ink.Parsed.Object/FindQueryFunc`1<System.Object>
struct FindQueryFunc_1_tF0B7DF2C2BB336BC978FCC0A8D82910DD79BAE75;
// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.TunnelOnwards>
struct FindQueryFunc_1_tD49158339C9E80306F093B9B3FFDC0266098B984;
// System.Func`2<Ink.Parsed.Identifier,System.String>
struct Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`3<Ink.Runtime.DebugMetadata,Ink.Parsed.Identifier,Ink.Runtime.DebugMetadata>
struct Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Collections.Generic.HashSet`1<Ink.Runtime.Container>
struct HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586;
// System.Collections.Generic.IEnumerable`1<Ink.Parsed.Identifier>
struct IEnumerable_1_tB9E8F7D9384F3C953FE4AE7BB2E49929F31572EC;
// System.Collections.Generic.IEnumerable`1<Ink.Parsed.Object>
struct IEnumerable_1_tEF23BA501451A845C4C1EB07ED0A90E7C765A30B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Ink.Parsed.Weave/GatherPointToResolve>
struct IEnumerable_1_tAF9E850594E4A7970DED03E4D7A2DB7CFA704D15;
// System.Collections.Generic.IEnumerator`1<Ink.Parsed.Object>
struct IEnumerator_1_t0D3F6B72AD03CC8C65B4782F8C2DA9E2EFAEBCD7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Ink.Parsed.Expression>
struct KeyCollection_t503A12E35743D870D563C7F531995AE6C48A0070;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Ink.Parsed.IWeavePoint>
struct KeyCollection_tE294307EF6D15862F2CEA15169D3AC24CADE930A;
// System.Collections.Generic.List`1<Ink.Parsed.Choice>
struct List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C;
// System.Collections.Generic.List`1<Ink.Parsed.ConditionalSingleBranch>
struct List_1_t488491625CFD9ED32600FE60136E562DEE6CAC34;
// System.Collections.Generic.List`1<Ink.Parsed.Expression>
struct List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F;
// System.Collections.Generic.List`1<Ink.Parsed.FlowBase>
struct List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB;
// System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>
struct List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A;
// System.Collections.Generic.List`1<Ink.Parsed.Identifier>
struct List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08;
// System.Collections.Generic.List`1<Ink.Parsed.ListElementDefinition>
struct List_1_t5616402C899551039E0CA5216EA28E3B5E8B4010;
// System.Collections.Generic.List`1<Ink.Parsed.Object>
struct List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55;
// System.Collections.Generic.List`1<Ink.Runtime.Object>
struct List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Ink.Parsed.FlowBase/Argument>
struct List_1_t5A7C284E404753F1786689E097CE59A152638444;
// System.Collections.Generic.List`1<Ink.Runtime.Path/Component>
struct List_1_t8358C58AEB53A1DE0181CC62DFE97831F8DA9C7C;
// System.Collections.Generic.List`1<Ink.Parsed.Sequence/SequenceDivertToResolve>
struct List_1_t790425294EA2A6F283208CCC3E6906D3E7986012;
// System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve>
struct List_1_tA7383995CB6636153484C17B150C3B16C85C49B7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Ink.Parsed.Expression>
struct ValueCollection_tCE698A7FAAAF070B8FFDB1A4693A10F0EB241F23;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Ink.Parsed.IWeavePoint>
struct ValueCollection_tF4AE1DFA82FAD6E67385BC2779CC11C2C1CDD8F4;
// Ink.Parsed.Wrap`1<Ink.Runtime.Glue>
struct Wrap_1_tC06BF2A45CCF887EEF2D86199C08609A6927998F;
// Ink.Parsed.Wrap`1<System.Object>
struct Wrap_1_t07205EDFFF18F5F5B08620D9B41DCA4780859265;
// Ink.Parsed.Wrap`1<Ink.Runtime.Tag>
struct Wrap_1_t30A29E9AC5AC4AEC0670984E15D014B48C63BFF9;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Ink.Parsed.Expression>[]
struct EntryU5BU5D_tB9FE1E425353F78F91E5392B9BE2B33881681716;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Ink.Parsed.IWeavePoint>[]
struct EntryU5BU5D_tE8DBBBAEDA6BF12A00601ABAD28AF6ADA42E4943;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Ink.Parsed.Choice[]
struct ChoiceU5BU5D_t6400BB5EF477B560BCAB3701E2F8F3A6B1922DC2;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Ink.Parsed.Expression[]
struct ExpressionU5BU5D_t4C9E9240950A707982208D3B55C3D8B74D69F633;
// Ink.Parsed.FlowBase[]
struct FlowBaseU5BU5D_t16780B0F060658CB5F6CD22371E715783A53DF20;
// Ink.Parsed.IWeavePoint[]
struct IWeavePointU5BU5D_t4F2E7A60D510D4699D15DF11C869F5A32C8C73A3;
// Ink.Parsed.Identifier[]
struct IdentifierU5BU5D_tB903070C54BCA9897B3C2FCF3D4A87BADFCFA09A;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Ink.Parsed.Object[]
struct ObjectU5BU5D_t3586EF5ABA6916A1264318D0FA7041D17C7C0A80;
// Ink.Runtime.Object[]
struct ObjectU5BU5D_tEDD38A5588B3EF2CA1042B823EABFD3C073B03A5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Ink.Parsed.Weave/GatherPointToResolve[]
struct GatherPointToResolveU5BU5D_tCFBD4CA83BCF7F3F701B7B631061CC962657A3C4;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Ink.Parsed.Choice
struct Choice_t36174EC808231C52E43CE7768134739559499893;
// Ink.Runtime.ChoicePoint
struct ChoicePoint_t4B38D1BE22B41C7C0AF41CA18AD6A6D12239111D;
// Ink.Runtime.Container
struct Container_t74302BC1028974B0A346A43F334AECB681D79579;
// Ink.Parsed.ContentList
struct ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23;
// Ink.Runtime.ControlCommand
struct ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6;
// Ink.Runtime.DebugMetadata
struct DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Ink.Parsed.Divert
struct Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186;
// Ink.Runtime.Divert
struct Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA;
// Ink.Runtime.DivertTargetValue
struct DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B;
// Ink.ErrorHandler
struct ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728;
// System.Exception
struct Exception_t;
// Ink.Parsed.Expression
struct Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D;
// Ink.Parsed.FlowBase
struct FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822;
// Ink.Parsed.Gather
struct Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B;
// Ink.Parsed.Glue
struct Glue_t1B0423D93951017DCD923A001EEEE15092EF1D2A;
// Ink.Runtime.Glue
struct Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Ink.Runtime.INamedContent
struct INamedContent_tEBD662BBE63CAFEDF6979C8CD78911D766FD86CE;
// Ink.Parsed.IWeavePoint
struct IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE;
// Ink.Parsed.Identifier
struct Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD;
// Ink.Parsed.ListDefinition
struct ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65;
// Ink.Parsed.ListElementDefinition
struct ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Ink.Parsed.Object
struct Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7;
// Ink.Runtime.Object
struct Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB;
// Ink.Parsed.Path
struct Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC;
// Ink.Runtime.Path
struct Path_tCC1F1626DB60711735401EA8FA76A191D9014600;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Ink.Parsed.Story
struct Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Ink.Parsed.StringExpression
struct StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678;
// Ink.Runtime.StringValue
struct StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2;
// Ink.Parsed.Tag
struct Tag_tAB0A2B0822AC49777B0EF88C69DFC2D2A203DFF9;
// Ink.Runtime.Tag
struct Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29;
// Ink.Parsed.Text
struct Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED;
// Ink.Parsed.TunnelOnwards
struct TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450;
// System.Type
struct Type_t;
// Ink.Parsed.VariableAssignment
struct VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82;
// Ink.Runtime.VariableAssignment
struct VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9;
// Ink.Parsed.VariableReference
struct VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049;
// Ink.Runtime.VariableReference
struct VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819;
// Ink.Runtime.Void
struct Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Ink.Parsed.Weave
struct Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37;
// Ink.Parsed.VariableReference/<>c
struct U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0;
// Ink.Parsed.Weave/<>c
struct U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807;
// Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29
struct U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C;
// Ink.Parsed.Weave/BadTerminationHandler
struct BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC;
// Ink.Parsed.Weave/GatherPointToResolve
struct GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14;

IL2CPP_EXTERN_C RuntimeClass* AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivertTarget_t72F939797266E1087B339BC7F70A4A43A8E91F2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tEF23BA501451A845C4C1EB07ED0A90E7C765A30B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0D3F6B72AD03CC8C65B4782F8C2DA9E2EFAEBCD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA7383995CB6636153484C17B150C3B16C85C49B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral1E496DD143AA8143CEB7E732FC7B782BF3979F24;
IL2CPP_EXTERN_C String_t* _stringLiteral21F29DAD0A8FD7E88D981478E32D509D5426BBC7;
IL2CPP_EXTERN_C String_t* _stringLiteral232E29D3CB1BEBAB46125A6580F94B6237639795;
IL2CPP_EXTERN_C String_t* _stringLiteral24D3FA9EF9027D38088033AD06B49AC53ACB4ADB;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4A5EAECA242025908B1BA2BDB34B2296B923397E;
IL2CPP_EXTERN_C String_t* _stringLiteral4BAD6CD617D272A279F787BE0B87FA21DB8B7C02;
IL2CPP_EXTERN_C String_t* _stringLiteral552DA4F83AB1BC270CE749E47D3C68702AB45097;
IL2CPP_EXTERN_C String_t* _stringLiteral55CFC3484E2E301297CB8C75443E10F75CBF9517;
IL2CPP_EXTERN_C String_t* _stringLiteral580238E6E0ACB59AECE7F14975A94031E75C9F37;
IL2CPP_EXTERN_C String_t* _stringLiteral597A362DB8D6E186B492CF582B27E2FC8F03E2D3;
IL2CPP_EXTERN_C String_t* _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
IL2CPP_EXTERN_C String_t* _stringLiteral6DC9AC61476AAE77F1CE47714E462CD38340FFEA;
IL2CPP_EXTERN_C String_t* _stringLiteral834B13F856924DCC46AB8FF86DB1C23A385C2FFF;
IL2CPP_EXTERN_C String_t* _stringLiteral91E01FFA5E6CD3B876C514BED83BB94FB75433EB;
IL2CPP_EXTERN_C String_t* _stringLiteralA871E06BD04BA167F0121D2D4D2A6C4C82D64CE6;
IL2CPP_EXTERN_C String_t* _stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5;
IL2CPP_EXTERN_C String_t* _stringLiteralB53E3868832BD0EF55666E126B25E567528AC5AD;
IL2CPP_EXTERN_C String_t* _stringLiteralB5EA60EDD2142984A91D0AB523AFEF5F0038056E;
IL2CPP_EXTERN_C String_t* _stringLiteralBDCE5AC3929E9CA18E1A0EDD397BC9C4E7B2382C;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD28C21A745DAAD04F4A4BAA862741D9A6EBEF607;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF42442CA83AE953CBF0C9F2D7BD30697A2BCCE58;
IL2CPP_EXTERN_C String_t* _stringLiteralF8B61217D46DA3BC553C980F9397D47D55C737C2;
IL2CPP_EXTERN_C String_t* _stringLiteralFAADEE259CA27EB2EEAEFC368E2BE391D2D0CCDA;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m0F6C37D27FD2753844BDF8E50AE219156F3DD897_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m58606EF7E646E6EC6F77966DDCC3DFEE5425C416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m09D0B05560B270A9FADCF6E5D9C0736FA6CB8BAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mAA08D8B1D90E5E645461227F453508FF161AB975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Aggregate_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisDebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01_mA9F2FF61E598534C443A817B94DC20D9CD4E8BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m5E6C1D3887D8BFD12F97E4CDC6DC381E20067DB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_mC92B8BC15A1403ED0216A60D6ECDE2C8301B7790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3D695EEE7F8DBADB4E29925482335EFD8D5FF76C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7BF2E33709CCA1C3182CB0B0823B5CC036376CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCE863A998546EAD25CFF5AA7DB1FD2BDA33CFFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0E266551F3F19E392882EA2ADC18A12F7F76FE4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3E6779FD1F45D3506C88709EDFA61A7FBABF497A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA226D5AC035B8AA46A1A5B0AD87D66B4747F85C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1FB39938CFD6138E1234BE2B1290025DF3D47AD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m987ADC83E21F27DE3A5E98DA01634843FCA83551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAE2D0F63AC021CDF331A873DB4D4D07C212C86FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mD222AD5CAEECD12BE8311BAC449090BBC57EF1DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7919590FC8730088240AC8626E9A64EA1F12CC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF67AEA92CB96A7EB9B237EA52FC2B38AA9B16BBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCA442648CC7166D2F1F4C38D743E6C1E4D9D59C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB11A36DC9CB485BE0C7EA0E338F61ED2F4907E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mAEED457850E75DD1B9ABC47B1937E3ECF5056AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB0447A1912B57CEC4309668380290C854E249335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetRange_mEBA06D625B0F423AB20F3D64D0494EBB300C103D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m549CA9389C0FF54CE448A6557816E0F0E7B58CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mDAD0B657BF66CA49FF92D46A4F1B5DE663A1932D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m5CF433B308EA5F7DBC3D30C53F2536C2F47F8067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m60A33E724150BD07A6081520E30BCBB4D524DFF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE857C294F1FDC1B1EB7A48BD4C4B118802AD68F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m28F4FD8191AC70A79F88724B9BD21145FF88B3A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2EF709723E8742028D2BF885FA5335303F0B0282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3729CD7808E34BFD9068F3A791D9D00B90282588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD7C86426165B299E1AF57E1CC3ADF4B9B0EDB97D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_AddContent_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_mBC95D48BAC65CC876001759F3105E180FAC26E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_AddContent_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_m6169C2A2781ABFF41FF6C9D08702D6F37EC74523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindAll_TisChoice_t36174EC808231C52E43CE7768134739559499893_mFB83BCB5BDDDC5DF66331F766264D20DA55A29FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindAll_TisIWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_m7F252A913726163DB529A7C7F372736A522BD2A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Find_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_m745B0DEECFF6B651C7BC919A569845794345ED5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Find_TisTunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450_mBD53B00353D1047ED928ED4004D14DCAE7E8D31C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_InsertContent_TisWeave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_m2F8400F9F5E13FE2D2EF334CA9462E8CE3F86715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m62A16EB289D19DA69C6517D41C16DB6DA21A7414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CContentThatFollowsWeavePointU3Ed__29_MoveNext_mFA2F28A62D5039FC397153C696FFBCE1D580918A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_IEnumerator_Reset_m115B11CD324347AE797625EACD51442CA8267AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveWeavePointNamingU3Eb__16_0_mD2E1AE17D456275345755805605BAB67AD659C93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CValidateFlowOfObjectsTerminatesU3Eb__33_0_mA29EFEC2C9F28D2F9138006B50AA65EB411F911E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__16_0_m100F96F238BA9E462A570C4DD891720F6EBC3FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_identifierU3Eb__5_0_m3F93841E2FC7D9D434FE11EC13DC12E0706B2C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Weave_BadNestedTerminationHandler_m4531FCF23C4DAE2724AC2E1483B94C4FB23F97E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrap_1__ctor_m55E3265081F6A8406F0C3A7A7D3B2ABBC0311B0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrap_1__ctor_mC7A871A14C44F022C311E215DA575CE02DBA3A62_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.Expression>
struct Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB9FE1E425353F78F91E5392B9BE2B33881681716* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t503A12E35743D870D563C7F531995AE6C48A0070* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE698A7FAAAF070B8FFDB1A4693A10F0EB241F23* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint>
struct Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE8DBBBAEDA6BF12A00601ABAD28AF6ADA42E4943* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE294307EF6D15862F2CEA15169D3AC24CADE930A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF4AE1DFA82FAD6E67385BC2779CC11C2C1CDD8F4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Ink.Parsed.Choice>
struct List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChoiceU5BU5D_t6400BB5EF477B560BCAB3701E2F8F3A6B1922DC2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChoiceU5BU5D_t6400BB5EF477B560BCAB3701E2F8F3A6B1922DC2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.Expression>
struct List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExpressionU5BU5D_t4C9E9240950A707982208D3B55C3D8B74D69F633* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExpressionU5BU5D_t4C9E9240950A707982208D3B55C3D8B74D69F633* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.FlowBase>
struct List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FlowBaseU5BU5D_t16780B0F060658CB5F6CD22371E715783A53DF20* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FlowBaseU5BU5D_t16780B0F060658CB5F6CD22371E715783A53DF20* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>
struct List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IWeavePointU5BU5D_t4F2E7A60D510D4699D15DF11C869F5A32C8C73A3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IWeavePointU5BU5D_t4F2E7A60D510D4699D15DF11C869F5A32C8C73A3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.Identifier>
struct List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IdentifierU5BU5D_tB903070C54BCA9897B3C2FCF3D4A87BADFCFA09A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IdentifierU5BU5D_tB903070C54BCA9897B3C2FCF3D4A87BADFCFA09A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.Object>
struct List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3586EF5ABA6916A1264318D0FA7041D17C7C0A80* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t3586EF5ABA6916A1264318D0FA7041D17C7C0A80* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Runtime.Object>
struct List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tEDD38A5588B3EF2CA1042B823EABFD3C073B03A5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_tEDD38A5588B3EF2CA1042B823EABFD3C073B03A5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve>
struct List_1_tA7383995CB6636153484C17B150C3B16C85C49B7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GatherPointToResolveU5BU5D_tCFBD4CA83BCF7F3F701B7B631061CC962657A3C4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA7383995CB6636153484C17B150C3B16C85C49B7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GatherPointToResolveU5BU5D_tCFBD4CA83BCF7F3F701B7B631061CC962657A3C4* ___s_emptyArray_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0A8F161D0AFAAAFBB8002FDA60CE4399F88BF872  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Ink.Runtime.DebugMetadata
struct DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01  : public RuntimeObject
{
	// System.Int32 Ink.Runtime.DebugMetadata::startLineNumber
	int32_t ___startLineNumber_0;
	// System.Int32 Ink.Runtime.DebugMetadata::endLineNumber
	int32_t ___endLineNumber_1;
	// System.Int32 Ink.Runtime.DebugMetadata::startCharacterNumber
	int32_t ___startCharacterNumber_2;
	// System.Int32 Ink.Runtime.DebugMetadata::endCharacterNumber
	int32_t ___endCharacterNumber_3;
	// System.String Ink.Runtime.DebugMetadata::fileName
	String_t* ___fileName_4;
	// System.String Ink.Runtime.DebugMetadata::sourceName
	String_t* ___sourceName_5;
};

// Ink.Parsed.Identifier
struct Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD  : public RuntimeObject
{
	// System.String Ink.Parsed.Identifier::name
	String_t* ___name_0;
	// Ink.Runtime.DebugMetadata Ink.Parsed.Identifier::debugMetadata
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ___debugMetadata_1;
};

struct Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD_StaticFields
{
	// Ink.Parsed.Identifier Ink.Parsed.Identifier::Done
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___Done_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Ink.Parsed.Object
struct Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7  : public RuntimeObject
{
	// Ink.Runtime.DebugMetadata Ink.Parsed.Object::_debugMetadata
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ____debugMetadata_0;
	// Ink.Parsed.Object Ink.Parsed.Object::<parent>k__BackingField
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___U3CparentU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.Object::<content>k__BackingField
	List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___U3CcontentU3Ek__BackingField_2;
	// Ink.Runtime.Object Ink.Parsed.Object::_runtimeObject
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ____runtimeObject_3;
	// System.Boolean Ink.Parsed.Object::_alreadyHadError
	bool ____alreadyHadError_4;
	// System.Boolean Ink.Parsed.Object::_alreadyHadWarning
	bool ____alreadyHadWarning_5;
};

// Ink.Runtime.Object
struct Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB  : public RuntimeObject
{
	// Ink.Runtime.Object Ink.Runtime.Object::<parent>k__BackingField
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___U3CparentU3Ek__BackingField_0;
	// Ink.Runtime.DebugMetadata Ink.Runtime.Object::_debugMetadata
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ____debugMetadata_1;
	// Ink.Runtime.Path Ink.Runtime.Object::_path
	Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ____path_2;
};

// Ink.Runtime.Path
struct Path_tCC1F1626DB60711735401EA8FA76A191D9014600  : public RuntimeObject
{
	// System.Boolean Ink.Runtime.Path::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_1;
	// System.String Ink.Runtime.Path::_componentsString
	String_t* ____componentsString_2;
	// System.Collections.Generic.List`1<Ink.Runtime.Path/Component> Ink.Runtime.Path::_components
	List_1_t8358C58AEB53A1DE0181CC62DFE97831F8DA9C7C* ____components_3;
};

struct Path_tCC1F1626DB60711735401EA8FA76A191D9014600_StaticFields
{
	// System.String Ink.Runtime.Path::parentId
	String_t* ___parentId_0;
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

// Ink.Parsed.VariableReference/<>c
struct U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0  : public RuntimeObject
{
};

struct U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields
{
	// Ink.Parsed.VariableReference/<>c Ink.Parsed.VariableReference/<>c::<>9
	U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* ___U3CU3E9_0;
	// System.Func`3<Ink.Runtime.DebugMetadata,Ink.Parsed.Identifier,Ink.Runtime.DebugMetadata> Ink.Parsed.VariableReference/<>c::<>9__5_0
	Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* ___U3CU3E9__5_0_1;
	// System.Func`2<Ink.Parsed.Identifier,System.String> Ink.Parsed.VariableReference/<>c::<>9__16_0
	Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* ___U3CU3E9__16_0_2;
};

// Ink.Parsed.Weave/<>c
struct U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807  : public RuntimeObject
{
};

struct U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields
{
	// Ink.Parsed.Weave/<>c Ink.Parsed.Weave/<>c::<>9
	U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* ___U3CU3E9_0;
	// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.IWeavePoint> Ink.Parsed.Weave/<>c::<>9__16_0
	FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* ___U3CU3E9__16_0_1;
	// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.Divert> Ink.Parsed.Weave/<>c::<>9__33_0
	FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* ___U3CU3E9__33_0_2;
};

// Ink.Parsed.Weave/GatherPointToResolve
struct GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14  : public RuntimeObject
{
	// Ink.Runtime.Divert Ink.Parsed.Weave/GatherPointToResolve::divert
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ___divert_0;
	// Ink.Runtime.Object Ink.Parsed.Weave/GatherPointToResolve::targetRuntimeObj
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___targetRuntimeObj_1;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.FlowBase>
struct Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.IWeavePoint>
struct Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Object>
struct Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Weave/GatherPointToResolve>
struct Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,Ink.Parsed.IWeavePoint>
struct KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Nullable`1<Ink.Parsed.FlowLevel>
struct Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// Ink.Parsed.Wrap`1<Ink.Runtime.Glue>
struct Wrap_1_tC06BF2A45CCF887EEF2D86199C08609A6927998F  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// T Ink.Parsed.Wrap`1::_objToWrap
	Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D* ____objToWrap_6;
};

// Ink.Parsed.Wrap`1<Ink.Runtime.Tag>
struct Wrap_1_t30A29E9AC5AC4AEC0670984E15D014B48C63BFF9  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// T Ink.Parsed.Wrap`1::_objToWrap
	Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29* ____objToWrap_6;
};

// Ink.Parsed.AuthorWarning
struct AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// System.String Ink.Parsed.AuthorWarning::warningMessage
	String_t* ___warningMessage_6;
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

// Ink.Parsed.Choice
struct Choice_t36174EC808231C52E43CE7768134739559499893  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.ContentList Ink.Parsed.Choice::<startContent>k__BackingField
	ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* ___U3CstartContentU3Ek__BackingField_6;
	// Ink.Parsed.ContentList Ink.Parsed.Choice::<choiceOnlyContent>k__BackingField
	ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* ___U3CchoiceOnlyContentU3Ek__BackingField_7;
	// Ink.Parsed.ContentList Ink.Parsed.Choice::<innerContent>k__BackingField
	ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* ___U3CinnerContentU3Ek__BackingField_8;
	// Ink.Parsed.Identifier Ink.Parsed.Choice::<identifier>k__BackingField
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___U3CidentifierU3Ek__BackingField_9;
	// System.Boolean Ink.Parsed.Choice::<onceOnly>k__BackingField
	bool ___U3ConceOnlyU3Ek__BackingField_10;
	// System.Boolean Ink.Parsed.Choice::<isInvisibleDefault>k__BackingField
	bool ___U3CisInvisibleDefaultU3Ek__BackingField_11;
	// System.Int32 Ink.Parsed.Choice::<indentationDepth>k__BackingField
	int32_t ___U3CindentationDepthU3Ek__BackingField_12;
	// System.Boolean Ink.Parsed.Choice::<hasWeaveStyleInlineBrackets>k__BackingField
	bool ___U3ChasWeaveStyleInlineBracketsU3Ek__BackingField_13;
	// Ink.Runtime.ChoicePoint Ink.Parsed.Choice::_runtimeChoice
	ChoicePoint_t4B38D1BE22B41C7C0AF41CA18AD6A6D12239111D* ____runtimeChoice_14;
	// Ink.Runtime.Container Ink.Parsed.Choice::_innerContentContainer
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____innerContentContainer_15;
	// Ink.Runtime.Container Ink.Parsed.Choice::_outerContainer
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____outerContainer_16;
	// Ink.Runtime.Container Ink.Parsed.Choice::_startContentRuntimeContainer
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____startContentRuntimeContainer_17;
	// Ink.Runtime.Divert Ink.Parsed.Choice::_divertToStartContentOuter
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ____divertToStartContentOuter_18;
	// Ink.Runtime.Divert Ink.Parsed.Choice::_divertToStartContentInner
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ____divertToStartContentInner_19;
	// Ink.Runtime.Container Ink.Parsed.Choice::_r1Label
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____r1Label_20;
	// Ink.Runtime.Container Ink.Parsed.Choice::_r2Label
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____r2Label_21;
	// Ink.Runtime.DivertTargetValue Ink.Parsed.Choice::_returnToR1
	DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* ____returnToR1_22;
	// Ink.Runtime.DivertTargetValue Ink.Parsed.Choice::_returnToR2
	DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* ____returnToR2_23;
	// Ink.Parsed.Expression Ink.Parsed.Choice::_condition
	Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ____condition_24;
};

// Ink.Parsed.Conditional
struct Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Expression Ink.Parsed.Conditional::<initialCondition>k__BackingField
	Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___U3CinitialConditionU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<Ink.Parsed.ConditionalSingleBranch> Ink.Parsed.Conditional::<branches>k__BackingField
	List_1_t488491625CFD9ED32600FE60136E562DEE6CAC34* ___U3CbranchesU3Ek__BackingField_7;
	// Ink.Runtime.ControlCommand Ink.Parsed.Conditional::_reJoinTarget
	ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ____reJoinTarget_8;
};

// Ink.Parsed.ConstantDeclaration
struct ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.ConstantDeclaration::<constantIdentifier>k__BackingField
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___U3CconstantIdentifierU3Ek__BackingField_6;
	// Ink.Parsed.Expression Ink.Parsed.ConstantDeclaration::<expression>k__BackingField
	Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___U3CexpressionU3Ek__BackingField_7;
};

// Ink.Runtime.Container
struct Container_t74302BC1028974B0A346A43F334AECB681D79579  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// System.String Ink.Runtime.Container::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Ink.Runtime.Object> Ink.Runtime.Container::_content
	List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* ____content_4;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.INamedContent> Ink.Runtime.Container::<namedContent>k__BackingField
	Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49* ___U3CnamedContentU3Ek__BackingField_5;
	// System.Boolean Ink.Runtime.Container::<visitsShouldBeCounted>k__BackingField
	bool ___U3CvisitsShouldBeCountedU3Ek__BackingField_6;
	// System.Boolean Ink.Runtime.Container::<turnIndexShouldBeCounted>k__BackingField
	bool ___U3CturnIndexShouldBeCountedU3Ek__BackingField_7;
	// System.Boolean Ink.Runtime.Container::<countingAtStartOnly>k__BackingField
	bool ___U3CcountingAtStartOnlyU3Ek__BackingField_8;
	// Ink.Runtime.Path Ink.Runtime.Container::_pathToFirstLeafContent
	Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ____pathToFirstLeafContent_9;
};

// Ink.Parsed.ContentList
struct ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// System.Boolean Ink.Parsed.ContentList::<dontFlatten>k__BackingField
	bool ___U3CdontFlattenU3Ek__BackingField_6;
};

// Ink.Runtime.ControlCommand
struct ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// Ink.Runtime.ControlCommand/CommandType Ink.Runtime.ControlCommand::<commandType>k__BackingField
	int32_t ___U3CcommandTypeU3Ek__BackingField_3;
};

// Ink.Parsed.Divert
struct Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Path Ink.Parsed.Divert::<target>k__BackingField
	Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* ___U3CtargetU3Ek__BackingField_6;
	// Ink.Parsed.Object Ink.Parsed.Divert::<targetContent>k__BackingField
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___U3CtargetContentU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<Ink.Parsed.Expression> Ink.Parsed.Divert::<arguments>k__BackingField
	List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* ___U3CargumentsU3Ek__BackingField_8;
	// Ink.Runtime.Divert Ink.Parsed.Divert::<runtimeDivert>k__BackingField
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ___U3CruntimeDivertU3Ek__BackingField_9;
	// System.Boolean Ink.Parsed.Divert::<isFunctionCall>k__BackingField
	bool ___U3CisFunctionCallU3Ek__BackingField_10;
	// System.Boolean Ink.Parsed.Divert::<isEmpty>k__BackingField
	bool ___U3CisEmptyU3Ek__BackingField_11;
	// System.Boolean Ink.Parsed.Divert::<isTunnel>k__BackingField
	bool ___U3CisTunnelU3Ek__BackingField_12;
	// System.Boolean Ink.Parsed.Divert::<isThread>k__BackingField
	bool ___U3CisThreadU3Ek__BackingField_13;
};

// Ink.Parsed.Expression
struct Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// System.Boolean Ink.Parsed.Expression::<outputWhenComplete>k__BackingField
	bool ___U3CoutputWhenCompleteU3Ek__BackingField_6;
	// Ink.Runtime.Container Ink.Parsed.Expression::_prototypeRuntimeConstantExpression
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____prototypeRuntimeConstantExpression_7;
};

// Ink.Parsed.FlowBase
struct FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.FlowBase::<identifier>k__BackingField
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___U3CidentifierU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<Ink.Parsed.FlowBase/Argument> Ink.Parsed.FlowBase::<arguments>k__BackingField
	List_1_t5A7C284E404753F1786689E097CE59A152638444* ___U3CargumentsU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.VariableAssignment> Ink.Parsed.FlowBase::variableDeclarations
	Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0* ___variableDeclarations_8;
	// System.Boolean Ink.Parsed.FlowBase::<isFunction>k__BackingField
	bool ___U3CisFunctionU3Ek__BackingField_9;
	// Ink.Parsed.Weave Ink.Parsed.FlowBase::_rootWeave
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* ____rootWeave_10;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.FlowBase> Ink.Parsed.FlowBase::_subFlowsByName
	Dictionary_2_t7036DE9B0F2F80FBA9FBA3A30E3971F4F9DD9C37* ____subFlowsByName_11;
	// Ink.Runtime.Divert Ink.Parsed.FlowBase::_startingSubFlowDivert
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ____startingSubFlowDivert_12;
	// Ink.Runtime.Object Ink.Parsed.FlowBase::_startingSubFlowRuntime
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ____startingSubFlowRuntime_13;
	// Ink.Parsed.FlowBase Ink.Parsed.FlowBase::_firstChildFlow
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* ____firstChildFlow_14;
};

// Ink.Parsed.Gather
struct Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.Gather::<identifier>k__BackingField
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___U3CidentifierU3Ek__BackingField_6;
	// System.Int32 Ink.Parsed.Gather::<indentationDepth>k__BackingField
	int32_t ___U3CindentationDepthU3Ek__BackingField_7;
};

// Ink.Runtime.Glue
struct Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
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

// Ink.Parsed.ListDefinition
struct ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.ListDefinition::identifier
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___identifier_6;
	// System.Collections.Generic.List`1<Ink.Parsed.ListElementDefinition> Ink.Parsed.ListDefinition::itemDefinitions
	List_1_t5616402C899551039E0CA5216EA28E3B5E8B4010* ___itemDefinitions_7;
	// Ink.Parsed.VariableAssignment Ink.Parsed.ListDefinition::variableAssignment
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* ___variableAssignment_8;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListElementDefinition> Ink.Parsed.ListDefinition::_elementsByName
	Dictionary_2_tE97196D98524B83CDC1CBCD47EE15F32C15E13E5* ____elementsByName_9;
};

// Ink.Runtime.Pointer
struct Pointer_tAE29AE1A481AA7FDB6539F59D006A589CDB9EA87 
{
	// Ink.Runtime.Container Ink.Runtime.Pointer::container
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container_0;
	// System.Int32 Ink.Runtime.Pointer::index
	int32_t ___index_1;
};

struct Pointer_tAE29AE1A481AA7FDB6539F59D006A589CDB9EA87_StaticFields
{
	// Ink.Runtime.Pointer Ink.Runtime.Pointer::Null
	Pointer_tAE29AE1A481AA7FDB6539F59D006A589CDB9EA87 ___Null_2;
};
// Native definition for P/Invoke marshalling of Ink.Runtime.Pointer
struct Pointer_tAE29AE1A481AA7FDB6539F59D006A589CDB9EA87_marshaled_pinvoke
{
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container_0;
	int32_t ___index_1;
};
// Native definition for COM marshalling of Ink.Runtime.Pointer
struct Pointer_tAE29AE1A481AA7FDB6539F59D006A589CDB9EA87_marshaled_com
{
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container_0;
	int32_t ___index_1;
};

// Ink.Parsed.Sequence
struct Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.Sequence::sequenceElements
	List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___sequenceElements_6;
	// Ink.Parsed.SequenceType Ink.Parsed.Sequence::sequenceType
	int32_t ___sequenceType_7;
	// System.Collections.Generic.List`1<Ink.Parsed.Sequence/SequenceDivertToResolve> Ink.Parsed.Sequence::_sequenceDivertsToResove
	List_1_t790425294EA2A6F283208CCC3E6906D3E7986012* ____sequenceDivertsToResove_8;
};

// Ink.Runtime.Tag
struct Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// System.String Ink.Runtime.Tag::<text>k__BackingField
	String_t* ___U3CtextU3Ek__BackingField_3;
};

// Ink.Parsed.Text
struct Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// System.String Ink.Parsed.Text::<text>k__BackingField
	String_t* ___U3CtextU3Ek__BackingField_6;
};

// Ink.Parsed.TunnelOnwards
struct TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Divert Ink.Parsed.TunnelOnwards::_divertAfter
	Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* ____divertAfter_6;
	// Ink.Runtime.DivertTargetValue Ink.Parsed.TunnelOnwards::_overrideDivertTarget
	DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* ____overrideDivertTarget_7;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// Ink.Runtime.Value
struct Value_t83388D9312CF9361C360A2BF2FB68504251BDF28  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
};

// Ink.Parsed.VariableAssignment
struct VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.VariableAssignment::<variableIdentifier>k__BackingField
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___U3CvariableIdentifierU3Ek__BackingField_6;
	// Ink.Parsed.Expression Ink.Parsed.VariableAssignment::<expression>k__BackingField
	Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___U3CexpressionU3Ek__BackingField_7;
	// Ink.Parsed.ListDefinition Ink.Parsed.VariableAssignment::<listDefinition>k__BackingField
	ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___U3ClistDefinitionU3Ek__BackingField_8;
	// System.Boolean Ink.Parsed.VariableAssignment::<isGlobalDeclaration>k__BackingField
	bool ___U3CisGlobalDeclarationU3Ek__BackingField_9;
	// System.Boolean Ink.Parsed.VariableAssignment::<isNewTemporaryDeclaration>k__BackingField
	bool ___U3CisNewTemporaryDeclarationU3Ek__BackingField_10;
	// Ink.Runtime.VariableAssignment Ink.Parsed.VariableAssignment::_runtimeAssignment
	VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* ____runtimeAssignment_11;
};

// Ink.Runtime.VariableAssignment
struct VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// System.String Ink.Runtime.VariableAssignment::<variableName>k__BackingField
	String_t* ___U3CvariableNameU3Ek__BackingField_3;
	// System.Boolean Ink.Runtime.VariableAssignment::<isNewDeclaration>k__BackingField
	bool ___U3CisNewDeclarationU3Ek__BackingField_4;
	// System.Boolean Ink.Runtime.VariableAssignment::<isGlobal>k__BackingField
	bool ___U3CisGlobalU3Ek__BackingField_5;
};

// Ink.Runtime.VariableReference
struct VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// System.String Ink.Runtime.VariableReference::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_3;
	// Ink.Runtime.Path Ink.Runtime.VariableReference::<pathForCount>k__BackingField
	Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___U3CpathForCountU3Ek__BackingField_4;
};

// Ink.Runtime.Void
struct Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
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

// Ink.Parsed.Weave
struct Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Runtime.Container Ink.Parsed.Weave::<currentContainer>k__BackingField
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ___U3CcurrentContainerU3Ek__BackingField_6;
	// System.Int32 Ink.Parsed.Weave::<baseIndentIndex>k__BackingField
	int32_t ___U3CbaseIndentIndexU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint> Ink.Parsed.Weave::looseEnds
	List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* ___looseEnds_8;
	// System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve> Ink.Parsed.Weave::gatherPointsToResolve
	List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* ___gatherPointsToResolve_9;
	// Ink.Parsed.IWeavePoint Ink.Parsed.Weave::previousWeavePoint
	RuntimeObject* ___previousWeavePoint_10;
	// System.Boolean Ink.Parsed.Weave::addContentToPreviousWeavePoint
	bool ___addContentToPreviousWeavePoint_11;
	// System.Boolean Ink.Parsed.Weave::hasSeenChoiceInSection
	bool ___hasSeenChoiceInSection_12;
	// System.Int32 Ink.Parsed.Weave::_unnamedGatherCount
	int32_t ____unnamedGatherCount_13;
	// System.Int32 Ink.Parsed.Weave::_choiceCount
	int32_t ____choiceCount_14;
	// Ink.Runtime.Container Ink.Parsed.Weave::_rootContainer
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____rootContainer_15;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint> Ink.Parsed.Weave::_namedWeavePoints
	Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* ____namedWeavePoints_16;
};

// Ink.Parsed.FlowBase/VariableResolveResult
struct VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 
{
	// System.Boolean Ink.Parsed.FlowBase/VariableResolveResult::found
	bool ___found_0;
	// System.Boolean Ink.Parsed.FlowBase/VariableResolveResult::isGlobal
	bool ___isGlobal_1;
	// System.Boolean Ink.Parsed.FlowBase/VariableResolveResult::isArgument
	bool ___isArgument_2;
	// System.Boolean Ink.Parsed.FlowBase/VariableResolveResult::isTemporary
	bool ___isTemporary_3;
	// Ink.Parsed.FlowBase Ink.Parsed.FlowBase/VariableResolveResult::ownerFlow
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* ___ownerFlow_4;
};
// Native definition for P/Invoke marshalling of Ink.Parsed.FlowBase/VariableResolveResult
struct VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2_marshaled_pinvoke
{
	int32_t ___found_0;
	int32_t ___isGlobal_1;
	int32_t ___isArgument_2;
	int32_t ___isTemporary_3;
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* ___ownerFlow_4;
};
// Native definition for COM marshalling of Ink.Parsed.FlowBase/VariableResolveResult
struct VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2_marshaled_com
{
	int32_t ___found_0;
	int32_t ___isGlobal_1;
	int32_t ___isArgument_2;
	int32_t ___isTemporary_3;
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* ___ownerFlow_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.IWeavePoint>
struct Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// Ink.Runtime.Value`1<Ink.Runtime.Path>
struct Value_1_t9DD824A3332707D30F0278B26B48A270886802FC  : public Value_t83388D9312CF9361C360A2BF2FB68504251BDF28
{
	// T Ink.Runtime.Value`1::<value>k__BackingField
	Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___U3CvalueU3Ek__BackingField_3;
};

// Ink.Runtime.Value`1<System.String>
struct Value_1_t62B415E6A65821732DA445E45DF5E6F3FBD6978C  : public Value_t83388D9312CF9361C360A2BF2FB68504251BDF28
{
	// T Ink.Runtime.Value`1::<value>k__BackingField
	String_t* ___U3CvalueU3Ek__BackingField_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Ink.Runtime.Divert
struct Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// Ink.Runtime.Path Ink.Runtime.Divert::_targetPath
	Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ____targetPath_3;
	// Ink.Runtime.Pointer Ink.Runtime.Divert::_targetPointer
	Pointer_tAE29AE1A481AA7FDB6539F59D006A589CDB9EA87 ____targetPointer_4;
	// System.String Ink.Runtime.Divert::<variableDivertName>k__BackingField
	String_t* ___U3CvariableDivertNameU3Ek__BackingField_5;
	// System.Boolean Ink.Runtime.Divert::<pushesToStack>k__BackingField
	bool ___U3CpushesToStackU3Ek__BackingField_6;
	// Ink.Runtime.PushPopType Ink.Runtime.Divert::stackPushType
	int32_t ___stackPushType_7;
	// System.Boolean Ink.Runtime.Divert::<isExternal>k__BackingField
	bool ___U3CisExternalU3Ek__BackingField_8;
	// System.Int32 Ink.Runtime.Divert::<externalArgs>k__BackingField
	int32_t ___U3CexternalArgsU3Ek__BackingField_9;
	// System.Boolean Ink.Runtime.Divert::<isConditional>k__BackingField
	bool ___U3CisConditionalU3Ek__BackingField_10;
};

// Ink.Parsed.DivertTarget
struct DivertTarget_t72F939797266E1087B339BC7F70A4A43A8E91F2D  : public Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D
{
	// Ink.Parsed.Divert Ink.Parsed.DivertTarget::divert
	Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* ___divert_8;
	// Ink.Runtime.DivertTargetValue Ink.Parsed.DivertTarget::_runtimeDivertTargetValue
	DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* ____runtimeDivertTargetValue_9;
	// Ink.Runtime.Divert Ink.Parsed.DivertTarget::_runtimeDivert
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ____runtimeDivert_10;
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

// Ink.Parsed.Glue
struct Glue_t1B0423D93951017DCD923A001EEEE15092EF1D2A  : public Wrap_1_tC06BF2A45CCF887EEF2D86199C08609A6927998F
{
};

// Ink.Parsed.ListElementDefinition
struct ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.ListElementDefinition::identifier
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___identifier_6;
	// System.Nullable`1<System.Int32> Ink.Parsed.ListElementDefinition::explicitValue
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___explicitValue_7;
	// System.Int32 Ink.Parsed.ListElementDefinition::seriesValue
	int32_t ___seriesValue_8;
	// System.Boolean Ink.Parsed.ListElementDefinition::inInitialList
	bool ___inInitialList_9;
};

// Ink.Parsed.Path
struct Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC  : public RuntimeObject
{
	// System.String Ink.Parsed.Path::_dotSeparatedComponents
	String_t* ____dotSeparatedComponents_0;
	// System.Collections.Generic.List`1<Ink.Parsed.Identifier> Ink.Parsed.Path::<components>k__BackingField
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* ___U3CcomponentsU3Ek__BackingField_1;
	// System.Nullable`1<Ink.Parsed.FlowLevel> Ink.Parsed.Path::_baseTargetLevel
	Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC ____baseTargetLevel_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Ink.Parsed.Story
struct Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7  : public FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822
{
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.Expression> Ink.Parsed.Story::constants
	Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* ___constants_15;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ExternalDeclaration> Ink.Parsed.Story::externals
	Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0* ___externals_16;
	// System.Boolean Ink.Parsed.Story::countAllVisits
	bool ___countAllVisits_17;
	// Ink.ErrorHandler Ink.Parsed.Story::_errorHandler
	ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728* ____errorHandler_18;
	// System.Boolean Ink.Parsed.Story::_hadError
	bool ____hadError_19;
	// System.Boolean Ink.Parsed.Story::_hadWarning
	bool ____hadWarning_20;
	// System.Collections.Generic.HashSet`1<Ink.Runtime.Container> Ink.Parsed.Story::_dontFlattenContainers
	HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* ____dontFlattenContainers_21;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListDefinition> Ink.Parsed.Story::_listDefs
	Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* ____listDefs_22;
};

// Ink.Parsed.StringExpression
struct StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678  : public Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D
{
};

// Ink.Parsed.Tag
struct Tag_tAB0A2B0822AC49777B0EF88C69DFC2D2A203DFF9  : public Wrap_1_t30A29E9AC5AC4AEC0670984E15D014B48C63BFF9
{
};

// Ink.Parsed.VariableReference
struct VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049  : public Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D
{
	// System.String Ink.Parsed.VariableReference::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_8;
	// Ink.Parsed.Identifier Ink.Parsed.VariableReference::_singleIdentifier
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ____singleIdentifier_9;
	// System.Collections.Generic.List`1<Ink.Parsed.Identifier> Ink.Parsed.VariableReference::pathIdentifiers
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* ___pathIdentifiers_10;
	// System.Collections.Generic.List`1<System.String> Ink.Parsed.VariableReference::<path>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CpathU3Ek__BackingField_11;
	// System.Boolean Ink.Parsed.VariableReference::isConstantReference
	bool ___isConstantReference_12;
	// System.Boolean Ink.Parsed.VariableReference::isListItemReference
	bool ___isListItemReference_13;
	// Ink.Runtime.VariableReference Ink.Parsed.VariableReference::_runtimeVarRef
	VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* ____runtimeVarRef_14;
};

// Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29
struct U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C  : public RuntimeObject
{
	// System.Int32 Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Ink.Parsed.Object Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>2__current
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___U3CU3E2__current_1;
	// System.Int32 Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Ink.Parsed.IWeavePoint Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::weavePoint
	RuntimeObject* ___weavePoint_3;
	// Ink.Parsed.IWeavePoint Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>3__weavePoint
	RuntimeObject* ___U3CU3E3__weavePoint_4;
	// Ink.Parsed.Weave Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>4__this
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* ___U3CU3E4__this_5;
	// Ink.Parsed.Object Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<obj>5__1
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___U3CobjU3E5__1_6;
	// Ink.Parsed.Weave Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<parentWeave>5__2
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* ___U3CparentWeaveU3E5__2_7;
	// System.Int32 Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<weavePointIdx>5__3
	int32_t ___U3CweavePointIdxU3E5__3_8;
	// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Object> Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>s__4
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C ___U3CU3Es__4_9;
	// Ink.Parsed.Object Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<contentObj>5__5
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___U3CcontentObjU3E5__5_10;
	// System.Int32 Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<i>5__6
	int32_t ___U3CiU3E5__6_11;
	// Ink.Parsed.Object Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<laterObj>5__7
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___U3ClaterObjU3E5__7_12;
};

// Ink.Runtime.DivertTargetValue
struct DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B  : public Value_1_t9DD824A3332707D30F0278B26B48A270886802FC
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Ink.Runtime.StringValue
struct StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2  : public Value_1_t62B415E6A65821732DA445E45DF5E6F3FBD6978C
{
	// System.Boolean Ink.Runtime.StringValue::<isNewline>k__BackingField
	bool ___U3CisNewlineU3Ek__BackingField_4;
	// System.Boolean Ink.Runtime.StringValue::<isInlineWhitespace>k__BackingField
	bool ___U3CisInlineWhitespaceU3Ek__BackingField_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.Choice>
struct FindQueryFunc_1_t336B67E9DF3943E1288CC482ACB0BBF4A96D7199  : public MulticastDelegate_t
{
};

// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.Divert>
struct FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911  : public MulticastDelegate_t
{
};

// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.IWeavePoint>
struct FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40  : public MulticastDelegate_t
{
};

// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.TunnelOnwards>
struct FindQueryFunc_1_tD49158339C9E80306F093B9B3FFDC0266098B984  : public MulticastDelegate_t
{
};

// System.Func`2<Ink.Parsed.Identifier,System.String>
struct Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875  : public MulticastDelegate_t
{
};

// System.Func`3<Ink.Runtime.DebugMetadata,Ink.Parsed.Identifier,Ink.Runtime.DebugMetadata>
struct Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Ink.Parsed.Weave/BadTerminationHandler
struct BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object::AddContent<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_AddContent_TisRuntimeObject_m602F0E148C596C72999222ED0EA4E9C0779BFD6E_gshared (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___listContent0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::AddContent<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_AddContent_TisRuntimeObject_m88FD0921CF023EC8A98CA0158EB868EBECB6273F_gshared (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, RuntimeObject* ___subContent0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TAccumulate System.Linq.Enumerable::Aggregate<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Aggregate_TisRuntimeObject_TisRuntimeObject_m33D4EF7B8928D2A2DE50A57A168F4D6006FD9657_gshared (RuntimeObject* ___source0, RuntimeObject* ___seed1, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___func2, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.String System.String::Join<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisRuntimeObject_mA9B8DCEF92E54DCEE23246AC6EB15FA9BF740C02_gshared (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object/FindQueryFunc`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindQueryFunc_1__ctor_m0A3323A942DFF84A818F2D4BCF3101FEEB1ED7EF_gshared (FindQueryFunc_1_tF0B7DF2C2BB336BC978FCC0A8D82910DD79BAE75* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> Ink.Parsed.Object::FindAll<System.Object>(Ink.Parsed.Object/FindQueryFunc`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Object_FindAll_TisRuntimeObject_m368416BE935DDD2F291D003D061DBAAC99383FB9_gshared (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_tF0B7DF2C2BB336BC978FCC0A8D82910DD79BAE75* ___queryFunc0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* List_1_GetRange_m8F5CCE68284D0E231F22C5C2DBBA51B856D70F25_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::InsertContent<System.Object>(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_InsertContent_TisRuntimeObject_m6278B89820234B7EC5CE91674E04EC2E517C4ADC_gshared (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, int32_t ___index0, RuntimeObject* ___subContent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::Find<System.Object>(Ink.Parsed.Object/FindQueryFunc`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Find_TisRuntimeObject_m432376B603D8571C2E9C1CF7CA2030D12E6D8A44_gshared (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_tF0B7DF2C2BB336BC978FCC0A8D82910DD79BAE75* ___queryFunc0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Wrap`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrap_1__ctor_mA5A5D12BFDE33FADD6E2E6CABE7EE893286C212B_gshared (Wrap_1_t07205EDFFF18F5F5B08620D9B41DCA4780859265* __this, RuntimeObject* ___objToWrap0, const RuntimeMethod* method) ;

// System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.Object::get_content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Parsed.Object>::get_Count()
inline int32_t List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Ink.Parsed.Object>::get_Item(System.Int32)
inline Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11 (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Ink.Parsed.Expression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expression__ctor_mBA2907DB4D7FEA90D9A52A1C9820CDBC72DFB2AD (Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object::AddContent<Ink.Parsed.Object>(System.Collections.Generic.List`1<T>)
inline void Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___listContent0, const RuntimeMethod* method)
{
	((  void (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, const RuntimeMethod*))Object_AddContent_TisRuntimeObject_m602F0E148C596C72999222ED0EA4E9C0779BFD6E_gshared)(__this, ___listContent0, method);
}
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::BeginString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_BeginString_mAF5F64F652E24493C96771078B30A260F321E492 (const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Container::AddContent(Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76 (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___contentObj0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.Object>::GetEnumerator()
inline Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73 (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Object>::Dispose()
inline void Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273 (Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Object>::get_Current()
inline Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline (Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* __this, const RuntimeMethod* method)
{
	return ((  Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* (*) (Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Ink.Runtime.Object Ink.Parsed.Object::get_runtimeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Object>::MoveNext()
inline bool Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89 (Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::EndString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_EndString_m05E7FDE33614880F368A0971828EA25B8168D007 (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Object::op_Equality(Ink.Parsed.Object,Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m109E112ACAA3627F5E1EF2BD8C13110F2493CB4D (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___a0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___b1, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.StringExpression::get_isSingleString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringExpression_get_isSingleString_m7A6128F11CA9543349BD832F63FC453C02242AF7 (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Text::set_text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Text_set_text_m174E6D93DD8C69932A47F52A61E8A97CAD231058_inline (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Ink.Parsed.Text::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Text_get_text_m14F6F4C8E14BAD266FF794A86DCFA15E89964103_inline (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.StringValue::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValue__ctor_m84F62339FA8008253A9A001E433CA1D5D82CA19E (StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Object::op_Implicit(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___obj0, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::AddContent<Ink.Parsed.Divert>(T)
inline Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* Object_AddContent_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_mBC95D48BAC65CC876001759F3105E180FAC26E32 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* ___subContent0, const RuntimeMethod* method)
{
	return ((  Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186*, const RuntimeMethod*))Object_AddContent_TisRuntimeObject_m88FD0921CF023EC8A98CA0158EB868EBECB6273F_gshared)(__this, ___subContent0, method);
}
// System.Void Ink.Runtime.Container::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container__ctor_mE49EAAD4892EDEFFDA64A7A54823A021ECBF4F84 (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, const RuntimeMethod* method) ;
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::EvalStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_EvalStart_mF134D17B2D15983A7CC67A8C45FCCD491EAF820D (const RuntimeMethod* method) ;
// Ink.Parsed.Divert Ink.Parsed.TunnelOnwards::get_divertAfter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8 (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Runtime.Object::op_Implicit(Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m104371B3B40153BF3D5333B969CBFC900C10FCEE (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___obj0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Ink.Parsed.Expression> Ink.Parsed.Divert::get_arguments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* Divert_get_arguments_m835B3FA82AB94C9D96B4472519BE0C4776F6FD5B_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Parsed.Expression>::get_Count()
inline int32_t List_1_get_Count_m28F4FD8191AC70A79F88724B9BD21145FF88B3A8_inline (List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Ink.Runtime.Object> Ink.Runtime.Container::get_content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Ink.Runtime.Object>::get_Item(System.Int32)
inline Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37 (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* (*) (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// Ink.Runtime.ControlCommand/CommandType Ink.Runtime.ControlCommand::get_commandType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControlCommand_get_commandType_mF43D077F555FA63FF4A1146790A56346647DBE8A_inline (ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Runtime.Object>::get_Count()
inline int32_t List_1_get_Count_m2EF709723E8742028D2BF885FA5335303F0B0282_inline (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Ink.Runtime.Object::set_parent(Ink.Runtime.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_set_parent_m313E7123FE19E7C089F5856A0B9AB83D092AF2FF_inline (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.DivertTargetValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivertTargetValue__ctor_m1214D460147B45F9850424DA9BF5D34306720F06 (DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Void::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Void__ctor_mE6655AC1CDBDF3AEAF058E98834803EFA65A8886 (Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0* __this, const RuntimeMethod* method) ;
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::EvalEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_EvalEnd_m983DEF86B4D9A272399C49B67F20E8665FE9054A (const RuntimeMethod* method) ;
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::PopTunnel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_PopTunnel_m67685FC32D1FAAF3F6DF9D5CFA18C7A6D1C2995C (const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object::ResolveReferences(Ink.Parsed.Story)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_ResolveReferences_m8BC5DD701019191459A9CEF84D71FFBE2FEDFF8E (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* ___context0, const RuntimeMethod* method) ;
// Ink.Parsed.Object Ink.Parsed.Divert::get_targetContent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Divert_get_targetContent_m2A18F6F480779045E0B34983F78C0ADFE635D21C_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.DivertTargetValue::set_targetPath(Ink.Runtime.Path)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivertTargetValue_set_targetPath_m443285EA0636089C577FCD0240756CB8F7A9FEA3 (DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* __this, Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___value0, const RuntimeMethod* method) ;
// Ink.Parsed.Identifier Ink.Parsed.VariableAssignment::get_variableIdentifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* VariableAssignment_get_variableIdentifier_m5E36193B2BC86B48D2567C6EA389B4C5FE67CB9A_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.VariableAssignment::get_isGlobalDeclaration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.VariableAssignment::get_isNewTemporaryDeclaration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.VariableAssignment::set_variableIdentifier(Ink.Parsed.Identifier)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_variableIdentifier_m16684EEAA53B0C8C0A31B1072977CC5C115A35E3_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___value0, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::AddContent<Ink.Parsed.Expression>(T)
inline Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___subContent0, const RuntimeMethod* method)
{
	return ((  Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D*, const RuntimeMethod*))Object_AddContent_TisRuntimeObject_m88FD0921CF023EC8A98CA0158EB868EBECB6273F_gshared)(__this, ___subContent0, method);
}
// System.Void Ink.Parsed.VariableAssignment::set_expression(Ink.Parsed.Expression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_expression_m4CE2FDFCA9A76FEF3E8C76E0B93FE7CE9705AD48_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___value0, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::AddContent<Ink.Parsed.ListDefinition>(T)
inline ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* Object_AddContent_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_m6169C2A2781ABFF41FF6C9D08702D6F37EC74523 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___subContent0, const RuntimeMethod* method)
{
	return ((  ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65*, const RuntimeMethod*))Object_AddContent_TisRuntimeObject_m88FD0921CF023EC8A98CA0158EB868EBECB6273F_gshared)(__this, ___subContent0, method);
}
// System.Void Ink.Parsed.VariableAssignment::set_listDefinition(Ink.Parsed.ListDefinition)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_listDefinition_m7675DC40AF4DAFF3918BE94FF4DD9190955AF87A_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___value0, const RuntimeMethod* method) ;
// Ink.Parsed.ListDefinition Ink.Parsed.VariableAssignment::get_listDefinition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.VariableAssignment::set_isGlobalDeclaration(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_isGlobalDeclaration_m3B705D1B9A8EC0FB9C5AB5B2B80B690ACD50D86D_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, bool ___value0, const RuntimeMethod* method) ;
// Ink.Parsed.Story Ink.Parsed.Object::get_story()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* Object_get_story_mC48C490DCCF22AEC1CC28FEA37BDD22AA31C8B1C (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// Ink.Parsed.FlowBase Ink.Parsed.Object::ClosestFlowBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* Object_ClosestFlowBase_mFBB185F20F260315B894395561CE129F351600AC (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.FlowBase::TryAddNewVariableDeclaration(Ink.Parsed.VariableAssignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlowBase_TryAddNewVariableDeclaration_mC160F28B3C771CE96BFF6AD1F0DA0DB41D5B2F0B (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* ___varDecl0, const RuntimeMethod* method) ;
// Ink.Parsed.Expression Ink.Parsed.VariableAssignment::get_expression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Object::op_Inequality(Ink.Parsed.Object,Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___a0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___b1, const RuntimeMethod* method) ;
// System.String Ink.Parsed.VariableAssignment::get_variableName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.VariableAssignment::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment__ctor_m34573492CA6DA1C98F74FD9F2F3ECCB2FCE7E1B6 (VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* __this, String_t* ___variableName0, bool ___isNewDeclaration1, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.VariableAssignment::get_isDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VariableAssignment_get_isDeclaration_m303120F48FE6770B5B59269240F63F40631554C5 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Story::CheckForNamingCollisions(Ink.Parsed.Object,Ink.Parsed.Identifier,Ink.Parsed.Story/SymbolType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_CheckForNamingCollisions_m13238A42D40F53489354F276C303D64C2D2AA2F6 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___obj0, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___identifier1, uint32_t ___symbolType2, String_t* ___typeNameOverride3, const RuntimeMethod* method) ;
// Ink.Parsed.FlowBase/VariableResolveResult Ink.Parsed.FlowBase::ResolveVariableWithName(System.String,Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 FlowBase_ResolveVariableWithName_m017DF795D3DA6FF4644793B10ED8B6386171E2C0 (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, String_t* ___varName0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___fromNode1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.Expression>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m0F6C37D27FD2753844BDF8E50AE219156F3DD897 (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean Ink.Runtime.Object::op_Inequality(Ink.Runtime.Object,Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m5A3D926C60E6D42C9B95670417A6F0E60040FEF4 (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___a0, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___b1, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.VariableAssignment::set_isGlobal(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_isGlobal_m7E2A5FFCF8C182807B5941792682A0A1D26535DE_inline (VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Parsed.Identifier>::get_Count()
inline int32_t List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_inline (List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<System.String> Ink.Parsed.VariableReference::get_path()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<Ink.Parsed.Identifier>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* Enumerable_First_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m5E6C1D3887D8BFD12F97E4CDC6DC381E20067DB8 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___source0, method);
}
// System.Void System.Func`3<Ink.Runtime.DebugMetadata,Ink.Parsed.Identifier,Ink.Runtime.DebugMetadata>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mD9CB1B1FF461F43FEBEB5BE74B1C742AD72B080D (Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared)(__this, ___object0, ___method1, method);
}
// TAccumulate System.Linq.Enumerable::Aggregate<Ink.Parsed.Identifier,Ink.Runtime.DebugMetadata>(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
inline DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* Enumerable_Aggregate_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisDebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01_mA9F2FF61E598534C443A817B94DC20D9CD4E8BDF (RuntimeObject* ___source0, DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ___seed1, Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* ___func2, const RuntimeMethod* method)
{
	return ((  DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* (*) (RuntimeObject*, DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01*, Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED*, const RuntimeMethod*))Enumerable_Aggregate_TisRuntimeObject_TisRuntimeObject_m33D4EF7B8928D2A2DE50A57A168F4D6006FD9657_gshared)(___source0, ___seed1, ___func2, method);
}
// System.Void Ink.Parsed.Identifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Identifier__ctor_m9005D97AF26A8FF60030DE8B472F085F4FABEE84 (Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Ink.Parsed.Identifier,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB5EB3293BD72F180C6BB12565679FEF66CC283EE (Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Ink.Parsed.Identifier,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_mC92B8BC15A1403ED0216A60D6ECDE2C8301B7790 (RuntimeObject* ___source0, Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void Ink.Parsed.VariableReference::set_path(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_path_m2987340812E384B0F12578542E50B0CEFABDEAB0_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Join<Ink.Parsed.Identifier>(System.String,System.Collections.Generic.IEnumerable`1<T>)
inline String_t* String_Join_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m62A16EB289D19DA69C6517D41C16DB6DA21A7414 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisRuntimeObject_mA9B8DCEF92E54DCEE23246AC6EB15FA9BF740C02_gshared)(___separator0, ___values1, method);
}
// System.Void Ink.Parsed.VariableReference::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_name_mCA878128BFBEF54B19531F832CD1FB62A617ED65_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Ink.Parsed.VariableReference::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VariableReference_get_name_mE6D2556C23D83C040F82E27DE755F7D6FBD90E0F_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.Expression>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* __this, String_t* ___key0, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301*, String_t*, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Ink.Parsed.Expression::GenerateConstantIntoContainer(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expression_GenerateConstantIntoContainer_mEC1F77A0C77E93571A23830C1AFFC661A5FD1354 (Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container0, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.VariableReference::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference__ctor_mEFCD8F4CFF06B6A3F076B4688E09AC5DE0786718 (VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// Ink.Parsed.ListElementDefinition Ink.Parsed.Story::ResolveListItem(System.String,System.String,Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* Story_ResolveListItem_m857290E9E49BEC424C7D3A54E6171F11DE081302 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, String_t* ___listName0, String_t* ___itemName1, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___source2, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Path::.ctor(System.Collections.Generic.List`1<Ink.Parsed.Identifier>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path__ctor_m1FA0634AFC2CCF3487EE1E3F27F2236655C8AB25 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* ___components0, const RuntimeMethod* method) ;
// Ink.Parsed.Object Ink.Parsed.Path::ResolveFromContext(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Path_ResolveFromContext_m2E7745228A2131E2474943DDB9BE94219BE1AF60 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___context0, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Container::set_visitsShouldBeCounted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Container_set_visitsShouldBeCounted_mCA668E9A96F2D5B8F25801AE1169786E35B2091C_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Ink.Runtime.Object::op_Equality(Ink.Runtime.Object,Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m2AE832318622C516D0CF2C77418FD85DD162DE62 (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___a0, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___b1, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.VariableReference::set_pathForCount(Ink.Runtime.Path)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_pathForCount_m3488741E05F86E09B7A082704610A095EF0C7016_inline (VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* __this, Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.VariableReference::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_name_mD0F82FBF6521B061476F855E565D665D03BADF29_inline (VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.FlowBase::get_isFunction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlowBase_get_isFunction_m89BD3D4FC104434B4EB5091C121C29C3E817D30F_inline (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) ;
// Ink.Parsed.Object Ink.Parsed.Object::get_parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// Ink.Parsed.Identifier Ink.Parsed.FlowBase::get_identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* FlowBase_get_identifier_m4690D9A6AAB405E233688C9261A4F0BB19BFC105_inline (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) ;
// System.String Ink.Parsed.FlowBase::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FlowBase_get_name_m7039F76999F2B76C702FA8DDE92FBD86BC58D97F (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object::Warning(System.String,Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Warning_m9F035739B3D45548FE13DD8787B33B931836F50A (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, String_t* ___message0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___source1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.VariableReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m99983106CE4D2AC262F8BD9DC13B7823049F8684 (U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Ink.Runtime.DebugMetadata Ink.Runtime.DebugMetadata::Merge(Ink.Runtime.DebugMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* DebugMetadata_Merge_m77879AC51F0FFC3021B79DEEBB6EA37DE53923AC (DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* __this, DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ___dm0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Weave::IsGlobalDeclaration(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weave_IsGlobalDeclaration_m2F27AA5E1B93C4B938128743ECD736C5C69F43A3 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___obj0, const RuntimeMethod* method) ;
// Ink.Parsed.Object Ink.Parsed.Weave::get_lastParsedSignificantObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Weave_get_lastParsedSignificantObject_m1B04EDF689CE2860594576D416B2EBC60C55423B (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// System.Int32 Ink.Parsed.Weave::DetermineBaseIndentationFromContent(System.Collections.Generic.List`1<Ink.Parsed.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weave_DetermineBaseIndentationFromContent_m938BFF91272784586BFBB6F194284632D19CD604 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___contentList0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave::set_baseIndentIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weave_set_baseIndentIndex_m6F3D26B4F215BB48218CFE3E84BD0B26532B98B1_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave::ConstructWeaveHierarchyFromIndentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ConstructWeaveHierarchyFromIndentation_m347CCA2577E3B2907C247FAD50CB1DD71E5C259D (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.IWeavePoint>::.ctor(System.Object,System.IntPtr)
inline void FindQueryFunc_1__ctor_m50A841D0C50D66E3DBEFCD964A9471DCF3A8C678 (FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40*, RuntimeObject*, intptr_t, const RuntimeMethod*))FindQueryFunc_1__ctor_m0A3323A942DFF84A818F2D4BCF3101FEEB1ED7EF_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<T> Ink.Parsed.Object::FindAll<Ink.Parsed.IWeavePoint>(Ink.Parsed.Object/FindQueryFunc`1<T>)
inline List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* Object_FindAll_TisIWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_m7F252A913726163DB529A7C7F372736A522BD2A6 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* ___queryFunc0, const RuntimeMethod* method)
{
	return ((  List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40*, const RuntimeMethod*))Object_FindAll_TisRuntimeObject_m368416BE935DDD2F291D003D061DBAAC99383FB9_gshared)(__this, ___queryFunc0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint>::.ctor()
inline void Dictionary_2__ctor_m09D0B05560B270A9FADCF6E5D9C0736FA6CB8BAC (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::GetEnumerator()
inline Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87 (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.IWeavePoint>::Dispose()
inline void Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A (Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.IWeavePoint>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_inline (Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826 (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Ink.Runtime.DebugMetadata Ink.Parsed.Object::get_debugMetadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mAA08D8B1D90E5E645461227F453508FF161AB975 (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.IWeavePoint>::MoveNext()
inline bool Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39 (Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 Ink.Parsed.Weave::get_baseIndentIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Weave_get_baseIndentIndex_m98068082F6788CEF08908CCDF9E62F4C4938839D_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Ink.Parsed.Object>::GetRange(System.Int32,System.Int32)
inline List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* List_1_GetRange_mEBA06D625B0F423AB20F3D64D0494EBB300C103D (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, int32_t, int32_t, const RuntimeMethod*))List_1_GetRange_m8F5CCE68284D0E231F22C5C2DBBA51B856D70F25_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Object>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m5CF433B308EA5F7DBC3D30C53F2536C2F47F8067 (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared)(__this, ___index0, ___count1, method);
}
// System.Void Ink.Parsed.Weave::.ctor(System.Collections.Generic.List`1<Ink.Parsed.Object>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave__ctor_mE804413D35CA9D86F034623450393D361FB63449 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___cont0, int32_t ___indentIndex1, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::InsertContent<Ink.Parsed.Weave>(System.Int32,T)
inline Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* Object_InsertContent_TisWeave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_m2F8400F9F5E13FE2D2EF334CA9462E8CE3F86715 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, int32_t ___index0, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* ___subContent1, const RuntimeMethod* method)
{
	return ((  Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, int32_t, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*, const RuntimeMethod*))Object_InsertContent_TisRuntimeObject_m6278B89820234B7EC5CE91674E04EC2E517C4ADC_gshared)(__this, ___index0, ___subContent1, method);
}
// System.Void Ink.Parsed.Weave::set_currentContainer(Ink.Runtime.Container)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weave_set_currentContainer_m726341F02CE4FBBF970874A494486A48190F7C23_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::.ctor()
inline void List_1__ctor_m60A33E724150BD07A6081520E30BCBB4D524DFF8 (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve>::.ctor()
inline void List_1__ctor_mE857C294F1FDC1B1EB7A48BD4C4B118802AD68F8 (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Ink.Parsed.Weave::AddRuntimeForWeavePoint(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddRuntimeForWeavePoint_m6DEEC1E96DDB0A13DBF6DB29CEAF545C28CEDB08 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___weavePoint0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave::AddRuntimeForNestedWeave(Ink.Parsed.Weave)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddRuntimeForNestedWeave_m92A81F04518DC007BED67ACD094084B91BCC1F06 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* ___nestedResult0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF67AEA92CB96A7EB9B237EA52FC2B38AA9B16BBB (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void Ink.Parsed.Weave::AddGeneralRuntimeContent(Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddGeneralRuntimeContent_mFCCE215692B86EC17515E4331F2B7ED81042BBC6 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___content0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave::PassLooseEndsToAncestors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_PassLooseEndsToAncestors_m839B4E4D82628F01520F428FD2012F1F87D969AC (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// Ink.Runtime.Container Ink.Parsed.Gather::get_runtimeContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Gather_get_runtimeContainer_m13E079CEF8E544DF6A4B0C0B6241E5DD120FB715 (Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* __this, const RuntimeMethod* method) ;
// System.String Ink.Parsed.Gather::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Gather_get_name_m86E8FB66407D71DEAC7AD878AA2F2EBDEDD094FA (Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Container::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Container_set_name_m8F5A2754D5F5B724CDB73F5754F75D179253D1B1_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Ink.Runtime.Container Ink.Parsed.Weave::get_currentContainer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Container::AddToNamedContentOnly(Ink.Runtime.INamedContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_AddToNamedContentOnly_mE22F23FF9DA10C2E08C20DD7DFCF0B2A3C689461 (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, RuntimeObject* ___namedContentObj0, const RuntimeMethod* method) ;
// System.Int32 Ink.Parsed.Gather::get_indentationDepth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Gather_get_indentationDepth_m40F76E3F69111BE1085CFE0B79370156045C94E4_inline (Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Divert::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Divert__ctor_m6EF2247FDA9554C19F47356ACDC569D214095A3A (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave/GatherPointToResolve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GatherPointToResolve__ctor_mFFE076E7B088D6AF79E86D10264A6E2387C69ED2 (GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve>::Add(T)
inline void List_1_Add_mCA442648CC7166D2F1F4C38D743E6C1E4D9D59C6_inline (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* __this, GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7*, GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::Clear()
inline void List_1_Clear_mB11A36DC9CB485BE0C7EA0E338F61ED2F4907E00_inline (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Ink.Parsed.Weave::AddRuntimeForGather(Ink.Parsed.Gather)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddRuntimeForGather_m4CE16001900F51C5A06C0AE87C5284C903B0AEEF (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* ___gather0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::Remove(T)
inline bool List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22 (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// Ink.Runtime.Container Ink.Parsed.Choice::get_innerContentContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Choice_get_innerContentContainer_m9C30F03A0EFE2BEE3AC920D6F39B50E84127C3F3 (Choice_t36174EC808231C52E43CE7768134739559499893* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Weave::WeavePointHasLooseEnd(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weave_WeavePointHasLooseEnd_m86BFC84415A3BB79B512FA7B60845FE92D80C03C (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___weavePoint0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::Add(T)
inline void List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_inline (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Ink.Runtime.Container Ink.Parsed.Weave::get_rootContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Weave_get_rootContainer_mF7051B9D57FAE9724FFA81B7760DABEE4A7330E5 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::get_Count()
inline int32_t List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_inline (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mD7C86426165B299E1AF57E1CC3ADF4B9B0EDB97D (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Ink.Parsed.Weave::ReceiveLooseEnd(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ReceiveLooseEnd_mCAAB5B4208181C3DFFA3FBC9CD8E7D11F23A3256 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___childWeaveLooseEnd0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mDAD0B657BF66CA49FF92D46A4F1B5DE663A1932D (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void Ink.Parsed.Weave/BadTerminationHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadTerminationHandler__ctor_mAD3499682FC2CD65E716A6714C8EBD32F3C0C1D1 (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave::ValidateTermination(Ink.Parsed.Weave/BadTerminationHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ValidateTermination_mC042A95722BFF6A02755640F589BA1487AE94849 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* ___badTerminationHandler0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve>::GetEnumerator()
inline Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453 List_1_GetEnumerator_mAEED457850E75DD1B9ABC47B1937E3ECF5056AE0 (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453 (*) (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Weave/GatherPointToResolve>::Dispose()
inline void Enumerator_Dispose_mCE863A998546EAD25CFF5AA7DB1FD2BDA33CFFB5 (Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Weave/GatherPointToResolve>::get_Current()
inline GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* Enumerator_get_Current_mAE2D0F63AC021CDF331A873DB4D4D07C212C86FC_inline (Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453* __this, const RuntimeMethod* method)
{
	return ((  GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* (*) (Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Ink.Runtime.Path Ink.Runtime.Object::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Path_tCC1F1626DB60711735401EA8FA76A191D9014600* Object_get_path_m08402839773DCFE39E1D2C20D91F21D2A294A765 (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Divert::set_targetPath(Ink.Runtime.Path)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Divert_set_targetPath_m3BA5FF19D878E1BFB3A1D9D5C952FD41110E0213 (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* __this, Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Weave/GatherPointToResolve>::MoveNext()
inline bool Enumerator_MoveNext_mA226D5AC035B8AA46A1A5B0AD87D66B4747F85C6 (Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Ink.Parsed.Weave::CheckForWeavePointNamingCollisions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_CheckForWeavePointNamingCollisions_m3E4BA051D8AD9D9B38568439E424B6C562FA61CE (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29__ctor_mE1960E7B1C2FB83975604BBA11B328B6279E88F5 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Ink.Parsed.Object> Ink.Parsed.Weave::ContentThatFollowsWeavePoint(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Weave_ContentThatFollowsWeavePoint_m2CB425112D0A7BA7FC3E83215F095C70A98B9273 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___weavePoint0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave::ValidateFlowOfObjectsTerminates(System.Collections.Generic.IEnumerable`1<Ink.Parsed.Object>,Ink.Parsed.Object,Ink.Parsed.Weave/BadTerminationHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ValidateFlowOfObjectsTerminates_m7239B14D782F7304DD3D0726A3A8BDB972101757 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___objFlow0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___defaultObj1, BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* ___badTerminationHandler2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> Ink.Parsed.Object::FindAll<Ink.Parsed.Choice>(Ink.Parsed.Object/FindQueryFunc`1<T>)
inline List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C* Object_FindAll_TisChoice_t36174EC808231C52E43CE7768134739559499893_mFB83BCB5BDDDC5DF66331F766264D20DA55A29FF (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_t336B67E9DF3943E1288CC482ACB0BBF4A96D7199* ___queryFunc0, const RuntimeMethod* method)
{
	return ((  List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, FindQueryFunc_1_t336B67E9DF3943E1288CC482ACB0BBF4A96D7199*, const RuntimeMethod*))Object_FindAll_TisRuntimeObject_m368416BE935DDD2F291D003D061DBAAC99383FB9_gshared)(__this, ___queryFunc0, method);
}
// System.Int32 System.Collections.Generic.List`1<Ink.Parsed.Choice>::get_Count()
inline int32_t List_1_get_Count_m3729CD7808E34BFD9068F3A791D9D00B90282588_inline (List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.Divert>::.ctor(System.Object,System.IntPtr)
inline void FindQueryFunc_1__ctor_m010478D5BA71A33518AA87D7DADB929919D9048F (FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911*, RuntimeObject*, intptr_t, const RuntimeMethod*))FindQueryFunc_1__ctor_m0A3323A942DFF84A818F2D4BCF3101FEEB1ED7EF_gshared)(__this, ___object0, ___method1, method);
}
// T Ink.Parsed.Object::Find<Ink.Parsed.Divert>(Ink.Parsed.Object/FindQueryFunc`1<T>)
inline Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* Object_Find_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_m745B0DEECFF6B651C7BC919A569845794345ED5B (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* ___queryFunc0, const RuntimeMethod* method)
{
	return ((  Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911*, const RuntimeMethod*))Object_Find_TisRuntimeObject_m432376B603D8571C2E9C1CF7CA2030D12E6D8A44_gshared)(__this, ___queryFunc0, method);
}
// T Ink.Parsed.Object::Find<Ink.Parsed.TunnelOnwards>(Ink.Parsed.Object/FindQueryFunc`1<T>)
inline TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* Object_Find_TisTunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450_mBD53B00353D1047ED928ED4004D14DCAE7E8D31C (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_tD49158339C9E80306F093B9B3FFDC0266098B984* ___queryFunc0, const RuntimeMethod* method)
{
	return ((  TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, FindQueryFunc_1_tD49158339C9E80306F093B9B3FFDC0266098B984*, const RuntimeMethod*))Object_Find_TisRuntimeObject_m432376B603D8571C2E9C1CF7CA2030D12E6D8A44_gshared)(__this, ___queryFunc0, method);
}
// System.Void Ink.Parsed.Weave/BadTerminationHandler::Invoke(Ink.Parsed.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_inline (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Divert::get_isThread()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Divert_get_isThread_m5AF57D150FA6189A096F00149ED4BB4ADC1D3F73_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Divert::get_isTunnel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Divert_get_isTunnel_m5F0B18A5D8A9CF7F751CCAE63840442D64E78EF0_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Divert::get_isFunctionCall()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Divert_get_isFunctionCall_m795B07F1FA11C85E330D67D0C5E93157BEC3BB13_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.FlowBase>::.ctor()
inline void List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889 (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.Object::get_ancestry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* Object_get_ancestry_m8C64142AFC7746A69D598AE036ADB55C1CC560D4 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.FlowBase>::Add(T)
inline void List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_inline (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* __this, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB*, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint>::GetEnumerator()
inline Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1 Dictionary_2_GetEnumerator_m58606EF7E646E6EC6F77966DDCC3DFEE5425C416 (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1 (*) (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.IWeavePoint>::Dispose()
inline void Enumerator_Dispose_m3D695EEE7F8DBADB4E29925482335EFD8D5FF76C (Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.IWeavePoint>::get_Current()
inline KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349 Enumerator_get_Current_m987ADC83E21F27DE3A5E98DA01634843FCA83551_inline (Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349 (*) (Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,Ink.Parsed.IWeavePoint>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mD222AD5CAEECD12BE8311BAC449090BBC57EF1DA_inline (KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,Ink.Parsed.IWeavePoint>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m7919590FC8730088240AC8626E9A64EA1F12CC6B_inline (KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.FlowBase>::GetEnumerator()
inline Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA List_1_GetEnumerator_mB0447A1912B57CEC4309668380290C854E249335 (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA (*) (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.FlowBase>::Dispose()
inline void Enumerator_Dispose_m7BF2E33709CCA1C3182CB0B0823B5CC036376CD6 (Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.FlowBase>::get_Current()
inline FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* Enumerator_get_Current_m1FB39938CFD6138E1234BE2B1290025DF3D47AD5_inline (Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA* __this, const RuntimeMethod* method)
{
	return ((  FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* (*) (Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Ink.Parsed.Object Ink.Parsed.FlowBase::ContentWithNameAtLevel(System.String,System.Nullable`1<Ink.Parsed.FlowLevel>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* FlowBase_ContentWithNameAtLevel_mBEA01AF67EC82BAF3485DEB39E7C5F6EB95DCE42 (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, String_t* ___name0, Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC ___level1, bool ___deepSearch2, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.FlowBase>::MoveNext()
inline bool Enumerator_MoveNext_m3E6779FD1F45D3506C88709EDFA61A7FBABF497A (Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.IWeavePoint>::MoveNext()
inline bool Enumerator_MoveNext_m0E266551F3F19E392882EA2ADC18A12F7F76FE4F (Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void Ink.Parsed.Weave/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m73A5A4115E280FF369CFFC6C27BEDD0B00B1E75D (U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29_U3CU3Em__Finally1_m64AF3C259A537D1E769580D6CBEB4C8C78B15B93 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29_System_IDisposable_Dispose_mBD65DB5199FA7CE6895F65C4F1AE28DEDF669AAF (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Parsed.Object>::IndexOf(T)
inline int32_t List_1_IndexOf_m549CA9389C0FF54CE448A6557816E0F0E7B58CE2 (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Ink.Parsed.Object> Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.Collections.Generic.IEnumerable<Ink.Parsed.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_Generic_IEnumerableU3CInk_Parsed_ObjectU3E_GetEnumerator_m8C4B5A788E923234DA9A3E586E88D149165EA3AD (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Wrap`1<Ink.Runtime.Glue>::.ctor(T)
inline void Wrap_1__ctor_m55E3265081F6A8406F0C3A7A7D3B2ABBC0311B0E (Wrap_1_tC06BF2A45CCF887EEF2D86199C08609A6927998F* __this, Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D* ___objToWrap0, const RuntimeMethod* method)
{
	((  void (*) (Wrap_1_tC06BF2A45CCF887EEF2D86199C08609A6927998F*, Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D*, const RuntimeMethod*))Wrap_1__ctor_mA5A5D12BFDE33FADD6E2E6CABE7EE893286C212B_gshared)(__this, ___objToWrap0, method);
}
// System.Void Ink.Parsed.Wrap`1<Ink.Runtime.Tag>::.ctor(T)
inline void Wrap_1__ctor_mC7A871A14C44F022C311E215DA575CE02DBA3A62 (Wrap_1_t30A29E9AC5AC4AEC0670984E15D014B48C63BFF9* __this, Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29* ___objToWrap0, const RuntimeMethod* method)
{
	((  void (*) (Wrap_1_t30A29E9AC5AC4AEC0670984E15D014B48C63BFF9*, Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29*, const RuntimeMethod*))Wrap_1__ctor_mA5A5D12BFDE33FADD6E2E6CABE7EE893286C212B_gshared)(__this, ___objToWrap0, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Ink.Parsed.StringExpression::get_isSingleString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringExpression_get_isSingleString_m7A6128F11CA9543349BD832F63FC453C02242AF7 (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (content.Count != 1)
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_0;
		L_0 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_0, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_003f;
	}

IL_001a:
	{
		// var c = content [0];
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_3;
		L_3 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		NullCheck(L_3);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4;
		L_4 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_3, 0, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		V_0 = L_4;
		// if (!(c is Text))
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5 = V_0;
		V_3 = (bool)((((int32_t)((!(((RuntimeObject*)(Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED*)((Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED*)IsInstClass((RuntimeObject*)L_5, Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_003f;
	}

IL_003b:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Void Ink.Parsed.StringExpression::.ctor(System.Collections.Generic.List`1<Ink.Parsed.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringExpression__ctor_mC6C0C3D15D6BDF83C370A52DE73E4C55939CF21A (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___content0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public StringExpression (List<Parsed.Object> content)
		Expression__ctor_mBA2907DB4D7FEA90D9A52A1C9820CDBC72DFB2AD(__this, NULL);
		// AddContent (content);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_0 = ___content0;
		Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280(__this, L_0, Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Ink.Parsed.StringExpression::GenerateIntoContainer(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringExpression_GenerateIntoContainer_m4601A0FF9F20609E19320C04CCF3A9343F768A57 (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_1 = NULL;
	{
		// container.AddContent (Runtime.ControlCommand.BeginString());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = ___container0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_1;
		L_1 = ControlCommand_BeginString_mAF5F64F652E24493C96771078B30A260F321E492(NULL);
		NullCheck(L_0);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_0, L_1, NULL);
		// foreach (var c in content) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_2;
		L_2 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		NullCheck(L_2);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_3;
		L_3 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_2, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_0), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0033_1;
			}

IL_001c_1:
			{
				// foreach (var c in content) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4;
				L_4 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_0), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				V_1 = L_4;
				// container.AddContent (c.runtimeObject);
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_5 = ___container0;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6 = V_1;
				NullCheck(L_6);
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_7;
				L_7 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_6, NULL);
				NullCheck(L_5);
				Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_5, L_7, NULL);
			}

IL_0033_1:
			{
				// foreach (var c in content) {
				bool L_8;
				L_8 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_0), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		// container.AddContent (Runtime.ControlCommand.EndString());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_9 = ___container0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_10;
		L_10 = ControlCommand_EndString_m05E7FDE33614880F368A0971828EA25B8168D007(NULL);
		NullCheck(L_9);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.String Ink.Parsed.StringExpression::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExpression_ToString_m7CEB62354FBF1109D96152E2C728FB8A58495F7E (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// var sb = new StringBuilder ();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// foreach (var c in content) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_1;
		L_1 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_2;
		L_2 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_1, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_1), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0016_1:
			{
				// foreach (var c in content) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3;
				L_3 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_1), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				V_2 = L_3;
				// sb.Append (c.ToString ());
				StringBuilder_t* L_4 = V_0;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
				NullCheck(L_4);
				StringBuilder_t* L_7;
				L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_6, NULL);
			}

IL_002d_1:
			{
				// foreach (var c in content) {
				bool L_8;
				L_8 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_1), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// return sb.ToString ();
		StringBuilder_t* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		V_3 = L_10;
		goto IL_0050;
	}

IL_0050:
	{
		// }
		String_t* L_11 = V_3;
		return L_11;
	}
}
// System.Boolean Ink.Parsed.StringExpression::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringExpression_Equals_m7AE9C83E2B234A8F564CDC7779235B22E55F0FE8 (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		// var otherStr = obj as StringExpression;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678*)IsInstClass((RuntimeObject*)L_0, StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678_il2cpp_TypeInfo_var));
		// if (otherStr == null) return false;
		StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* L_1 = V_0;
		bool L_2;
		L_2 = Object_op_Equality_m109E112ACAA3627F5E1EF2BD8C13110F2493CB4D(L_1, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// if (otherStr == null) return false;
		V_4 = (bool)0;
		goto IL_0051;
	}

IL_0018:
	{
		// if (!this.isSingleString || !otherStr.isSingleString) {
		bool L_4;
		L_4 = StringExpression_get_isSingleString_m7A6128F11CA9543349BD832F63FC453C02242AF7(__this, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = StringExpression_get_isSingleString_m7A6128F11CA9543349BD832F63FC453C02242AF7(L_5, NULL);
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B5_0 = 1;
	}

IL_002c:
	{
		V_5 = (bool)G_B5_0;
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// return false;
		V_4 = (bool)0;
		goto IL_0051;
	}

IL_0038:
	{
		// var thisTxt = this.ToString ();
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		V_1 = L_8;
		// var otherTxt = otherStr.ToString ();
		StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		V_2 = L_10;
		// return thisTxt.Equals (otherTxt);
		String_t* L_11 = V_1;
		String_t* L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_11, L_12, NULL);
		V_4 = L_13;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		bool L_14 = V_4;
		return L_14;
	}
}
// System.Int32 Ink.Parsed.StringExpression::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringExpression_GetHashCode_m70A333635EA213059CF55EBBFA8F274A6042EDB0 (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return this.ToString ().GetHashCode ();
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
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
// System.String Ink.Parsed.Text::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_get_text_m14F6F4C8E14BAD266FF794A86DCFA15E89964103 (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, const RuntimeMethod* method) 
{
	{
		// public string text { get; set; }
		String_t* L_0 = __this->___U3CtextU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ink.Parsed.Text::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_text_m174E6D93DD8C69932A47F52A61E8A97CAD231058 (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string text { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CtextU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Ink.Parsed.Text::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text__ctor_mCC47ACBD825802241319B32E0BBAB28EEABD7BE0 (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	{
		// public Text (string str)
		Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A(__this, NULL);
		// text = str;
		String_t* L_0 = ___str0;
		Text_set_text_m174E6D93DD8C69932A47F52A61E8A97CAD231058_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// Ink.Runtime.Object Ink.Parsed.Text::GenerateRuntimeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* Text_GenerateRuntimeObject_m37E96A22AD4FE182CB416A70DC5D878558861C7C (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* V_0 = NULL;
	{
		// return new Runtime.StringValue(this.text);
		String_t* L_0;
		L_0 = Text_get_text_m14F6F4C8E14BAD266FF794A86DCFA15E89964103_inline(__this, NULL);
		StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2* L_1 = (StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2*)il2cpp_codegen_object_new(StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringValue__ctor_m84F62339FA8008253A9A001E433CA1D5D82CA19E(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_2 = V_0;
		return L_2;
	}
}
// System.String Ink.Parsed.Text::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_ToString_mFF93259357C991A6C2765C6B47C06314139CFE81 (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return this.text;
		String_t* L_0;
		L_0 = Text_get_text_m14F6F4C8E14BAD266FF794A86DCFA15E89964103_inline(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
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
// Ink.Parsed.Divert Ink.Parsed.TunnelOnwards::get_divertAfter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8 (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, const RuntimeMethod* method) 
{
	Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* V_0 = NULL;
	{
		// return _divertAfter;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_0 = __this->____divertAfter_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_1 = V_0;
		return L_1;
	}
}
// System.Void Ink.Parsed.TunnelOnwards::set_divertAfter(Ink.Parsed.Divert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TunnelOnwards_set_divertAfter_m01C473CFA45AFDDB1D43767B0EB0E759A3866220 (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_AddContent_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_mBC95D48BAC65CC876001759F3105E180FAC26E32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// _divertAfter = value;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_0 = ___value0;
		__this->____divertAfter_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____divertAfter_6), (void*)L_0);
		// if (_divertAfter) AddContent (_divertAfter);
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_1 = __this->____divertAfter_6;
		bool L_2;
		L_2 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// if (_divertAfter) AddContent (_divertAfter);
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_4 = __this->____divertAfter_6;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_5;
		L_5 = Object_AddContent_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_mBC95D48BAC65CC876001759F3105E180FAC26E32(__this, L_4, Object_AddContent_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_mBC95D48BAC65CC876001759F3105E180FAC26E32_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// Ink.Runtime.Object Ink.Parsed.TunnelOnwards::GenerateRuntimeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* TunnelOnwards_GenerateRuntimeObject_m6905BF11D1F7CE4BADD2B5856F96E355F2C4F1FC (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m28F4FD8191AC70A79F88724B9BD21145FF88B3A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2EF709723E8742028D2BF885FA5335303F0B0282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_0 = NULL;
	bool V_1 = false;
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* V_2 = NULL;
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_3 = NULL;
	bool V_4 = false;
	List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* V_16 = NULL;
	bool V_17 = false;
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* V_18 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// var container = new Runtime.Container ();
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = (Container_t74302BC1028974B0A346A43F334AECB681D79579*)il2cpp_codegen_object_new(Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Container__ctor_mE49EAAD4892EDEFFDA64A7A54823A021ECBF4F84(L_0, NULL);
		V_0 = L_0;
		// container.AddContent (Runtime.ControlCommand.EvalStart ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_1 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_2;
		L_2 = ControlCommand_EvalStart_mF134D17B2D15983A7CC67A8C45FCCD491EAF820D(NULL);
		NullCheck(L_1);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_1, L_2, NULL);
		// if (divertAfter) {
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_3;
		L_3 = TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8(__this, NULL);
		bool L_4;
		L_4 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0153;
		}
	}
	{
		// var returnRuntimeObj = divertAfter.GenerateRuntimeObject ();
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_6;
		L_6 = TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8(__this, NULL);
		NullCheck(L_6);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_7;
		L_7 = VirtualFuncInvoker0< Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* >::Invoke(8 /* Ink.Runtime.Object Ink.Parsed.Object::GenerateRuntimeObject() */, L_6);
		V_2 = L_7;
		// var returnRuntimeContainer = returnRuntimeObj as Runtime.Container;
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_8 = V_2;
		V_3 = ((Container_t74302BC1028974B0A346A43F334AECB681D79579*)IsInstClass((RuntimeObject*)L_8, Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var));
		// if (returnRuntimeContainer) {
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_9 = V_3;
		bool L_10;
		L_10 = Object_op_Implicit_m104371B3B40153BF3D5333B969CBFC900C10FCEE(L_9, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0138;
		}
	}
	{
		// var args = divertAfter.arguments;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_12;
		L_12 = TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8(__this, NULL);
		NullCheck(L_12);
		List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* L_13;
		L_13 = Divert_get_arguments_m835B3FA82AB94C9D96B4472519BE0C4776F6FD5B_inline(L_12, NULL);
		V_5 = L_13;
		// if (args != null && args.Count > 0) {
		List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* L_14 = V_5;
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* L_15 = V_5;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m28F4FD8191AC70A79F88724B9BD21145FF88B3A8_inline(L_15, List_1_get_Count_m28F4FD8191AC70A79F88724B9BD21145FF88B3A8_RuntimeMethod_var);
		G_B5_0 = ((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_6 = (bool)G_B5_0;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0137;
		}
	}
	{
		// int evalStart = -1;
		V_7 = (-1);
		// int evalEnd = -1;
		V_8 = (-1);
		// for (int i = 0; i < returnRuntimeContainer.content.Count; i++) {
		V_9 = 0;
		goto IL_00d9;
	}

IL_007c:
	{
		// var cmd = returnRuntimeContainer.content [i] as Runtime.ControlCommand;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_18 = V_3;
		NullCheck(L_18);
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_19;
		L_19 = Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD(L_18, NULL);
		int32_t L_20 = V_9;
		NullCheck(L_19);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_21;
		L_21 = List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37(L_19, L_20, List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37_RuntimeMethod_var);
		V_10 = ((ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6*)IsInstClass((RuntimeObject*)L_21, ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6_il2cpp_TypeInfo_var));
		// if (cmd) {
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_22 = V_10;
		bool L_23;
		L_23 = Object_op_Implicit_m104371B3B40153BF3D5333B969CBFC900C10FCEE(L_22, NULL);
		V_11 = L_23;
		bool L_24 = V_11;
		if (!L_24)
		{
			goto IL_00d2;
		}
	}
	{
		// if (evalStart == -1 && cmd.commandType == Runtime.ControlCommand.CommandType.EvalStart)
		int32_t L_25 = V_7;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_00b0;
		}
	}
	{
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_26 = V_10;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = ControlCommand_get_commandType_mF43D077F555FA63FF4A1146790A56346647DBE8A_inline(L_26, NULL);
		G_B11_0 = ((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B11_0 = 0;
	}

IL_00b1:
	{
		V_12 = (bool)G_B11_0;
		bool L_28 = V_12;
		if (!L_28)
		{
			goto IL_00bd;
		}
	}
	{
		// evalStart = i;
		int32_t L_29 = V_9;
		V_7 = L_29;
		goto IL_00d1;
	}

IL_00bd:
	{
		// else if (cmd.commandType == Runtime.ControlCommand.CommandType.EvalEnd)
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_30 = V_10;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = ControlCommand_get_commandType_mF43D077F555FA63FF4A1146790A56346647DBE8A_inline(L_30, NULL);
		V_13 = (bool)((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		bool L_32 = V_13;
		if (!L_32)
		{
			goto IL_00d1;
		}
	}
	{
		// evalEnd = i;
		int32_t L_33 = V_9;
		V_8 = L_33;
	}

IL_00d1:
	{
	}

IL_00d2:
	{
		// for (int i = 0; i < returnRuntimeContainer.content.Count; i++) {
		int32_t L_34 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d9:
	{
		// for (int i = 0; i < returnRuntimeContainer.content.Count; i++) {
		int32_t L_35 = V_9;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_36 = V_3;
		NullCheck(L_36);
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_37;
		L_37 = Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD(L_36, NULL);
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m2EF709723E8742028D2BF885FA5335303F0B0282_inline(L_37, List_1_get_Count_m2EF709723E8742028D2BF885FA5335303F0B0282_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_35) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_14;
		if (L_39)
		{
			goto IL_007c;
		}
	}
	{
		// for (int i = evalStart + 1; i < evalEnd; i++) {
		int32_t L_40 = V_7;
		V_15 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		goto IL_012a;
	}

IL_00f6:
	{
		// var obj = returnRuntimeContainer.content [i];
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_41 = V_3;
		NullCheck(L_41);
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_42;
		L_42 = Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD(L_41, NULL);
		int32_t L_43 = V_15;
		NullCheck(L_42);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_44;
		L_44 = List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37(L_42, L_43, List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37_RuntimeMethod_var);
		V_16 = L_44;
		// obj.parent = null; // prevent error of being moved between owners
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_45 = V_16;
		NullCheck(L_45);
		Object_set_parent_m313E7123FE19E7C089F5856A0B9AB83D092AF2FF_inline(L_45, (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL, NULL);
		// container.AddContent (returnRuntimeContainer.content [i]);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_46 = V_0;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_47 = V_3;
		NullCheck(L_47);
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_48;
		L_48 = Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD(L_47, NULL);
		int32_t L_49 = V_15;
		NullCheck(L_48);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_50;
		L_50 = List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37(L_48, L_49, List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37_RuntimeMethod_var);
		NullCheck(L_46);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_46, L_50, NULL);
		// for (int i = evalStart + 1; i < evalEnd; i++) {
		int32_t L_51 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_012a:
	{
		// for (int i = evalStart + 1; i < evalEnd; i++) {
		int32_t L_52 = V_15;
		int32_t L_53 = V_8;
		V_17 = (bool)((((int32_t)L_52) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_17;
		if (L_54)
		{
			goto IL_00f6;
		}
	}
	{
	}

IL_0137:
	{
	}

IL_0138:
	{
		// _overrideDivertTarget = new Runtime.DivertTargetValue ();
		DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* L_55 = (DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B*)il2cpp_codegen_object_new(DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		DivertTargetValue__ctor_m1214D460147B45F9850424DA9BF5D34306720F06(L_55, NULL);
		__this->____overrideDivertTarget_7 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____overrideDivertTarget_7), (void*)L_55);
		// container.AddContent (_overrideDivertTarget);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_56 = V_0;
		DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* L_57 = __this->____overrideDivertTarget_7;
		NullCheck(L_56);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_56, L_57, NULL);
		goto IL_0161;
	}

IL_0153:
	{
		// container.AddContent (new Runtime.Void ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_58 = V_0;
		Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0* L_59 = (Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0*)il2cpp_codegen_object_new(Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Void__ctor_mE6655AC1CDBDF3AEAF058E98834803EFA65A8886(L_59, NULL);
		NullCheck(L_58);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_58, L_59, NULL);
	}

IL_0161:
	{
		// container.AddContent (Runtime.ControlCommand.EvalEnd ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_60 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_61;
		L_61 = ControlCommand_EvalEnd_m983DEF86B4D9A272399C49B67F20E8665FE9054A(NULL);
		NullCheck(L_60);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_60, L_61, NULL);
		// container.AddContent (Runtime.ControlCommand.PopTunnel ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_62 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_63;
		L_63 = ControlCommand_PopTunnel_m67685FC32D1FAAF3F6DF9D5CFA18C7A6D1C2995C(NULL);
		NullCheck(L_62);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_62, L_63, NULL);
		// return container;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_64 = V_0;
		V_18 = L_64;
		goto IL_017e;
	}

IL_017e:
	{
		// }
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_65 = V_18;
		return L_65;
	}
}
// System.Void Ink.Parsed.TunnelOnwards::ResolveReferences(Ink.Parsed.Story)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TunnelOnwards_ResolveReferences_mB2C6394CF5BDC3F3F73F0C3C613F72ADA223DE84 (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* ___context0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// base.ResolveReferences (context);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_0 = ___context0;
		Object_ResolveReferences_m8BC5DD701019191459A9CEF84D71FFBE2FEDFF8E(__this, L_0, NULL);
		// if (divertAfter && divertAfter.targetContent)
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_1;
		L_1 = TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8(__this, NULL);
		bool L_2;
		L_2 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_1, NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_3;
		L_3 = TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8(__this, NULL);
		NullCheck(L_3);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4;
		L_4 = Divert_get_targetContent_m2A18F6F480779045E0B34983F78C0ADFE635D21C_inline(L_3, NULL);
		bool L_5;
		L_5 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// _overrideDivertTarget.targetPath = divertAfter.targetContent.runtimePath;
		DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* L_7 = __this->____overrideDivertTarget_7;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_8;
		L_8 = TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8(__this, NULL);
		NullCheck(L_8);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_9;
		L_9 = Divert_get_targetContent_m2A18F6F480779045E0B34983F78C0ADFE635D21C_inline(L_8, NULL);
		NullCheck(L_9);
		Path_tCC1F1626DB60711735401EA8FA76A191D9014600* L_10;
		L_10 = VirtualFuncInvoker0< Path_tCC1F1626DB60711735401EA8FA76A191D9014600* >::Invoke(6 /* Ink.Runtime.Path Ink.Parsed.Object::get_runtimePath() */, L_9);
		NullCheck(L_7);
		DivertTargetValue_set_targetPath_m443285EA0636089C577FCD0240756CB8F7A9FEA3(L_7, L_10, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.TunnelOnwards::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TunnelOnwards__ctor_m7750D4F7987935B853D06036AC4FDEC3BF930048 (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A(__this, NULL);
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
// System.String Ink.Parsed.VariableAssignment::get_variableName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return variableIdentifier.name; }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0;
		L_0 = VariableAssignment_get_variableIdentifier_m5E36193B2BC86B48D2567C6EA389B4C5FE67CB9A_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->___name_0;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return variableIdentifier.name; }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// Ink.Parsed.Identifier Ink.Parsed.VariableAssignment::get_variableIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* VariableAssignment_get_variableIdentifier_m5E36193B2BC86B48D2567C6EA389B4C5FE67CB9A (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public Identifier variableIdentifier { get; protected set; }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = __this->___U3CvariableIdentifierU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableAssignment::set_variableIdentifier(Ink.Parsed.Identifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment_set_variableIdentifier_m16684EEAA53B0C8C0A31B1072977CC5C115A35E3 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___value0, const RuntimeMethod* method) 
{
	{
		// public Identifier variableIdentifier { get; protected set; }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = ___value0;
		__this->___U3CvariableIdentifierU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvariableIdentifierU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// Ink.Parsed.Expression Ink.Parsed.VariableAssignment::get_expression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public Expression expression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = __this->___U3CexpressionU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableAssignment::set_expression(Ink.Parsed.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment_set_expression_m4CE2FDFCA9A76FEF3E8C76E0B93FE7CE9705AD48 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___value0, const RuntimeMethod* method) 
{
	{
		// public Expression expression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = ___value0;
		__this->___U3CexpressionU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexpressionU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// Ink.Parsed.ListDefinition Ink.Parsed.VariableAssignment::get_listDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public ListDefinition listDefinition { get; protected set; }
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_0 = __this->___U3ClistDefinitionU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableAssignment::set_listDefinition(Ink.Parsed.ListDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment_set_listDefinition_m7675DC40AF4DAFF3918BE94FF4DD9190955AF87A (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___value0, const RuntimeMethod* method) 
{
	{
		// public ListDefinition listDefinition { get; protected set; }
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_0 = ___value0;
		__this->___U3ClistDefinitionU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClistDefinitionU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Boolean Ink.Parsed.VariableAssignment::get_isGlobalDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public bool isGlobalDeclaration { get; set; }
		bool L_0 = __this->___U3CisGlobalDeclarationU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableAssignment::set_isGlobalDeclaration(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment_set_isGlobalDeclaration_m3B705D1B9A8EC0FB9C5AB5B2B80B690ACD50D86D (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isGlobalDeclaration { get; set; }
		bool L_0 = ___value0;
		__this->___U3CisGlobalDeclarationU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Boolean Ink.Parsed.VariableAssignment::get_isNewTemporaryDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public bool isNewTemporaryDeclaration { get; set; }
		bool L_0 = __this->___U3CisNewTemporaryDeclarationU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableAssignment::set_isNewTemporaryDeclaration(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment_set_isNewTemporaryDeclaration_mC9E125F33848004DC457829CA7F325FE7036E650 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isNewTemporaryDeclaration { get; set; }
		bool L_0 = ___value0;
		__this->___U3CisNewTemporaryDeclarationU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Boolean Ink.Parsed.VariableAssignment::get_isDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VariableAssignment_get_isDeclaration_m303120F48FE6770B5B59269240F63F40631554C5 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return isGlobalDeclaration || isNewTemporaryDeclaration;
		bool L_0;
		L_0 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline(__this, NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Ink.Parsed.VariableAssignment::.ctor(Ink.Parsed.Identifier,Ink.Parsed.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment__ctor_m576B18F74098B06A9C0E950EEB598428DD8C4980 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___identifier0, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___assignedExpression1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public VariableAssignment (Identifier identifier, Expression assignedExpression)
		Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A(__this, NULL);
		// this.variableIdentifier = identifier;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = ___identifier0;
		VariableAssignment_set_variableIdentifier_m16684EEAA53B0C8C0A31B1072977CC5C115A35E3_inline(__this, L_0, NULL);
		// if( assignedExpression )
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_1 = ___assignedExpression1;
		bool L_2;
		L_2 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// this.expression = AddContent(assignedExpression);
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_4 = ___assignedExpression1;
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_5;
		L_5 = Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F(__this, L_4, Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F_RuntimeMethod_var);
		VariableAssignment_set_expression_m4CE2FDFCA9A76FEF3E8C76E0B93FE7CE9705AD48_inline(__this, L_5, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.VariableAssignment::.ctor(Ink.Parsed.Identifier,Ink.Parsed.ListDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment__ctor_m8EEA71A8AADA69439C198FFACDEDA4B781B1670A (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___identifier0, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___listDef1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_AddContent_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_m6169C2A2781ABFF41FF6C9D08702D6F37EC74523_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public VariableAssignment (Identifier identifier, ListDefinition listDef)
		Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A(__this, NULL);
		// this.variableIdentifier = identifier;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = ___identifier0;
		VariableAssignment_set_variableIdentifier_m16684EEAA53B0C8C0A31B1072977CC5C115A35E3_inline(__this, L_0, NULL);
		// if (listDef) {
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_1 = ___listDef1;
		bool L_2;
		L_2 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// this.listDefinition = AddContent (listDef);
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_4 = ___listDef1;
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_5;
		L_5 = Object_AddContent_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_m6169C2A2781ABFF41FF6C9D08702D6F37EC74523(__this, L_4, Object_AddContent_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_m6169C2A2781ABFF41FF6C9D08702D6F37EC74523_RuntimeMethod_var);
		VariableAssignment_set_listDefinition_m7675DC40AF4DAFF3918BE94FF4DD9190955AF87A_inline(__this, L_5, NULL);
		// this.listDefinition.variableAssignment = this;
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_6;
		L_6 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(__this, NULL);
		NullCheck(L_6);
		L_6->___variableAssignment_8 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___variableAssignment_8), (void*)__this);
	}

IL_0036:
	{
		// isGlobalDeclaration = true;
		VariableAssignment_set_isGlobalDeclaration_m3B705D1B9A8EC0FB9C5AB5B2B80B690ACD50D86D_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// Ink.Runtime.Object Ink.Parsed.VariableAssignment::GenerateRuntimeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* VariableAssignment_GenerateRuntimeObject_m664EBA0F32D405C0D7D400536E60B272B6EDCC4A (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* V_0 = NULL;
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		// FlowBase newDeclScope = null;
		V_0 = (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)NULL;
		// if (isGlobalDeclaration) {
		bool L_0;
		L_0 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(__this, NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// newDeclScope = story;
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_2;
		L_2 = Object_get_story_mC48C490DCCF22AEC1CC28FEA37BDD22AA31C8B1C(__this, NULL);
		V_0 = L_2;
		goto IL_002b;
	}

IL_0018:
	{
		// } else if(isNewTemporaryDeclaration) {
		bool L_3;
		L_3 = VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline(__this, NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// newDeclScope = ClosestFlowBase ();
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_5;
		L_5 = Object_ClosestFlowBase_mFBB185F20F260315B894395561CE129F351600AC(__this, NULL);
		V_0 = L_5;
	}

IL_002b:
	{
		// if( newDeclScope )
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_6 = V_0;
		bool L_7;
		L_7 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_6, NULL);
		V_4 = L_7;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		// newDeclScope.TryAddNewVariableDeclaration (this);
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_9 = V_0;
		NullCheck(L_9);
		FlowBase_TryAddNewVariableDeclaration_mC160F28B3C771CE96BFF6AD1F0DA0DB41D5B2F0B(L_9, __this, NULL);
	}

IL_003f:
	{
		// if( isGlobalDeclaration )
		bool L_10;
		L_10 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(__this, NULL);
		V_5 = L_10;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		// return null;
		V_6 = (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL;
		goto IL_00c9;
	}

IL_0050:
	{
		// var container = new Runtime.Container ();
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_12 = (Container_t74302BC1028974B0A346A43F334AECB681D79579*)il2cpp_codegen_object_new(Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Container__ctor_mE49EAAD4892EDEFFDA64A7A54823A021ECBF4F84(L_12, NULL);
		V_1 = L_12;
		// if( expression != null )
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_13;
		L_13 = VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831_inline(__this, NULL);
		bool L_14;
		L_14 = Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5(L_13, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		V_7 = L_14;
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		// container.AddContent (expression.runtimeObject);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_16 = V_1;
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_17;
		L_17 = VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831_inline(__this, NULL);
		NullCheck(L_17);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_18;
		L_18 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_17, NULL);
		NullCheck(L_16);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_16, L_18, NULL);
		goto IL_00a0;
	}

IL_007c:
	{
		// else if( listDefinition != null )
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_19;
		L_19 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(__this, NULL);
		bool L_20;
		L_20 = Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5(L_19, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		V_8 = L_20;
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_00a0;
		}
	}
	{
		// container.AddContent (listDefinition.runtimeObject);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_22 = V_1;
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_23;
		L_23 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(__this, NULL);
		NullCheck(L_23);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_24;
		L_24 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_23, NULL);
		NullCheck(L_22);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_22, L_24, NULL);
	}

IL_00a0:
	{
		// _runtimeAssignment = new Runtime.VariableAssignment(variableName, isNewTemporaryDeclaration);
		String_t* L_25;
		L_25 = VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B(__this, NULL);
		bool L_26;
		L_26 = VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline(__this, NULL);
		VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* L_27 = (VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9*)il2cpp_codegen_object_new(VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		VariableAssignment__ctor_m34573492CA6DA1C98F74FD9F2F3ECCB2FCE7E1B6(L_27, L_25, L_26, NULL);
		__this->____runtimeAssignment_11 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runtimeAssignment_11), (void*)L_27);
		// container.AddContent (_runtimeAssignment);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_28 = V_1;
		VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* L_29 = __this->____runtimeAssignment_11;
		NullCheck(L_28);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_28, L_29, NULL);
		// return container;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_30 = V_1;
		V_6 = L_30;
		goto IL_00c9;
	}

IL_00c9:
	{
		// }
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_31 = V_6;
		return L_31;
	}
}
// System.Void Ink.Parsed.VariableAssignment::ResolveReferences(Ink.Parsed.Story)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment_ResolveReferences_m37501252D5701FF31348F73522385B7C3485DE21 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m0F6C37D27FD2753844BDF8E50AE219156F3DD897_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral232E29D3CB1BEBAB46125A6580F94B6237639795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral552DA4F83AB1BC270CE749E47D3C68702AB45097);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral834B13F856924DCC46AB8FF86DB1C23A385C2FFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA871E06BD04BA167F0121D2D4D2A6C4C82D64CE6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B6_0 = NULL;
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* G_B6_1 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B6_2 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B5_0 = NULL;
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* G_B5_1 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B5_2 = NULL;
	int32_t G_B7_0 = 0;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B7_1 = NULL;
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* G_B7_2 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B7_3 = NULL;
	int32_t G_B13_0 = 0;
	{
		// base.ResolveReferences (context);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_0 = ___context0;
		Object_ResolveReferences_m8BC5DD701019191459A9CEF84D71FFBE2FEDFF8E(__this, L_0, NULL);
		// if( this.isDeclaration && listDefinition == null )
		bool L_1;
		L_1 = VariableAssignment_get_isDeclaration_m303120F48FE6770B5B59269240F63F40631554C5(__this, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_2;
		L_2 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(__this, NULL);
		bool L_3;
		L_3 = Object_op_Equality_m109E112ACAA3627F5E1EF2BD8C13110F2493CB4D(L_2, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// context.CheckForNamingCollisions (this, variableIdentifier, this.isGlobalDeclaration ? Story.SymbolType.Var : Story.SymbolType.Temp);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_5 = ___context0;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_6;
		L_6 = VariableAssignment_get_variableIdentifier_m5E36193B2BC86B48D2567C6EA389B4C5FE67CB9A_inline(__this, NULL);
		bool L_7;
		L_7 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(__this, NULL);
		G_B5_0 = L_6;
		G_B5_1 = __this;
		G_B5_2 = L_5;
		if (L_7)
		{
			G_B6_0 = L_6;
			G_B6_1 = __this;
			G_B6_2 = L_5;
			goto IL_0037;
		}
	}
	{
		G_B7_0 = 6;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 3;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_0038:
	{
		NullCheck(G_B7_3);
		Story_CheckForNamingCollisions_m13238A42D40F53489354F276C303D64C2D2AA2F6(G_B7_3, G_B7_2, G_B7_1, G_B7_0, (String_t*)NULL, NULL);
	}

IL_003f:
	{
		// if (this.isGlobalDeclaration) {
		bool L_8;
		L_8 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(__this, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0087;
		}
	}
	{
		// var variableReference = expression as VariableReference;
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_10;
		L_10 = VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831_inline(__this, NULL);
		V_2 = ((VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049*)IsInstClass((RuntimeObject*)L_10, VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049_il2cpp_TypeInfo_var));
		// if (variableReference && !variableReference.isConstantReference && !variableReference.isListItemReference) {
		VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* L_11 = V_2;
		bool L_12;
		L_12 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_11, NULL);
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* L_13 = V_2;
		NullCheck(L_13);
		bool L_14 = L_13->___isConstantReference_12;
		if (L_14)
		{
			goto IL_0071;
		}
	}
	{
		VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* L_15 = V_2;
		NullCheck(L_15);
		bool L_16 = L_15->___isListItemReference_13;
		G_B13_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0072;
	}

IL_0071:
	{
		G_B13_0 = 0;
	}

IL_0072:
	{
		V_3 = (bool)G_B13_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0086;
		}
	}
	{
		// Error ("global variable assignments cannot refer to other variables, only literal values, constants and list items");
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, _stringLiteralA871E06BD04BA167F0121D2D4D2A6C4C82D64CE6, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, (bool)0);
	}

IL_0086:
	{
	}

IL_0087:
	{
		// if (!this.isNewTemporaryDeclaration) {
		bool L_18;
		L_18 = VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline(__this, NULL);
		V_4 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_013f;
		}
	}
	{
		// var resolvedVarAssignment = context.ResolveVariableWithName(this.variableName, fromNode: this);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_20 = ___context0;
		String_t* L_21;
		L_21 = VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B(__this, NULL);
		NullCheck(L_20);
		VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 L_22;
		L_22 = FlowBase_ResolveVariableWithName_m017DF795D3DA6FF4644793B10ED8B6386171E2C0(L_20, L_21, __this, NULL);
		V_5 = L_22;
		// if (!resolvedVarAssignment.found) {
		VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 L_23 = V_5;
		bool L_24 = L_23.___found_0;
		V_6 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_0119;
		}
	}
	{
		// if (story.constants.ContainsKey (variableName)) {
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_26;
		L_26 = Object_get_story_mC48C490DCCF22AEC1CC28FEA37BDD22AA31C8B1C(__this, NULL);
		NullCheck(L_26);
		Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* L_27 = L_26->___constants_15;
		String_t* L_28;
		L_28 = VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B(__this, NULL);
		NullCheck(L_27);
		bool L_29;
		L_29 = Dictionary_2_ContainsKey_m0F6C37D27FD2753844BDF8E50AE219156F3DD897(L_27, L_28, Dictionary_2_ContainsKey_m0F6C37D27FD2753844BDF8E50AE219156F3DD897_RuntimeMethod_var);
		V_7 = L_29;
		bool L_30 = V_7;
		if (!L_30)
		{
			goto IL_00f8;
		}
	}
	{
		// Error ("Can't re-assign to a constant (do you need to use VAR when declaring '" + this.variableName + "'?)", this);
		String_t* L_31;
		L_31 = VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B(__this, NULL);
		String_t* L_32;
		L_32 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral552DA4F83AB1BC270CE749E47D3C68702AB45097, L_31, _stringLiteral232E29D3CB1BEBAB46125A6580F94B6237639795, NULL);
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_32, __this, (bool)0);
		goto IL_0118;
	}

IL_00f8:
	{
		// Error ("Variable could not be found to assign to: '" + this.variableName + "'", this);
		String_t* L_33;
		L_33 = VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B(__this, NULL);
		String_t* L_34;
		L_34 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral834B13F856924DCC46AB8FF86DB1C23A385C2FFF, L_33, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_34, __this, (bool)0);
	}

IL_0118:
	{
	}

IL_0119:
	{
		// if( _runtimeAssignment != null )
		VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* L_35 = __this->____runtimeAssignment_11;
		bool L_36;
		L_36 = Object_op_Inequality_m5A3D926C60E6D42C9B95670417A6F0E60040FEF4(L_35, (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL, NULL);
		V_8 = L_36;
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_013e;
		}
	}
	{
		// _runtimeAssignment.isGlobal = resolvedVarAssignment.isGlobal;
		VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* L_38 = __this->____runtimeAssignment_11;
		VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 L_39 = V_5;
		bool L_40 = L_39.___isGlobal_1;
		NullCheck(L_38);
		VariableAssignment_set_isGlobal_m7E2A5FFCF8C182807B5941792682A0A1D26535DE_inline(L_38, L_40, NULL);
	}

IL_013e:
	{
	}

IL_013f:
	{
		// }
		return;
	}
}
// System.String Ink.Parsed.VariableAssignment::get_typeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VariableAssignment_get_typeName_m46F99307B242EA5D12AAB2B59A01F0FA37727C41 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24D3FA9EF9027D38088033AD06B49AC53ACB4ADB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A5EAECA242025908B1BA2BDB34B2296B923397E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// if (isNewTemporaryDeclaration) return "temp";
		bool L_0;
		L_0 = VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (isNewTemporaryDeclaration) return "temp";
		V_1 = _stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5;
		goto IL_002d;
	}

IL_0013:
	{
		// else if (isGlobalDeclaration) return "VAR";
		bool L_2;
		L_2 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(__this, NULL);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// else if (isGlobalDeclaration) return "VAR";
		V_1 = _stringLiteral24D3FA9EF9027D38088033AD06B49AC53ACB4ADB;
		goto IL_002d;
	}

IL_0025:
	{
		// else return "variable assignment";
		V_1 = _stringLiteral4A5EAECA242025908B1BA2BDB34B2296B923397E;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		String_t* L_4 = V_1;
		return L_4;
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
// System.String Ink.Parsed.VariableReference::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VariableReference_get_name_mE6D2556C23D83C040F82E27DE755F7D6FBD90E0F (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableReference::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference_set_name_mCA878128BFBEF54B19531F832CD1FB62A617ED65 (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// Ink.Parsed.Identifier Ink.Parsed.VariableReference::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* VariableReference_get_identifier_m71B144F925B5BAED06D65235AEE694141E0824C5 (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Aggregate_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisDebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01_mA9F2FF61E598534C443A817B94DC20D9CD4E8BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m5E6C1D3887D8BFD12F97E4CDC6DC381E20067DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_identifierU3Eb__5_0_m3F93841E2FC7D9D434FE11EC13DC12E0706B2C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* V_4 = NULL;
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* V_5 = NULL;
	int32_t G_B3_0 = 0;
	Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* G_B8_0 = NULL;
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* G_B8_1 = NULL;
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* G_B8_2 = NULL;
	Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* G_B7_0 = NULL;
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* G_B7_1 = NULL;
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* G_B7_2 = NULL;
	{
		// if (pathIdentifiers == null || pathIdentifiers.Count == 0) {
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_0 = __this->___pathIdentifiers_10;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_1 = __this->___pathIdentifiers_10;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_inline(L_1, List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// return null;
		V_1 = (Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD*)NULL;
		goto IL_00ae;
	}

IL_0026:
	{
		// if( _singleIdentifier == null ) {
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_4 = __this->____singleIdentifier_9;
		V_2 = (bool)((((RuntimeObject*)(Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_00a5;
		}
	}
	{
		// var name = string.Join (".", path.ToArray());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6;
		L_6 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		NullCheck(L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_6, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_7, NULL);
		V_3 = L_8;
		// var firstDebugMetadata = pathIdentifiers.First().debugMetadata;
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_9 = __this->___pathIdentifiers_10;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_10;
		L_10 = Enumerable_First_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m5E6C1D3887D8BFD12F97E4CDC6DC381E20067DB8(L_9, Enumerable_First_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m5E6C1D3887D8BFD12F97E4CDC6DC381E20067DB8_RuntimeMethod_var);
		NullCheck(L_10);
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_11 = L_10->___debugMetadata_1;
		V_4 = L_11;
		// var debugMetadata = pathIdentifiers.Aggregate(firstDebugMetadata, (acc, id) => acc.Merge(id.debugMetadata));
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_12 = __this->___pathIdentifiers_10;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_13 = V_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* L_14 = ((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1;
		Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* L_15 = L_14;
		G_B7_0 = L_15;
		G_B7_1 = L_13;
		G_B7_2 = L_12;
		if (L_15)
		{
			G_B8_0 = L_15;
			G_B8_1 = L_13;
			G_B8_2 = L_12;
			goto IL_0083;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* L_16 = ((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* L_17 = (Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED*)il2cpp_codegen_object_new(Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_3__ctor_mD9CB1B1FF461F43FEBEB5BE74B1C742AD72B080D(L_17, L_16, (intptr_t)((void*)U3CU3Ec_U3Cget_identifierU3Eb__5_0_m3F93841E2FC7D9D434FE11EC13DC12E0706B2C1A_RuntimeMethod_var), NULL);
		Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* L_18 = L_17;
		((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1), (void*)L_18);
		G_B8_0 = L_18;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_0083:
	{
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_19;
		L_19 = Enumerable_Aggregate_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisDebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01_mA9F2FF61E598534C443A817B94DC20D9CD4E8BDF(G_B8_2, G_B8_1, G_B8_0, Enumerable_Aggregate_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisDebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01_mA9F2FF61E598534C443A817B94DC20D9CD4E8BDF_RuntimeMethod_var);
		V_5 = L_19;
		// _singleIdentifier = new Identifier { name = name, debugMetadata = debugMetadata };
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_20 = (Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD*)il2cpp_codegen_object_new(Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Identifier__ctor_m9005D97AF26A8FF60030DE8B472F085F4FABEE84(L_20, NULL);
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_21 = L_20;
		String_t* L_22 = V_3;
		NullCheck(L_21);
		L_21->___name_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___name_0), (void*)L_22);
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_23 = L_21;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_24 = V_5;
		NullCheck(L_23);
		L_23->___debugMetadata_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___debugMetadata_1), (void*)L_24);
		__this->____singleIdentifier_9 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____singleIdentifier_9), (void*)L_23);
	}

IL_00a5:
	{
		// return _singleIdentifier;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_25 = __this->____singleIdentifier_9;
		V_1 = L_25;
		goto IL_00ae;
	}

IL_00ae:
	{
		// }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_26 = V_1;
		return L_26;
	}
}
// System.Collections.Generic.List`1<System.String> Ink.Parsed.VariableReference::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74 (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> path { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CpathU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableReference::set_path(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference_set_path_m2987340812E384B0F12578542E50B0CEFABDEAB0 (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> path { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CpathU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// Ink.Runtime.VariableReference Ink.Parsed.VariableReference::get_runtimeVarRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* VariableReference_get_runtimeVarRef_m802153B4D5D754E71AE064AF13DD35E46F6D825E (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* V_0 = NULL;
	{
		// public Runtime.VariableReference runtimeVarRef { get { return _runtimeVarRef; } }
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_0 = __this->____runtimeVarRef_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Runtime.VariableReference runtimeVarRef { get { return _runtimeVarRef; } }
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_1 = V_0;
		return L_1;
	}
}
// System.Void Ink.Parsed.VariableReference::.ctor(System.Collections.Generic.List`1<Ink.Parsed.Identifier>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference__ctor_mCFEE6DDD4D463CD4A455E64DCFAFE3906504CB77 (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* ___pathIdentifiers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_mC92B8BC15A1403ED0216A60D6ECDE2C8301B7790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_Join_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m62A16EB289D19DA69C6517D41C16DB6DA21A7414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__16_0_m100F96F238BA9E462A570C4DD891720F6EBC3FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* G_B2_0 = NULL;
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* G_B2_1 = NULL;
	VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* G_B2_2 = NULL;
	Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* G_B1_0 = NULL;
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* G_B1_1 = NULL;
	VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* G_B1_2 = NULL;
	{
		// public VariableReference (List<Identifier> pathIdentifiers)
		Expression__ctor_mBA2907DB4D7FEA90D9A52A1C9820CDBC72DFB2AD(__this, NULL);
		// this.pathIdentifiers = pathIdentifiers;
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_0 = ___pathIdentifiers0;
		__this->___pathIdentifiers_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathIdentifiers_10), (void*)L_0);
		// this.path = pathIdentifiers.Select(id => id?.name).ToList();
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_1 = ___pathIdentifiers0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* L_2 = ((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2;
		Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* L_4 = ((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* L_5 = (Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875*)il2cpp_codegen_object_new(Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mB5EB3293BD72F180C6BB12565679FEF66CC283EE(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__16_0_m100F96F238BA9E462A570C4DD891720F6EBC3FC8_RuntimeMethod_var), NULL);
		Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* L_6 = L_5;
		((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0030:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_mC92B8BC15A1403ED0216A60D6ECDE2C8301B7790(G_B2_1, G_B2_0, Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_mC92B8BC15A1403ED0216A60D6ECDE2C8301B7790_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8;
		L_8 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_7, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		NullCheck(G_B2_2);
		VariableReference_set_path_m2987340812E384B0F12578542E50B0CEFABDEAB0_inline(G_B2_2, L_8, NULL);
		// this.name = string.Join (".", pathIdentifiers);
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_9 = ___pathIdentifiers0;
		String_t* L_10;
		L_10 = String_Join_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m62A16EB289D19DA69C6517D41C16DB6DA21A7414(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_9, String_Join_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m62A16EB289D19DA69C6517D41C16DB6DA21A7414_RuntimeMethod_var);
		VariableReference_set_name_mCA878128BFBEF54B19531F832CD1FB62A617ED65_inline(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void Ink.Parsed.VariableReference::GenerateIntoContainer(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference_GenerateIntoContainer_m126D090D46BE94232CB78DD566AEEB871910099B (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	{
		// Expression constantValue = null;
		V_0 = (Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D*)NULL;
		// if ( story.constants.TryGetValue (name, out constantValue) ) {
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_0;
		L_0 = Object_get_story_mC48C490DCCF22AEC1CC28FEA37BDD22AA31C8B1C(__this, NULL);
		NullCheck(L_0);
		Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* L_1 = L_0->___constants_15;
		String_t* L_2;
		L_2 = VariableReference_get_name_mE6D2556C23D83C040F82E27DE755F7D6FBD90E0F_inline(__this, NULL);
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F_RuntimeMethod_var);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// constantValue.GenerateConstantIntoContainer (container);
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_5 = V_0;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_6 = ___container0;
		NullCheck(L_5);
		Expression_GenerateConstantIntoContainer_mEC1F77A0C77E93571A23830C1AFFC661A5FD1354(L_5, L_6, NULL);
		// isConstantReference = true;
		__this->___isConstantReference_12 = (bool)1;
		// return;
		goto IL_00e3;
	}

IL_0034:
	{
		// _runtimeVarRef = new Runtime.VariableReference (name);
		String_t* L_7;
		L_7 = VariableReference_get_name_mE6D2556C23D83C040F82E27DE755F7D6FBD90E0F_inline(__this, NULL);
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_8 = (VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819*)il2cpp_codegen_object_new(VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		VariableReference__ctor_mEFCD8F4CFF06B6A3F076B4688E09AC5DE0786718(L_8, L_7, NULL);
		__this->____runtimeVarRef_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runtimeVarRef_14), (void*)L_8);
		// if (path.Count == 1 || path.Count == 2) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9;
		L_9 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_9, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0063;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11;
		L_11 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_11, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		G_B5_0 = ((((int32_t)L_12) == ((int32_t)2))? 1 : 0);
		goto IL_0064;
	}

IL_0063:
	{
		G_B5_0 = 1;
	}

IL_0064:
	{
		V_2 = (bool)G_B5_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d6;
		}
	}
	{
		// string listItemName = null;
		V_3 = (String_t*)NULL;
		// string listName = null;
		V_4 = (String_t*)NULL;
		// if (path.Count == 1) listItemName = path [0];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
		L_14 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_14, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_15) == ((int32_t)1))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0091;
		}
	}
	{
		// if (path.Count == 1) listItemName = path [0];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17;
		L_17 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_17, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_3 = L_18;
		goto IL_00ae;
	}

IL_0091:
	{
		// listName = path [0];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19;
		L_19 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_19, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_4 = L_20;
		// listItemName = path [1];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21;
		L_21 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_21, 1, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_3 = L_22;
	}

IL_00ae:
	{
		// var listItem = story.ResolveListItem (listName, listItemName, this);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_23;
		L_23 = Object_get_story_mC48C490DCCF22AEC1CC28FEA37BDD22AA31C8B1C(__this, NULL);
		String_t* L_24 = V_4;
		String_t* L_25 = V_3;
		NullCheck(L_23);
		ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* L_26;
		L_26 = Story_ResolveListItem_m857290E9E49BEC424C7D3A54E6171F11DE081302(L_23, L_24, L_25, __this, NULL);
		V_5 = L_26;
		// if (listItem) {
		ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* L_27 = V_5;
		bool L_28;
		L_28 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_27, NULL);
		V_7 = L_28;
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00d5;
		}
	}
	{
		// isListItemReference = true;
		__this->___isListItemReference_13 = (bool)1;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		// container.AddContent (_runtimeVarRef);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_30 = ___container0;
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_31 = __this->____runtimeVarRef_14;
		NullCheck(L_30);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_30, L_31, NULL);
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.VariableReference::ResolveReferences(Ink.Parsed.Story)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference_ResolveReferences_m7DED9D840E481E81329DE7A5FAA9F82344B934CD (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BAD6CD617D272A279F787BE0B87FA21DB8B7C02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral597A362DB8D6E186B492CF582B27E2FC8F03E2D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD28C21A745DAAD04F4A4BAA862741D9A6EBEF607);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAADEE259CA27EB2EEAEFC368E2BE391D2D0CCDA);
		s_Il2CppMethodInitialized = true;
	}
	Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* V_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	String_t* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* G_B19_4 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_3 = NULL;
	VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* G_B18_4 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* G_B20_4 = NULL;
	Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* G_B26_0 = NULL;
	String_t* G_B26_1 = NULL;
	Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* G_B25_0 = NULL;
	String_t* G_B25_1 = NULL;
	String_t* G_B27_0 = NULL;
	String_t* G_B27_1 = NULL;
	{
		// base.ResolveReferences (context);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_0 = ___context0;
		Object_ResolveReferences_m8BC5DD701019191459A9CEF84D71FFBE2FEDFF8E(__this, L_0, NULL);
		// if (isConstantReference || isListItemReference) {
		bool L_1 = __this->___isConstantReference_12;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = __this->___isListItemReference_13;
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		goto IL_01dd;
	}

IL_0024:
	{
		// var parsedPath = new Path (pathIdentifiers);
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_4 = __this->___pathIdentifiers_10;
		Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* L_5 = (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC*)il2cpp_codegen_object_new(Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Path__ctor_m1FA0634AFC2CCF3487EE1E3F27F2236655C8AB25(L_5, L_4, NULL);
		V_0 = L_5;
		// Parsed.Object targetForCount = parsedPath.ResolveFromContext (this);
		Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* L_6 = V_0;
		NullCheck(L_6);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7;
		L_7 = Path_ResolveFromContext_m2E7745228A2131E2474943DDB9BE94219BE1AF60(L_6, __this, NULL);
		V_1 = L_7;
		// if (targetForCount) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_8 = V_1;
		bool L_9;
		L_9 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_8, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0132;
		}
	}
	{
		// targetForCount.containerForCounting.visitsShouldBeCounted = true;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_11 = V_1;
		NullCheck(L_11);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_12;
		L_12 = VirtualFuncInvoker0< Container_t74302BC1028974B0A346A43F334AECB681D79579* >::Invoke(7 /* Ink.Runtime.Container Ink.Parsed.Object::get_containerForCounting() */, L_11);
		NullCheck(L_12);
		Container_set_visitsShouldBeCounted_mCA668E9A96F2D5B8F25801AE1169786E35B2091C_inline(L_12, (bool)1, NULL);
		// if (_runtimeVarRef == null) return;
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_13 = __this->____runtimeVarRef_14;
		bool L_14;
		L_14 = Object_op_Equality_m2AE832318622C516D0CF2C77418FD85DD162DE62(L_13, (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL, NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		// if (_runtimeVarRef == null) return;
		goto IL_01dd;
	}

IL_006a:
	{
		// _runtimeVarRef.pathForCount = targetForCount.runtimePath;
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_16 = __this->____runtimeVarRef_14;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_17 = V_1;
		NullCheck(L_17);
		Path_tCC1F1626DB60711735401EA8FA76A191D9014600* L_18;
		L_18 = VirtualFuncInvoker0< Path_tCC1F1626DB60711735401EA8FA76A191D9014600* >::Invoke(6 /* Ink.Runtime.Path Ink.Parsed.Object::get_runtimePath() */, L_17);
		NullCheck(L_16);
		VariableReference_set_pathForCount_m3488741E05F86E09B7A082704610A095EF0C7016_inline(L_16, L_18, NULL);
		// _runtimeVarRef.name = null;
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_19 = __this->____runtimeVarRef_14;
		NullCheck(L_19);
		VariableReference_set_name_mD0F82FBF6521B061476F855E565D665D03BADF29_inline(L_19, (String_t*)NULL, NULL);
		// var targetFlow = targetForCount as FlowBase;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_20 = V_1;
		V_4 = ((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)IsInstClass((RuntimeObject*)L_20, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var));
		// if (targetFlow && targetFlow.isFunction) {
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_21 = V_4;
		bool L_22;
		L_22 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_21, NULL);
		if (!L_22)
		{
			goto IL_00a3;
		}
	}
	{
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_23 = V_4;
		NullCheck(L_23);
		bool L_24;
		L_24 = FlowBase_get_isFunction_m89BD3D4FC104434B4EB5091C121C29C3E817D30F_inline(L_23, NULL);
		G_B11_0 = ((int32_t)(L_24));
		goto IL_00a4;
	}

IL_00a3:
	{
		G_B11_0 = 0;
	}

IL_00a4:
	{
		V_6 = (bool)G_B11_0;
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_012d;
		}
	}
	{
		// if ( parent is Weave || parent is ContentList || parent is FlowBase) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_26;
		L_26 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(__this, NULL);
		if (((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_26, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var)))
		{
			goto IL_00d8;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_27;
		L_27 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(__this, NULL);
		if (((ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23*)IsInstClass((RuntimeObject*)L_27, ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23_il2cpp_TypeInfo_var)))
		{
			goto IL_00d8;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_28;
		L_28 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(__this, NULL);
		G_B16_0 = ((!(((RuntimeObject*)(FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)IsInstClass((RuntimeObject*)L_28, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_00d9;
	}

IL_00d8:
	{
		G_B16_0 = 1;
	}

IL_00d9:
	{
		V_7 = (bool)G_B16_0;
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_012c;
		}
	}
	{
		// Warning ("'" + targetFlow.identifier + "' being used as read count rather than being called as function. Perhaps you intended to write " + targetFlow.name + "()");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_33 = V_4;
		NullCheck(L_33);
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_34;
		L_34 = FlowBase_get_identifier_m4690D9A6AAB405E233688C9261A4F0BB19BFC105_inline(L_33, NULL);
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_35 = L_34;
		G_B18_0 = L_35;
		G_B18_1 = 1;
		G_B18_2 = L_32;
		G_B18_3 = L_32;
		G_B18_4 = __this;
		if (L_35)
		{
			G_B19_0 = L_35;
			G_B19_1 = 1;
			G_B19_2 = L_32;
			G_B19_3 = L_32;
			G_B19_4 = __this;
			goto IL_00ff;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_0104;
	}

IL_00ff:
	{
		NullCheck(G_B19_0);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B19_0);
		G_B20_0 = L_36;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_0104:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = G_B20_3;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralD28C21A745DAAD04F4A4BAA862741D9A6EBEF607);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralD28C21A745DAAD04F4A4BAA862741D9A6EBEF607);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_39 = V_4;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = FlowBase_get_name_m7039F76999F2B76C702FA8DDE92FBD86BC58D97F(L_39, NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_40);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_38;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		String_t* L_42;
		L_42 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_41, NULL);
		NullCheck(G_B20_4);
		Object_Warning_m9F035739B3D45548FE13DD8787B33B931836F50A(G_B20_4, L_42, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
	}

IL_012c:
	{
	}

IL_012d:
	{
		// return;
		goto IL_01dd;
	}

IL_0132:
	{
		// if (path.Count > 1) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_43;
		L_43 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_43, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_44) > ((int32_t)1))? 1 : 0);
		bool L_45 = V_8;
		if (!L_45)
		{
			goto IL_01a7;
		}
	}
	{
		// var errorMsg = "Could not find target for read count: " + parsedPath;
		Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* L_46 = V_0;
		Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* L_47 = L_46;
		G_B25_0 = L_47;
		G_B25_1 = _stringLiteralFAADEE259CA27EB2EEAEFC368E2BE391D2D0CCDA;
		if (L_47)
		{
			G_B26_0 = L_47;
			G_B26_1 = _stringLiteralFAADEE259CA27EB2EEAEFC368E2BE391D2D0CCDA;
			goto IL_0154;
		}
	}
	{
		G_B27_0 = ((String_t*)(NULL));
		G_B27_1 = G_B25_1;
		goto IL_0159;
	}

IL_0154:
	{
		NullCheck(G_B26_0);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B26_0);
		G_B27_0 = L_48;
		G_B27_1 = G_B26_1;
	}

IL_0159:
	{
		String_t* L_49;
		L_49 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B27_1, G_B27_0, NULL);
		V_9 = L_49;
		// if (path.Count <= 2)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_50;
		L_50 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_50, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)((((int32_t)L_51) > ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_10;
		if (!L_52)
		{
			goto IL_019a;
		}
	}
	{
		// errorMsg += ", or couldn't find list item with the name " + string.Join (",", path.ToArray());
		String_t* L_53 = V_9;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_54;
		L_54 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		NullCheck(L_54);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55;
		L_55 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_54, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_56;
		L_56 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_55, NULL);
		String_t* L_57;
		L_57 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_53, _stringLiteral597A362DB8D6E186B492CF582B27E2FC8F03E2D3, L_56, NULL);
		V_9 = L_57;
	}

IL_019a:
	{
		// Error (errorMsg);
		String_t* L_58 = V_9;
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_58, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, (bool)0);
		// return;
		goto IL_01dd;
	}

IL_01a7:
	{
		// if (!context.ResolveVariableWithName (this.name, fromNode: this).found) {
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_59 = ___context0;
		String_t* L_60;
		L_60 = VariableReference_get_name_mE6D2556C23D83C040F82E27DE755F7D6FBD90E0F_inline(__this, NULL);
		NullCheck(L_59);
		VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 L_61;
		L_61 = FlowBase_ResolveVariableWithName_m017DF795D3DA6FF4644793B10ED8B6386171E2C0(L_59, L_60, __this, NULL);
		bool L_62 = L_61.___found_0;
		V_11 = (bool)((((int32_t)L_62) == ((int32_t)0))? 1 : 0);
		bool L_63 = V_11;
		if (!L_63)
		{
			goto IL_01dd;
		}
	}
	{
		// Error("Unresolved variable: "+this.ToString(), this);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_65;
		L_65 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4BAD6CD617D272A279F787BE0B87FA21DB8B7C02, L_64, NULL);
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_65, __this, (bool)0);
	}

IL_01dd:
	{
		// }
		return;
	}
}
// System.String Ink.Parsed.VariableReference::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VariableReference_ToString_m236EBA5F727CBDC3619DF24EE8FF979DD2B60948 (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Join(".", path.ToArray());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0;
		L_0 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_0, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_2;
		L_2 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_1, NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
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
// System.Void Ink.Parsed.VariableReference/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEAE5176A9D2A9382D0158BBAAF988FDEF09CF082 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* L_0 = (U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0*)il2cpp_codegen_object_new(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m99983106CE4D2AC262F8BD9DC13B7823049F8684(L_0, NULL);
		((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Ink.Parsed.VariableReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m99983106CE4D2AC262F8BD9DC13B7823049F8684 (U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Ink.Runtime.DebugMetadata Ink.Parsed.VariableReference/<>c::<get_identifier>b__5_0(Ink.Runtime.DebugMetadata,Ink.Parsed.Identifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* U3CU3Ec_U3Cget_identifierU3Eb__5_0_m3F93841E2FC7D9D434FE11EC13DC12E0706B2C1A (U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* __this, DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ___acc0, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___id1, const RuntimeMethod* method) 
{
	{
		// var debugMetadata = pathIdentifiers.Aggregate(firstDebugMetadata, (acc, id) => acc.Merge(id.debugMetadata));
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_0 = ___acc0;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_1 = ___id1;
		NullCheck(L_1);
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_2 = L_1->___debugMetadata_1;
		NullCheck(L_0);
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_3;
		L_3 = DebugMetadata_Merge_m77879AC51F0FFC3021B79DEEBB6EA37DE53923AC(L_0, L_2, NULL);
		return L_3;
	}
}
// System.String Ink.Parsed.VariableReference/<>c::<.ctor>b__16_0(Ink.Parsed.Identifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__16_0_m100F96F238BA9E462A570C4DD891720F6EBC3FC8 (U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___id0, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	{
		// this.path = pathIdentifiers.Select(id => id?.name).ToList();
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = ___id0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_1 = ___id0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___name_0;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
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
// Ink.Runtime.Container Ink.Parsed.Weave::get_rootContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Weave_get_rootContainer_mF7051B9D57FAE9724FFA81B7760DABEE4A7330E5 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_1 = NULL;
	{
		// if (_rootContainer == null) {
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = __this->____rootContainer_15;
		bool L_1;
		L_1 = Object_op_Equality_m2AE832318622C516D0CF2C77418FD85DD162DE62(L_0, (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// GenerateRuntimeObject ();
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_3;
		L_3 = VirtualFuncInvoker0< Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* >::Invoke(8 /* Ink.Runtime.Object Ink.Parsed.Object::GenerateRuntimeObject() */, __this);
	}

IL_001a:
	{
		// return _rootContainer;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_4 = __this->____rootContainer_15;
		V_1 = L_4;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_5 = V_1;
		return L_5;
	}
}
// Ink.Runtime.Container Ink.Parsed.Weave::get_currentContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	{
		// Runtime.Container currentContainer { get; set; }
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = __this->___U3CcurrentContainerU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ink.Parsed.Weave::set_currentContainer(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_set_currentContainer_m726341F02CE4FBBF970874A494486A48190F7C23 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___value0, const RuntimeMethod* method) 
{
	{
		// Runtime.Container currentContainer { get; set; }
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = ___value0;
		__this->___U3CcurrentContainerU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentContainerU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Int32 Ink.Parsed.Weave::get_baseIndentIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weave_get_baseIndentIndex_m98068082F6788CEF08908CCDF9E62F4C4938839D (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	{
		// public int baseIndentIndex { get; private set; }
		int32_t L_0 = __this->___U3CbaseIndentIndexU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Ink.Parsed.Weave::set_baseIndentIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_set_baseIndentIndex_m6F3D26B4F215BB48218CFE3E84BD0B26532B98B1 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int baseIndentIndex { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CbaseIndentIndexU3Ek__BackingField_7 = L_0;
		return;
	}
}
// Ink.Parsed.Object Ink.Parsed.Weave::get_lastParsedSignificantObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Weave_get_lastParsedSignificantObject_m1B04EDF689CE2860594576D416B2EBC60C55423B (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_0 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_1 = NULL;
	bool V_2 = false;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_3 = NULL;
	int32_t V_4 = 0;
	Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	{
		// if (content.Count == 0) return null;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_0;
		L_0 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_0, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if (content.Count == 0) return null;
		V_3 = (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL;
		goto IL_00ad;
	}

IL_001a:
	{
		// Parsed.Object lastObject = null;
		V_0 = (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL;
		// for (int i = content.Count - 1; i >= 0; --i) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_3;
		L_3 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_3, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		goto IL_0081;
	}

IL_002d:
	{
		// lastObject = content [i];
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_5;
		L_5 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_6 = V_4;
		NullCheck(L_5);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7;
		L_7 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_5, L_6, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		V_0 = L_7;
		// var lastText = lastObject as Parsed.Text;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_8 = V_0;
		V_5 = ((Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED*)IsInstClass((RuntimeObject*)L_8, Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED_il2cpp_TypeInfo_var));
		// if (lastText && lastText.text == "\n") {
		Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* L_9 = V_5;
		bool L_10;
		L_10 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_9, NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* L_11 = V_5;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Text_get_text_m14F6F4C8E14BAD266FF794A86DCFA15E89964103_inline(L_11, NULL);
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		G_B6_0 = ((int32_t)(L_13));
		goto IL_0061;
	}

IL_0060:
	{
		G_B6_0 = 0;
	}

IL_0061:
	{
		V_6 = (bool)G_B6_0;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_006a;
		}
	}
	{
		// continue;
		goto IL_007b;
	}

IL_006a:
	{
		// if (IsGlobalDeclaration (lastObject))
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_15 = V_0;
		bool L_16;
		L_16 = Weave_IsGlobalDeclaration_m2F27AA5E1B93C4B938128743ECD736C5C69F43A3(__this, L_15, NULL);
		V_7 = L_16;
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0079;
		}
	}
	{
		// continue;
		goto IL_007b;
	}

IL_0079:
	{
		// break;
		goto IL_008f;
	}

IL_007b:
	{
		// for (int i = content.Count - 1; i >= 0; --i) {
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0081:
	{
		// for (int i = content.Count - 1; i >= 0; --i) {
		int32_t L_19 = V_4;
		V_8 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (L_20)
		{
			goto IL_002d;
		}
	}

IL_008f:
	{
		// var lastWeave = lastObject as Weave;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_21 = V_0;
		V_1 = ((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_21, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var));
		// if (lastWeave)
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_22 = V_1;
		bool L_23;
		L_23 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_22, NULL);
		V_9 = L_23;
		bool L_24 = V_9;
		if (!L_24)
		{
			goto IL_00a9;
		}
	}
	{
		// lastObject = lastWeave.lastParsedSignificantObject;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_25 = V_1;
		NullCheck(L_25);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_26;
		L_26 = Weave_get_lastParsedSignificantObject_m1B04EDF689CE2860594576D416B2EBC60C55423B(L_25, NULL);
		V_0 = L_26;
	}

IL_00a9:
	{
		// return lastObject;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_27 = V_0;
		V_3 = L_27;
		goto IL_00ad;
	}

IL_00ad:
	{
		// }
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_28 = V_3;
		return L_28;
	}
}
// System.Void Ink.Parsed.Weave::.ctor(System.Collections.Generic.List`1<Ink.Parsed.Object>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave__ctor_mE804413D35CA9D86F034623450393D361FB63449 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___cont0, int32_t ___indentIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// IWeavePoint previousWeavePoint = null;
		__this->___previousWeavePoint_10 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousWeavePoint_10), (void*)(RuntimeObject*)NULL);
		// bool addContentToPreviousWeavePoint = false;
		__this->___addContentToPreviousWeavePoint_11 = (bool)0;
		// bool hasSeenChoiceInSection = false;
		__this->___hasSeenChoiceInSection_12 = (bool)0;
		// public Weave(List<Parsed.Object> cont, int indentIndex=-1)
		Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A(__this, NULL);
		// if (indentIndex == -1) {
		int32_t L_0 = ___indentIndex1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// baseIndentIndex = DetermineBaseIndentationFromContent (cont);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_2 = ___cont0;
		int32_t L_3;
		L_3 = Weave_DetermineBaseIndentationFromContent_m938BFF91272784586BFBB6F194284632D19CD604(__this, L_2, NULL);
		Weave_set_baseIndentIndex_m6F3D26B4F215BB48218CFE3E84BD0B26532B98B1_inline(__this, L_3, NULL);
		goto IL_0041;
	}

IL_0037:
	{
		// baseIndentIndex = indentIndex;
		int32_t L_4 = ___indentIndex1;
		Weave_set_baseIndentIndex_m6F3D26B4F215BB48218CFE3E84BD0B26532B98B1_inline(__this, L_4, NULL);
	}

IL_0041:
	{
		// AddContent (cont);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_5 = ___cont0;
		Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280(__this, L_5, Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280_RuntimeMethod_var);
		// ConstructWeaveHierarchyFromIndentation ();
		Weave_ConstructWeaveHierarchyFromIndentation_m347CCA2577E3B2907C247FAD50CB1DD71E5C259D(__this, NULL);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::ResolveWeavePointNaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ResolveWeavePointNaming_m0250E06BC9A7314A58C67D74692535A9E0032BF1 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m09D0B05560B270A9FADCF6E5D9C0736FA6CB8BAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mAA08D8B1D90E5E645461227F453508FF161AB975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindAll_TisIWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_m7F252A913726163DB529A7C7F372736A522BD2A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveWeavePointNamingU3Eb__16_0_mD2E1AE17D456275345755805605BAB67AD659C93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E496DD143AA8143CEB7E732FC7B782BF3979F24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral580238E6E0ACB59AECE7F14975A94031E75C9F37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DC9AC61476AAE77F1CE47714E462CD38340FFEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB53E3868832BD0EF55666E126B25E567528AC5AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8B61217D46DA3BC553C980F9397D47D55C737C2);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* V_0 = NULL;
	Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_6 = NULL;
	FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* G_B2_0 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* G_B2_1 = NULL;
	FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* G_B1_0 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* G_B1_1 = NULL;
	String_t* G_B8_0 = NULL;
	{
		// var namedWeavePoints = FindAll<IWeavePoint> (w => !string.IsNullOrEmpty (w.name));
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
		FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* L_0 = ((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1;
		FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
		U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* L_2 = ((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* L_3 = (FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40*)il2cpp_codegen_object_new(FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FindQueryFunc_1__ctor_m50A841D0C50D66E3DBEFCD964A9471DCF3A8C678(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CResolveWeavePointNamingU3Eb__16_0_mD2E1AE17D456275345755805605BAB67AD659C93_RuntimeMethod_var), NULL);
		FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* L_4 = L_3;
		((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		NullCheck(G_B2_1);
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_5;
		L_5 = Object_FindAll_TisIWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_m7F252A913726163DB529A7C7F372736A522BD2A6(G_B2_1, G_B2_0, Object_FindAll_TisIWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_m7F252A913726163DB529A7C7F372736A522BD2A6_RuntimeMethod_var);
		V_0 = L_5;
		// _namedWeavePoints = new Dictionary<string, IWeavePoint> ();
		Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_6 = (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F*)il2cpp_codegen_object_new(Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m09D0B05560B270A9FADCF6E5D9C0736FA6CB8BAC(L_6, Dictionary_2__ctor_m09D0B05560B270A9FADCF6E5D9C0736FA6CB8BAC_RuntimeMethod_var);
		__this->____namedWeavePoints_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____namedWeavePoints_16), (void*)L_6);
		// foreach (var weavePoint in namedWeavePoints) {
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_7 = V_0;
		NullCheck(L_7);
		Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 L_8;
		L_8 = List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87(L_7, List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A((&V_1), Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e8_1;
			}

IL_003f_1:
			{
				// foreach (var weavePoint in namedWeavePoints) {
				RuntimeObject* L_9;
				L_9 = Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_inline((&V_1), Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var);
				V_2 = L_9;
				// if (_namedWeavePoints.TryGetValue (weavePoint.name, out existingWeavePoint)) {
				Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_10 = __this->____namedWeavePoints_16;
				RuntimeObject* L_11 = V_2;
				NullCheck(L_11);
				String_t* L_12;
				L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Ink.Parsed.IWeavePoint::get_name() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_11);
				NullCheck(L_10);
				bool L_13;
				L_13 = Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826(L_10, L_12, (&V_3), Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826_RuntimeMethod_var);
				V_4 = L_13;
				bool L_14 = V_4;
				if (!L_14)
				{
					goto IL_00d4_1;
				}
			}
			{
				// var typeName = existingWeavePoint is Gather ? "gather" : "choice";
				RuntimeObject* L_15 = V_3;
				if (((Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)IsInstClass((RuntimeObject*)L_15, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var)))
				{
					goto IL_0071_1;
				}
			}
			{
				G_B8_0 = _stringLiteral6DC9AC61476AAE77F1CE47714E462CD38340FFEA;
				goto IL_0076_1;
			}

IL_0071_1:
			{
				G_B8_0 = _stringLiteral580238E6E0ACB59AECE7F14975A94031E75C9F37;
			}

IL_0076_1:
			{
				V_5 = G_B8_0;
				// var existingObj = (Parsed.Object)existingWeavePoint;
				RuntimeObject* L_16 = V_3;
				V_6 = ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_16, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var));
				// Error ("A " + typeName + " with the same label name '" + weavePoint.name + "' already exists in this context on line " + existingObj.debugMetadata.startLineNumber, (Parsed.Object)weavePoint);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, _stringLiteralF8B61217D46DA3BC553C980F9397D47D55C737C2);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF8B61217D46DA3BC553C980F9397D47D55C737C2);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
				String_t* L_20 = V_5;
				NullCheck(L_19);
				ArrayElementTypeCheck (L_19, L_20);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_20);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_19;
				NullCheck(L_21);
				ArrayElementTypeCheck (L_21, _stringLiteralB53E3868832BD0EF55666E126B25E567528AC5AD);
				(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB53E3868832BD0EF55666E126B25E567528AC5AD);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
				RuntimeObject* L_23 = V_2;
				NullCheck(L_23);
				String_t* L_24;
				L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Ink.Parsed.IWeavePoint::get_name() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_23);
				NullCheck(L_22);
				ArrayElementTypeCheck (L_22, L_24);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_24);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_22;
				NullCheck(L_25);
				ArrayElementTypeCheck (L_25, _stringLiteral1E496DD143AA8143CEB7E732FC7B782BF3979F24);
				(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1E496DD143AA8143CEB7E732FC7B782BF3979F24);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_27 = V_6;
				NullCheck(L_27);
				DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_28;
				L_28 = Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28(L_27, NULL);
				NullCheck(L_28);
				int32_t* L_29 = (&L_28->___startLineNumber_0);
				String_t* L_30;
				L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_29, NULL);
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, L_30);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_30);
				String_t* L_31;
				L_31 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_26, NULL);
				RuntimeObject* L_32 = V_2;
				VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_31, ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_32, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var)), (bool)0);
			}

IL_00d4_1:
			{
				// _namedWeavePoints [weavePoint.name] = weavePoint;
				Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_33 = __this->____namedWeavePoints_16;
				RuntimeObject* L_34 = V_2;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Ink.Parsed.IWeavePoint::get_name() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_34);
				RuntimeObject* L_36 = V_2;
				NullCheck(L_33);
				Dictionary_2_set_Item_mAA08D8B1D90E5E645461227F453508FF161AB975(L_33, L_35, L_36, Dictionary_2_set_Item_mAA08D8B1D90E5E645461227F453508FF161AB975_RuntimeMethod_var);
			}

IL_00e8_1:
			{
				// foreach (var weavePoint in namedWeavePoints) {
				bool L_37;
				L_37 = Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39((&V_1), Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_003f_1;
				}
			}
			{
				goto IL_0105;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::ConstructWeaveHierarchyFromIndentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ConstructWeaveHierarchyFromIndentation_m347CCA2577E3B2907C247FAD50CB1DD71E5C259D (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetRange_mEBA06D625B0F423AB20F3D64D0494EBB300C103D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m5CF433B308EA5F7DBC3D30C53F2536C2F47F8067_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_InsertContent_TisWeave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_m2F8400F9F5E13FE2D2EF334CA9462E8CE3F86715_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* V_8 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	{
		// int contentIdx = 0;
		V_0 = 0;
		goto IL_00f3;
	}

IL_0008:
	{
		// Parsed.Object obj = content [contentIdx];
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_0;
		L_0 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_2;
		L_2 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_0, L_1, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		V_1 = L_2;
		// if (obj is IWeavePoint) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_00ee;
		}
	}
	{
		// var weavePoint = (IWeavePoint)obj;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5 = V_1;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var));
		// var weaveIndentIdx = weavePoint.indentationDepth - 1;
		RuntimeObject* L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Ink.Parsed.IWeavePoint::get_indentationDepth() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_6);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		// if (weaveIndentIdx > baseIndentIndex) {
		int32_t L_8 = V_4;
		int32_t L_9;
		L_9 = Weave_get_baseIndentIndex_m98068082F6788CEF08908CCDF9E62F4C4938839D_inline(__this, NULL);
		V_5 = (bool)((((int32_t)L_8) > ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_00ed;
		}
	}
	{
		// int innerWeaveStartIdx = contentIdx;
		int32_t L_11 = V_0;
		V_6 = L_11;
		goto IL_0098;
	}

IL_0051:
	{
		// var innerWeaveObj = content [contentIdx] as IWeavePoint;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_12;
		L_12 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_14;
		L_14 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_12, L_13, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var));
		// if (innerWeaveObj != null) {
		RuntimeObject* L_15 = V_10;
		V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_15) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_16 = V_11;
		if (!L_16)
		{
			goto IL_0093;
		}
	}
	{
		// var innerIndentIdx = innerWeaveObj.indentationDepth - 1;
		RuntimeObject* L_17 = V_10;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Ink.Parsed.IWeavePoint::get_indentationDepth() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_17);
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		// if (innerIndentIdx <= baseIndentIndex) {
		int32_t L_19 = V_12;
		int32_t L_20;
		L_20 = Weave_get_baseIndentIndex_m98068082F6788CEF08908CCDF9E62F4C4938839D_inline(__this, NULL);
		V_13 = (bool)((((int32_t)((((int32_t)L_19) > ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_13;
		if (!L_21)
		{
			goto IL_0092;
		}
	}
	{
		// break;
		goto IL_00ac;
	}

IL_0092:
	{
	}

IL_0093:
	{
		// contentIdx++;
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0098:
	{
		// while (contentIdx < content.Count) {
		int32_t L_23 = V_0;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_24;
		L_24 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_24, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_14;
		if (L_26)
		{
			goto IL_0051;
		}
	}

IL_00ac:
	{
		// int weaveContentCount = contentIdx - innerWeaveStartIdx;
		int32_t L_27 = V_0;
		int32_t L_28 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_27, L_28));
		// var weaveContent = content.GetRange (innerWeaveStartIdx, weaveContentCount);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_29;
		L_29 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_30 = V_6;
		int32_t L_31 = V_7;
		NullCheck(L_29);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_32;
		L_32 = List_1_GetRange_mEBA06D625B0F423AB20F3D64D0494EBB300C103D(L_29, L_30, L_31, List_1_GetRange_mEBA06D625B0F423AB20F3D64D0494EBB300C103D_RuntimeMethod_var);
		V_8 = L_32;
		// content.RemoveRange (innerWeaveStartIdx, weaveContentCount);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_33;
		L_33 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_34 = V_6;
		int32_t L_35 = V_7;
		NullCheck(L_33);
		List_1_RemoveRange_m5CF433B308EA5F7DBC3D30C53F2536C2F47F8067(L_33, L_34, L_35, List_1_RemoveRange_m5CF433B308EA5F7DBC3D30C53F2536C2F47F8067_RuntimeMethod_var);
		// var weave = new Weave (weaveContent, weaveIndentIdx);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_36 = V_8;
		int32_t L_37 = V_4;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_38 = (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)il2cpp_codegen_object_new(Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Weave__ctor_mE804413D35CA9D86F034623450393D361FB63449(L_38, L_36, L_37, NULL);
		V_9 = L_38;
		// InsertContent (innerWeaveStartIdx, weave);
		int32_t L_39 = V_6;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_40 = V_9;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_41;
		L_41 = Object_InsertContent_TisWeave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_m2F8400F9F5E13FE2D2EF334CA9462E8CE3F86715(__this, L_39, L_40, Object_InsertContent_TisWeave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_m2F8400F9F5E13FE2D2EF334CA9462E8CE3F86715_RuntimeMethod_var);
		// contentIdx = innerWeaveStartIdx;
		int32_t L_42 = V_6;
		V_0 = L_42;
	}

IL_00ed:
	{
	}

IL_00ee:
	{
		// contentIdx++;
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00f3:
	{
		// while (contentIdx < content.Count) {
		int32_t L_44 = V_0;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_45;
		L_45 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_45, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		V_15 = (bool)((((int32_t)L_44) < ((int32_t)L_46))? 1 : 0);
		bool L_47 = V_15;
		if (L_47)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Ink.Parsed.Weave::DetermineBaseIndentationFromContent(System.Collections.Generic.List`1<Ink.Parsed.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weave_DetermineBaseIndentationFromContent_m938BFF91272784586BFBB6F194284632D19CD604 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___contentList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// foreach (var obj in contentList) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_0 = ___contentList0;
		NullCheck(L_0);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_1;
		L_1 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_0, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_0), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0033_1;
			}

IL_000b_1:
			{
				// foreach (var obj in contentList) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_2;
				L_2 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_0), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				V_1 = L_2;
				// if (obj is IWeavePoint) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3 = V_1;
				V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_4 = V_2;
				if (!L_4)
				{
					goto IL_0032_1;
				}
			}
			{
				// return ((IWeavePoint)obj).indentationDepth - 1;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5 = V_1;
				NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_5, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var)));
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Ink.Parsed.IWeavePoint::get_indentationDepth() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var)));
				V_3 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
				goto IL_0051;
			}

IL_0032_1:
			{
			}

IL_0033_1:
			{
				// foreach (var obj in contentList) {
				bool L_7;
				L_7 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_0), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		// return 0;
		V_3 = 0;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		int32_t L_8 = V_3;
		return L_8;
	}
}
// Ink.Runtime.Object Ink.Parsed.Weave::GenerateRuntimeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* Weave_GenerateRuntimeObject_mAF0E7F0D6BD39321E73075FC4CC8B7C5E78C5ACB (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF67AEA92CB96A7EB9B237EA52FC2B38AA9B16BBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m60A33E724150BD07A6081520E30BCBB4D524DFF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE857C294F1FDC1B1EB7A48BD4C4B118802AD68F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA7383995CB6636153484C17B150C3B16C85C49B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_0 = NULL;
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_5 = NULL;
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* V_6 = NULL;
	{
		// _rootContainer = currentContainer = new Runtime.Container();
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = (Container_t74302BC1028974B0A346A43F334AECB681D79579*)il2cpp_codegen_object_new(Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Container__ctor_mE49EAAD4892EDEFFDA64A7A54823A021ECBF4F84(L_0, NULL);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_1 = L_0;
		V_0 = L_1;
		Weave_set_currentContainer_m726341F02CE4FBBF970874A494486A48190F7C23_inline(__this, L_1, NULL);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_2 = V_0;
		__this->____rootContainer_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rootContainer_15), (void*)L_2);
		// looseEnds = new List<IWeavePoint> ();
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_3 = (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*)il2cpp_codegen_object_new(List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m60A33E724150BD07A6081520E30BCBB4D524DFF8(L_3, List_1__ctor_m60A33E724150BD07A6081520E30BCBB4D524DFF8_RuntimeMethod_var);
		__this->___looseEnds_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___looseEnds_8), (void*)L_3);
		// gatherPointsToResolve = new List<GatherPointToResolve> ();
		List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* L_4 = (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7*)il2cpp_codegen_object_new(List_1_tA7383995CB6636153484C17B150C3B16C85C49B7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mE857C294F1FDC1B1EB7A48BD4C4B118802AD68F8(L_4, List_1__ctor_mE857C294F1FDC1B1EB7A48BD4C4B118802AD68F8_RuntimeMethod_var);
		__this->___gatherPointsToResolve_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gatherPointsToResolve_9), (void*)L_4);
		// foreach(var obj in content) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_5;
		L_5 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		NullCheck(L_5);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_6;
		L_6 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_5, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_1), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ab_1;
			}

IL_003b_1:
			{
				// foreach(var obj in content) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7;
				L_7 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_1), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				V_2 = L_7;
				// if (obj is IWeavePoint) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_8 = V_2;
				V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_9 = V_3;
				if (!L_9)
				{
					goto IL_0062_1;
				}
			}
			{
				// AddRuntimeForWeavePoint ((IWeavePoint)obj);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_10 = V_2;
				Weave_AddRuntimeForWeavePoint_m6DEEC1E96DDB0A13DBF6DB29CEAF545C28CEDB08(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_10, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var)), NULL);
				goto IL_00aa_1;
			}

IL_0062_1:
			{
				// if (obj is Weave) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_11 = V_2;
				V_4 = (bool)((!(((RuntimeObject*)(Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_11, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_12 = V_4;
				if (!L_12)
				{
					goto IL_009a_1;
				}
			}
			{
				// var weave = (Weave)obj;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_13 = V_2;
				V_5 = ((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)CastclassClass((RuntimeObject*)L_13, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var));
				// AddRuntimeForNestedWeave (weave);
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_14 = V_5;
				Weave_AddRuntimeForNestedWeave_m92A81F04518DC007BED67ACD094084B91BCC1F06(__this, L_14, NULL);
				// gatherPointsToResolve.AddRange (weave.gatherPointsToResolve);
				List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* L_15 = __this->___gatherPointsToResolve_9;
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_16 = V_5;
				NullCheck(L_16);
				List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* L_17 = L_16->___gatherPointsToResolve_9;
				NullCheck(L_15);
				List_1_AddRange_mF67AEA92CB96A7EB9B237EA52FC2B38AA9B16BBB(L_15, L_17, List_1_AddRange_mF67AEA92CB96A7EB9B237EA52FC2B38AA9B16BBB_RuntimeMethod_var);
				goto IL_00a9_1;
			}

IL_009a_1:
			{
				// AddGeneralRuntimeContent (obj.runtimeObject);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_18 = V_2;
				NullCheck(L_18);
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_19;
				L_19 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_18, NULL);
				Weave_AddGeneralRuntimeContent_mFCCE215692B86EC17515E4331F2B7ED81042BBC6(__this, L_19, NULL);
			}

IL_00a9_1:
			{
			}

IL_00aa_1:
			{
			}

IL_00ab_1:
			{
				// foreach(var obj in content) {
				bool L_20;
				L_20 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_1), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_00c5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c5:
	{
		// PassLooseEndsToAncestors();
		Weave_PassLooseEndsToAncestors_m839B4E4D82628F01520F428FD2012F1F87D969AC(__this, NULL);
		// return _rootContainer;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_21 = __this->____rootContainer_15;
		V_6 = L_21;
		goto IL_00d6;
	}

IL_00d6:
	{
		// }
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_22 = V_6;
		return L_22;
	}
}
// System.Void Ink.Parsed.Weave::AddRuntimeForGather(Ink.Parsed.Gather)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddRuntimeForGather_m4CE16001900F51C5A06C0AE87C5284C903B0AEEF (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* ___gather0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCA442648CC7166D2F1F4C38D743E6C1E4D9D59C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB11A36DC9CB485BE0C7EA0E338F61ED2F4907E00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5EA60EDD2142984A91D0AB523AFEF5F0038056E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_6 = NULL;
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* V_7 = NULL;
	bool V_8 = false;
	Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	RuntimeObject* V_12 = NULL;
	{
		// bool autoEnter = !hasSeenChoiceInSection;
		bool L_0 = __this->___hasSeenChoiceInSection_12;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// hasSeenChoiceInSection = false;
		__this->___hasSeenChoiceInSection_12 = (bool)0;
		// var gatherContainer = gather.runtimeContainer;
		Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* L_1 = ___gather0;
		NullCheck(L_1);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_2;
		L_2 = Gather_get_runtimeContainer_m13E079CEF8E544DF6A4B0C0B6241E5DD120FB715(L_1, NULL);
		V_1 = L_2;
		// if (gather.name == null) {
		Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* L_3 = ___gather0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Gather_get_name_m86E8FB66407D71DEAC7AD878AA2F2EBDEDD094FA(L_3, NULL);
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		// gatherContainer.name = "g-" + _unnamedGatherCount;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_6 = V_1;
		int32_t* L_7 = (&__this->____unnamedGatherCount_13);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB5EA60EDD2142984A91D0AB523AFEF5F0038056E, L_8, NULL);
		NullCheck(L_6);
		Container_set_name_m8F5A2754D5F5B724CDB73F5754F75D179253D1B1_inline(L_6, L_9, NULL);
		// _unnamedGatherCount++;
		int32_t L_10 = __this->____unnamedGatherCount_13;
		__this->____unnamedGatherCount_13 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0052:
	{
		// if (autoEnter) {
		bool L_11 = V_0;
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		// currentContainer.AddContent (gatherContainer);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_13;
		L_13 = Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2_inline(__this, NULL);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_14 = V_1;
		NullCheck(L_13);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_13, L_14, NULL);
		goto IL_0077;
	}

IL_0068:
	{
		// _rootContainer.AddToNamedContentOnly (gatherContainer);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_15 = __this->____rootContainer_15;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_16 = V_1;
		NullCheck(L_15);
		Container_AddToNamedContentOnly_mE22F23FF9DA10C2E08C20DD7DFCF0B2A3C689461(L_15, L_16, NULL);
	}

IL_0077:
	{
		// foreach (IWeavePoint looseEndWeavePoint in looseEnds) {
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_17 = __this->___looseEnds_8;
		NullCheck(L_17);
		Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 L_18;
		L_18 = List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87(L_17, List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var);
		V_4 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0145:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A((&V_4), Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0137_1;
			}

IL_008a_1:
			{
				// foreach (IWeavePoint looseEndWeavePoint in looseEnds) {
				RuntimeObject* L_19;
				L_19 = Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_inline((&V_4), Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var);
				V_5 = L_19;
				// var looseEnd = (Parsed.Object)looseEndWeavePoint;
				RuntimeObject* L_20 = V_5;
				V_6 = ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_20, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var));
				// if (looseEnd is Gather) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_21 = V_6;
				V_8 = (bool)((!(((RuntimeObject*)(Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)((Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)IsInstClass((RuntimeObject*)L_21, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_22 = V_8;
				if (!L_22)
				{
					goto IL_00d0_1;
				}
			}
			{
				// var prevGather = (Gather)looseEnd;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_23 = V_6;
				V_9 = ((Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)CastclassClass((RuntimeObject*)L_23, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var));
				// if (prevGather.indentationDepth == gather.indentationDepth) {
				Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* L_24 = V_9;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = Gather_get_indentationDepth_m40F76E3F69111BE1085CFE0B79370156045C94E4_inline(L_24, NULL);
				Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* L_26 = ___gather0;
				NullCheck(L_26);
				int32_t L_27;
				L_27 = Gather_get_indentationDepth_m40F76E3F69111BE1085CFE0B79370156045C94E4_inline(L_26, NULL);
				V_10 = (bool)((((int32_t)L_25) == ((int32_t)L_27))? 1 : 0);
				bool L_28 = V_10;
				if (!L_28)
				{
					goto IL_00cf_1;
				}
			}
			{
				// continue;
				goto IL_0137_1;
			}

IL_00cf_1:
			{
			}

IL_00d0_1:
			{
				// Runtime.Divert divert = null;
				V_7 = (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA*)NULL;
				// if (looseEnd is Parsed.Divert) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_29 = V_6;
				V_11 = (bool)((!(((RuntimeObject*)(Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186*)((Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186*)IsInstClass((RuntimeObject*)L_29, Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_30 = V_11;
				if (!L_30)
				{
					goto IL_00f5_1;
				}
			}
			{
				// divert = (Runtime.Divert) looseEnd.runtimeObject;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_31 = V_6;
				NullCheck(L_31);
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_32;
				L_32 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_31, NULL);
				V_7 = ((Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA*)CastclassClass((RuntimeObject*)L_32, Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA_il2cpp_TypeInfo_var));
				goto IL_0116_1;
			}

IL_00f5_1:
			{
				// divert = new Runtime.Divert ();
				Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_33 = (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA*)il2cpp_codegen_object_new(Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA_il2cpp_TypeInfo_var);
				NullCheck(L_33);
				Divert__ctor_m6EF2247FDA9554C19F47356ACDC569D214095A3A(L_33, NULL);
				V_7 = L_33;
				// var looseWeavePoint = looseEnd as IWeavePoint;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_34 = V_6;
				V_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_34, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var));
				// looseWeavePoint.runtimeContainer.AddContent (divert);
				RuntimeObject* L_35 = V_12;
				NullCheck(L_35);
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_36;
				L_36 = InterfaceFuncInvoker0< Container_t74302BC1028974B0A346A43F334AECB681D79579* >::Invoke(1 /* Ink.Runtime.Container Ink.Parsed.IWeavePoint::get_runtimeContainer() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_35);
				Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_37 = V_7;
				NullCheck(L_36);
				Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_36, L_37, NULL);
			}

IL_0116_1:
			{
				// gatherPointsToResolve.Add (new GatherPointToResolve{ divert = divert, targetRuntimeObj = gatherContainer });
				List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* L_38 = __this->___gatherPointsToResolve_9;
				GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* L_39 = (GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14*)il2cpp_codegen_object_new(GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14_il2cpp_TypeInfo_var);
				NullCheck(L_39);
				GatherPointToResolve__ctor_mFFE076E7B088D6AF79E86D10264A6E2387C69ED2(L_39, NULL);
				GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* L_40 = L_39;
				Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_41 = V_7;
				NullCheck(L_40);
				L_40->___divert_0 = L_41;
				Il2CppCodeGenWriteBarrier((void**)(&L_40->___divert_0), (void*)L_41);
				GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* L_42 = L_40;
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_43 = V_1;
				NullCheck(L_42);
				L_42->___targetRuntimeObj_1 = L_43;
				Il2CppCodeGenWriteBarrier((void**)(&L_42->___targetRuntimeObj_1), (void*)L_43);
				NullCheck(L_38);
				List_1_Add_mCA442648CC7166D2F1F4C38D743E6C1E4D9D59C6_inline(L_38, L_42, List_1_Add_mCA442648CC7166D2F1F4C38D743E6C1E4D9D59C6_RuntimeMethod_var);
			}

IL_0137_1:
			{
				// foreach (IWeavePoint looseEndWeavePoint in looseEnds) {
				bool L_44;
				L_44 = Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39((&V_4), Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_008a_1;
				}
			}
			{
				goto IL_0154;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0154:
	{
		// looseEnds.Clear ();
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_45 = __this->___looseEnds_8;
		NullCheck(L_45);
		List_1_Clear_mB11A36DC9CB485BE0C7EA0E338F61ED2F4907E00_inline(L_45, List_1_Clear_mB11A36DC9CB485BE0C7EA0E338F61ED2F4907E00_RuntimeMethod_var);
		// currentContainer = gatherContainer;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_46 = V_1;
		Weave_set_currentContainer_m726341F02CE4FBBF970874A494486A48190F7C23_inline(__this, L_46, NULL);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::AddRuntimeForWeavePoint(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddRuntimeForWeavePoint_m6DEEC1E96DDB0A13DBF6DB29CEAF545C28CEDB08 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___weavePoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF42442CA83AE953CBF0C9F2D7BD30697A2BCCE58);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Choice_t36174EC808231C52E43CE7768134739559499893* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Choice_t36174EC808231C52E43CE7768134739559499893* V_5 = NULL;
	bool V_6 = false;
	{
		// if (weavePoint is Gather) {
		RuntimeObject* L_0 = ___weavePoint0;
		V_0 = (bool)((!(((RuntimeObject*)(Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)((Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)IsInstClass((RuntimeObject*)L_0, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// AddRuntimeForGather ((Gather)weavePoint);
		RuntimeObject* L_2 = ___weavePoint0;
		Weave_AddRuntimeForGather_m4CE16001900F51C5A06C0AE87C5284C903B0AEEF(__this, ((Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)CastclassClass((RuntimeObject*)L_2, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var)), NULL);
		goto IL_00bb;
	}

IL_0022:
	{
		// else if (weavePoint is Choice) {
		RuntimeObject* L_3 = ___weavePoint0;
		V_1 = (bool)((!(((RuntimeObject*)(Choice_t36174EC808231C52E43CE7768134739559499893*)((Choice_t36174EC808231C52E43CE7768134739559499893*)IsInstClass((RuntimeObject*)L_3, Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00bb;
		}
	}
	{
		// if (previousWeavePoint is Gather) {
		RuntimeObject* L_5 = __this->___previousWeavePoint_10;
		V_3 = (bool)((!(((RuntimeObject*)(Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)((Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)IsInstClass((RuntimeObject*)L_5, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0059;
		}
	}
	{
		// looseEnds.Remove (previousWeavePoint);
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_7 = __this->___looseEnds_8;
		RuntimeObject* L_8 = __this->___previousWeavePoint_10;
		NullCheck(L_7);
		bool L_9;
		L_9 = List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22(L_7, L_8, List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22_RuntimeMethod_var);
	}

IL_0059:
	{
		// var choice = (Choice)weavePoint;
		RuntimeObject* L_10 = ___weavePoint0;
		V_2 = ((Choice_t36174EC808231C52E43CE7768134739559499893*)CastclassClass((RuntimeObject*)L_10, Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var));
		// currentContainer.AddContent (choice.runtimeObject);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_11;
		L_11 = Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2_inline(__this, NULL);
		Choice_t36174EC808231C52E43CE7768134739559499893* L_12 = V_2;
		NullCheck(L_12);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_13;
		L_13 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_12, NULL);
		NullCheck(L_11);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_11, L_13, NULL);
		// choice.innerContentContainer.name = "c-" + _choiceCount;
		Choice_t36174EC808231C52E43CE7768134739559499893* L_14 = V_2;
		NullCheck(L_14);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_15;
		L_15 = Choice_get_innerContentContainer_m9C30F03A0EFE2BEE3AC920D6F39B50E84127C3F3(L_14, NULL);
		int32_t* L_16 = (&__this->____choiceCount_14);
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF42442CA83AE953CBF0C9F2D7BD30697A2BCCE58, L_17, NULL);
		NullCheck(L_15);
		Container_set_name_m8F5A2754D5F5B724CDB73F5754F75D179253D1B1_inline(L_15, L_18, NULL);
		// currentContainer.AddToNamedContentOnly (choice.innerContentContainer);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_19;
		L_19 = Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2_inline(__this, NULL);
		Choice_t36174EC808231C52E43CE7768134739559499893* L_20 = V_2;
		NullCheck(L_20);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_21;
		L_21 = Choice_get_innerContentContainer_m9C30F03A0EFE2BEE3AC920D6F39B50E84127C3F3(L_20, NULL);
		NullCheck(L_19);
		Container_AddToNamedContentOnly_mE22F23FF9DA10C2E08C20DD7DFCF0B2A3C689461(L_19, L_21, NULL);
		// _choiceCount++;
		int32_t L_22 = __this->____choiceCount_14;
		__this->____choiceCount_14 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// hasSeenChoiceInSection = true;
		__this->___hasSeenChoiceInSection_12 = (bool)1;
	}

IL_00bb:
	{
		// addContentToPreviousWeavePoint = false; // default
		__this->___addContentToPreviousWeavePoint_11 = (bool)0;
		// if (WeavePointHasLooseEnd (weavePoint)) {
		RuntimeObject* L_23 = ___weavePoint0;
		bool L_24;
		L_24 = Weave_WeavePointHasLooseEnd_m86BFC84415A3BB79B512FA7B60845FE92D80C03C(__this, L_23, NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00fc;
		}
	}
	{
		// looseEnds.Add (weavePoint);
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_26 = __this->___looseEnds_8;
		RuntimeObject* L_27 = ___weavePoint0;
		NullCheck(L_26);
		List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_inline(L_26, L_27, List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_RuntimeMethod_var);
		// var looseChoice = weavePoint as Choice;
		RuntimeObject* L_28 = ___weavePoint0;
		V_5 = ((Choice_t36174EC808231C52E43CE7768134739559499893*)IsInstClass((RuntimeObject*)L_28, Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var));
		// if (looseChoice) {
		Choice_t36174EC808231C52E43CE7768134739559499893* L_29 = V_5;
		bool L_30;
		L_30 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_29, NULL);
		V_6 = L_30;
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00fb;
		}
	}
	{
		// addContentToPreviousWeavePoint = true;
		__this->___addContentToPreviousWeavePoint_11 = (bool)1;
	}

IL_00fb:
	{
	}

IL_00fc:
	{
		// previousWeavePoint = weavePoint;
		RuntimeObject* L_32 = ___weavePoint0;
		__this->___previousWeavePoint_10 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousWeavePoint_10), (void*)L_32);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::AddRuntimeForNestedWeave(Ink.Parsed.Weave)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddRuntimeForNestedWeave_m92A81F04518DC007BED67ACD094084B91BCC1F06 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* ___nestedResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// AddGeneralRuntimeContent (nestedResult.rootContainer);
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_0 = ___nestedResult0;
		NullCheck(L_0);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_1;
		L_1 = Weave_get_rootContainer_mF7051B9D57FAE9724FFA81B7760DABEE4A7330E5(L_0, NULL);
		Weave_AddGeneralRuntimeContent_mFCCE215692B86EC17515E4331F2B7ED81042BBC6(__this, L_1, NULL);
		// if (previousWeavePoint != null) {
		RuntimeObject* L_2 = __this->___previousWeavePoint_10;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// looseEnds.Remove (previousWeavePoint);
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_4 = __this->___looseEnds_8;
		RuntimeObject* L_5 = __this->___previousWeavePoint_10;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22(L_4, L_5, List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22_RuntimeMethod_var);
		// addContentToPreviousWeavePoint = false;
		__this->___addContentToPreviousWeavePoint_11 = (bool)0;
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::AddGeneralRuntimeContent(Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddGeneralRuntimeContent_mFCCE215692B86EC17515E4331F2B7ED81042BBC6 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___content0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (content == null)
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_0 = ___content0;
		bool L_1;
		L_1 = Object_op_Equality_m2AE832318622C516D0CF2C77418FD85DD162DE62(L_0, (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_003d;
	}

IL_000e:
	{
		// if (addContentToPreviousWeavePoint) {
		bool L_3 = __this->___addContentToPreviousWeavePoint_11;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// previousWeavePoint.runtimeContainer.AddContent (content);
		RuntimeObject* L_5 = __this->___previousWeavePoint_10;
		NullCheck(L_5);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_6;
		L_6 = InterfaceFuncInvoker0< Container_t74302BC1028974B0A346A43F334AECB681D79579* >::Invoke(1 /* Ink.Runtime.Container Ink.Parsed.IWeavePoint::get_runtimeContainer() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_5);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_7 = ___content0;
		NullCheck(L_6);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_6, L_7, NULL);
		goto IL_003d;
	}

IL_002e:
	{
		// currentContainer.AddContent (content);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_8;
		L_8 = Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2_inline(__this, NULL);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_9 = ___content0;
		NullCheck(L_8);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_8, L_9, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::PassLooseEndsToAncestors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_PassLooseEndsToAncestors_m839B4E4D82628F01520F428FD2012F1F87D969AC (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mDAD0B657BF66CA49FF92D46A4F1B5DE663A1932D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD7C86426165B299E1AF57E1CC3ADF4B9B0EDB97D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_0 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_4 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_18 = NULL;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B32_0 = 0;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* G_B37_0 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* G_B36_0 = NULL;
	{
		// if (looseEnds.Count == 0) return;
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_0 = __this->___looseEnds_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_inline(L_0, List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// if (looseEnds.Count == 0) return;
		goto IL_0193;
	}

IL_0018:
	{
		// Weave closestInnerWeaveAncestor = null;
		V_0 = (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)NULL;
		// Weave closestOuterWeaveAncestor = null;
		V_1 = (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)NULL;
		// bool nested = false;
		V_2 = (bool)0;
		// for (var ancestor = this.parent; ancestor != null; ancestor = ancestor.parent)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3;
		L_3 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(__this, NULL);
		V_4 = L_3;
		goto IL_0096;
	}

IL_0028:
	{
		// var weaveAncestor = ancestor as Weave;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4 = V_4;
		V_5 = ((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_4, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var));
		// if (weaveAncestor != null)
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_5 = V_5;
		bool L_6;
		L_6 = Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5(L_5, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		V_6 = L_6;
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_006e;
		}
	}
	{
		// if (!nested && closestInnerWeaveAncestor == null)
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_004d;
		}
	}
	{
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_9 = V_0;
		bool L_10;
		L_10 = Object_op_Equality_m109E112ACAA3627F5E1EF2BD8C13110F2493CB4D(L_9, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_004e;
	}

IL_004d:
	{
		G_B7_0 = 0;
	}

IL_004e:
	{
		V_7 = (bool)G_B7_0;
		bool L_11 = V_7;
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		// closestInnerWeaveAncestor = weaveAncestor;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_12 = V_5;
		V_0 = L_12;
	}

IL_0057:
	{
		// if (nested && closestOuterWeaveAncestor == null)
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_14 = V_1;
		bool L_15;
		L_15 = Object_op_Equality_m109E112ACAA3627F5E1EF2BD8C13110F2493CB4D(L_14, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		G_B12_0 = ((int32_t)(L_15));
		goto IL_0064;
	}

IL_0063:
	{
		G_B12_0 = 0;
	}

IL_0064:
	{
		V_8 = (bool)G_B12_0;
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		// closestOuterWeaveAncestor = weaveAncestor;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_17 = V_5;
		V_1 = L_17;
	}

IL_006d:
	{
	}

IL_006e:
	{
		// if (ancestor is Sequence || ancestor is Conditional)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_18 = V_4;
		if (((Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85*)IsInstClass((RuntimeObject*)L_18, Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var)))
		{
			goto IL_0083;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_19 = V_4;
		G_B18_0 = ((!(((RuntimeObject*)(Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)((Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)IsInstClass((RuntimeObject*)L_19, Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0084;
	}

IL_0083:
	{
		G_B18_0 = 1;
	}

IL_0084:
	{
		V_9 = (bool)G_B18_0;
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_008c;
		}
	}
	{
		// nested = true;
		V_2 = (bool)1;
	}

IL_008c:
	{
		// for (var ancestor = this.parent; ancestor != null; ancestor = ancestor.parent)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_21 = V_4;
		NullCheck(L_21);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_22;
		L_22 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_21, NULL);
		V_4 = L_22;
	}

IL_0096:
	{
		// for (var ancestor = this.parent; ancestor != null; ancestor = ancestor.parent)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_23 = V_4;
		bool L_24;
		L_24 = Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5(L_23, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		V_10 = L_24;
		bool L_25 = V_10;
		if (L_25)
		{
			goto IL_0028;
		}
	}
	{
		// if (closestInnerWeaveAncestor == null && closestOuterWeaveAncestor == null)
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_26 = V_0;
		bool L_27;
		L_27 = Object_op_Equality_m109E112ACAA3627F5E1EF2BD8C13110F2493CB4D(L_26, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00b6;
		}
	}
	{
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_28 = V_1;
		bool L_29;
		L_29 = Object_op_Equality_m109E112ACAA3627F5E1EF2BD8C13110F2493CB4D(L_28, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		G_B25_0 = ((int32_t)(L_29));
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B25_0 = 0;
	}

IL_00b7:
	{
		V_11 = (bool)G_B25_0;
		bool L_30 = V_11;
		if (!L_30)
		{
			goto IL_00c2;
		}
	}
	{
		// return;
		goto IL_0193;
	}

IL_00c2:
	{
		// for (int i = looseEnds.Count - 1; i >= 0; i--) {
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_31 = __this->___looseEnds_8;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_inline(L_31, List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		goto IL_0182;
	}

IL_00d6:
	{
		// var looseEnd = looseEnds[i];
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_33 = __this->___looseEnds_8;
		int32_t L_34 = V_12;
		NullCheck(L_33);
		RuntimeObject* L_35;
		L_35 = List_1_get_Item_mD7C86426165B299E1AF57E1CC3ADF4B9B0EDB97D(L_33, L_34, List_1_get_Item_mD7C86426165B299E1AF57E1CC3ADF4B9B0EDB97D_RuntimeMethod_var);
		V_13 = L_35;
		// bool received = false;
		V_14 = (bool)0;
		// if(nested) {
		bool L_36 = V_2;
		V_15 = L_36;
		bool L_37 = V_15;
		if (!L_37)
		{
			goto IL_0157;
		}
	}
	{
		// if( looseEnd is Choice && closestInnerWeaveAncestor != null) {
		RuntimeObject* L_38 = V_13;
		if (!((Choice_t36174EC808231C52E43CE7768134739559499893*)IsInstClass((RuntimeObject*)L_38, Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var)))
		{
			goto IL_0103;
		}
	}
	{
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_39 = V_0;
		bool L_40;
		L_40 = Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5(L_39, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		G_B32_0 = ((int32_t)(L_40));
		goto IL_0104;
	}

IL_0103:
	{
		G_B32_0 = 0;
	}

IL_0104:
	{
		V_16 = (bool)G_B32_0;
		bool L_41 = V_16;
		if (!L_41)
		{
			goto IL_011a;
		}
	}
	{
		// closestInnerWeaveAncestor.ReceiveLooseEnd(looseEnd);
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_42 = V_0;
		RuntimeObject* L_43 = V_13;
		NullCheck(L_42);
		Weave_ReceiveLooseEnd_mCAAB5B4208181C3DFFA3FBC9CD8E7D11F23A3256(L_42, L_43, NULL);
		// received = true;
		V_14 = (bool)1;
		goto IL_0154;
	}

IL_011a:
	{
		// else if( !(looseEnd is Choice) ) {
		RuntimeObject* L_44 = V_13;
		V_17 = (bool)((((int32_t)((!(((RuntimeObject*)(Choice_t36174EC808231C52E43CE7768134739559499893*)((Choice_t36174EC808231C52E43CE7768134739559499893*)IsInstClass((RuntimeObject*)L_44, Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_17;
		if (!L_45)
		{
			goto IL_0154;
		}
	}
	{
		// var receivingWeave = closestInnerWeaveAncestor ?? closestOuterWeaveAncestor;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_46 = V_0;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_47 = L_46;
		G_B36_0 = L_47;
		if (L_47)
		{
			G_B37_0 = L_47;
			goto IL_0134;
		}
	}
	{
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_48 = V_1;
		G_B37_0 = L_48;
	}

IL_0134:
	{
		V_18 = G_B37_0;
		// if(receivingWeave != null) {
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_49 = V_18;
		bool L_50;
		L_50 = Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5(L_49, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		V_19 = L_50;
		bool L_51 = V_19;
		if (!L_51)
		{
			goto IL_0153;
		}
	}
	{
		// receivingWeave.ReceiveLooseEnd(looseEnd);
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_52 = V_18;
		RuntimeObject* L_53 = V_13;
		NullCheck(L_52);
		Weave_ReceiveLooseEnd_mCAAB5B4208181C3DFFA3FBC9CD8E7D11F23A3256(L_52, L_53, NULL);
		// received = true;
		V_14 = (bool)1;
	}

IL_0153:
	{
	}

IL_0154:
	{
		goto IL_0165;
	}

IL_0157:
	{
		// closestInnerWeaveAncestor.ReceiveLooseEnd(looseEnd);
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_54 = V_0;
		RuntimeObject* L_55 = V_13;
		NullCheck(L_54);
		Weave_ReceiveLooseEnd_mCAAB5B4208181C3DFFA3FBC9CD8E7D11F23A3256(L_54, L_55, NULL);
		// received = true;
		V_14 = (bool)1;
	}

IL_0165:
	{
		// if(received) looseEnds.RemoveAt(i);
		bool L_56 = V_14;
		V_20 = L_56;
		bool L_57 = V_20;
		if (!L_57)
		{
			goto IL_017b;
		}
	}
	{
		// if(received) looseEnds.RemoveAt(i);
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_58 = __this->___looseEnds_8;
		int32_t L_59 = V_12;
		NullCheck(L_58);
		List_1_RemoveAt_mDAD0B657BF66CA49FF92D46A4F1B5DE663A1932D(L_58, L_59, List_1_RemoveAt_mDAD0B657BF66CA49FF92D46A4F1B5DE663A1932D_RuntimeMethod_var);
	}

IL_017b:
	{
		// for (int i = looseEnds.Count - 1; i >= 0; i--) {
		int32_t L_60 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
	}

IL_0182:
	{
		// for (int i = looseEnds.Count - 1; i >= 0; i--) {
		int32_t L_61 = V_12;
		V_21 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_21;
		if (L_62)
		{
			goto IL_00d6;
		}
	}

IL_0193:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::ReceiveLooseEnd(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ReceiveLooseEnd_mCAAB5B4208181C3DFFA3FBC9CD8E7D11F23A3256 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___childWeaveLooseEnd0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// looseEnds.Add(childWeaveLooseEnd);
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_0 = __this->___looseEnds_8;
		RuntimeObject* L_1 = ___childWeaveLooseEnd0;
		NullCheck(L_0);
		List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_inline(L_0, L_1, List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::ResolveReferences(Ink.Parsed.Story)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ResolveReferences_mD1EAFE177313051E7B2EC4046ED890CFDC120D41 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE863A998546EAD25CFF5AA7DB1FD2BDA33CFFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA226D5AC035B8AA46A1A5B0AD87D66B4747F85C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAE2D0F63AC021CDF331A873DB4D4D07C212C86FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAEED457850E75DD1B9ABC47B1937E3ECF5056AE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_BadNestedTerminationHandler_m4531FCF23C4DAE2724AC2E1483B94C4FB23F97E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453 V_6;
	memset((&V_6), 0, sizeof(V_6));
	GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* V_7 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// base.ResolveReferences (context);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_0 = ___context0;
		Object_ResolveReferences_m8BC5DD701019191459A9CEF84D71FFBE2FEDFF8E(__this, L_0, NULL);
		// if( looseEnds != null && looseEnds.Count > 0 ) {
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_1 = __this->___looseEnds_8;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_2 = __this->___looseEnds_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_inline(L_2, List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0082;
		}
	}
	{
		// var isNestedWeave = false;
		V_1 = (bool)0;
		// for (var ancestor = this.parent; ancestor != null; ancestor = ancestor.parent)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5;
		L_5 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(__this, NULL);
		V_2 = L_5;
		goto IL_0058;
	}

IL_0032:
	{
		// if (ancestor is Sequence || ancestor is Conditional)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6 = V_2;
		if (((Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85*)IsInstClass((RuntimeObject*)L_6, Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var)))
		{
			goto IL_0046;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7 = V_2;
		G_B8_0 = ((!(((RuntimeObject*)(Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)((Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)IsInstClass((RuntimeObject*)L_7, Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0047;
	}

IL_0046:
	{
		G_B8_0 = 1;
	}

IL_0047:
	{
		V_3 = (bool)G_B8_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		// isNestedWeave = true;
		V_1 = (bool)1;
		// break;
		goto IL_0065;
	}

IL_0050:
	{
		// for (var ancestor = this.parent; ancestor != null; ancestor = ancestor.parent)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_9 = V_2;
		NullCheck(L_9);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_10;
		L_10 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_9, NULL);
		V_2 = L_10;
	}

IL_0058:
	{
		// for (var ancestor = this.parent; ancestor != null; ancestor = ancestor.parent)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_11 = V_2;
		bool L_12;
		L_12 = Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5(L_11, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0032;
		}
	}

IL_0065:
	{
		// if (isNestedWeave)
		bool L_14 = V_1;
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		// ValidateTermination(BadNestedTerminationHandler);
		BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* L_16 = (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC*)il2cpp_codegen_object_new(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		BadTerminationHandler__ctor_mAD3499682FC2CD65E716A6714C8EBD32F3C0C1D1(L_16, __this, (intptr_t)((void*)Weave_BadNestedTerminationHandler_m4531FCF23C4DAE2724AC2E1483B94C4FB23F97E7_RuntimeMethod_var), NULL);
		Weave_ValidateTermination_mC042A95722BFF6A02755640F589BA1487AE94849(__this, L_16, NULL);
	}

IL_0081:
	{
	}

IL_0082:
	{
		// foreach(var gatherPoint in gatherPointsToResolve) {
		List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* L_17 = __this->___gatherPointsToResolve_9;
		NullCheck(L_17);
		Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453 L_18;
		L_18 = List_1_GetEnumerator_mAEED457850E75DD1B9ABC47B1937E3ECF5056AE0(L_17, List_1_GetEnumerator_mAEED457850E75DD1B9ABC47B1937E3ECF5056AE0_RuntimeMethod_var);
		V_6 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCE863A998546EAD25CFF5AA7DB1FD2BDA33CFFB5((&V_6), Enumerator_Dispose_mCE863A998546EAD25CFF5AA7DB1FD2BDA33CFFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b6_1;
			}

IL_0092_1:
			{
				// foreach(var gatherPoint in gatherPointsToResolve) {
				GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* L_19;
				L_19 = Enumerator_get_Current_mAE2D0F63AC021CDF331A873DB4D4D07C212C86FC_inline((&V_6), Enumerator_get_Current_mAE2D0F63AC021CDF331A873DB4D4D07C212C86FC_RuntimeMethod_var);
				V_7 = L_19;
				// gatherPoint.divert.targetPath = gatherPoint.targetRuntimeObj.path;
				GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* L_20 = V_7;
				NullCheck(L_20);
				Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_21 = L_20->___divert_0;
				GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* L_22 = V_7;
				NullCheck(L_22);
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_23 = L_22->___targetRuntimeObj_1;
				NullCheck(L_23);
				Path_tCC1F1626DB60711735401EA8FA76A191D9014600* L_24;
				L_24 = Object_get_path_m08402839773DCFE39E1D2C20D91F21D2A294A765(L_23, NULL);
				NullCheck(L_21);
				Divert_set_targetPath_m3BA5FF19D878E1BFB3A1D9D5C952FD41110E0213(L_21, L_24, NULL);
			}

IL_00b6_1:
			{
				// foreach(var gatherPoint in gatherPointsToResolve) {
				bool L_25;
				L_25 = Enumerator_MoveNext_mA226D5AC035B8AA46A1A5B0AD87D66B4747F85C6((&V_6), Enumerator_MoveNext_mA226D5AC035B8AA46A1A5B0AD87D66B4747F85C6_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_0092_1;
				}
			}
			{
				goto IL_00d0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d0:
	{
		// CheckForWeavePointNamingCollisions ();
		Weave_CheckForWeavePointNamingCollisions_m3E4BA051D8AD9D9B38568439E424B6C562FA61CE(__this, NULL);
		// }
		return;
	}
}
// Ink.Parsed.IWeavePoint Ink.Parsed.Weave::WeavePointNamed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Weave_WeavePointNamed_mB6BBB582A93BE2C68059F5642F3CCCA6446648F0 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		// if (_namedWeavePoints == null)
		Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_0 = __this->____namedWeavePoints_16;
		V_1 = (bool)((((RuntimeObject*)(Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return null;
		V_2 = (RuntimeObject*)NULL;
		goto IL_002e;
	}

IL_0012:
	{
		// IWeavePoint weavePointResult = null;
		V_0 = (RuntimeObject*)NULL;
		// if (_namedWeavePoints.TryGetValue (name, out weavePointResult))
		Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_2 = __this->____namedWeavePoints_16;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826_RuntimeMethod_var);
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// return weavePointResult;
		RuntimeObject* L_6 = V_0;
		V_2 = L_6;
		goto IL_002e;
	}

IL_002a:
	{
		// return null;
		V_2 = (RuntimeObject*)NULL;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		RuntimeObject* L_7 = V_2;
		return L_7;
	}
}
// System.Boolean Ink.Parsed.Weave::IsGlobalDeclaration(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weave_IsGlobalDeclaration_m2F27AA5E1B93C4B938128743ECD736C5C69F43A3 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* V_0 = NULL;
	ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		// var varAss = obj as VariableAssignment;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = ___obj0;
		V_0 = ((VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82*)IsInstClass((RuntimeObject*)L_0, VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82_il2cpp_TypeInfo_var));
		// if (varAss && varAss.isGlobalDeclaration && varAss.isDeclaration)
		VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_1 = V_0;
		bool L_2;
		L_2 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_1, NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = VariableAssignment_get_isDeclaration_m303120F48FE6770B5B59269240F63F40631554C5(L_5, NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 0;
	}

IL_0021:
	{
		V_2 = (bool)G_B4_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0044;
	}

IL_0029:
	{
		// var constDecl = obj as ConstantDeclaration;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_8 = ___obj0;
		V_1 = ((ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA*)IsInstClass((RuntimeObject*)L_8, ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA_il2cpp_TypeInfo_var));
		// if (constDecl)
		ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* L_9 = V_1;
		bool L_10;
		L_10 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_9, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0040;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0044;
	}

IL_0040:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		bool L_12 = V_3;
		return L_12;
	}
}
// System.Collections.Generic.IEnumerable`1<Ink.Parsed.Object> Ink.Parsed.Weave::ContentThatFollowsWeavePoint(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Weave_ContentThatFollowsWeavePoint_m2CB425112D0A7BA7FC3E83215F095C70A98B9273 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___weavePoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_0 = (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C*)il2cpp_codegen_object_new(U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CContentThatFollowsWeavePointU3Ed__29__ctor_mE1960E7B1C2FB83975604BBA11B328B6279E88F5(L_0, ((int32_t)-2), NULL);
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_2 = L_1;
		RuntimeObject* L_3 = ___weavePoint0;
		NullCheck(L_2);
		L_2->___U3CU3E3__weavePoint_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___U3CU3E3__weavePoint_4), (void*)L_3);
		return L_2;
	}
}
// System.Void Ink.Parsed.Weave::ValidateTermination(Ink.Parsed.Weave/BadTerminationHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ValidateTermination_mC042A95722BFF6A02755640F589BA1487AE94849 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* ___badTerminationHandler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_6;
	memset((&V_6), 0, sizeof(V_6));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_7 = NULL;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		// if (lastParsedSignificantObject is AuthorWarning) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0;
		L_0 = Weave_get_lastParsedSignificantObject_m1B04EDF689CE2860594576D416B2EBC60C55423B(__this, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE*)((AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE*)IsInstClass((RuntimeObject*)L_0, AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_00e3;
	}

IL_0019:
	{
		// bool hasLooseEnds = looseEnds != null && looseEnds.Count > 0;
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_2 = __this->___looseEnds_8;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_3 = __this->___looseEnds_8;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_inline(L_3, List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = 0;
	}

IL_0032:
	{
		V_0 = (bool)G_B5_0;
		// if (hasLooseEnds) {
		bool L_5 = V_0;
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_008b;
		}
	}
	{
		// foreach (var looseEnd in looseEnds) {
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_7 = __this->___looseEnds_8;
		NullCheck(L_7);
		Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 L_8;
		L_8 = List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87(L_7, List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var);
		V_3 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A((&V_3), Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006e_1;
			}

IL_0048_1:
			{
				// foreach (var looseEnd in looseEnds) {
				RuntimeObject* L_9;
				L_9 = Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_inline((&V_3), Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var);
				V_4 = L_9;
				// var looseEndFlow = ContentThatFollowsWeavePoint (looseEnd);
				RuntimeObject* L_10 = V_4;
				RuntimeObject* L_11;
				L_11 = Weave_ContentThatFollowsWeavePoint_m2CB425112D0A7BA7FC3E83215F095C70A98B9273(__this, L_10, NULL);
				V_5 = L_11;
				// ValidateFlowOfObjectsTerminates (looseEndFlow, (Parsed.Object)looseEnd, badTerminationHandler);
				RuntimeObject* L_12 = V_5;
				RuntimeObject* L_13 = V_4;
				BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* L_14 = ___badTerminationHandler0;
				Weave_ValidateFlowOfObjectsTerminates_m7239B14D782F7304DD3D0726A3A8BDB972101757(__this, L_12, ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_13, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var)), L_14, NULL);
			}

IL_006e_1:
			{
				// foreach (var looseEnd in looseEnds) {
				bool L_15;
				L_15 = Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39((&V_3), Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0048_1;
				}
			}
			{
				goto IL_0088;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		goto IL_00e3;
	}

IL_008b:
	{
		// foreach (var obj in content) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_16;
		L_16 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		NullCheck(L_16);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_17;
		L_17 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_16, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_6), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b9_1;
			}

IL_009c_1:
			{
				// foreach (var obj in content) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_18;
				L_18 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_6), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				V_7 = L_18;
				// if (obj is IWeavePoint) return;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_19 = V_7;
				V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_20 = V_8;
				if (!L_20)
				{
					goto IL_00b8_1;
				}
			}
			{
				// if (obj is IWeavePoint) return;
				goto IL_00e3;
			}

IL_00b8_1:
			{
			}

IL_00b9_1:
			{
				// foreach (var obj in content) {
				bool L_21;
				L_21 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_6), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_009c_1;
				}
			}
			{
				goto IL_00d3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d3:
	{
		// ValidateFlowOfObjectsTerminates (content, this, badTerminationHandler);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_22;
		L_22 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* L_23 = ___badTerminationHandler0;
		Weave_ValidateFlowOfObjectsTerminates_m7239B14D782F7304DD3D0726A3A8BDB972101757(__this, L_22, __this, L_23, NULL);
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::BadNestedTerminationHandler(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_BadNestedTerminationHandler_m4531FCF23C4DAE2724AC2E1483B94C4FB23F97E7 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3729CD7808E34BFD9068F3A791D9D00B90282588_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindAll_TisChoice_t36174EC808231C52E43CE7768134739559499893_mFB83BCB5BDDDC5DF66331F766264D20DA55A29FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21F29DAD0A8FD7E88D981478E32D509D5426BBC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E01FFA5E6CD3B876C514BED83BB94FB75433EB);
		s_Il2CppMethodInitialized = true;
	}
	Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE* V_0 = NULL;
	String_t* V_1 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t G_B4_0 = 0;
	{
		// Conditional conditional = null;
		V_0 = (Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)NULL;
		// for (var ancestor = terminatingObj.parent; ancestor != null; ancestor = ancestor.parent) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = ___terminatingObj0;
		NullCheck(L_0);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_1;
		L_1 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_0, NULL);
		V_2 = L_1;
		goto IL_0037;
	}

IL_000c:
	{
		// if( ancestor is Sequence || ancestor is Conditional ) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_2 = V_2;
		if (((Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85*)IsInstClass((RuntimeObject*)L_2, Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var)))
		{
			goto IL_0020;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3 = V_2;
		G_B4_0 = ((!(((RuntimeObject*)(Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)((Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)IsInstClass((RuntimeObject*)L_3, Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 1;
	}

IL_0021:
	{
		V_3 = (bool)G_B4_0;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// conditional = ancestor as Conditional;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5 = V_2;
		V_0 = ((Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)IsInstClass((RuntimeObject*)L_5, Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var));
		// break;
		goto IL_0044;
	}

IL_002f:
	{
		// for (var ancestor = terminatingObj.parent; ancestor != null; ancestor = ancestor.parent) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6 = V_2;
		NullCheck(L_6);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7;
		L_7 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_6, NULL);
		V_2 = L_7;
	}

IL_0037:
	{
		// for (var ancestor = terminatingObj.parent; ancestor != null; ancestor = ancestor.parent) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_8 = V_2;
		bool L_9;
		L_9 = Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5(L_8, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		V_4 = L_9;
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_000c;
		}
	}

IL_0044:
	{
		// var errorMsg = "Choices nested in conditionals or sequences need to explicitly divert afterwards.";
		V_1 = _stringLiteral21F29DAD0A8FD7E88D981478E32D509D5426BBC7;
		// if (conditional != null) {
		Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE* L_11 = V_0;
		bool L_12;
		L_12 = Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5(L_11, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		V_5 = L_12;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0085;
		}
	}
	{
		// var numChoices = conditional.FindAll<Choice>().Count;
		Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE* L_14 = V_0;
		NullCheck(L_14);
		List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C* L_15;
		L_15 = Object_FindAll_TisChoice_t36174EC808231C52E43CE7768134739559499893_mFB83BCB5BDDDC5DF66331F766264D20DA55A29FF(L_14, (FindQueryFunc_1_t336B67E9DF3943E1288CC482ACB0BBF4A96D7199*)NULL, Object_FindAll_TisChoice_t36174EC808231C52E43CE7768134739559499893_mFB83BCB5BDDDC5DF66331F766264D20DA55A29FF_RuntimeMethod_var);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m3729CD7808E34BFD9068F3A791D9D00B90282588_inline(L_15, List_1_get_Count_m3729CD7808E34BFD9068F3A791D9D00B90282588_RuntimeMethod_var);
		V_6 = L_16;
		// if( numChoices == 1 ) {
		int32_t L_17 = V_6;
		V_7 = (bool)((((int32_t)L_17) == ((int32_t)1))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0084;
		}
	}
	{
		// errorMsg = "Choices with conditions should be written: '* {condition} choice'. Otherwise, "+ errorMsg.ToLower();
		String_t* L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral91E01FFA5E6CD3B876C514BED83BB94FB75433EB, L_20, NULL);
		V_1 = L_21;
	}

IL_0084:
	{
	}

IL_0085:
	{
		// Error(errorMsg, terminatingObj);
		String_t* L_22 = V_1;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_23 = ___terminatingObj0;
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_22, L_23, (bool)0);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::ValidateFlowOfObjectsTerminates(System.Collections.Generic.IEnumerable`1<Ink.Parsed.Object>,Ink.Parsed.Object,Ink.Parsed.Weave/BadTerminationHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ValidateFlowOfObjectsTerminates_m7239B14D782F7304DD3D0726A3A8BDB972101757 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___objFlow0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___defaultObj1, BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* ___badTerminationHandler2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tEF23BA501451A845C4C1EB07ED0A90E7C765A30B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0D3F6B72AD03CC8C65B4782F8C2DA9E2EFAEBCD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Find_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_m745B0DEECFF6B651C7BC919A569845794345ED5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Find_TisTunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450_mBD53B00353D1047ED928ED4004D14DCAE7E8D31C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CValidateFlowOfObjectsTerminatesU3Eb__33_0_mA29EFEC2C9F28D2F9138006B50AA65EB411F911E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_3 = NULL;
	Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* G_B4_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B4_1 = NULL;
	FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* G_B3_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B3_1 = NULL;
	{
		// bool terminated = false;
		V_0 = (bool)0;
		// Parsed.Object terminatingObj = defaultObj;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = ___defaultObj1;
		V_1 = L_0;
		// foreach (var flowObj in objFlow) {
		RuntimeObject* L_1 = ___objFlow0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Ink.Parsed.Object>::GetEnumerator() */, IEnumerable_1_tEF23BA501451A845C4C1EB07ED0A90E7C765A30B_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_007f;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_007f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006b_1;
			}

IL_000f_1:
			{
				// foreach (var flowObj in objFlow) {
				RuntimeObject* L_5 = V_2;
				NullCheck(L_5);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6;
				L_6 = InterfaceFuncInvoker0< Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Ink.Parsed.Object>::get_Current() */, IEnumerator_1_t0D3F6B72AD03CC8C65B4782F8C2DA9E2EFAEBCD7_il2cpp_TypeInfo_var, L_5);
				V_3 = L_6;
				// var divert = flowObj.Find<Divert> (d => !d.isThread && !d.isTunnel && !d.isFunctionCall && !(d.parent is DivertTarget));
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7 = V_3;
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
				FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* L_8 = ((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_2;
				FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* L_9 = L_8;
				G_B3_0 = L_9;
				G_B3_1 = L_7;
				if (L_9)
				{
					G_B4_0 = L_9;
					G_B4_1 = L_7;
					goto IL_0037_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
				U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* L_10 = ((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* L_11 = (FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911*)il2cpp_codegen_object_new(FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				FindQueryFunc_1__ctor_m010478D5BA71A33518AA87D7DADB929919D9048F(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CValidateFlowOfObjectsTerminatesU3Eb__33_0_mA29EFEC2C9F28D2F9138006B50AA65EB411F911E_RuntimeMethod_var), NULL);
				FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* L_12 = L_11;
				((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_2 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_2), (void*)L_12);
				G_B4_0 = L_12;
				G_B4_1 = G_B3_1;
			}

IL_0037_1:
			{
				NullCheck(G_B4_1);
				Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_13;
				L_13 = Object_Find_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_m745B0DEECFF6B651C7BC919A569845794345ED5B(G_B4_1, G_B4_0, Object_Find_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_m745B0DEECFF6B651C7BC919A569845794345ED5B_RuntimeMethod_var);
				V_4 = L_13;
				// if (divert != null) {
				Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_14 = V_4;
				bool L_15;
				L_15 = Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5(L_14, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
				V_5 = L_15;
				bool L_16 = V_5;
				if (!L_16)
				{
					goto IL_0050_1;
				}
			}
			{
				// terminated = true;
				V_0 = (bool)1;
			}

IL_0050_1:
			{
				// if (flowObj.Find<TunnelOnwards> () != null) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_17 = V_3;
				NullCheck(L_17);
				TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* L_18;
				L_18 = Object_Find_TisTunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450_mBD53B00353D1047ED928ED4004D14DCAE7E8D31C(L_17, (FindQueryFunc_1_tD49158339C9E80306F093B9B3FFDC0266098B984*)NULL, Object_Find_TisTunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450_mBD53B00353D1047ED928ED4004D14DCAE7E8D31C_RuntimeMethod_var);
				bool L_19;
				L_19 = Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5(L_18, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
				V_6 = L_19;
				bool L_20 = V_6;
				if (!L_20)
				{
					goto IL_0068_1;
				}
			}
			{
				// terminated = true;
				V_0 = (bool)1;
				// break;
				goto IL_0073_1;
			}

IL_0068_1:
			{
				// terminatingObj = flowObj;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_21 = V_3;
				V_1 = L_21;
			}

IL_006b_1:
			{
				// foreach (var flowObj in objFlow) {
				RuntimeObject* L_22 = V_2;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_000f_1;
				}
			}

IL_0073_1:
			{
				goto IL_0080;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0080:
	{
		// if (!terminated) {
		bool L_24 = V_0;
		V_7 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00a6;
		}
	}
	{
		// if (terminatingObj is AuthorWarning) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_26 = V_1;
		V_8 = (bool)((!(((RuntimeObject*)(AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE*)((AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE*)IsInstClass((RuntimeObject*)L_26, AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_009d;
		}
	}
	{
		// return;
		goto IL_00a6;
	}

IL_009d:
	{
		// badTerminationHandler (terminatingObj);
		BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* L_28 = ___badTerminationHandler2;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_29 = V_1;
		NullCheck(L_28);
		BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_inline(L_28, L_29, NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Boolean Ink.Parsed.Weave::WeavePointHasLooseEnd(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weave_WeavePointHasLooseEnd_m86BFC84415A3BB79B512FA7B60845FE92D80C03C (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___weavePoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B8_0 = 0;
	{
		// if (weavePoint.content == null) return true;
		RuntimeObject* L_0 = ___weavePoint0;
		NullCheck(L_0);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* >::Invoke(2 /* System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.IWeavePoint::get_content() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((((RuntimeObject*)(List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (weavePoint.content == null) return true;
		V_1 = (bool)1;
		goto IL_0083;
	}

IL_0012:
	{
		// for (int i = weavePoint.content.Count - 1; i >= 0; --i) {
		RuntimeObject* L_3 = ___weavePoint0;
		NullCheck(L_3);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_4;
		L_4 = InterfaceFuncInvoker0< List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* >::Invoke(2 /* System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.IWeavePoint::get_content() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_4, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0072;
	}

IL_0022:
	{
		// var innerDivert = weavePoint.content [i] as Divert;
		RuntimeObject* L_6 = ___weavePoint0;
		NullCheck(L_6);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_7;
		L_7 = InterfaceFuncInvoker0< List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* >::Invoke(2 /* System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.IWeavePoint::get_content() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_6);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_9;
		L_9 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_7, L_8, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		V_3 = ((Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186*)IsInstClass((RuntimeObject*)L_9, Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_il2cpp_TypeInfo_var));
		// if (innerDivert) {
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_10 = V_3;
		bool L_11;
		L_11 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_10, NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		// bool willReturn = innerDivert.isThread || innerDivert.isTunnel || innerDivert.isFunctionCall;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_13 = V_3;
		NullCheck(L_13);
		bool L_14;
		L_14 = Divert_get_isThread_m5AF57D150FA6189A096F00149ED4BB4ADC1D3F73_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_005a;
		}
	}
	{
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_15 = V_3;
		NullCheck(L_15);
		bool L_16;
		L_16 = Divert_get_isTunnel_m5F0B18A5D8A9CF7F751CCAE63840442D64E78EF0_inline(L_15, NULL);
		if (L_16)
		{
			goto IL_005a;
		}
	}
	{
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_17 = V_3;
		NullCheck(L_17);
		bool L_18;
		L_18 = Divert_get_isFunctionCall_m795B07F1FA11C85E330D67D0C5E93157BEC3BB13_inline(L_17, NULL);
		G_B8_0 = ((int32_t)(L_18));
		goto IL_005b;
	}

IL_005a:
	{
		G_B8_0 = 1;
	}

IL_005b:
	{
		V_5 = (bool)G_B8_0;
		// if (!willReturn) return false;
		bool L_19 = V_5;
		V_6 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_006c;
		}
	}
	{
		// if (!willReturn) return false;
		V_1 = (bool)0;
		goto IL_0083;
	}

IL_006c:
	{
	}

IL_006d:
	{
		// for (int i = weavePoint.content.Count - 1; i >= 0; --i) {
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0072:
	{
		// for (int i = weavePoint.content.Count - 1; i >= 0; --i) {
		int32_t L_22 = V_2;
		V_7 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_7;
		if (L_23)
		{
			goto IL_0022;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		bool L_24 = V_1;
		return L_24;
	}
}
// System.Void Ink.Parsed.Weave::CheckForWeavePointNamingCollisions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_CheckForWeavePointNamingCollisions_m3E4BA051D8AD9D9B38568439E424B6C562FA61CE (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m58606EF7E646E6EC6F77966DDCC3DFEE5425C416_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3D695EEE7F8DBADB4E29925482335EFD8D5FF76C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7BF2E33709CCA1C3182CB0B0823B5CC036376CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0E266551F3F19E392882EA2ADC18A12F7F76FE4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3E6779FD1F45D3506C88709EDFA61A7FBABF497A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1FB39938CFD6138E1234BE2B1290025DF3D47AD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m987ADC83E21F27DE3A5E98DA01634843FCA83551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mD222AD5CAEECD12BE8311BAC449090BBC57EF1DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7919590FC8730088240AC8626E9A64EA1F12CC6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB0447A1912B57CEC4309668380290C854E249335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55CFC3484E2E301297CB8C75443E10F75CBF9517);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* V_0 = NULL;
	bool V_1 = false;
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_3 = NULL;
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* V_4 = NULL;
	bool V_5 = false;
	Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1 V_6;
	memset((&V_6), 0, sizeof(V_6));
	KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349 V_7;
	memset((&V_7), 0, sizeof(V_7));
	String_t* V_8 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_9 = NULL;
	Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA V_10;
	memset((&V_10), 0, sizeof(V_10));
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* V_11 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_12 = NULL;
	Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	String_t* V_15 = NULL;
	int32_t G_B18_0 = 0;
	{
		// if (_namedWeavePoints == null)
		Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_0 = __this->____namedWeavePoints_16;
		V_1 = (bool)((((RuntimeObject*)(Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0174;
	}

IL_0013:
	{
		// var ancestorFlows = new List<FlowBase> ();
		List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* L_2 = (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB*)il2cpp_codegen_object_new(List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889(L_2, List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (var obj in this.ancestry) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_3;
		L_3 = Object_get_ancestry_m8C64142AFC7746A69D598AE036ADB55C1CC560D4(__this, NULL);
		NullCheck(L_3);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_4;
		L_4 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_3, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_2), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0054_1;
			}

IL_0028_1:
			{
				// foreach (var obj in this.ancestry) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5;
				L_5 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_2), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				V_3 = L_5;
				// var flow = obj as FlowBase;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6 = V_3;
				V_4 = ((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)IsInstClass((RuntimeObject*)L_6, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var));
				// if (flow)
				FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_7 = V_4;
				bool L_8;
				L_8 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_7, NULL);
				V_5 = L_8;
				bool L_9 = V_5;
				if (!L_9)
				{
					goto IL_0051_1;
				}
			}
			{
				// ancestorFlows.Add (flow);
				List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* L_10 = V_0;
				FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_11 = V_4;
				NullCheck(L_10);
				List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_inline(L_10, L_11, List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_RuntimeMethod_var);
				goto IL_0053_1;
			}

IL_0051_1:
			{
				// break;
				goto IL_005d_1;
			}

IL_0053_1:
			{
			}

IL_0054_1:
			{
				// foreach (var obj in this.ancestry) {
				bool L_12;
				L_12 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_2), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0028_1;
				}
			}

IL_005d_1:
			{
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// foreach (var namedWeavePointPair in _namedWeavePoints) {
		Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_13 = __this->____namedWeavePoints_16;
		NullCheck(L_13);
		Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1 L_14;
		L_14 = Dictionary_2_GetEnumerator_m58606EF7E646E6EC6F77966DDCC3DFEE5425C416(L_13, Dictionary_2_GetEnumerator_m58606EF7E646E6EC6F77966DDCC3DFEE5425C416_RuntimeMethod_var);
		V_6 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0165:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3D695EEE7F8DBADB4E29925482335EFD8D5FF76C((&V_6), Enumerator_Dispose_m3D695EEE7F8DBADB4E29925482335EFD8D5FF76C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0157_1;
			}

IL_0081_1:
			{
				// foreach (var namedWeavePointPair in _namedWeavePoints) {
				KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349 L_15;
				L_15 = Enumerator_get_Current_m987ADC83E21F27DE3A5E98DA01634843FCA83551_inline((&V_6), Enumerator_get_Current_m987ADC83E21F27DE3A5E98DA01634843FCA83551_RuntimeMethod_var);
				V_7 = L_15;
				// var weavePointName = namedWeavePointPair.Key;
				String_t* L_16;
				L_16 = KeyValuePair_2_get_Key_mD222AD5CAEECD12BE8311BAC449090BBC57EF1DA_inline((&V_7), KeyValuePair_2_get_Key_mD222AD5CAEECD12BE8311BAC449090BBC57EF1DA_RuntimeMethod_var);
				V_8 = L_16;
				// var weavePoint = (Parsed.Object) namedWeavePointPair.Value;
				RuntimeObject* L_17;
				L_17 = KeyValuePair_2_get_Value_m7919590FC8730088240AC8626E9A64EA1F12CC6B_inline((&V_7), KeyValuePair_2_get_Value_m7919590FC8730088240AC8626E9A64EA1F12CC6B_RuntimeMethod_var);
				V_9 = ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_17, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var));
				// foreach(var flow in ancestorFlows) {
				List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* L_18 = V_0;
				NullCheck(L_18);
				Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA L_19;
				L_19 = List_1_GetEnumerator_mB0447A1912B57CEC4309668380290C854E249335(L_18, List_1_GetEnumerator_mB0447A1912B57CEC4309668380290C854E249335_RuntimeMethod_var);
				V_10 = L_19;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0147_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m7BF2E33709CCA1C3182CB0B0823B5CC036376CD6((&V_10), Enumerator_Dispose_m7BF2E33709CCA1C3182CB0B0823B5CC036376CD6_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0139_2;
					}

IL_00b0_2:
					{
						// foreach(var flow in ancestorFlows) {
						FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_20;
						L_20 = Enumerator_get_Current_m1FB39938CFD6138E1234BE2B1290025DF3D47AD5_inline((&V_10), Enumerator_get_Current_m1FB39938CFD6138E1234BE2B1290025DF3D47AD5_RuntimeMethod_var);
						V_11 = L_20;
						// var otherContentWithName = flow.ContentWithNameAtLevel (weavePointName);
						FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_21 = V_11;
						String_t* L_22 = V_8;
						il2cpp_codegen_initobj((&V_13), sizeof(Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC));
						Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC L_23 = V_13;
						NullCheck(L_21);
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_24;
						L_24 = FlowBase_ContentWithNameAtLevel_mBEA01AF67EC82BAF3485DEB39E7C5F6EB95DCE42(L_21, L_22, L_23, (bool)0, NULL);
						V_12 = L_24;
						// if (otherContentWithName && otherContentWithName != weavePoint) {
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_25 = V_12;
						bool L_26;
						L_26 = Object_op_Implicit_m9F097EFB17152A15AF84817F6B4AE720A6A6094E(L_25, NULL);
						if (!L_26)
						{
							goto IL_00e4_2;
						}
					}
					{
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_27 = V_12;
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_28 = V_9;
						bool L_29;
						L_29 = Object_op_Inequality_m6C3277742792FF570027EC4C9C13C8F9CA9382B5(L_27, L_28, NULL);
						G_B18_0 = ((int32_t)(L_29));
						goto IL_00e5_2;
					}

IL_00e4_2:
					{
						G_B18_0 = 0;
					}

IL_00e5_2:
					{
						V_14 = (bool)G_B18_0;
						bool L_30 = V_14;
						if (!L_30)
						{
							goto IL_0138_2;
						}
					}
					{
						// var errorMsg = string.Format ("{0} '{1}' has the same label name as a {2} (on {3})",
						//     weavePoint.GetType().Name,
						//     weavePointName,
						//     otherContentWithName.GetType().Name,
						//     otherContentWithName.debugMetadata);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_31;
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_33 = V_9;
						NullCheck(L_33);
						Type_t* L_34;
						L_34 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_33, NULL);
						NullCheck(L_34);
						String_t* L_35;
						L_35 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
						NullCheck(L_32);
						ArrayElementTypeCheck (L_32, L_35);
						(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_32;
						String_t* L_37 = V_8;
						NullCheck(L_36);
						ArrayElementTypeCheck (L_36, L_37);
						(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_37);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_36;
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_39 = V_12;
						NullCheck(L_39);
						Type_t* L_40;
						L_40 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_39, NULL);
						NullCheck(L_40);
						String_t* L_41;
						L_41 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_40);
						NullCheck(L_38);
						ArrayElementTypeCheck (L_38, L_41);
						(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_41);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_38;
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_43 = V_12;
						NullCheck(L_43);
						DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_44;
						L_44 = Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28(L_43, NULL);
						NullCheck(L_42);
						ArrayElementTypeCheck (L_42, L_44);
						(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_44);
						String_t* L_45;
						L_45 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral55CFC3484E2E301297CB8C75443E10F75CBF9517, L_42, NULL);
						V_15 = L_45;
						// Error(errorMsg, (Parsed.Object) weavePoint);
						String_t* L_46 = V_15;
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_47 = V_9;
						VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_46, L_47, (bool)0);
					}

IL_0138_2:
					{
					}

IL_0139_2:
					{
						// foreach(var flow in ancestorFlows) {
						bool L_48;
						L_48 = Enumerator_MoveNext_m3E6779FD1F45D3506C88709EDFA61A7FBABF497A((&V_10), Enumerator_MoveNext_m3E6779FD1F45D3506C88709EDFA61A7FBABF497A_RuntimeMethod_var);
						if (L_48)
						{
							goto IL_00b0_2;
						}
					}
					{
						goto IL_0156_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0156_1:
			{
			}

IL_0157_1:
			{
				// foreach (var namedWeavePointPair in _namedWeavePoints) {
				bool L_49;
				L_49 = Enumerator_MoveNext_m0E266551F3F19E392882EA2ADC18A12F7F76FE4F((&V_6), Enumerator_MoveNext_m0E266551F3F19E392882EA2ADC18A12F7F76FE4F_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_0081_1;
				}
			}
			{
				goto IL_0174;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0174:
	{
		// }
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
// System.Void Ink.Parsed.Weave/GatherPointToResolve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GatherPointToResolve__ctor_mFFE076E7B088D6AF79E86D10264A6E2387C69ED2 (GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_Multicast(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* currentDelegate = reinterpret_cast<BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___terminatingObj0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenInst(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	NullCheck(___terminatingObj0);
	typedef void (*FunctionPointerType) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___terminatingObj0, method);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenStatic(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___terminatingObj0, method);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenStaticInvoker(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* >::Invoke(__this->___method_ptr_0, method, NULL, ___terminatingObj0);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_ClosedStaticInvoker(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___terminatingObj0);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenVirtual(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	NullCheck(___terminatingObj0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___terminatingObj0);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenInterface(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	NullCheck(___terminatingObj0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___terminatingObj0);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenGenericVirtual(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	NullCheck(___terminatingObj0);
	GenericVirtualActionInvoker0::Invoke(method, ___terminatingObj0);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenGenericInterface(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	NullCheck(___terminatingObj0);
	GenericInterfaceActionInvoker0::Invoke(method, ___terminatingObj0);
}
// System.Void Ink.Parsed.Weave/BadTerminationHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadTerminationHandler__ctor_mAD3499682FC2CD65E716A6714C8EBD32F3C0C1D1 (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_Multicast;
}
// System.Void Ink.Parsed.Weave/BadTerminationHandler::Invoke(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6 (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___terminatingObj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Ink.Parsed.Weave/BadTerminationHandler::BeginInvoke(Ink.Parsed.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BadTerminationHandler_BeginInvoke_m4C2F80139C761C895EABB9E15BBD9B7AAB5E05B9 (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___terminatingObj0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Ink.Parsed.Weave/BadTerminationHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadTerminationHandler_EndInvoke_m8557352A7C826A5335957B9054AB284B02C46B13 (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Ink.Parsed.Weave/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC628F4320C7E8A2D09F55FB4618B17834A56ED1E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* L_0 = (U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807*)il2cpp_codegen_object_new(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m73A5A4115E280FF369CFFC6C27BEDD0B00B1E75D(L_0, NULL);
		((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Ink.Parsed.Weave/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m73A5A4115E280FF369CFFC6C27BEDD0B00B1E75D (U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Ink.Parsed.Weave/<>c::<ResolveWeavePointNaming>b__16_0(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CResolveWeavePointNamingU3Eb__16_0_mD2E1AE17D456275345755805605BAB67AD659C93 (U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* __this, RuntimeObject* ___w0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var namedWeavePoints = FindAll<IWeavePoint> (w => !string.IsNullOrEmpty (w.name));
		RuntimeObject* L_0 = ___w0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Ink.Parsed.IWeavePoint::get_name() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Ink.Parsed.Weave/<>c::<ValidateFlowOfObjectsTerminates>b__33_0(Ink.Parsed.Divert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CValidateFlowOfObjectsTerminatesU3Eb__33_0_mA29EFEC2C9F28D2F9138006B50AA65EB411F911E (U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* __this, Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivertTarget_t72F939797266E1087B339BC7F70A4A43A8E91F2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		// var divert = flowObj.Find<Divert> (d => !d.isThread && !d.isTunnel && !d.isFunctionCall && !(d.parent is DivertTarget));
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_0 = ___d0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Divert_get_isThread_m5AF57D150FA6189A096F00149ED4BB4ADC1D3F73_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_2 = ___d0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Divert_get_isTunnel_m5F0B18A5D8A9CF7F751CCAE63840442D64E78EF0_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_4 = ___d0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Divert_get_isFunctionCall_m795B07F1FA11C85E330D67D0C5E93157BEC3BB13_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_6 = ___d0;
		NullCheck(L_6);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7;
		L_7 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_6, NULL);
		G_B5_0 = ((((int32_t)((!(((RuntimeObject*)(DivertTarget_t72F939797266E1087B339BC7F70A4A43A8E91F2D*)((DivertTarget_t72F939797266E1087B339BC7F70A4A43A8E91F2D*)IsInstClass((RuntimeObject*)L_7, DivertTarget_t72F939797266E1087B339BC7F70A4A43A8E91F2D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B5_0 = 0;
	}

IL_002c:
	{
		return (bool)G_B5_0;
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
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29__ctor_mE1960E7B1C2FB83975604BBA11B328B6279E88F5 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29_System_IDisposable_Dispose_mBD65DB5199FA7CE6895F65C4F1AE28DEDF669AAF (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CContentThatFollowsWeavePointU3Ed__29_U3CU3Em__Finally1_m64AF3C259A537D1E769580D6CBEB4C8C78B15B93(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CContentThatFollowsWeavePointU3Ed__29_MoveNext_mFA2F28A62D5039FC397153C696FFBCE1D580918A (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m549CA9389C0FF54CE448A6557816E0F0E7B58CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0214:
			{// begin fault (depth: 1)
				U3CContentThatFollowsWeavePointU3Ed__29_System_IDisposable_Dispose_mBD65DB5199FA7CE6895F65C4F1AE28DEDF669AAF(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				switch (L_1)
				{
					case 0:
					{
						goto IL_001b_1;
					}
					case 1:
					{
						goto IL_001d_1;
					}
					case 2:
					{
						goto IL_0022_1;
					}
				}
			}
			{
				goto IL_0027_1;
			}

IL_001b_1:
			{
				goto IL_002e_1;
			}

IL_001d_1:
			{
				goto IL_00c1_1;
			}

IL_0022_1:
			{
				goto IL_01ce_1;
			}

IL_0027_1:
			{
				V_0 = (bool)0;
				goto IL_021c;
			}

IL_002e_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var obj = (Parsed.Object)weavePoint;
				RuntimeObject* L_2 = __this->___weavePoint_3;
				__this->___U3CobjU3E5__1_6 = ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_2, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CobjU3E5__1_6), (void*)((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_2, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var)));
				// if (obj.content != null) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3 = __this->___U3CobjU3E5__1_6;
				NullCheck(L_3);
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_4;
				L_4 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_3, NULL);
				V_2 = (bool)((!(((RuntimeObject*)(List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_00f2_1;
				}
			}
			{
				// foreach (var contentObj in obj.content) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6 = __this->___U3CobjU3E5__1_6;
				NullCheck(L_6);
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_7;
				L_7 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_6, NULL);
				NullCheck(L_7);
				Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_8;
				L_8 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_7, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
				__this->___U3CU3Es__4_9 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__4_9))->____list_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__4_9))->____current_3), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_00d1_1;
			}

IL_007e_1:
			{
				// foreach (var contentObj in obj.content) {
				Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* L_9 = (&__this->___U3CU3Es__4_9);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_10;
				L_10 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline(L_9, Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				__this->___U3CcontentObjU3E5__5_10 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentObjU3E5__5_10), (void*)L_10);
				// if (IsGlobalDeclaration (contentObj)) continue;
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_11 = __this->___U3CU3E4__this_5;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_12 = __this->___U3CcontentObjU3E5__5_10;
				NullCheck(L_11);
				bool L_13;
				L_13 = Weave_IsGlobalDeclaration_m2F27AA5E1B93C4B938128743ECD736C5C69F43A3(L_11, L_12, NULL);
				V_3 = L_13;
				bool L_14 = V_3;
				if (!L_14)
				{
					goto IL_00a7_1;
				}
			}
			{
				// if (IsGlobalDeclaration (contentObj)) continue;
				goto IL_00d1_1;
			}

IL_00a7_1:
			{
				// yield return contentObj;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_15 = __this->___U3CcontentObjU3E5__5_10;
				__this->___U3CU3E2__current_1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_021c;
			}

IL_00c1_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				__this->___U3CcontentObjU3E5__5_10 = (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentObjU3E5__5_10), (void*)(Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL);
			}

IL_00d1_1:
			{
				// foreach (var contentObj in obj.content) {
				Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* L_16 = (&__this->___U3CU3Es__4_9);
				bool L_17;
				L_17 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89(L_16, Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_007e_1;
				}
			}
			{
				U3CContentThatFollowsWeavePointU3Ed__29_U3CU3Em__Finally1_m64AF3C259A537D1E769580D6CBEB4C8C78B15B93(__this, NULL);
				Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* L_18 = (&__this->___U3CU3Es__4_9);
				il2cpp_codegen_initobj(L_18, sizeof(Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C));
			}

IL_00f2_1:
			{
				// var parentWeave = obj.parent as Weave;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_19 = __this->___U3CobjU3E5__1_6;
				NullCheck(L_19);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_20;
				L_20 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_19, NULL);
				__this->___U3CparentWeaveU3E5__2_7 = ((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_20, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentWeaveU3E5__2_7), (void*)((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_20, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var)));
				// if (parentWeave == null) {
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_21 = __this->___U3CparentWeaveU3E5__2_7;
				bool L_22;
				L_22 = Object_op_Equality_m109E112ACAA3627F5E1EF2BD8C13110F2493CB4D(L_21, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
				V_4 = L_22;
				bool L_23 = V_4;
				if (!L_23)
				{
					goto IL_0126_1;
				}
			}
			{
				// throw new System.Exception ("Expected weave point parent to be weave?");
				Exception_t* L_24 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_24);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDCE5AC3929E9CA18E1A0EDD397BC9C4E7B2382C)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CContentThatFollowsWeavePointU3Ed__29_MoveNext_mFA2F28A62D5039FC397153C696FFBCE1D580918A_RuntimeMethod_var)));
			}

IL_0126_1:
			{
				// var weavePointIdx = parentWeave.content.IndexOf (obj);
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_25 = __this->___U3CparentWeaveU3E5__2_7;
				NullCheck(L_25);
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_26;
				L_26 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_25, NULL);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_27 = __this->___U3CobjU3E5__1_6;
				NullCheck(L_26);
				int32_t L_28;
				L_28 = List_1_IndexOf_m549CA9389C0FF54CE448A6557816E0F0E7B58CE2(L_26, L_27, List_1_IndexOf_m549CA9389C0FF54CE448A6557816E0F0E7B58CE2_RuntimeMethod_var);
				__this->___U3CweavePointIdxU3E5__3_8 = L_28;
				// for (int i = weavePointIdx+1; i < parentWeave.content.Count; i++) {
				int32_t L_29 = __this->___U3CweavePointIdxU3E5__3_8;
				__this->___U3CiU3E5__6_11 = ((int32_t)il2cpp_codegen_add(L_29, 1));
				goto IL_01ef_1;
			}

IL_0155_1:
			{
				// var laterObj = parentWeave.content [i];
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_30 = __this->___U3CparentWeaveU3E5__2_7;
				NullCheck(L_30);
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_31;
				L_31 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_30, NULL);
				int32_t L_32 = __this->___U3CiU3E5__6_11;
				NullCheck(L_31);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_33;
				L_33 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_31, L_32, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
				__this->___U3ClaterObjU3E5__7_12 = L_33;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClaterObjU3E5__7_12), (void*)L_33);
				// if (IsGlobalDeclaration (laterObj)) continue;
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_34 = __this->___U3CU3E4__this_5;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_35 = __this->___U3ClaterObjU3E5__7_12;
				NullCheck(L_34);
				bool L_36;
				L_36 = Weave_IsGlobalDeclaration_m2F27AA5E1B93C4B938128743ECD736C5C69F43A3(L_34, L_35, NULL);
				V_5 = L_36;
				bool L_37 = V_5;
				if (!L_37)
				{
					goto IL_018b_1;
				}
			}
			{
				// if (IsGlobalDeclaration (laterObj)) continue;
				goto IL_01dd_1;
			}

IL_018b_1:
			{
				// if (laterObj is IWeavePoint)
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_38 = __this->___U3ClaterObjU3E5__7_12;
				V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_38, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_39 = V_6;
				if (!L_39)
				{
					goto IL_01a1_1;
				}
			}
			{
				// break;
				goto IL_0210_1;
			}

IL_01a1_1:
			{
				// if (laterObj is Weave)
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_40 = __this->___U3ClaterObjU3E5__7_12;
				V_7 = (bool)((!(((RuntimeObject*)(Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_40, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_41 = V_7;
				if (!L_41)
				{
					goto IL_01b7_1;
				}
			}
			{
				// break;
				goto IL_0210_1;
			}

IL_01b7_1:
			{
				// yield return laterObj;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_42 = __this->___U3ClaterObjU3E5__7_12;
				__this->___U3CU3E2__current_1 = L_42;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_42);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_021c;
			}

IL_01ce_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				__this->___U3ClaterObjU3E5__7_12 = (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClaterObjU3E5__7_12), (void*)(Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL);
			}

IL_01dd_1:
			{
				// for (int i = weavePointIdx+1; i < parentWeave.content.Count; i++) {
				int32_t L_43 = __this->___U3CiU3E5__6_11;
				V_8 = L_43;
				int32_t L_44 = V_8;
				__this->___U3CiU3E5__6_11 = ((int32_t)il2cpp_codegen_add(L_44, 1));
			}

IL_01ef_1:
			{
				// for (int i = weavePointIdx+1; i < parentWeave.content.Count; i++) {
				int32_t L_45 = __this->___U3CiU3E5__6_11;
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_46 = __this->___U3CparentWeaveU3E5__2_7;
				NullCheck(L_46);
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_47;
				L_47 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_46, NULL);
				NullCheck(L_47);
				int32_t L_48;
				L_48 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_47, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
				V_9 = (bool)((((int32_t)L_45) < ((int32_t)L_48))? 1 : 0);
				bool L_49 = V_9;
				if (L_49)
				{
					goto IL_0155_1;
				}
			}

IL_0210_1:
			{
				// }
				V_0 = (bool)0;
				goto IL_021c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_021c:
	{
		bool L_50 = V_0;
		return L_50;
	}
}
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29_U3CU3Em__Finally1_m64AF3C259A537D1E769580D6CBEB4C8C78B15B93 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* L_0 = (&__this->___U3CU3Es__4_9);
		Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273(L_0, Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		return;
	}
}
// Ink.Parsed.Object Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.Collections.Generic.IEnumerator<Ink.Parsed.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_Generic_IEnumeratorU3CInk_Parsed_ObjectU3E_get_Current_mCC8D4D3C12B7C4F90BB464C648C91629F0480C68 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_IEnumerator_Reset_m115B11CD324347AE797625EACD51442CA8267AE7 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_IEnumerator_Reset_m115B11CD324347AE797625EACD51442CA8267AE7_RuntimeMethod_var)));
	}
}
// System.Object Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_IEnumerator_get_Current_m9B1DAE861970D55F8EECB85EBD14D77A1F1B2465 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Ink.Parsed.Object> Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.Collections.Generic.IEnumerable<Ink.Parsed.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_Generic_IEnumerableU3CInk_Parsed_ObjectU3E_GetEnumerator_m8C4B5A788E923234DA9A3E586E88D149165EA3AD (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_3 = (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C*)il2cpp_codegen_object_new(U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CContentThatFollowsWeavePointU3Ed__29__ctor_mE1960E7B1C2FB83975604BBA11B328B6279E88F5(L_3, 0, NULL);
		V_0 = L_3;
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_4 = V_0;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_5 = __this->___U3CU3E4__this_5;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_5), (void*)L_5);
	}

IL_0035:
	{
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_6 = V_0;
		RuntimeObject* L_7 = __this->___U3CU3E3__weavePoint_4;
		NullCheck(L_6);
		L_6->___weavePoint_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___weavePoint_3), (void*)L_7);
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_IEnumerable_GetEnumerator_mBB795C8F494960D4FC07D09C799A6B4B1E449E51 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_Generic_IEnumerableU3CInk_Parsed_ObjectU3E_GetEnumerator_m8C4B5A788E923234DA9A3E586E88D149165EA3AD(__this, NULL);
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
// System.Void Ink.Parsed.Glue::.ctor(Ink.Runtime.Glue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glue__ctor_mBF07823C75D752905A0243DD511F00F917A8D220 (Glue_t1B0423D93951017DCD923A001EEEE15092EF1D2A* __this, Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D* ___glue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wrap_1__ctor_m55E3265081F6A8406F0C3A7A7D3B2ABBC0311B0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Glue (Runtime.Glue glue) : base(glue) {}
		Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D* L_0 = ___glue0;
		Wrap_1__ctor_m55E3265081F6A8406F0C3A7A7D3B2ABBC0311B0E(__this, L_0, Wrap_1__ctor_m55E3265081F6A8406F0C3A7A7D3B2ABBC0311B0E_RuntimeMethod_var);
		// public Glue (Runtime.Glue glue) : base(glue) {}
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
// System.Void Ink.Parsed.Tag::.ctor(Ink.Runtime.Tag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tag__ctor_m6E074F440ED8A57470A889B9DFC947FCB05C999E (Tag_tAB0A2B0822AC49777B0EF88C69DFC2D2A203DFF9* __this, Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29* ___tag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wrap_1__ctor_mC7A871A14C44F022C311E215DA575CE02DBA3A62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Tag (Runtime.Tag tag) : base (tag) { }
		Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29* L_0 = ___tag0;
		Wrap_1__ctor_mC7A871A14C44F022C311E215DA575CE02DBA3A62(__this, L_0, Wrap_1__ctor_mC7A871A14C44F022C311E215DA575CE02DBA3A62_RuntimeMethod_var);
		// public Tag (Runtime.Tag tag) : base (tag) { }
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mC2A36457615E5A2F88ABAB2B23B56023AED26598 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) 
{
	{
		// public List<Parsed.Object> content { get; protected set; }
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_0 = __this->___U3CcontentU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Text_set_text_m174E6D93DD8C69932A47F52A61E8A97CAD231058_inline (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string text { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CtextU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Text_get_text_m14F6F4C8E14BAD266FF794A86DCFA15E89964103_inline (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, const RuntimeMethod* method) 
{
	{
		// public string text { get; set; }
		String_t* L_0 = __this->___U3CtextU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* Divert_get_arguments_m835B3FA82AB94C9D96B4472519BE0C4776F6FD5B_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) 
{
	{
		// public List<Expression> arguments { get; protected set; }
		List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* L_0 = __this->___U3CargumentsU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControlCommand_get_commandType_mF43D077F555FA63FF4A1146790A56346647DBE8A_inline (ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* __this, const RuntimeMethod* method) 
{
	{
		// public CommandType commandType { get; protected set; }
		int32_t L_0 = __this->___U3CcommandTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_set_parent_m313E7123FE19E7C089F5856A0B9AB83D092AF2FF_inline (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___value0, const RuntimeMethod* method) 
{
	{
		// public Runtime.Object parent { get; set; }
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_0 = ___value0;
		__this->___U3CparentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Divert_get_targetContent_m2A18F6F480779045E0B34983F78C0ADFE635D21C_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) 
{
	{
		// public Parsed.Object targetContent { get; protected set; }
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = __this->___U3CtargetContentU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* VariableAssignment_get_variableIdentifier_m5E36193B2BC86B48D2567C6EA389B4C5FE67CB9A_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public Identifier variableIdentifier { get; protected set; }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = __this->___U3CvariableIdentifierU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public bool isGlobalDeclaration { get; set; }
		bool L_0 = __this->___U3CisGlobalDeclarationU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public bool isNewTemporaryDeclaration { get; set; }
		bool L_0 = __this->___U3CisNewTemporaryDeclarationU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_variableIdentifier_m16684EEAA53B0C8C0A31B1072977CC5C115A35E3_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___value0, const RuntimeMethod* method) 
{
	{
		// public Identifier variableIdentifier { get; protected set; }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = ___value0;
		__this->___U3CvariableIdentifierU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvariableIdentifierU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_expression_m4CE2FDFCA9A76FEF3E8C76E0B93FE7CE9705AD48_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___value0, const RuntimeMethod* method) 
{
	{
		// public Expression expression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = ___value0;
		__this->___U3CexpressionU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexpressionU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_listDefinition_m7675DC40AF4DAFF3918BE94FF4DD9190955AF87A_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___value0, const RuntimeMethod* method) 
{
	{
		// public ListDefinition listDefinition { get; protected set; }
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_0 = ___value0;
		__this->___U3ClistDefinitionU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClistDefinitionU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public ListDefinition listDefinition { get; protected set; }
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_0 = __this->___U3ClistDefinitionU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_isGlobalDeclaration_m3B705D1B9A8EC0FB9C5AB5B2B80B690ACD50D86D_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isGlobalDeclaration { get; set; }
		bool L_0 = ___value0;
		__this->___U3CisGlobalDeclarationU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public Expression expression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = __this->___U3CexpressionU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_isGlobal_m7E2A5FFCF8C182807B5941792682A0A1D26535DE_inline (VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isGlobal { get; set; }
		bool L_0 = ___value0;
		__this->___U3CisGlobalU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> path { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CpathU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_path_m2987340812E384B0F12578542E50B0CEFABDEAB0_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> path { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CpathU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_name_mCA878128BFBEF54B19531F832CD1FB62A617ED65_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VariableReference_get_name_mE6D2556C23D83C040F82E27DE755F7D6FBD90E0F_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Container_set_visitsShouldBeCounted_mCA668E9A96F2D5B8F25801AE1169786E35B2091C_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool visitsShouldBeCounted { get; set; }
		bool L_0 = ___value0;
		__this->___U3CvisitsShouldBeCountedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_pathForCount_m3488741E05F86E09B7A082704610A095EF0C7016_inline (VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* __this, Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___value0, const RuntimeMethod* method) 
{
	{
		// public Path pathForCount { get; set; }
		Path_tCC1F1626DB60711735401EA8FA76A191D9014600* L_0 = ___value0;
		__this->___U3CpathForCountU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathForCountU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_name_mD0F82FBF6521B061476F855E565D665D03BADF29_inline (VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlowBase_get_isFunction_m89BD3D4FC104434B4EB5091C121C29C3E817D30F_inline (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) 
{
	{
		// public bool isFunction { get; protected set; }
		bool L_0 = __this->___U3CisFunctionU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) 
{
	{
		// public Parsed.Object parent { get; set; }
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = __this->___U3CparentU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* FlowBase_get_identifier_m4690D9A6AAB405E233688C9261A4F0BB19BFC105_inline (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) 
{
	{
		// public Identifier identifier { get; set; }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = __this->___U3CidentifierU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weave_set_baseIndentIndex_m6F3D26B4F215BB48218CFE3E84BD0B26532B98B1_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int baseIndentIndex { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CbaseIndentIndexU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Weave_get_baseIndentIndex_m98068082F6788CEF08908CCDF9E62F4C4938839D_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	{
		// public int baseIndentIndex { get; private set; }
		int32_t L_0 = __this->___U3CbaseIndentIndexU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weave_set_currentContainer_m726341F02CE4FBBF970874A494486A48190F7C23_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___value0, const RuntimeMethod* method) 
{
	{
		// Runtime.Container currentContainer { get; set; }
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = ___value0;
		__this->___U3CcurrentContainerU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentContainerU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Container_set_name_m8F5A2754D5F5B724CDB73F5754F75D179253D1B1_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	{
		// Runtime.Container currentContainer { get; set; }
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = __this->___U3CcurrentContainerU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Gather_get_indentationDepth_m40F76E3F69111BE1085CFE0B79370156045C94E4_inline (Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* __this, const RuntimeMethod* method) 
{
	{
		// public int indentationDepth { get; protected set; }
		int32_t L_0 = __this->___U3CindentationDepthU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_inline (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___terminatingObj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Divert_get_isThread_m5AF57D150FA6189A096F00149ED4BB4ADC1D3F73_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) 
{
	{
		// public bool isThread { get; set; }
		bool L_0 = __this->___U3CisThreadU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Divert_get_isTunnel_m5F0B18A5D8A9CF7F751CCAE63840442D64E78EF0_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) 
{
	{
		// public bool isTunnel { get; set; }
		bool L_0 = __this->___U3CisTunnelU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Divert_get_isFunctionCall_m795B07F1FA11C85E330D67D0C5E93157BEC3BB13_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) 
{
	{
		// public bool isFunctionCall { get; set; }
		bool L_0 = __this->___U3CisFunctionCallU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
