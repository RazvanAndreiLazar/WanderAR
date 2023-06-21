#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>
struct Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F;
// System.Collections.Generic.Dictionary`2<System.String,Dummiesman.OBJObjectBuilder>
struct Dictionary_2_tC5A5AFCB8FF4726846814FB45FC66F49C9B0F82A;
// System.Collections.Generic.Dictionary`2<Dummiesman.OBJObjectBuilder/ObjLoopHash,System.Int32>
struct Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<Dummiesman.OBJObjectBuilder/ObjLoopHash>
struct IEqualityComparer_1_tFEB69696FE5D70DC653F9947660718FE286B7AE1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Int32>>
struct KeyCollection_t629C3287529AAA77FEC53928EC6815E52427C6AA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Material>
struct KeyCollection_t4274B17E1CBE308BB3118F5BC78805BBDEDCDD90;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Dummiesman.OBJObjectBuilder>
struct KeyCollection_tA09E6FE7D375848C1EA850948B80C6B561FDBA1A;
// System.Collections.Generic.Dictionary`2/KeyCollection<Dummiesman.OBJObjectBuilder/ObjLoopHash,System.Int32>
struct KeyCollection_t7CF5CF2CD9AD831D6E5D831951C8AD279C5624B9;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Int32>>
struct ValueCollection_t90997F6D607B207C2931F0BF1F0BE405C13469E9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Material>
struct ValueCollection_tA531AC920AAE21ED6FFB807739782DC2D244BDED;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Dummiesman.OBJObjectBuilder>
struct ValueCollection_t06E5110E55D6905247636B19DC797A18BEBAA8AE;
// System.Collections.Generic.Dictionary`2/ValueCollection<Dummiesman.OBJObjectBuilder/ObjLoopHash,System.Int32>
struct ValueCollection_t08AE6C93D04FA96ABF96A00F2B68A71AA363CE28;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Int32>>[]
struct EntryU5BU5D_t24A2F35412A08669A461D7DAFE5CD6B21A015330;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Material>[]
struct EntryU5BU5D_t24D6A872CEE9B0677216214F6F3270C5897CDE5A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Dummiesman.OBJObjectBuilder>[]
struct EntryU5BU5D_t92783849F53162A82F922E243B03D8BA20FBF3B5;
// System.Collections.Generic.Dictionary`2/Entry<Dummiesman.OBJObjectBuilder/ObjLoopHash,System.Int32>[]
struct EntryU5BU5D_t67B82ACB871FB6B1CA719961C8250E72AD7FFE8A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// B83.Image.BMP.BMPImage
struct BMPImage_tA6E059574F192A9BB574E7B260012D990055F05C;
// B83.Image.BMP.BMPLoader
struct BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Exception
struct Exception_t;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Dummiesman.ImageLoader
struct ImageLoader_t8A370851A05DC8FBFA9EF3A8348BC2D76445BD82;
// Dummiesman.ImageLoaderHelper
struct ImageLoaderHelper_t8603BF10D0193AFD974D45CB504409448995359B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// Dummiesman.OBJLoader
struct OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF;
// Dummiesman.OBJObjectBuilder
struct OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// Dummiesman.TGALoader
struct TGALoader_tBF4AA5DFA40A991239260EF4CD506E8F5F59B1E2;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Dummiesman.OBJLoader/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tB2FCD3BDD4423D7E34A7A4B5547E642A93881A72;
// Dummiesman.OBJObjectBuilder/ObjLoopHash
struct ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0FFABE86E9532C726C3E9C7D10AFE388437A380D;
IL2CPP_EXTERN_C String_t* _stringLiteral1A3E4D14FCCE4BCFFF56E01EE25543AD3912FB19;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral24A67F22FEE896ED79449BFCF3EC311FB14605C6;
IL2CPP_EXTERN_C String_t* _stringLiteral267226911D4A958D79875B1057280198F25BE5F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3201B86FACEA09A6EC2396E7556112CD64565211;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C;
IL2CPP_EXTERN_C String_t* _stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D;
IL2CPP_EXTERN_C String_t* _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
IL2CPP_EXTERN_C String_t* _stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B;
IL2CPP_EXTERN_C String_t* _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C;
IL2CPP_EXTERN_C String_t* _stringLiteral9FB5B88DDC4C14C62E4014842DEC88E8353401A0;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA2B5208CBD672BD56D417E00B07619D4FDBBD0C2;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB93D5DFE334D74396F45A6431764B0B46F089032;
IL2CPP_EXTERN_C String_t* _stringLiteralBEFAFB5DB9B504BEEF8A79E3E990D713103F15A0;
IL2CPP_EXTERN_C String_t* _stringLiteralC00413A65EA4BBDF5F981E7DC7F68313AA28D95F;
IL2CPP_EXTERN_C String_t* _stringLiteralCACB21833BB4CA1A557B18751B7691C087DC04A2;
IL2CPP_EXTERN_C String_t* _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5;
IL2CPP_EXTERN_C String_t* _stringLiteralCCC77F6BEC01F19B25AEAE1DA587DC5A6486B284;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA7CFEAD2959669C703813D83A33F35133DB619;
IL2CPP_EXTERN_C const RuntimeMethod* DDSLoader_Load_mA93B6593C1BC710A3411B4CD9809284C43D9B1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DDSLoader_Load_mE78B735A0481C6BC72A7A1C769B13912EA626E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m45B16A0848D5AA8855A51C20C2AA2B90A6516877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m2E9E4B0E50E5FBA0C7E62ACEAD7A0327267C4C2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0058521363E7F49C437C430A754DB0F1B5379289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0C13BB2CCCC84DFF397E1F1708A35D6B855E83D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m56F2C16A68E7E1B774D8B14B3DF74FA825C5CC9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mFD7867D61B454D815AFE71D04D27540FAFBFF091_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m63CFEDABA0B46AEB5DB36FFBCDDAD873A37C82FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m82637A3A6031C43DB9CC910DBD6DCC66D9459C8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m831221DAC53C65F38539F4A37520985E8DC557AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m2712E92CF36B85D20B01493D39F2BD4504C0BE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m529105CC1CF8E638D570A195BF4D8BA4984EB3E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m829F1D3D238D6C188AE5440AC46680D7F3B66304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1ED4783F9B383A3AAA727AA5F6241652CEDF91FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6F709DC1AED45A132D5B2CE5C6912F4FB3BA6872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAD3C13EC90677751AE02D5DF4E981C2831DD1C1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageLoader_LoadTexture_m05091EED446921B94BDFBA4EEDC14656D11B2D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mFF379184A888CEA6C7DD77DD5DD36E5819C98D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD43CA99389807F2DF5FE76DBEC3D4174C787BE98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TGALoader_Load_mFFD983DFCBF01C4B0C51AEC8829191B59E63AD20_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t24A2F35412A08669A461D7DAFE5CD6B21A015330* ____entries_1;
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
	KeyCollection_t629C3287529AAA77FEC53928EC6815E52427C6AA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t90997F6D607B207C2931F0BF1F0BE405C13469E9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>
struct Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t24D6A872CEE9B0677216214F6F3270C5897CDE5A* ____entries_1;
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
	KeyCollection_t4274B17E1CBE308BB3118F5BC78805BBDEDCDD90* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA531AC920AAE21ED6FFB807739782DC2D244BDED* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Dummiesman.OBJObjectBuilder>
struct Dictionary_2_tC5A5AFCB8FF4726846814FB45FC66F49C9B0F82A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t92783849F53162A82F922E243B03D8BA20FBF3B5* ____entries_1;
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
	KeyCollection_tA09E6FE7D375848C1EA850948B80C6B561FDBA1A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t06E5110E55D6905247636B19DC797A18BEBAA8AE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Dummiesman.OBJObjectBuilder/ObjLoopHash,System.Int32>
struct Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t67B82ACB871FB6B1CA719961C8250E72AD7FFE8A* ____entries_1;
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
	KeyCollection_t7CF5CF2CD9AD831D6E5D831951C8AD279C5624B9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t08AE6C93D04FA96ABF96A00F2B68A71AA363CE28* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// B83.Image.BMP.BMPLoader
struct BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83  : public RuntimeObject
{
	// System.Boolean B83.Image.BMP.BMPLoader::ReadPaletteAlpha
	bool ___ReadPaletteAlpha_1;
	// System.Boolean B83.Image.BMP.BMPLoader::ForceAlphaReadWhenPossible
	bool ___ForceAlphaReadWhenPossible_2;
};

// Dummiesman.BinaryExtensions
struct BinaryExtensions_t4C91DF61D47494D389E27ECFFB2B72C26F7BBE35  : public RuntimeObject
{
};

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// Dummiesman.Extensions.ColorExtensions
struct ColorExtensions_t11CBE6A7B40152B1727BFC9693F700A13BC26A57  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Dummiesman.DDSLoader
struct DDSLoader_t1BCAC2E37F4DD03E4D5E7C504C8383A32A0DC40F  : public RuntimeObject
{
};

// Dummiesman.ImageLoader
struct ImageLoader_t8A370851A05DC8FBFA9EF3A8348BC2D76445BD82  : public RuntimeObject
{
};

// Dummiesman.ImageLoaderHelper
struct ImageLoaderHelper_t8603BF10D0193AFD974D45CB504409448995359B  : public RuntimeObject
{
};

// Dummiesman.ImageUtils
struct ImageUtils_t181A75EDA6EC524F53330496B4E116B38CE65744  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Dummiesman.OBJLoader
struct OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF  : public RuntimeObject
{
	// Dummiesman.SplitMode Dummiesman.OBJLoader::SplitMode
	int32_t ___SplitMode_0;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Dummiesman.OBJLoader::Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___Vertices_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Dummiesman.OBJLoader::Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___Normals_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Dummiesman.OBJLoader::UVs
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___UVs_3;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material> Dummiesman.OBJLoader::Materials
	Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F* ___Materials_4;
	// System.IO.FileInfo Dummiesman.OBJLoader::_objInfo
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* ____objInfo_5;
};

// Dummiesman.OBJLoaderHelper
struct OBJLoaderHelper_tBB2F071274F30E8A69777A153438463B014602FD  : public RuntimeObject
{
};

// Dummiesman.OBJObjectBuilder
struct OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13  : public RuntimeObject
{
	// System.Int32 Dummiesman.OBJObjectBuilder::<PushedFaceCount>k__BackingField
	int32_t ___U3CPushedFaceCountU3Ek__BackingField_0;
	// Dummiesman.OBJLoader Dummiesman.OBJObjectBuilder::_loader
	OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* ____loader_1;
	// System.String Dummiesman.OBJObjectBuilder::_name
	String_t* ____name_2;
	// System.Collections.Generic.Dictionary`2<Dummiesman.OBJObjectBuilder/ObjLoopHash,System.Int32> Dummiesman.OBJObjectBuilder::_globalIndexRemap
	Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE* ____globalIndexRemap_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> Dummiesman.OBJObjectBuilder::_materialIndices
	Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* ____materialIndices_4;
	// System.Collections.Generic.List`1<System.Int32> Dummiesman.OBJObjectBuilder::_currentIndexList
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____currentIndexList_5;
	// System.String Dummiesman.OBJObjectBuilder::_lastMaterial
	String_t* ____lastMaterial_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Dummiesman.OBJObjectBuilder::_vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____vertices_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Dummiesman.OBJObjectBuilder::_normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____normals_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Dummiesman.OBJObjectBuilder::_uvs
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ____uvs_9;
	// System.Boolean Dummiesman.OBJObjectBuilder::recalculateNormals
	bool ___recalculateNormals_10;
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

// Dummiesman.StringExtensions
struct StringExtensions_t26118E44D1EAD5B4516920FF322A52B81934C186  : public RuntimeObject
{
};

// Dummiesman.TGALoader
struct TGALoader_tBF4AA5DFA40A991239260EF4CD506E8F5F59B1E2  : public RuntimeObject
{
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

// Dummiesman.OBJLoader/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tB2FCD3BDD4423D7E34A7A4B5547E642A93881A72  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Dummiesman.OBJObjectBuilder> Dummiesman.OBJLoader/<>c__DisplayClass7_0::builderDict
	Dictionary_2_tC5A5AFCB8FF4726846814FB45FC66F49C9B0F82A* ___builderDict_0;
	// Dummiesman.OBJObjectBuilder Dummiesman.OBJLoader/<>c__DisplayClass7_0::currentBuilder
	OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* ___currentBuilder_1;
	// Dummiesman.OBJLoader Dummiesman.OBJLoader/<>c__DisplayClass7_0::<>4__this
	OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* ___U3CU3E4__this_2;
};

// Dummiesman.OBJObjectBuilder/ObjLoopHash
struct ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B  : public RuntimeObject
{
	// System.Int32 Dummiesman.OBJObjectBuilder/ObjLoopHash::vertexIndex
	int32_t ___vertexIndex_0;
	// System.Int32 Dummiesman.OBJObjectBuilder/ObjLoopHash::normalIndex
	int32_t ___normalIndex_1;
	// System.Int32 Dummiesman.OBJObjectBuilder/ObjLoopHash::uvIndex
	int32_t ___uvIndex_2;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Int32>>
struct KeyValuePair_2_tAB3B085BB59FEFAE0C5C3A1A32259012890DC6B0 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___value_1;
};

// B83.Image.BMP.BMPFileHeader
struct BMPFileHeader_t8BB1B4DE759798D79066DF23BBBDE48E1051D50C 
{
	// System.UInt16 B83.Image.BMP.BMPFileHeader::magic
	uint16_t ___magic_0;
	// System.UInt32 B83.Image.BMP.BMPFileHeader::filesize
	uint32_t ___filesize_1;
	// System.UInt32 B83.Image.BMP.BMPFileHeader::reserved
	uint32_t ___reserved_2;
	// System.UInt32 B83.Image.BMP.BMPFileHeader::offset
	uint32_t ___offset_3;
};

// B83.Image.BMP.BitmapInfoHeader
struct BitmapInfoHeader_tFB63C5954E9795BECDA9F843F451C426D1982C4E 
{
	// System.UInt32 B83.Image.BMP.BitmapInfoHeader::size
	uint32_t ___size_0;
	// System.Int32 B83.Image.BMP.BitmapInfoHeader::width
	int32_t ___width_1;
	// System.Int32 B83.Image.BMP.BitmapInfoHeader::height
	int32_t ___height_2;
	// System.UInt16 B83.Image.BMP.BitmapInfoHeader::nColorPlanes
	uint16_t ___nColorPlanes_3;
	// System.UInt16 B83.Image.BMP.BitmapInfoHeader::nBitsPerPixel
	uint16_t ___nBitsPerPixel_4;
	// B83.Image.BMP.BMPComressionMode B83.Image.BMP.BitmapInfoHeader::compressionMethod
	int32_t ___compressionMethod_5;
	// System.UInt32 B83.Image.BMP.BitmapInfoHeader::rawImageSize
	uint32_t ___rawImageSize_6;
	// System.Int32 B83.Image.BMP.BitmapInfoHeader::xPPM
	int32_t ___xPPM_7;
	// System.Int32 B83.Image.BMP.BitmapInfoHeader::yPPM
	int32_t ___yPPM_8;
	// System.UInt32 B83.Image.BMP.BitmapInfoHeader::nPaletteColors
	uint32_t ___nPaletteColors_9;
	// System.UInt32 B83.Image.BMP.BitmapInfoHeader::nImportantColors
	uint32_t ___nImportantColors_10;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.Int32>>
struct Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tAB3B085BB59FEFAE0C5C3A1A32259012890DC6B0 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// B83.Image.BMP.BMPImage
struct BMPImage_tA6E059574F192A9BB574E7B260012D990055F05C  : public RuntimeObject
{
	// B83.Image.BMP.BMPFileHeader B83.Image.BMP.BMPImage::header
	BMPFileHeader_t8BB1B4DE759798D79066DF23BBBDE48E1051D50C ___header_0;
	// B83.Image.BMP.BitmapInfoHeader B83.Image.BMP.BMPImage::info
	BitmapInfoHeader_tFB63C5954E9795BECDA9F843F451C426D1982C4E ___info_1;
	// System.UInt32 B83.Image.BMP.BMPImage::rMask
	uint32_t ___rMask_2;
	// System.UInt32 B83.Image.BMP.BMPImage::gMask
	uint32_t ___gMask_3;
	// System.UInt32 B83.Image.BMP.BMPImage::bMask
	uint32_t ___bMask_4;
	// System.UInt32 B83.Image.BMP.BMPImage::aMask
	uint32_t ___aMask_5;
	// System.Collections.Generic.List`1<UnityEngine.Color32> B83.Image.BMP.BMPImage::palette
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___palette_6;
	// UnityEngine.Color32[] B83.Image.BMP.BMPImage::imageData
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___imageData_7;
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

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
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
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Dummiesman.OBJObjectBuilder>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m0C13BB2CCCC84DFF397E1F1708A35D6B855E83D3 (Dictionary_2_tC5A5AFCB8FF4726846814FB45FC66F49C9B0F82A* __this, String_t* ___key0, OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC5A5AFCB8FF4726846814FB45FC66F49C9B0F82A*, String_t*, OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Dummiesman.OBJObjectBuilder::.ctor(System.String,Dummiesman.OBJLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OBJObjectBuilder__ctor_m559A7FFA399AEF65D8C9649F8122F554E3222ABB (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* __this, String_t* ___name0, OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* ___loader1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Dummiesman.OBJObjectBuilder>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m829F1D3D238D6C188AE5440AC46680D7F3B66304 (Dictionary_2_tC5A5AFCB8FF4726846814FB45FC66F49C9B0F82A* __this, String_t* ___key0, OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC5A5AFCB8FF4726846814FB45FC66F49C9B0F82A*, String_t*, OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Single Dummiesman.OBJLoaderHelper::FastFloatParse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OBJLoaderHelper_FastFloatParse_m07380DB133C955CE6B46998F088806D4BF24C76D (String_t* ___input0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>::get_Count()
inline int32_t Dictionary_2_get_Count_m831221DAC53C65F38539F4A37520985E8DC557AF (Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>::GetEnumerator()
inline Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2 Dictionary_2_GetEnumerator_m2E9E4B0E50E5FBA0C7E62ACEAD7A0327267C4C2E (Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2 (*) (Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.Int32>>::Dispose()
inline void Enumerator_Dispose_m1ED4783F9B383A3AAA727AA5F6241652CEDF91FF (Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.Int32>>::get_Current()
inline KeyValuePair_2_tAB3B085BB59FEFAE0C5C3A1A32259012890DC6B0 Enumerator_get_Current_mAD3C13EC90677751AE02D5DF4E981C2831DD1C1C_inline (Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tAB3B085BB59FEFAE0C5C3A1A32259012890DC6B0 (*) (Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// UnityEngine.Material Dummiesman.OBJLoaderHelper::CreateNullMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* OBJLoaderHelper_CreateNullMaterial_mC42C42AE60600FBC6098FD72BD0D7A18785891BB (const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Int32>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mFF379184A888CEA6C7DD77DD5DD36E5819C98D99_inline (KeyValuePair_2_tAB3B085BB59FEFAE0C5C3A1A32259012890DC6B0* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tAB3B085BB59FEFAE0C5C3A1A32259012890DC6B0*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mFD7867D61B454D815AFE71D04D27540FAFBFF091 (Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F* __this, String_t* ___key0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F*, String_t*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m2712E92CF36B85D20B01493D39F2BD4504C0BE7B (Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F* __this, String_t* ___key0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F*, String_t*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.Int32>>::MoveNext()
inline bool Enumerator_MoveNext_m6F709DC1AED45A132D5B2CE5C6912F4FB3BA6872 (Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_subMeshCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_mCE01139EEEC3D10B4A6CEA1749FD84DABC53599E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___inVertices0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetNormals_mB4072A4D2600768FD62BC9CAAFF8C43955A4A365 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___inNormals0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_m5A7A6EC14A621579B7138F2EF9BECA60E880A8D7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___channel0, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___uvs1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Int32>>::get_Value()
inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* KeyValuePair_2_get_Value_mD43CA99389807F2DF5FE76DBEC3D4174C787BE98_inline (KeyValuePair_2_tAB3B085BB59FEFAE0C5C3A1A32259012890DC6B0* __this, const RuntimeMethod* method)
{
	return ((  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* (*) (KeyValuePair_2_tAB3B085BB59FEFAE0C5C3A1A32259012890DC6B0*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mD495DA0B00DB0E60A2B7B500D644F4470C1D61DB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___triangles0, int32_t ___submesh1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateTangents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateTangents_m92AC413FAF889C5E811D86DCE0C25ED4625825EC (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m56F2C16A68E7E1B774D8B14B3DF74FA825C5CC9C (Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* __this, String_t* ___key0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341*, String_t*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m529105CC1CF8E638D570A195BF4D8BA4984EB3E8 (Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* __this, String_t* ___key0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341*, String_t*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Dummiesman.OBJObjectBuilder::SetMaterial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OBJObjectBuilder_SetMaterial_m14E76B9F35E6D475F9CF64D81A431328AFF709D9 (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.Void Dummiesman.OBJObjectBuilder/ObjLoopHash::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjLoopHash__ctor_m47684E1CB5D8B5CCC4D682B98F165C87AF514445 (ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Dummiesman.OBJObjectBuilder/ObjLoopHash,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m0058521363E7F49C437C430A754DB0F1B5379289 (Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE* __this, ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE*, ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Dummiesman.OBJObjectBuilder/ObjLoopHash,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m45B16A0848D5AA8855A51C20C2AA2B90A6516877 (Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE* __this, ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE*, ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, int32_t, const RuntimeMethod*))List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
inline void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared)(__this, ___collection0, method);
}
// System.Int32 Dummiesman.OBJObjectBuilder::get_PushedFaceCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OBJObjectBuilder_get_PushedFaceCount_m0800BDEDCCE5D0006D125DE33878F032D415366E_inline (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* __this, const RuntimeMethod* method) ;
// System.Void Dummiesman.OBJObjectBuilder::set_PushedFaceCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OBJObjectBuilder_set_PushedFaceCount_m59B64D90A70C329BAB9F7E36961ED9C4D23744D8_inline (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Dummiesman.OBJObjectBuilder/ObjLoopHash,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m63CFEDABA0B46AEB5DB36FFBCDDAD873A37C82FE (Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>::.ctor()
inline void Dictionary_2__ctor_m82637A3A6031C43DB9CC910DBD6DCC66D9459C8F (Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared)(__this, method);
}
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Dummiesman.DDSLoader::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DDSLoader_Load_mA93B6593C1BC710A3411B4CD9809284C43D9B1EC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ddsBytes0, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___updateMipmaps0, const RuntimeMethod* method) ;
// System.Void B83.Image.BMP.BMPLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BMPLoader__ctor_mE1F6B7D4F696A40E6932B4B64EB677F8E5303CFA (BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83* __this, const RuntimeMethod* method) ;
// B83.Image.BMP.BMPImage B83.Image.BMP.BMPLoader::LoadBMP(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BMPImage_tA6E059574F192A9BB574E7B260012D990055F05C* BMPLoader_LoadBMP_m0131F513F34E1A490D639C0F46E8E18B9DFB25B7 (BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___aData0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D B83.Image.BMP.BMPImage::ToTexture2D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* BMPImage_ToTexture2D_m0E65B93ED38B9B8308E4314459DEFAB4D3277F32 (BMPImage_tA6E059574F192A9BB574E7B260012D990055F05C* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Dummiesman.DDSLoader::Load(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DDSLoader_Load_mE78B735A0481C6BC72A7A1C769B13912EA626E87 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___ddsStream0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Dummiesman.TGALoader::Load(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TGALoader_Load_mFFD983DFCBF01C4B0C51AEC8829191B59E63AD20 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___TGAStream0, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6 (String_t* ___path0, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Dummiesman.TGALoader::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TGALoader_Load_mA6CEA84E76054B05FE07E43AA47C20F76FCE20A4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// B83.Image.BMP.BMPImage B83.Image.BMP.BMPLoader::LoadBMP(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BMPImage_tA6E059574F192A9BB574E7B260012D990055F05C* BMPLoader_LoadBMP_m6A621DEC5410845DE112A71843CEA2381C3DD4BD (BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___aData0, const RuntimeMethod* method) ;
// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Dummiesman.ImageLoaderHelper::VerifyFormat(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ImageLoaderHelper_VerifyFormat_m4BE5205BCD52E707673B72893FFD743B07CB5383 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_m2D14CCBAB9C60DC8D32C2443CCE3D34644822FAF (String_t* ___path0, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Texture::get_mipmapCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_mipmapCount_m9E68435BC8E30B9821525BFC8121C34A53774023 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m169F9873A21FB8DECA24DC1B8F06FB23D13BEE2A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors0, const RuntimeMethod* method) ;
// System.Void Dummiesman.ImageLoaderHelper::FillPixelArray(UnityEngine.Color32[],System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageLoaderHelper_FillPixelArray_m72B6D7E7DBBE2FFE61A038FA877217A68185A46C (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___fillArray0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pixelData1, int32_t ___bytesPerPixel2, bool ___bgra3, const RuntimeMethod* method) ;
// System.Int32 Dummiesman.TGALoader::GetBits(System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TGALoader_GetBits_m644EA9B2DA0F84A296F1779AB2E352B65383211E (uint8_t ___b0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// UnityEngine.Color32 Dummiesman.BinaryExtensions::ReadColor32RGB(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B BinaryExtensions_ReadColor32RGB_m4E6A56048B5909CE85A0EC79B45F161FD1AAAD86 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___r0, const RuntimeMethod* method) ;
// UnityEngine.Color32 Dummiesman.Extensions.ColorExtensions::FlipRB(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ColorExtensions_FlipRB_mAE6EB26665B0643B471B17C6E9CE67D18ADC0FDD (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color0, const RuntimeMethod* method) ;
// UnityEngine.Color32 Dummiesman.BinaryExtensions::ReadColor32RGBA(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B BinaryExtensions_ReadColor32RGBA_m08B1549AF8CA5D27A28E9B2A80BFD74E94B2E92D (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___r0, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// UnityEngine.Color32[] Dummiesman.TGALoader::LoadRawTGAData(System.IO.BinaryReader,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* TGALoader_LoadRawTGAData_mE8533A32EB9376821A049F17FC68B035F0CF6DA5 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___r0, int32_t ___bitDepth1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// UnityEngine.Color32[] Dummiesman.TGALoader::LoadRLETGAData(System.IO.BinaryReader,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* TGALoader_LoadRLETGAData_m697F5F83681111FDB4A4260CB501CBFB280DAEF7 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___r0, int32_t ___bitDepth1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Dummiesman.OBJLoader/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m8BCD1C1A2D807AAB9450E9565813690455C1B5D2 (U3CU3Ec__DisplayClass7_0_tB2FCD3BDD4423D7E34A7A4B5547E642A93881A72* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Dummiesman.OBJLoader/<>c__DisplayClass7_0::<Load>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CLoadU3Eb__0_mB7A2836C48583F685E7276DD780FA5A7F2EFBCF7 (U3CU3Ec__DisplayClass7_0_tB2FCD3BDD4423D7E34A7A4B5547E642A93881A72* __this, String_t* ___objectName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0C13BB2CCCC84DFF397E1F1708A35D6B855E83D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m829F1D3D238D6C188AE5440AC46680D7F3B66304_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!builderDict.TryGetValue(objectName, out currentBuilder))
		Dictionary_2_tC5A5AFCB8FF4726846814FB45FC66F49C9B0F82A* L_0 = __this->___builderDict_0;
		String_t* L_1 = ___objectName0;
		OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13** L_2 = (&__this->___currentBuilder_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m0C13BB2CCCC84DFF397E1F1708A35D6B855E83D3(L_0, L_1, L_2, Dictionary_2_TryGetValue_m0C13BB2CCCC84DFF397E1F1708A35D6B855E83D3_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// currentBuilder = new OBJObjectBuilder(objectName, this);
		String_t* L_5 = ___objectName0;
		OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* L_6 = __this->___U3CU3E4__this_2;
		OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* L_7 = (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13*)il2cpp_codegen_object_new(OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		OBJObjectBuilder__ctor_m559A7FFA399AEF65D8C9649F8122F554E3222ABB(L_7, L_5, L_6, NULL);
		__this->___currentBuilder_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentBuilder_1), (void*)L_7);
		// builderDict[objectName] = currentBuilder;
		Dictionary_2_tC5A5AFCB8FF4726846814FB45FC66F49C9B0F82A* L_8 = __this->___builderDict_0;
		String_t* L_9 = ___objectName0;
		OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* L_10 = __this->___currentBuilder_1;
		NullCheck(L_8);
		Dictionary_2_set_Item_m829F1D3D238D6C188AE5440AC46680D7F3B66304(L_8, L_9, L_10, Dictionary_2_set_Item_m829F1D3D238D6C188AE5440AC46680D7F3B66304_RuntimeMethod_var);
	}

IL_0041:
	{
		// };
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
// System.Void Dummiesman.OBJLoaderHelper::EnableMaterialTransparency(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OBJLoaderHelper_EnableMaterialTransparency_m712BFE3CF0D12A2621BA73D6C00891EDE2CC7BAA (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mtl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mtl.SetFloat("_Mode", 3f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___mtl0;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69, (3.0f), NULL);
		// mtl.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___mtl0;
		NullCheck(L_1);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_1, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, NULL);
		// mtl.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___mtl0;
		NullCheck(L_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_2, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
		// mtl.SetInt("_ZWrite", 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___mtl0;
		NullCheck(L_3);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_3, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 0, NULL);
		// mtl.DisableKeyword("_ALPHATEST_ON");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___mtl0;
		NullCheck(L_4);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_4, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, NULL);
		// mtl.EnableKeyword("_ALPHABLEND_ON");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___mtl0;
		NullCheck(L_5);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_5, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, NULL);
		// mtl.DisableKeyword("_ALPHAPREMULTIPLY_ON");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___mtl0;
		NullCheck(L_6);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_6, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, NULL);
		// mtl.renderQueue = 3000;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___mtl0;
		NullCheck(L_7);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_7, ((int32_t)3000), NULL);
		// }
		return;
	}
}
// System.Single Dummiesman.OBJLoaderHelper::FastFloatParse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OBJLoaderHelper_FastFloatParse_m07380DB133C955CE6B46998F088806D4BF24C76D (String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	float V_7 = 0.0f;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B30_0 = 0;
	{
		// if (input.Contains("e") || input.Contains("E"))
		String_t* L_0 = ___input0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_0, _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = ___input0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_6 = (bool)G_B3_0;
		bool L_4 = V_6;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// return float.Parse(input, CultureInfo.InvariantCulture);
		String_t* L_5 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_7;
		L_7 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_5, L_6, NULL);
		V_7 = L_7;
		goto IL_0162;
	}

IL_0034:
	{
		// float result = 0;
		V_0 = (0.0f);
		// int pos = 0;
		V_1 = 0;
		// int len = input.Length;
		String_t* L_8 = ___input0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		V_2 = L_9;
		// if (len == 0) return float.NaN;
		int32_t L_10 = V_2;
		V_8 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_8;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		// if (len == 0) return float.NaN;
		V_7 = (std::numeric_limits<float>::quiet_NaN());
		goto IL_0162;
	}

IL_0059:
	{
		// char c = input[0];
		String_t* L_12 = ___input0;
		NullCheck(L_12);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, 0, NULL);
		V_3 = L_13;
		// float sign = 1;
		V_4 = (1.0f);
		// if (c == '-')
		Il2CppChar L_14 = V_3;
		V_9 = (bool)((((int32_t)L_14) == ((int32_t)((int32_t)45)))? 1 : 0);
		bool L_15 = V_9;
		if (!L_15)
		{
			goto IL_0099;
		}
	}
	{
		// sign = -1;
		V_4 = (-1.0f);
		// ++pos;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// if (pos >= len) return float.NaN;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		V_10 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_10;
		if (!L_19)
		{
			goto IL_0098;
		}
	}
	{
		// if (pos >= len) return float.NaN;
		V_7 = (std::numeric_limits<float>::quiet_NaN());
		goto IL_0162;
	}

IL_0098:
	{
	}

IL_0099:
	{
		goto IL_00e4;
	}

IL_009b:
	{
		// if (pos >= len) return sign * result;
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		V_11 = (bool)((((int32_t)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		// if (pos >= len) return sign * result;
		float L_23 = V_4;
		float L_24 = V_0;
		V_7 = ((float)il2cpp_codegen_multiply(L_23, L_24));
		goto IL_0162;
	}

IL_00b4:
	{
		// c = input[pos++];
		String_t* L_25 = ___input0;
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		NullCheck(L_25);
		Il2CppChar L_28;
		L_28 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, L_27, NULL);
		V_3 = L_28;
		// if (c < '0' || c > '9') break;
		Il2CppChar L_29 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)48))))
		{
			goto IL_00cc;
		}
	}
	{
		Il2CppChar L_30 = V_3;
		G_B17_0 = ((((int32_t)L_30) > ((int32_t)((int32_t)57)))? 1 : 0);
		goto IL_00cd;
	}

IL_00cc:
	{
		G_B17_0 = 1;
	}

IL_00cd:
	{
		V_12 = (bool)G_B17_0;
		bool L_31 = V_12;
		if (!L_31)
		{
			goto IL_00d5;
		}
	}
	{
		// if (c < '0' || c > '9') break;
		goto IL_00e9;
	}

IL_00d5:
	{
		// result = (result * 10.0f) + (c - '0');
		float L_32 = V_0;
		Il2CppChar L_33 = V_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_32, (10.0f))), ((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, ((int32_t)48))))));
	}

IL_00e4:
	{
		// while (true) // breaks inside on pos >= len or non-digit character
		V_13 = (bool)1;
		goto IL_009b;
	}

IL_00e9:
	{
		// if (c != '.' && c != ',') return float.NaN;
		Il2CppChar L_34 = V_3;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)46))))
		{
			goto IL_00f8;
		}
	}
	{
		Il2CppChar L_35 = V_3;
		G_B24_0 = ((((int32_t)((((int32_t)L_35) == ((int32_t)((int32_t)44)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00f9;
	}

IL_00f8:
	{
		G_B24_0 = 0;
	}

IL_00f9:
	{
		V_14 = (bool)G_B24_0;
		bool L_36 = V_14;
		if (!L_36)
		{
			goto IL_0108;
		}
	}
	{
		// if (c != '.' && c != ',') return float.NaN;
		V_7 = (std::numeric_limits<float>::quiet_NaN());
		goto IL_0162;
	}

IL_0108:
	{
		// float exp = 0.1f;
		V_5 = (0.100000001f);
		goto IL_0150;
	}

IL_0111:
	{
		// c = input[pos++];
		String_t* L_37 = ___input0;
		int32_t L_38 = V_1;
		int32_t L_39 = L_38;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		NullCheck(L_37);
		Il2CppChar L_40;
		L_40 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_37, L_39, NULL);
		V_3 = L_40;
		// if (c < '0' || c > '9') return float.NaN;
		Il2CppChar L_41 = V_3;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)48))))
		{
			goto IL_012a;
		}
	}
	{
		Il2CppChar L_42 = V_3;
		G_B30_0 = ((((int32_t)L_42) > ((int32_t)((int32_t)57)))? 1 : 0);
		goto IL_012b;
	}

IL_012a:
	{
		G_B30_0 = 1;
	}

IL_012b:
	{
		V_15 = (bool)G_B30_0;
		bool L_43 = V_15;
		if (!L_43)
		{
			goto IL_013a;
		}
	}
	{
		// if (c < '0' || c > '9') return float.NaN;
		V_7 = (std::numeric_limits<float>::quiet_NaN());
		goto IL_0162;
	}

IL_013a:
	{
		// result += (c - '0') * exp;
		float L_44 = V_0;
		Il2CppChar L_45 = V_3;
		float L_46 = V_5;
		V_0 = ((float)il2cpp_codegen_add(L_44, ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_45, ((int32_t)48)))), L_46))));
		// exp *= 0.1f;
		float L_47 = V_5;
		V_5 = ((float)il2cpp_codegen_multiply(L_47, (0.100000001f)));
	}

IL_0150:
	{
		// while (pos < len)
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		V_16 = (bool)((((int32_t)L_48) < ((int32_t)L_49))? 1 : 0);
		bool L_50 = V_16;
		if (L_50)
		{
			goto IL_0111;
		}
	}
	{
		// return sign * result;
		float L_51 = V_4;
		float L_52 = V_0;
		V_7 = ((float)il2cpp_codegen_multiply(L_51, L_52));
		goto IL_0162;
	}

IL_0162:
	{
		// }
		float L_53 = V_7;
		return L_53;
	}
}
// System.Int32 Dummiesman.OBJLoaderHelper::FastIntParse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OBJLoaderHelper_FastIntParse_m5834DBB488847D56740AC0C9C5BA66981463D94D (String_t* ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// int result = 0;
		V_0 = 0;
		// bool isNegative = (input[0] == '-');
		String_t* L_0 = ___input0;
		NullCheck(L_0);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, 0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)45)))? 1 : 0);
		// for (int i = (isNegative) ? 1 : 0; i < input.Length; i++)
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_2 = G_B3_0;
		goto IL_002d;
	}

IL_0019:
	{
		// result = result * 10 + (input[i] - '0');
		int32_t L_3 = V_0;
		String_t* L_4 = ___input0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)10))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)48)))));
		// for (int i = (isNegative) ? 1 : 0; i < input.Length; i++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002d:
	{
		// for (int i = (isNegative) ? 1 : 0; i < input.Length; i++)
		int32_t L_8 = V_2;
		String_t* L_9 = ___input0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0019;
		}
	}
	{
		// return (isNegative) ? -result : result;
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B9_0 = L_13;
		goto IL_0042;
	}

IL_0040:
	{
		int32_t L_14 = V_0;
		G_B9_0 = ((-L_14));
	}

IL_0042:
	{
		V_4 = G_B9_0;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		int32_t L_15 = V_4;
		return L_15;
	}
}
// UnityEngine.Material Dummiesman.OBJLoaderHelper::CreateNullMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* OBJLoaderHelper_CreateNullMaterial_mC42C42AE60600FBC6098FD72BD0D7A18785891BB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2B5208CBD672BD56D417E00B07619D4FDBBD0C2);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	{
		// return new Material(Shader.Find("Standard (Specular setup)"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0;
		L_0 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralA2B5208CBD672BD56D417E00B07619D4FDBBD0C2, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 Dummiesman.OBJLoaderHelper::VectorFromStrArray(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OBJLoaderHelper_VectorFromStrArray_m0F38A45C6CE625C21E95C6585AF774A5FB939C13 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___cmps0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// float x = FastFloatParse(cmps[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___cmps0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		float L_3;
		L_3 = OBJLoaderHelper_FastFloatParse_m07380DB133C955CE6B46998F088806D4BF24C76D(L_2, NULL);
		V_0 = L_3;
		// float y = FastFloatParse(cmps[2]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___cmps0;
		NullCheck(L_4);
		int32_t L_5 = 2;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		float L_7;
		L_7 = OBJLoaderHelper_FastFloatParse_m07380DB133C955CE6B46998F088806D4BF24C76D(L_6, NULL);
		V_1 = L_7;
		// if (cmps.Length == 4)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___cmps0;
		NullCheck(L_8);
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)4))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		// float z = FastFloatParse(cmps[3]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___cmps0;
		NullCheck(L_10);
		int32_t L_11 = 3;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13;
		L_13 = OBJLoaderHelper_FastFloatParse_m07380DB133C955CE6B46998F088806D4BF24C76D(L_12, NULL);
		V_3 = L_13;
		// return new Vector3(x, y, z);
		float L_14 = V_0;
		float L_15 = V_1;
		float L_16 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		goto IL_0043;
	}

IL_0033:
	{
		// return new Vector2(x, y);
		float L_18 = V_0;
		float L_19 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), L_18, L_19, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_20, NULL);
		V_4 = L_21;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_4;
		return L_22;
	}
}
// UnityEngine.Color Dummiesman.OBJLoaderHelper::ColorFromStrArray(System.String[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F OBJLoaderHelper_ColorFromStrArray_m8A7AB684F3BFA566504D135F7E2EA219A10FE736 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___cmps0, float ___scalar1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float Kr = FastFloatParse(cmps[1]) * scalar;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___cmps0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		float L_3;
		L_3 = OBJLoaderHelper_FastFloatParse_m07380DB133C955CE6B46998F088806D4BF24C76D(L_2, NULL);
		float L_4 = ___scalar1;
		V_0 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		// float Kg = FastFloatParse(cmps[2]) * scalar;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___cmps0;
		NullCheck(L_5);
		int32_t L_6 = 2;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		float L_8;
		L_8 = OBJLoaderHelper_FastFloatParse_m07380DB133C955CE6B46998F088806D4BF24C76D(L_7, NULL);
		float L_9 = ___scalar1;
		V_1 = ((float)il2cpp_codegen_multiply(L_8, L_9));
		// float Kb = FastFloatParse(cmps[3]) * scalar;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___cmps0;
		NullCheck(L_10);
		int32_t L_11 = 3;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13;
		L_13 = OBJLoaderHelper_FastFloatParse_m07380DB133C955CE6B46998F088806D4BF24C76D(L_12, NULL);
		float L_14 = ___scalar1;
		V_2 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		// return new Color(Kr, Kg, Kb);
		float L_15 = V_0;
		float L_16 = V_1;
		float L_17 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_18), L_15, L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = V_3;
		return L_19;
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
// System.Int32 Dummiesman.OBJObjectBuilder::get_PushedFaceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OBJObjectBuilder_get_PushedFaceCount_m0800BDEDCCE5D0006D125DE33878F032D415366E (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* __this, const RuntimeMethod* method) 
{
	{
		// public int PushedFaceCount { get; private set; } = 0;
		int32_t L_0 = __this->___U3CPushedFaceCountU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Dummiesman.OBJObjectBuilder::set_PushedFaceCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OBJObjectBuilder_set_PushedFaceCount_m59B64D90A70C329BAB9F7E36961ED9C4D23744D8 (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int PushedFaceCount { get; private set; } = 0;
		int32_t L_0 = ___value0;
		__this->___U3CPushedFaceCountU3Ek__BackingField_0 = L_0;
		return;
	}
}
// UnityEngine.GameObject Dummiesman.OBJObjectBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* OBJObjectBuilder_Build_mA827E9316CA93D1CD7AAEBC13B9CED3FE362F556 (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m2E9E4B0E50E5FBA0C7E62ACEAD7A0327267C4C2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mFD7867D61B454D815AFE71D04D27540FAFBFF091_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m831221DAC53C65F38539F4A37520985E8DC557AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m2712E92CF36B85D20B01493D39F2BD4504C0BE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1ED4783F9B383A3AAA727AA5F6241652CEDF91FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6F709DC1AED45A132D5B2CE5C6912F4FB3BA6872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAD3C13EC90677751AE02D5DF4E981C2831DD1C1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFF379184A888CEA6C7DD77DD5DD36E5819C98D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD43CA99389807F2DF5FE76DBEC3D4174C787BE98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_1 = NULL;
	int32_t V_2 = 0;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_3 = NULL;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_4 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_5 = NULL;
	Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	KeyValuePair_2_tAB3B085BB59FEFAE0C5C3A1A32259012890DC6B0 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	KeyValuePair_2_tAB3B085BB59FEFAE0C5C3A1A32259012890DC6B0 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_14 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B13_0 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B13_1 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B12_0 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B12_1 = NULL;
	int32_t G_B14_0 = 0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B14_1 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B14_2 = NULL;
	{
		// var go = new GameObject(_name);
		String_t* L_0 = __this->____name_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		V_0 = L_1;
		// var mr = go.AddComponent<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3;
		L_3 = GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D(L_2, GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		V_1 = L_3;
		// int submesh = 0;
		V_2 = 0;
		// Material[] materialArray = new Material[_materialIndices.Count];
		Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* L_4 = __this->____materialIndices_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m831221DAC53C65F38539F4A37520985E8DC557AF(L_4, Dictionary_2_get_Count_m831221DAC53C65F38539F4A37520985E8DC557AF_RuntimeMethod_var);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6 = (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)SZArrayNew(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_3 = L_6;
		// foreach (var kvp in _materialIndices) {
		Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* L_7 = __this->____materialIndices_4;
		NullCheck(L_7);
		Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2 L_8;
		L_8 = Dictionary_2_GetEnumerator_m2E9E4B0E50E5FBA0C7E62ACEAD7A0327267C4C2E(L_7, Dictionary_2_GetEnumerator_m2E9E4B0E50E5FBA0C7E62ACEAD7A0327267C4C2E_RuntimeMethod_var);
		V_6 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e3:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1ED4783F9B383A3AAA727AA5F6241652CEDF91FF((&V_6), Enumerator_Dispose_m1ED4783F9B383A3AAA727AA5F6241652CEDF91FF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d5_1;
			}

IL_003a_1:
			{
				// foreach (var kvp in _materialIndices) {
				KeyValuePair_2_tAB3B085BB59FEFAE0C5C3A1A32259012890DC6B0 L_9;
				L_9 = Enumerator_get_Current_mAD3C13EC90677751AE02D5DF4E981C2831DD1C1C_inline((&V_6), Enumerator_get_Current_mAD3C13EC90677751AE02D5DF4E981C2831DD1C1C_RuntimeMethod_var);
				V_7 = L_9;
				// Material material = null;
				V_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
				// if (_loader.Materials == null) {
				OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* L_10 = __this->____loader_1;
				NullCheck(L_10);
				Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F* L_11 = L_10->___Materials_4;
				V_9 = (bool)((((RuntimeObject*)(Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_12 = V_9;
				if (!L_12)
				{
					goto IL_0075_1;
				}
			}
			{
				// material = OBJLoaderHelper.CreateNullMaterial();
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
				L_13 = OBJLoaderHelper_CreateNullMaterial_mC42C42AE60600FBC6098FD72BD0D7A18785891BB(NULL);
				V_8 = L_13;
				// material.name = kvp.Key;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = V_8;
				String_t* L_15;
				L_15 = KeyValuePair_2_get_Key_mFF379184A888CEA6C7DD77DD5DD36E5819C98D99_inline((&V_7), KeyValuePair_2_get_Key_mFF379184A888CEA6C7DD77DD5DD36E5819C98D99_RuntimeMethod_var);
				NullCheck(L_14);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_14, L_15, NULL);
				goto IL_00cb_1;
			}

IL_0075_1:
			{
				// if (!_loader.Materials.TryGetValue(kvp.Key, out material)) {
				OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* L_16 = __this->____loader_1;
				NullCheck(L_16);
				Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F* L_17 = L_16->___Materials_4;
				String_t* L_18;
				L_18 = KeyValuePair_2_get_Key_mFF379184A888CEA6C7DD77DD5DD36E5819C98D99_inline((&V_7), KeyValuePair_2_get_Key_mFF379184A888CEA6C7DD77DD5DD36E5819C98D99_RuntimeMethod_var);
				NullCheck(L_17);
				bool L_19;
				L_19 = Dictionary_2_TryGetValue_mFD7867D61B454D815AFE71D04D27540FAFBFF091(L_17, L_18, (&V_8), Dictionary_2_TryGetValue_mFD7867D61B454D815AFE71D04D27540FAFBFF091_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
				bool L_20 = V_10;
				if (!L_20)
				{
					goto IL_00ca_1;
				}
			}
			{
				// material = OBJLoaderHelper.CreateNullMaterial();
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21;
				L_21 = OBJLoaderHelper_CreateNullMaterial_mC42C42AE60600FBC6098FD72BD0D7A18785891BB(NULL);
				V_8 = L_21;
				// material.name = kvp.Key;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = V_8;
				String_t* L_23;
				L_23 = KeyValuePair_2_get_Key_mFF379184A888CEA6C7DD77DD5DD36E5819C98D99_inline((&V_7), KeyValuePair_2_get_Key_mFF379184A888CEA6C7DD77DD5DD36E5819C98D99_RuntimeMethod_var);
				NullCheck(L_22);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_22, L_23, NULL);
				// _loader.Materials[kvp.Key] = material;
				OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* L_24 = __this->____loader_1;
				NullCheck(L_24);
				Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F* L_25 = L_24->___Materials_4;
				String_t* L_26;
				L_26 = KeyValuePair_2_get_Key_mFF379184A888CEA6C7DD77DD5DD36E5819C98D99_inline((&V_7), KeyValuePair_2_get_Key_mFF379184A888CEA6C7DD77DD5DD36E5819C98D99_RuntimeMethod_var);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = V_8;
				NullCheck(L_25);
				Dictionary_2_set_Item_m2712E92CF36B85D20B01493D39F2BD4504C0BE7B(L_25, L_26, L_27, Dictionary_2_set_Item_m2712E92CF36B85D20B01493D39F2BD4504C0BE7B_RuntimeMethod_var);
			}

IL_00ca_1:
			{
			}

IL_00cb_1:
			{
				// materialArray[submesh] = material;
				MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_28 = V_3;
				int32_t L_29 = V_2;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = V_8;
				NullCheck(L_28);
				ArrayElementTypeCheck (L_28, L_30);
				(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_30);
				// submesh++;
				int32_t L_31 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
			}

IL_00d5_1:
			{
				// foreach (var kvp in _materialIndices) {
				bool L_32;
				L_32 = Enumerator_MoveNext_m6F709DC1AED45A132D5B2CE5C6912F4FB3BA6872((&V_6), Enumerator_MoveNext_m6F709DC1AED45A132D5B2CE5C6912F4FB3BA6872_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_003a_1;
				}
			}
			{
				goto IL_00f2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f2:
	{
		// mr.sharedMaterials = materialArray;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_33 = V_1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_34 = V_3;
		NullCheck(L_33);
		Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2(L_33, L_34, NULL);
		// var mf = go.AddComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_0;
		NullCheck(L_35);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_36;
		L_36 = GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94(L_35, GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		V_4 = L_36;
		// submesh = 0;
		V_2 = 0;
		// var msh = new Mesh() {
		//     name = _name,
		//     indexFormat = (_vertices.Count > 65535) ? UnityEngine.Rendering.IndexFormat.UInt32 : UnityEngine.Rendering.IndexFormat.UInt16,
		//     subMeshCount = _materialIndices.Count
		// };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_37, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_38 = L_37;
		String_t* L_39 = __this->____name_2;
		NullCheck(L_38);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_38, L_39, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_40 = L_38;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_41 = __this->____vertices_7;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_41, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		G_B12_0 = L_40;
		G_B12_1 = L_40;
		if ((((int32_t)L_42) > ((int32_t)((int32_t)65535))))
		{
			G_B13_0 = L_40;
			G_B13_1 = L_40;
			goto IL_012c;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_012d;
	}

IL_012c:
	{
		G_B14_0 = 1;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_012d:
	{
		NullCheck(G_B14_1);
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(G_B14_1, G_B14_0, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_43 = G_B14_2;
		Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* L_44 = __this->____materialIndices_4;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = Dictionary_2_get_Count_m831221DAC53C65F38539F4A37520985E8DC557AF(L_44, Dictionary_2_get_Count_m831221DAC53C65F38539F4A37520985E8DC557AF_RuntimeMethod_var);
		NullCheck(L_43);
		Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28(L_43, L_45, NULL);
		V_5 = L_43;
		// msh.SetVertices(_vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_46 = V_5;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_47 = __this->____vertices_7;
		NullCheck(L_46);
		Mesh_SetVertices_mCE01139EEEC3D10B4A6CEA1749FD84DABC53599E(L_46, L_47, NULL);
		// msh.SetNormals(_normals);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_48 = V_5;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_49 = __this->____normals_8;
		NullCheck(L_48);
		Mesh_SetNormals_mB4072A4D2600768FD62BC9CAAFF8C43955A4A365(L_48, L_49, NULL);
		// msh.SetUVs(0, _uvs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_50 = V_5;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_51 = __this->____uvs_9;
		NullCheck(L_50);
		Mesh_SetUVs_m5A7A6EC14A621579B7138F2EF9BECA60E880A8D7(L_50, 0, L_51, NULL);
		// foreach (var kvp in _materialIndices) {
		Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* L_52 = __this->____materialIndices_4;
		NullCheck(L_52);
		Enumerator_t2B62C6EA9375CE714A32E123DFDDDC13C21DDDB2 L_53;
		L_53 = Dictionary_2_GetEnumerator_m2E9E4B0E50E5FBA0C7E62ACEAD7A0327267C4C2E(L_52, Dictionary_2_GetEnumerator_m2E9E4B0E50E5FBA0C7E62ACEAD7A0327267C4C2E_RuntimeMethod_var);
		V_11 = L_53;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01ac:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1ED4783F9B383A3AAA727AA5F6241652CEDF91FF((&V_11), Enumerator_Dispose_m1ED4783F9B383A3AAA727AA5F6241652CEDF91FF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01a1_1;
			}

IL_0182_1:
			{
				// foreach (var kvp in _materialIndices) {
				KeyValuePair_2_tAB3B085BB59FEFAE0C5C3A1A32259012890DC6B0 L_54;
				L_54 = Enumerator_get_Current_mAD3C13EC90677751AE02D5DF4E981C2831DD1C1C_inline((&V_11), Enumerator_get_Current_mAD3C13EC90677751AE02D5DF4E981C2831DD1C1C_RuntimeMethod_var);
				V_12 = L_54;
				// msh.SetTriangles(kvp.Value, submesh);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_55 = V_5;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_56;
				L_56 = KeyValuePair_2_get_Value_mD43CA99389807F2DF5FE76DBEC3D4174C787BE98_inline((&V_12), KeyValuePair_2_get_Value_mD43CA99389807F2DF5FE76DBEC3D4174C787BE98_RuntimeMethod_var);
				int32_t L_57 = V_2;
				NullCheck(L_55);
				Mesh_SetTriangles_mD495DA0B00DB0E60A2B7B500D644F4470C1D61DB(L_55, L_56, L_57, NULL);
				// submesh++;
				int32_t L_58 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_58, 1));
			}

IL_01a1_1:
			{
				// foreach (var kvp in _materialIndices) {
				bool L_59;
				L_59 = Enumerator_MoveNext_m6F709DC1AED45A132D5B2CE5C6912F4FB3BA6872((&V_11), Enumerator_MoveNext_m6F709DC1AED45A132D5B2CE5C6912F4FB3BA6872_RuntimeMethod_var);
				if (L_59)
				{
					goto IL_0182_1;
				}
			}
			{
				goto IL_01bb;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01bb:
	{
		// if (recalculateNormals)
		bool L_60 = __this->___recalculateNormals_10;
		V_13 = L_60;
		bool L_61 = V_13;
		if (!L_61)
		{
			goto IL_01cf;
		}
	}
	{
		// msh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_62 = V_5;
		NullCheck(L_62);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_62, NULL);
	}

IL_01cf:
	{
		// msh.RecalculateTangents();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_63 = V_5;
		NullCheck(L_63);
		Mesh_RecalculateTangents_m92AC413FAF889C5E811D86DCE0C25ED4625825EC(L_63, NULL);
		// msh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_64 = V_5;
		NullCheck(L_64);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_64, NULL);
		// mf.sharedMesh = msh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_65 = V_4;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_66 = V_5;
		NullCheck(L_65);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_65, L_66, NULL);
		// return go;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = V_0;
		V_14 = L_67;
		goto IL_01ee;
	}

IL_01ee:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = V_14;
		return L_68;
	}
}
// System.Void Dummiesman.OBJObjectBuilder::SetMaterial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OBJObjectBuilder_SetMaterial_m14E76B9F35E6D475F9CF64D81A431328AFF709D9 (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m56F2C16A68E7E1B774D8B14B3DF74FA825C5CC9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m529105CC1CF8E638D570A195BF4D8BA4984EB3E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!_materialIndices.TryGetValue(name, out _currentIndexList))
		Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* L_0 = __this->____materialIndices_4;
		String_t* L_1 = ___name0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** L_2 = (&__this->____currentIndexList_5);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m56F2C16A68E7E1B774D8B14B3DF74FA825C5CC9C(L_0, L_1, L_2, Dictionary_2_TryGetValue_m56F2C16A68E7E1B774D8B14B3DF74FA825C5CC9C_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// _currentIndexList = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_5, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->____currentIndexList_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentIndexList_5), (void*)L_5);
		// _materialIndices[name] = _currentIndexList;
		Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* L_6 = __this->____materialIndices_4;
		String_t* L_7 = ___name0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = __this->____currentIndexList_5;
		NullCheck(L_6);
		Dictionary_2_set_Item_m529105CC1CF8E638D570A195BF4D8BA4984EB3E8(L_6, L_7, L_8, Dictionary_2_set_Item_m529105CC1CF8E638D570A195BF4D8BA4984EB3E8_RuntimeMethod_var);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Dummiesman.OBJObjectBuilder::PushFace(System.String,System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OBJObjectBuilder_PushFace_mEB8693BC3E91FBC712492DD2570C540D89DD1213 (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* __this, String_t* ___material0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___vertexIndices1, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___normalIndices2, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___uvIndices3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m45B16A0848D5AA8855A51C20C2AA2B90A6516877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0058521363E7F49C437C430A754DB0F1B5379289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* V_7 = NULL;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t V_17 = 0;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* G_B8_0 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* G_B7_0 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* G_B9_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* G_B10_1 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* G_B12_0 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* G_B11_0 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* G_B13_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* G_B14_1 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B16_0 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B15_0 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B17_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B18_0;
	memset((&G_B18_0), 0, sizeof(G_B18_0));
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B18_1 = NULL;
	{
		// if (vertexIndices.Count < 3) {
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___vertexIndices1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)3))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_02a9;
	}

IL_0014:
	{
		// if (material != _lastMaterial) {
		String_t* L_3 = ___material0;
		String_t* L_4 = __this->____lastMaterial_6;
		bool L_5;
		L_5 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_3, L_4, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// SetMaterial(material);
		String_t* L_7 = ___material0;
		OBJObjectBuilder_SetMaterial_m14E76B9F35E6D475F9CF64D81A431328AFF709D9(__this, L_7, NULL);
		// _lastMaterial = material;
		String_t* L_8 = ___material0;
		__this->____lastMaterial_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastMaterial_6), (void*)L_8);
	}

IL_0035:
	{
		// int[] indexRemap = new int[vertexIndices.Count];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = ___vertexIndices1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_9, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_0 = L_11;
		// for (int i = 0; i < vertexIndices.Count; i++) {
		V_3 = 0;
		goto IL_01a0;
	}

IL_0048:
	{
		// int vertexIndex = vertexIndices[i];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = ___vertexIndices1;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_12, L_13, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_4 = L_14;
		// int normalIndex = normalIndices[i];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_15 = ___normalIndices2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_15, L_16, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_5 = L_17;
		// int uvIndex = uvIndices[i];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = ___uvIndices3;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20;
		L_20 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_18, L_19, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_6 = L_20;
		// var hashObj = new ObjLoopHash() {
		//     vertexIndex = vertexIndex,
		//     normalIndex = normalIndex,
		//     uvIndex = uvIndex
		// };
		ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* L_21 = (ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B*)il2cpp_codegen_object_new(ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ObjLoopHash__ctor_m47684E1CB5D8B5CCC4D682B98F165C87AF514445(L_21, NULL);
		ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* L_22 = L_21;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		L_22->___vertexIndex_0 = L_23;
		ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* L_24 = L_22;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		L_24->___normalIndex_1 = L_25;
		ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* L_26 = L_24;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		L_26->___uvIndex_2 = L_27;
		V_7 = L_26;
		// int remap = -1;
		V_8 = (-1);
		// if (!_globalIndexRemap.TryGetValue(hashObj, out remap)) {
		Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE* L_28 = __this->____globalIndexRemap_3;
		ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* L_29 = V_7;
		NullCheck(L_28);
		bool L_30;
		L_30 = Dictionary_2_TryGetValue_m0058521363E7F49C437C430A754DB0F1B5379289(L_28, L_29, (&V_8), Dictionary_2_TryGetValue_m0058521363E7F49C437C430A754DB0F1B5379289_RuntimeMethod_var);
		V_9 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_9;
		if (!L_31)
		{
			goto IL_0196;
		}
	}
	{
		// _globalIndexRemap.Add(hashObj, _vertices.Count);
		Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE* L_32 = __this->____globalIndexRemap_3;
		ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* L_33 = V_7;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_34 = __this->____vertices_7;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_34, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_32);
		Dictionary_2_Add_m45B16A0848D5AA8855A51C20C2AA2B90A6516877(L_32, L_33, L_35, Dictionary_2_Add_m45B16A0848D5AA8855A51C20C2AA2B90A6516877_RuntimeMethod_var);
		// remap = _vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36 = __this->____vertices_7;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_36, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_8 = L_37;
		// _vertices.Add((vertexIndex >= 0 && vertexIndex < _loader.Vertices.Count) ? _loader.Vertices[vertexIndex] : Vector3.zero);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_38 = __this->____vertices_7;
		int32_t L_39 = V_4;
		G_B7_0 = L_38;
		if ((((int32_t)L_39) < ((int32_t)0)))
		{
			G_B8_0 = L_38;
			goto IL_00e8;
		}
	}
	{
		int32_t L_40 = V_4;
		OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* L_41 = __this->____loader_1;
		NullCheck(L_41);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_42 = L_41->___Vertices_1;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_42, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		G_B8_0 = G_B7_0;
		if ((((int32_t)L_40) < ((int32_t)L_43)))
		{
			G_B9_0 = G_B7_0;
			goto IL_00ef;
		}
	}

IL_00e8:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B10_0 = L_44;
		G_B10_1 = G_B8_0;
		goto IL_0101;
	}

IL_00ef:
	{
		OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* L_45 = __this->____loader_1;
		NullCheck(L_45);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_46 = L_45->___Vertices_1;
		int32_t L_47 = V_4;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_46, L_47, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		G_B10_0 = L_48;
		G_B10_1 = G_B9_0;
	}

IL_0101:
	{
		NullCheck(G_B10_1);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(G_B10_1, G_B10_0, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// _normals.Add((normalIndex >= 0 && normalIndex < _loader.Normals.Count) ? _loader.Normals[normalIndex] : Vector3.zero);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_49 = __this->____normals_8;
		int32_t L_50 = V_5;
		G_B11_0 = L_49;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			G_B12_0 = L_49;
			goto IL_0126;
		}
	}
	{
		int32_t L_51 = V_5;
		OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* L_52 = __this->____loader_1;
		NullCheck(L_52);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_53 = L_52->___Normals_2;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_53, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		G_B12_0 = G_B11_0;
		if ((((int32_t)L_51) < ((int32_t)L_54)))
		{
			G_B13_0 = G_B11_0;
			goto IL_012d;
		}
	}

IL_0126:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B14_0 = L_55;
		G_B14_1 = G_B12_0;
		goto IL_013f;
	}

IL_012d:
	{
		OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* L_56 = __this->____loader_1;
		NullCheck(L_56);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_57 = L_56->___Normals_2;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_57, L_58, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		G_B14_0 = L_59;
		G_B14_1 = G_B13_0;
	}

IL_013f:
	{
		NullCheck(G_B14_1);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(G_B14_1, G_B14_0, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// _uvs.Add((uvIndex >= 0 && uvIndex < _loader.UVs.Count) ? _loader.UVs[uvIndex] : Vector2.zero);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_60 = __this->____uvs_9;
		int32_t L_61 = V_6;
		G_B15_0 = L_60;
		if ((((int32_t)L_61) < ((int32_t)0)))
		{
			G_B16_0 = L_60;
			goto IL_0164;
		}
	}
	{
		int32_t L_62 = V_6;
		OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* L_63 = __this->____loader_1;
		NullCheck(L_63);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_64 = L_63->___UVs_3;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_64, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		G_B16_0 = G_B15_0;
		if ((((int32_t)L_62) < ((int32_t)L_65)))
		{
			G_B17_0 = G_B15_0;
			goto IL_016b;
		}
	}

IL_0164:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		G_B18_0 = L_66;
		G_B18_1 = G_B16_0;
		goto IL_017d;
	}

IL_016b:
	{
		OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* L_67 = __this->____loader_1;
		NullCheck(L_67);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_68 = L_67->___UVs_3;
		int32_t L_69 = V_6;
		NullCheck(L_68);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		L_70 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_68, L_69, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		G_B18_0 = L_70;
		G_B18_1 = G_B17_0;
	}

IL_017d:
	{
		NullCheck(G_B18_1);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(G_B18_1, G_B18_0, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// if (normalIndex < 0)
		int32_t L_71 = V_5;
		V_10 = (bool)((((int32_t)L_71) < ((int32_t)0))? 1 : 0);
		bool L_72 = V_10;
		if (!L_72)
		{
			goto IL_0195;
		}
	}
	{
		// recalculateNormals = true;
		__this->___recalculateNormals_10 = (bool)1;
	}

IL_0195:
	{
	}

IL_0196:
	{
		// indexRemap[i] = remap;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_0;
		int32_t L_74 = V_3;
		int32_t L_75 = V_8;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (int32_t)L_75);
		// for (int i = 0; i < vertexIndices.Count; i++) {
		int32_t L_76 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01a0:
	{
		// for (int i = 0; i < vertexIndices.Count; i++) {
		int32_t L_77 = V_3;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_78 = ___vertexIndices1;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_78, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_11 = (bool)((((int32_t)L_77) < ((int32_t)L_79))? 1 : 0);
		bool L_80 = V_11;
		if (L_80)
		{
			goto IL_0048;
		}
	}
	{
		// if (indexRemap.Length == 3) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = V_0;
		NullCheck(L_81);
		V_12 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length))) == ((int32_t)3))? 1 : 0);
		bool L_82 = V_12;
		if (!L_82)
		{
			goto IL_01e9;
		}
	}
	{
		// _currentIndexList.AddRange(new int[] { indexRemap[0], indexRemap[1], indexRemap[2] });
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_83 = __this->____currentIndexList_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = L_84;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_0;
		NullCheck(L_86);
		int32_t L_87 = 0;
		int32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_88);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = L_85;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = V_0;
		NullCheck(L_90);
		int32_t L_91 = 1;
		int32_t L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_92);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = L_89;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = V_0;
		NullCheck(L_94);
		int32_t L_95 = 2;
		int32_t L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_96);
		NullCheck(L_83);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_83, (RuntimeObject*)L_93, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		goto IL_0296;
	}

IL_01e9:
	{
		// } else if (indexRemap.Length == 4) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = V_0;
		NullCheck(L_97);
		V_13 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_97)->max_length))) == ((int32_t)4))? 1 : 0);
		bool L_98 = V_13;
		if (!L_98)
		{
			goto IL_0241;
		}
	}
	{
		// _currentIndexList.AddRange(new int[] { indexRemap[0], indexRemap[1], indexRemap[2] });
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_99 = __this->____currentIndexList_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = L_100;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = V_0;
		NullCheck(L_102);
		int32_t L_103 = 0;
		int32_t L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_104);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = L_101;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = V_0;
		NullCheck(L_106);
		int32_t L_107 = 1;
		int32_t L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_108);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = L_105;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_0;
		NullCheck(L_110);
		int32_t L_111 = 2;
		int32_t L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_112);
		NullCheck(L_99);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_99, (RuntimeObject*)L_109, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		// _currentIndexList.AddRange(new int[] { indexRemap[2], indexRemap[3], indexRemap[0] });
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_113 = __this->____currentIndexList_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_114 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = L_114;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = V_0;
		NullCheck(L_116);
		int32_t L_117 = 2;
		int32_t L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_118);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = L_115;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = V_0;
		NullCheck(L_120);
		int32_t L_121 = 3;
		int32_t L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_122);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = L_119;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = V_0;
		NullCheck(L_124);
		int32_t L_125 = 0;
		int32_t L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_126);
		NullCheck(L_113);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_113, (RuntimeObject*)L_123, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		goto IL_0296;
	}

IL_0241:
	{
		// } else if (indexRemap.Length > 4) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = V_0;
		NullCheck(L_127);
		V_14 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_127)->max_length))) > ((int32_t)4))? 1 : 0);
		bool L_128 = V_14;
		if (!L_128)
		{
			goto IL_0296;
		}
	}
	{
		// for (int i = indexRemap.Length - 1; i >= 2; i--) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = V_0;
		NullCheck(L_129);
		V_15 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_129)->max_length)), 1));
		goto IL_0287;
	}

IL_0257:
	{
		// _currentIndexList.AddRange(new int[] { indexRemap[0], indexRemap[i - 1], indexRemap[i] });
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_130 = __this->____currentIndexList_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_131 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = L_131;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = V_0;
		NullCheck(L_133);
		int32_t L_134 = 0;
		int32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_135);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = L_132;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = V_0;
		int32_t L_138 = V_15;
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
		int32_t L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_140);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = L_136;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_142 = V_0;
		int32_t L_143 = V_15;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		int32_t L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_145);
		NullCheck(L_130);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_130, (RuntimeObject*)L_141, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		// for (int i = indexRemap.Length - 1; i >= 2; i--) {
		int32_t L_146 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_subtract(L_146, 1));
	}

IL_0287:
	{
		// for (int i = indexRemap.Length - 1; i >= 2; i--) {
		int32_t L_147 = V_15;
		V_16 = (bool)((((int32_t)((((int32_t)L_147) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_148 = V_16;
		if (L_148)
		{
			goto IL_0257;
		}
	}
	{
	}

IL_0296:
	{
		// PushedFaceCount++;
		int32_t L_149;
		L_149 = OBJObjectBuilder_get_PushedFaceCount_m0800BDEDCCE5D0006D125DE33878F032D415366E_inline(__this, NULL);
		V_17 = L_149;
		int32_t L_150 = V_17;
		OBJObjectBuilder_set_PushedFaceCount_m59B64D90A70C329BAB9F7E36961ED9C4D23744D8_inline(__this, ((int32_t)il2cpp_codegen_add(L_150, 1)), NULL);
	}

IL_02a9:
	{
		// }
		return;
	}
}
// System.Void Dummiesman.OBJObjectBuilder::.ctor(System.String,Dummiesman.OBJLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OBJObjectBuilder__ctor_m559A7FFA399AEF65D8C9649F8122F554E3222ABB (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* __this, String_t* ___name0, OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* ___loader1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m63CFEDABA0B46AEB5DB36FFBCDDAD873A37C82FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m82637A3A6031C43DB9CC910DBD6DCC66D9459C8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int PushedFaceCount { get; private set; } = 0;
		__this->___U3CPushedFaceCountU3Ek__BackingField_0 = 0;
		// private Dictionary<ObjLoopHash, int> _globalIndexRemap = new Dictionary<ObjLoopHash, int>();
		Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE* L_0 = (Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE*)il2cpp_codegen_object_new(Dictionary_2_tEAE7D7DBCEF056EB634E23611F29B7D56A4614FE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m63CFEDABA0B46AEB5DB36FFBCDDAD873A37C82FE(L_0, Dictionary_2__ctor_m63CFEDABA0B46AEB5DB36FFBCDDAD873A37C82FE_RuntimeMethod_var);
		__this->____globalIndexRemap_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____globalIndexRemap_3), (void*)L_0);
		// private Dictionary<string, List<int>> _materialIndices = new Dictionary<string, List<int>>();
		Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* L_1 = (Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341*)il2cpp_codegen_object_new(Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m82637A3A6031C43DB9CC910DBD6DCC66D9459C8F(L_1, Dictionary_2__ctor_m82637A3A6031C43DB9CC910DBD6DCC66D9459C8F_RuntimeMethod_var);
		__this->____materialIndices_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____materialIndices_4), (void*)L_1);
		// private string _lastMaterial = null;
		__this->____lastMaterial_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastMaterial_6), (void*)(String_t*)NULL);
		// private List<Vector3> _vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_2, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->____vertices_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_7), (void*)L_2);
		// private List<Vector3> _normals = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_3, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->____normals_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____normals_8), (void*)L_3);
		// private List<Vector2> _uvs = new List<Vector2>();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_4 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_4, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		__this->____uvs_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uvs_9), (void*)L_4);
		// private bool recalculateNormals = false;
		__this->___recalculateNormals_10 = (bool)0;
		// public OBJObjectBuilder(string name, OBJLoader loader) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _name = name;
		String_t* L_5 = ___name0;
		__this->____name_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_2), (void*)L_5);
		// _loader = loader;
		OBJLoader_tB5927F8DB92B05302380425D21E9BCE654FD66BF* L_6 = ___loader1;
		__this->____loader_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____loader_1), (void*)L_6);
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
// System.Boolean Dummiesman.OBJObjectBuilder/ObjLoopHash::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjLoopHash_Equals_m4F9C4B4A8E87AF0AF1EC4362D40042EE1DD10A02 (ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	{
		// if (!(obj is ObjLoopHash))
		RuntimeObject* L_0 = ___obj0;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B*)((ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B*)IsInstClass((RuntimeObject*)L_0, ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_004c;
	}

IL_0015:
	{
		// var hash = obj as ObjLoopHash;
		RuntimeObject* L_2 = ___obj0;
		V_0 = ((ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B*)IsInstClass((RuntimeObject*)L_2, ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B_il2cpp_TypeInfo_var));
		// return (hash.vertexIndex == vertexIndex) && (hash.uvIndex == uvIndex) && (hash.normalIndex == normalIndex);
		ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___vertexIndex_0;
		int32_t L_5 = __this->___vertexIndex_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0048;
		}
	}
	{
		ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___uvIndex_2;
		int32_t L_8 = __this->___uvIndex_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0048;
		}
	}
	{
		ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___normalIndex_1;
		int32_t L_11 = __this->___normalIndex_1;
		G_B6_0 = ((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B6_0 = 0;
	}

IL_0049:
	{
		V_2 = (bool)G_B6_0;
		goto IL_004c;
	}

IL_004c:
	{
		// }
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Int32 Dummiesman.OBJObjectBuilder/ObjLoopHash::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjLoopHash_GetHashCode_m2701CFFA34CC705850631AF646BDCD02A09F3E64 (ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hc = 3;
		V_0 = 3;
		// hc = unchecked(hc * 314159 + vertexIndex);
		int32_t L_0 = V_0;
		int32_t L_1 = __this->___vertexIndex_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)314159))), L_1));
		// hc = unchecked(hc * 314159 + normalIndex);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___normalIndex_1;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)314159))), L_3));
		// hc = unchecked(hc * 314159 + uvIndex);
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___uvIndex_2;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)314159))), L_5));
		// return hc;
		int32_t L_6 = V_0;
		V_1 = L_6;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Void Dummiesman.OBJObjectBuilder/ObjLoopHash::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjLoopHash__ctor_m47684E1CB5D8B5CCC4D682B98F165C87AF514445 (ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B* __this, const RuntimeMethod* method) 
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
// System.String Dummiesman.StringExtensions::Clean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtensions_Clean_mD93A939367A5AA81F8A40FBC2353CE6A259F22EE (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// string rstr = str.Replace('\t', ' ');
		String_t* L_0 = ___str0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_0, ((int32_t)9), ((int32_t)32), NULL);
		V_0 = L_1;
		goto IL_001f;
	}

IL_000e:
	{
		// rstr = rstr.Replace("  ", " ");
		String_t* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_3;
	}

IL_001f:
	{
		// while (rstr.Contains("  "))
		String_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_4, _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_000e;
		}
	}
	{
		// return rstr.Trim();
		String_t* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_7, NULL);
		V_2 = L_8;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		String_t* L_9 = V_2;
		return L_9;
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
// UnityEngine.Color32 Dummiesman.BinaryExtensions::ReadColor32RGBR(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B BinaryExtensions_ReadColor32RGBR_m1C4A27AA84DE4014969C42B92336CAE99BE8F952 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___r0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var bytes = r.ReadBytes(4);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___r0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_0, 4);
		V_0 = L_1;
		// return new Color32(bytes[0], bytes[1], bytes[2], 255);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_11), L_4, L_7, L_10, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12 = V_1;
		return L_12;
	}
}
// UnityEngine.Color32 Dummiesman.BinaryExtensions::ReadColor32RGBA(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B BinaryExtensions_ReadColor32RGBA_m08B1549AF8CA5D27A28E9B2A80BFD74E94B2E92D (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___r0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var bytes = r.ReadBytes(4);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___r0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_0, 4);
		V_0 = L_1;
		// return new Color32(bytes[0], bytes[1], bytes[2], bytes[3]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 3;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_14), L_4, L_7, L_10, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_15 = V_1;
		return L_15;
	}
}
// UnityEngine.Color32 Dummiesman.BinaryExtensions::ReadColor32RGB(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B BinaryExtensions_ReadColor32RGB_m4E6A56048B5909CE85A0EC79B45F161FD1AAAD86 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___r0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var bytes = r.ReadBytes(3);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___r0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_0, 3);
		V_0 = L_1;
		// return new Color32(bytes[0], bytes[1], bytes[2], 255);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_11), L_4, L_7, L_10, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12 = V_1;
		return L_12;
	}
}
// UnityEngine.Color32 Dummiesman.BinaryExtensions::ReadColor32BGR(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B BinaryExtensions_ReadColor32BGR_m73CD4A49AAF8635470FB6F79091EA883531BE5C9 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___r0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var bytes = r.ReadBytes(3);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___r0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_0, 3);
		V_0 = L_1;
		// return new Color32(bytes[2], bytes[1], bytes[0], 255);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = 2;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_11), L_4, L_7, L_10, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12 = V_1;
		return L_12;
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
// UnityEngine.Texture2D Dummiesman.DDSLoader::Load(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DDSLoader_Load_mE78B735A0481C6BC72A7A1C769B13912EA626E87 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___ddsStream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DDSLoader_Load_mE78B735A0481C6BC72A7A1C769B13912EA626E87_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	{
		// byte[] buffer = new byte[ddsStream.Length];
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___ddsStream0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		if ((int64_t)(L_1) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DDSLoader_Load_mE78B735A0481C6BC72A7A1C769B13912EA626E87_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_1));
		V_0 = L_2;
		// ddsStream.Read(buffer, 0, (int)ddsStream.Length);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___ddsStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___ddsStream0;
		NullCheck(L_5);
		int64_t L_6;
		L_6 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_5);
		NullCheck(L_3);
		int32_t L_7;
		L_7 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, ((int32_t)L_6));
		// return Load(buffer);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9;
		L_9 = DDSLoader_Load_mA93B6593C1BC710A3411B4CD9809284C43D9B1EC(L_8, NULL);
		V_1 = L_9;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.Texture2D Dummiesman.DDSLoader::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DDSLoader_Load_mDC0460EA58D2D472030479AACF606C2D2A527206 (String_t* ___ddsPath0, const RuntimeMethod* method) 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		// return Load(File.ReadAllBytes(ddsPath));
		String_t* L_0 = ___ddsPath0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = DDSLoader_Load_mA93B6593C1BC710A3411B4CD9809284C43D9B1EC(L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Texture2D Dummiesman.DDSLoader::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DDSLoader_Load_mA93B6593C1BC710A3411B4CD9809284C43D9B1EC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ddsBytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_11 = NULL;
	Exception_t* V_12 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
	}
	try
	{// begin try (depth: 1)
		{
			// byte ddsSizeCheck = ddsBytes[4];
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___ddsBytes0;
			NullCheck(L_0);
			int32_t L_1 = 4;
			uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
			V_0 = L_2;
			// if (ddsSizeCheck != 124)
			uint8_t L_3 = V_0;
			V_9 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)((int32_t)124)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_9;
			if (!L_4)
			{
				goto IL_001f_1;
			}
		}
		{
			// throw new System.Exception("Invalid DDS header. Structure length is incrrrect."); //this header byte should be 124 for DDS image files
			Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			NullCheck(L_5);
			Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCACB21833BB4CA1A557B18751B7691C087DC04A2)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DDSLoader_Load_mA93B6593C1BC710A3411B4CD9809284C43D9B1EC_RuntimeMethod_var)));
		}

IL_001f_1:
		{
			// byte DXTType = ddsBytes[87];
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___ddsBytes0;
			NullCheck(L_6);
			int32_t L_7 = ((int32_t)87);
			uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			V_1 = L_8;
			// if (DXTType != 49 && DXTType != 53)
			uint8_t L_9 = V_1;
			if ((((int32_t)L_9) == ((int32_t)((int32_t)49))))
			{
				goto IL_0033_1;
			}
		}
		{
			uint8_t L_10 = V_1;
			G_B6_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)((int32_t)53)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0034_1;
		}

IL_0033_1:
		{
			G_B6_0 = 0;
		}

IL_0034_1:
		{
			V_10 = (bool)G_B6_0;
			bool L_11 = V_10;
			if (!L_11)
			{
				goto IL_0045_1;
			}
		}
		{
			// throw new System.Exception("Cannot load DDS due to an unsupported pixel format. Needs to be DXT1 or DXT5.");
			Exception_t* L_12 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			NullCheck(L_12);
			Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDDA7CFEAD2959669C703813D83A33F35133DB619)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DDSLoader_Load_mA93B6593C1BC710A3411B4CD9809284C43D9B1EC_RuntimeMethod_var)));
		}

IL_0045_1:
		{
			// int height = ddsBytes[13] * 256 + ddsBytes[12];
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___ddsBytes0;
			NullCheck(L_13);
			int32_t L_14 = ((int32_t)13);
			uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___ddsBytes0;
			NullCheck(L_16);
			int32_t L_17 = ((int32_t)12);
			uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)256))), (int32_t)L_18));
			// int width = ddsBytes[17] * 256 + ddsBytes[16];
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___ddsBytes0;
			NullCheck(L_19);
			int32_t L_20 = ((int32_t)17);
			uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___ddsBytes0;
			NullCheck(L_22);
			int32_t L_23 = ((int32_t)16);
			uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
			V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)256))), (int32_t)L_24));
			// bool mipmaps = ddsBytes[28] > 0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___ddsBytes0;
			NullCheck(L_25);
			int32_t L_26 = ((int32_t)28);
			uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			V_4 = (bool)((((int32_t)L_27) > ((int32_t)0))? 1 : 0);
			// TextureFormat textureFormat = DXTType == 49 ? TextureFormat.DXT1 : TextureFormat.DXT5;
			uint8_t L_28 = V_1;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)49))))
			{
				goto IL_0077_1;
			}
		}
		{
			G_B11_0 = ((int32_t)12);
			goto IL_0079_1;
		}

IL_0077_1:
		{
			G_B11_0 = ((int32_t)10);
		}

IL_0079_1:
		{
			V_5 = G_B11_0;
			// int DDS_HEADER_SIZE = 128;
			V_6 = ((int32_t)128);
			// byte[] dxtBytes = new byte[ddsBytes.Length - DDS_HEADER_SIZE];
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___ddsBytes0;
			NullCheck(L_29);
			int32_t L_30 = V_6;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_29)->max_length)), L_30)));
			V_7 = L_31;
			// Buffer.BlockCopy(ddsBytes, DDS_HEADER_SIZE, dxtBytes, 0, ddsBytes.Length - DDS_HEADER_SIZE);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___ddsBytes0;
			int32_t L_33 = V_6;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_7;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___ddsBytes0;
			NullCheck(L_35);
			int32_t L_36 = V_6;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_32, L_33, (RuntimeArray*)L_34, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_35)->max_length)), L_36)), NULL);
			// Texture2D texture = new Texture2D(width, height, textureFormat, mipmaps);
			int32_t L_37 = V_3;
			int32_t L_38 = V_2;
			int32_t L_39 = V_5;
			bool L_40 = V_4;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
			NullCheck(L_41);
			Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_41, L_37, L_38, L_39, L_40, NULL);
			V_8 = L_41;
			// texture.LoadRawTextureData(dxtBytes);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_42 = V_8;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_7;
			NullCheck(L_42);
			Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B(L_42, L_43, NULL);
			// texture.Apply();
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = V_8;
			NullCheck(L_44);
			Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_44, NULL);
			// return texture;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_45 = V_8;
			V_11 = L_45;
			goto IL_00e0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c6;
		}
		throw e;
	}

CATCH_00c6:
	{// begin catch(System.Exception)
		// catch (System.Exception ex)
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// throw new Exception("An error occured while loading DirectDraw Surface: " + ex.Message);
		Exception_t* L_46 = V_12;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_46);
		String_t* L_48;
		L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24A67F22FEE896ED79449BFCF3EC311FB14605C6)), L_47, NULL);
		Exception_t* L_49 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_49);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_49, L_48, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DDSLoader_Load_mA93B6593C1BC710A3411B4CD9809284C43D9B1EC_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_00e0:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_50 = V_11;
		return L_50;
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
// System.Void Dummiesman.ImageLoader::SetNormalMap(UnityEngine.Texture2D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageLoader_SetNormalMap_m4645AFA5DBC05E7D7F778803242F399CDF81FD39 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** ___tex0, const RuntimeMethod* method) 
{
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	int32_t V_1 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// Color[] pixels = tex.GetPixels();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** L_0 = ___tex0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = *((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4**)L_0);
		NullCheck(L_1);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2;
		L_2 = Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039(L_1, NULL);
		V_0 = L_2;
		// for (int i = 0; i < pixels.Length; i++)
		V_1 = 0;
		goto IL_0049;
	}

IL_000d:
	{
		// Color temp = pixels[i];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// temp.r = pixels[i].g;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___g_1;
		(&V_2)->___r_0 = L_9;
		// temp.a = pixels[i].r;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___r_0;
		(&V_2)->___a_3 = L_12;
		// pixels[i] = temp;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_13 = V_0;
		int32_t L_14 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_15);
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0049:
	{
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_17 = V_1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_18 = V_0;
		NullCheck(L_18);
		V_3 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
		bool L_19 = V_3;
		if (L_19)
		{
			goto IL_000d;
		}
	}
	{
		// tex.SetPixels(pixels);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** L_20 = ___tex0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = *((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4**)L_20);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_22 = V_0;
		NullCheck(L_21);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_21, L_22, NULL);
		// tex.Apply(true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** L_23 = ___tex0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = *((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4**)L_23);
		NullCheck(L_24);
		Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3(L_24, (bool)1, NULL);
		// }
		return;
	}
}
// UnityEngine.Texture2D Dummiesman.ImageLoader::LoadTexture(System.IO.Stream,Dummiesman.ImageLoader/TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ImageLoader_LoadTexture_m05091EED446921B94BDFBA4EEDC14656D11B2D10 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___format1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageLoader_LoadTexture_m05091EED446921B94BDFBA4EEDC14656D11B2D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_5 = NULL;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		// if (format == TextureFormat.BMP)
		int32_t L_0 = ___format1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// return new BMPLoader().LoadBMP(stream).ToTexture2D();
		BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83* L_2 = (BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83*)il2cpp_codegen_object_new(BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BMPLoader__ctor_mE1F6B7D4F696A40E6932B4B64EB677F8E5303CFA(L_2, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___stream0;
		NullCheck(L_2);
		BMPImage_tA6E059574F192A9BB574E7B260012D990055F05C* L_4;
		L_4 = BMPLoader_LoadBMP_m0131F513F34E1A490D639C0F46E8E18B9DFB25B7(L_2, L_3, NULL);
		NullCheck(L_4);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
		L_5 = BMPImage_ToTexture2D_m0E65B93ED38B9B8308E4314459DEFAB4D3277F32(L_4, NULL);
		V_1 = L_5;
		goto IL_008f;
	}

IL_001d:
	{
		// else if (format == TextureFormat.DDS)
		int32_t L_6 = ___format1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return DDSLoader.Load(stream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___stream0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9;
		L_9 = DDSLoader_Load_mE78B735A0481C6BC72A7A1C769B13912EA626E87(L_8, NULL);
		V_1 = L_9;
		goto IL_008f;
	}

IL_002f:
	{
		// else if (format == TextureFormat.JPG || format == TextureFormat.PNG)
		int32_t L_10 = ___format1;
		if ((((int32_t)L_10) == ((int32_t)4)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_11 = ___format1;
		G_B7_0 = ((((int32_t)L_11) == ((int32_t)3))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B7_0 = 1;
	}

IL_003a:
	{
		V_3 = (bool)G_B7_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		// byte[] buffer = new byte[stream.Length];
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = ___stream0;
		NullCheck(L_13);
		int64_t L_14;
		L_14 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_13);
		if ((int64_t)(L_14) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ImageLoader_LoadTexture_m05091EED446921B94BDFBA4EEDC14656D11B2D10_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_14));
		V_4 = L_15;
		// stream.Read(buffer, 0, (int)stream.Length);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = ___stream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_4;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = ___stream0;
		NullCheck(L_18);
		int64_t L_19;
		L_19 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_18);
		NullCheck(L_16);
		int32_t L_20;
		L_20 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_16, L_17, 0, ((int32_t)L_19));
		// Texture2D texture = new Texture2D(1, 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_21, 1, 1, NULL);
		V_5 = L_21;
		// texture.LoadImage(buffer);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_4;
		bool L_24;
		L_24 = ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041(L_22, L_23, NULL);
		// return texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_5;
		V_1 = L_25;
		goto IL_008f;
	}

IL_0076:
	{
		// else if (format == TextureFormat.TGA)
		int32_t L_26 = ___format1;
		V_6 = (bool)((((int32_t)L_26) == ((int32_t)1))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_008a;
		}
	}
	{
		// return TGALoader.Load(stream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28 = ___stream0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29;
		L_29 = TGALoader_Load_mFFD983DFCBF01C4B0C51AEC8829191B59E63AD20(L_28, NULL);
		V_1 = L_29;
		goto IL_008f;
	}

IL_008a:
	{
		// return null;
		V_1 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		goto IL_008f;
	}

IL_008f:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = V_1;
		return L_30;
	}
}
// UnityEngine.Texture2D Dummiesman.ImageLoader::LoadTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ImageLoader_LoadTexture_mC532488F1779882CA2E220DF8157B74B49F39DFC (String_t* ___fn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FFABE86E9532C726C3E9C7D10AFE388437A380D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A3E4D14FCCE4BCFFF56E01EE25543AD3912FB19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FB5B88DDC4C14C62E4014842DEC88E8353401A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93D5DFE334D74396F45A6431764B0B46F089032);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEFAFB5DB9B504BEEF8A79E3E990D713103F15A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00413A65EA4BBDF5F981E7DC7F68313AA28D95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCC77F6BEC01F19B25AEAE1DA587DC5A6486B284);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	bool V_4 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	uint8_t V_9 = 0x0;
	int32_t V_10 = 0;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	uint32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	{
		// if (!File.Exists(fn))
		String_t* L_0 = ___fn0;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return null;
		V_5 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		goto IL_029c;
	}

IL_0018:
	{
		// var textureBytes = File.ReadAllBytes(fn);
		String_t* L_3 = ___fn0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_3, NULL);
		V_0 = L_4;
		// string ext = Path.GetExtension(fn).ToLower();
		String_t* L_5 = ___fn0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_6, NULL);
		V_1 = L_7;
		// string name = Path.GetFileName(fn);
		String_t* L_8 = ___fn0;
		String_t* L_9;
		L_9 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_8, NULL);
		V_2 = L_9;
		// Texture2D returnTex = null;
		V_3 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		// switch (ext)
		String_t* L_10 = V_1;
		V_12 = L_10;
		String_t* L_11 = V_12;
		V_11 = L_11;
		String_t* L_12 = V_11;
		uint32_t L_13;
		L_13 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_12, NULL);
		V_13 = L_13;
		uint32_t L_14 = V_13;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1388056268)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_15 = V_13;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)175576948))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_005b;
	}

IL_005b:
	{
		uint32_t L_16 = V_13;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1128223456))))
		{
			goto IL_00b2;
		}
	}
	{
		goto IL_0066;
	}

IL_0066:
	{
		uint32_t L_17 = V_13;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1388056268))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_025b;
	}

IL_0074:
	{
		uint32_t L_18 = V_13;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-786288218)))))
		{
			goto IL_0099;
		}
	}
	{
		uint32_t L_19 = V_13;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2079391002))))
		{
			goto IL_0124;
		}
	}
	{
		goto IL_008b;
	}

IL_008b:
	{
		uint32_t L_20 = V_13;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-786288218))))
		{
			goto IL_00eb;
		}
	}
	{
		goto IL_025b;
	}

IL_0099:
	{
		uint32_t L_21 = V_13;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-116413041))))
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_00a4;
	}

IL_00a4:
	{
		uint32_t L_22 = V_13;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-9225237))))
		{
			goto IL_00fe;
		}
	}
	{
		goto IL_025b;
	}

IL_00b2:
	{
		String_t* L_23 = V_11;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		if (L_24)
		{
			goto IL_0137;
		}
	}
	{
		goto IL_025b;
	}

IL_00c5:
	{
		String_t* L_25 = V_11;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_26)
		{
			goto IL_0137;
		}
	}
	{
		goto IL_025b;
	}

IL_00d8:
	{
		String_t* L_27 = V_11;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (L_28)
		{
			goto IL_0137;
		}
	}
	{
		goto IL_025b;
	}

IL_00eb:
	{
		String_t* L_29 = V_11;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteralB93D5DFE334D74396F45A6431764B0B46F089032, NULL);
		if (L_30)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_025b;
	}

IL_00fe:
	{
		String_t* L_31 = V_11;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral0FFABE86E9532C726C3E9C7D10AFE388437A380D, NULL);
		if (L_32)
		{
			goto IL_0158;
		}
	}
	{
		goto IL_025b;
	}

IL_0111:
	{
		String_t* L_33 = V_11;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C, NULL);
		if (L_34)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_025b;
	}

IL_0124:
	{
		String_t* L_35 = V_11;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteralBEFAFB5DB9B504BEEF8A79E3E990D713103F15A0, NULL);
		if (L_36)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_025b;
	}

IL_0137:
	{
		// returnTex = new Texture2D(1, 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_37, 1, 1, NULL);
		V_3 = L_37;
		// returnTex.LoadImage(textureBytes);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_0;
		bool L_40;
		L_40 = ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041(L_38, L_39, NULL);
		// break;
		goto IL_0274;
	}

IL_014c:
	{
		// returnTex = DDSLoader.Load(textureBytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_42;
		L_42 = DDSLoader_Load_mA93B6593C1BC710A3411B4CD9809284C43D9B1EC(L_41, NULL);
		V_3 = L_42;
		// break;
		goto IL_0274;
	}

IL_0158:
	{
		// returnTex = TGALoader.Load(textureBytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44;
		L_44 = TGALoader_Load_mA6CEA84E76054B05FE07E43AA47C20F76FCE20A4(L_43, NULL);
		V_3 = L_44;
		// break;
		goto IL_0274;
	}

IL_0164:
	{
		// returnTex = new BMPLoader().LoadBMP(textureBytes).ToTexture2D();
		BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83* L_45 = (BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83*)il2cpp_codegen_object_new(BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		BMPLoader__ctor_mE1F6B7D4F696A40E6932B4B64EB677F8E5303CFA(L_45, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		NullCheck(L_45);
		BMPImage_tA6E059574F192A9BB574E7B260012D990055F05C* L_47;
		L_47 = BMPLoader_LoadBMP_m6A621DEC5410845DE112A71843CEA2381C3DD4BD(L_45, L_46, NULL);
		NullCheck(L_47);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48;
		L_48 = BMPImage_ToTexture2D_m0E65B93ED38B9B8308E4314459DEFAB4D3277F32(L_47, NULL);
		V_3 = L_48;
		// break;
		goto IL_0274;
	}

IL_017a:
	{
		// byte[] crnBytes = textureBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_0;
		V_6 = L_49;
		// ushort crnWidth = System.BitConverter.ToUInt16(new byte[2] { crnBytes[13], crnBytes[12] }, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_6;
		NullCheck(L_52);
		int32_t L_53 = ((int32_t)13);
		uint8_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_54);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = L_51;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_6;
		NullCheck(L_56);
		int32_t L_57 = ((int32_t)12);
		uint8_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_58);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_59;
		L_59 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_55, 0, NULL);
		V_7 = L_59;
		// ushort crnHeight = System.BitConverter.ToUInt16(new byte[2] { crnBytes[15], crnBytes[14] }, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = L_60;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = V_6;
		NullCheck(L_62);
		int32_t L_63 = ((int32_t)15);
		uint8_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_64);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = L_61;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_6;
		NullCheck(L_66);
		int32_t L_67 = ((int32_t)14);
		uint8_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_68);
		uint16_t L_69;
		L_69 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_65, 0, NULL);
		V_8 = L_69;
		// byte crnFormatByte = crnBytes[18];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_6;
		NullCheck(L_70);
		int32_t L_71 = ((int32_t)18);
		uint8_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_9 = L_72;
		// var crnTextureFormat = UnityEngine.TextureFormat.RGB24;
		V_10 = 3;
		// if (crnFormatByte == 0)
		uint8_t L_73 = V_9;
		V_14 = (bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_14;
		if (!L_74)
		{
			goto IL_01d6;
		}
	}
	{
		// crnTextureFormat = UnityEngine.TextureFormat.DXT1Crunched;
		V_10 = ((int32_t)28);
		goto IL_023b;
	}

IL_01d6:
	{
		// }else if(crnFormatByte == 2)
		uint8_t L_75 = V_9;
		V_15 = (bool)((((int32_t)L_75) == ((int32_t)2))? 1 : 0);
		bool L_76 = V_15;
		if (!L_76)
		{
			goto IL_01e9;
		}
	}
	{
		// crnTextureFormat = UnityEngine.TextureFormat.DXT5Crunched;
		V_10 = ((int32_t)29);
		goto IL_023b;
	}

IL_01e9:
	{
		// else if(crnFormatByte == 12)
		uint8_t L_77 = V_9;
		V_16 = (bool)((((int32_t)L_77) == ((int32_t)((int32_t)12)))? 1 : 0);
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01fd;
		}
	}
	{
		// crnTextureFormat = UnityEngine.TextureFormat.ETC2_RGBA8Crunched;
		V_10 = ((int32_t)65);
		goto IL_023b;
	}

IL_01fd:
	{
		// Debug.LogError("Could not load crunched texture " + name + " because its format is not supported (" + crnFormatByte + "): " + fn);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_79;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, _stringLiteralCCC77F6BEC01F19B25AEAE1DA587DC5A6486B284);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCCC77F6BEC01F19B25AEAE1DA587DC5A6486B284);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = L_80;
		String_t* L_82 = V_2;
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_82);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_82);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = L_81;
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, _stringLiteral1A3E4D14FCCE4BCFFF56E01EE25543AD3912FB19);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1A3E4D14FCCE4BCFFF56E01EE25543AD3912FB19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_84 = L_83;
		String_t* L_85;
		L_85 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_9), NULL);
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_85);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_85);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_86 = L_84;
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, _stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_87 = L_86;
		String_t* L_88 = ___fn0;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, L_88);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_88);
		String_t* L_89;
		L_89 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_87, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_89, NULL);
		// break;
		goto IL_0274;
	}

IL_023b:
	{
		// returnTex = new Texture2D(crnWidth, crnHeight, crnTextureFormat, true);
		uint16_t L_90 = V_7;
		uint16_t L_91 = V_8;
		int32_t L_92 = V_10;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_93 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_93);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_93, L_90, L_91, L_92, (bool)1, NULL);
		V_3 = L_93;
		// returnTex.LoadRawTextureData(crnBytes);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_94 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = V_6;
		NullCheck(L_94);
		Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B(L_94, L_95, NULL);
		// returnTex.Apply(true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_96 = V_3;
		NullCheck(L_96);
		Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3(L_96, (bool)1, NULL);
		// break;
		goto IL_0274;
	}

IL_025b:
	{
		// Debug.LogError("Could not load texture " + name + " because its format is not supported : " + fn);
		String_t* L_97 = V_2;
		String_t* L_98 = ___fn0;
		String_t* L_99;
		L_99 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral9FB5B88DDC4C14C62E4014842DEC88E8353401A0, L_97, _stringLiteralC00413A65EA4BBDF5F981E7DC7F68313AA28D95F, L_98, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_99, NULL);
		// break;
		goto IL_0274;
	}

IL_0274:
	{
		// if (returnTex != null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_100 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_101;
		L_101 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_100, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_17 = L_101;
		bool L_102 = V_17;
		if (!L_102)
		{
			goto IL_0297;
		}
	}
	{
		// returnTex = ImageLoaderHelper.VerifyFormat(returnTex);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_103 = V_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_104;
		L_104 = ImageLoaderHelper_VerifyFormat_m4BE5205BCD52E707673B72893FFD743B07CB5383(L_103, NULL);
		V_3 = L_104;
		// returnTex.name = Path.GetFileNameWithoutExtension(fn);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_105 = V_3;
		String_t* L_106 = ___fn0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_107;
		L_107 = Path_GetFileNameWithoutExtension_m2D14CCBAB9C60DC8D32C2443CCE3D34644822FAF(L_106, NULL);
		NullCheck(L_105);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_105, L_107, NULL);
	}

IL_0297:
	{
		// return returnTex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_108 = V_3;
		V_5 = L_108;
		goto IL_029c;
	}

IL_029c:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_109 = V_5;
		return L_109;
	}
}
// System.Void Dummiesman.ImageLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageLoader__ctor_mD218225CB03566D60257CB1717366A3E372F0D85 (ImageLoader_t8A370851A05DC8FBFA9EF3A8348BC2D76445BD82* __this, const RuntimeMethod* method) 
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
// UnityEngine.Texture2D Dummiesman.ImageLoaderHelper::VerifyFormat(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ImageLoaderHelper_VerifyFormat_m4BE5205BCD52E707673B72893FFD743B07CB5383 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_4 = NULL;
	int32_t V_5 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_9 = NULL;
	int32_t G_B4_0 = 0;
	{
		// if (tex.format != UnityEngine.TextureFormat.ARGB32 && tex.format != UnityEngine.TextureFormat.RGBA32 && tex.format != UnityEngine.TextureFormat.DXT5)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___tex0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0022;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___tex0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_0022;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___tex0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_4, NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)((int32_t)12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
	}

IL_0023:
	{
		V_2 = (bool)G_B4_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		// return tex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___tex0;
		V_3 = L_7;
		goto IL_00b7;
	}

IL_002e:
	{
		// var pixels = tex.GetPixels32();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___tex0;
		NullCheck(L_8);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_9;
		L_9 = Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D(L_8, NULL);
		V_0 = L_9;
		// bool validFormat = false;
		V_1 = (bool)0;
		// foreach(var px in pixels)
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_10 = V_0;
		V_4 = L_10;
		V_5 = 0;
		goto IL_006c;
	}

IL_0040:
	{
		// foreach(var px in pixels)
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_6 = L_14;
		// if(px.a < 255)
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_15 = V_6;
		uint8_t L_16 = L_15.___a_4;
		V_7 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)255)))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		// validFormat = true;
		V_1 = (bool)1;
		// break;
		goto IL_0074;
	}

IL_0065:
	{
		int32_t L_18 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_006c:
	{
		// foreach(var px in pixels)
		int32_t L_19 = V_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_20 = V_4;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0040;
		}
	}

IL_0074:
	{
		// if (!validFormat)
		bool L_21 = V_1;
		V_8 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// var tex24 = new Texture2D(tex.width, tex.height, UnityEngine.TextureFormat.RGB24, tex.mipmapCount > 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = ___tex0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_23);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = ___tex0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_25);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = ___tex0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Texture_get_mipmapCount_m9E68435BC8E30B9821525BFC8121C34A53774023(L_27, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_29, L_24, L_26, 3, (bool)((((int32_t)L_28) > ((int32_t)0))? 1 : 0), NULL);
		V_9 = L_29;
		// tex24.SetPixels32(pixels);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = V_9;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_31 = V_0;
		NullCheck(L_30);
		Texture2D_SetPixels32_m169F9873A21FB8DECA24DC1B8F06FB23D13BEE2A(L_30, L_31, NULL);
		// tex24.Apply(true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = V_9;
		NullCheck(L_32);
		Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3(L_32, (bool)1, NULL);
		// return tex24;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = V_9;
		V_3 = L_33;
		goto IL_00b7;
	}

IL_00b3:
	{
		// return tex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = ___tex0;
		V_3 = L_34;
		goto IL_00b7;
	}

IL_00b7:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35 = V_3;
		return L_35;
	}
}
// System.Void Dummiesman.ImageLoaderHelper::FillPixelArray(UnityEngine.Color32[],System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageLoaderHelper_FillPixelArray_m72B6D7E7DBBE2FFE61A038FA877217A68185A46C (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___fillArray0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pixelData1, int32_t ___bytesPerPixel2, bool ___bgra3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	{
		// if (bgra)
		bool L_0 = ___bgra3;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00ad;
		}
	}
	{
		// if (bytesPerPixel == 4)
		int32_t L_2 = ___bytesPerPixel2;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)4))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		// for (int i = 0; i < fillArray.Length; i++)
		V_2 = 0;
		goto IL_003f;
	}

IL_0017:
	{
		// int bi = i * bytesPerPixel;
		int32_t L_4 = V_2;
		int32_t L_5 = ___bytesPerPixel2;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_4, L_5));
		// fillArray[i] = new Color32(pixelData[bi + 2], pixelData[bi + 1], pixelData[bi], pixelData[bi + 3]);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = ___fillArray0;
		int32_t L_7 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___pixelData1;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___pixelData1;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___pixelData1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___pixelData1;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_24), L_11, L_15, L_19, L_23, /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_24);
		// for (int i = 0; i < fillArray.Length; i++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < fillArray.Length; i++)
		int32_t L_26 = V_2;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_27 = ___fillArray0;
		NullCheck(L_27);
		V_4 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))? 1 : 0);
		bool L_28 = V_4;
		if (L_28)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00a7;
	}

IL_004e:
	{
		// for (int i = 0; i < fillArray.Length; i++)
		V_5 = 0;
		goto IL_0099;
	}

IL_0054:
	{
		// fillArray[i].r = pixelData[(i * 3) + 2];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_29 = ___fillArray0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___pixelData1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_32, 3)), 2));
		uint8_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___r_1 = L_34;
		// fillArray[i].g = pixelData[(i * 3) + 1];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_35 = ___fillArray0;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___pixelData1;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_38, 3)), 1));
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___g_2 = L_40;
		// fillArray[i].b = pixelData[(i * 3) + 0];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_41 = ___fillArray0;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___pixelData1;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_multiply(L_44, 3));
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___b_3 = L_46;
		// for (int i = 0; i < fillArray.Length; i++)
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0099:
	{
		// for (int i = 0; i < fillArray.Length; i++)
		int32_t L_48 = V_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_49 = ___fillArray0;
		NullCheck(L_49);
		V_6 = (bool)((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length))))? 1 : 0);
		bool L_50 = V_6;
		if (L_50)
		{
			goto IL_0054;
		}
	}
	{
	}

IL_00a7:
	{
		goto IL_019c;
	}

IL_00ad:
	{
		// if (bytesPerPixel == 4)
		int32_t L_51 = ___bytesPerPixel2;
		V_7 = (bool)((((int32_t)L_51) == ((int32_t)4))? 1 : 0);
		bool L_52 = V_7;
		if (!L_52)
		{
			goto IL_0128;
		}
	}
	{
		// for (int i = 0; i < fillArray.Length; i++)
		V_8 = 0;
		goto IL_0118;
	}

IL_00be:
	{
		// fillArray[i].r = pixelData[i * 4];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_53 = ___fillArray0;
		int32_t L_54 = V_8;
		NullCheck(L_53);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ___pixelData1;
		int32_t L_56 = V_8;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_multiply(L_56, 4));
		uint8_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->___r_1 = L_58;
		// fillArray[i].g = pixelData[(i * 4) + 1];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_59 = ___fillArray0;
		int32_t L_60 = V_8;
		NullCheck(L_59);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ___pixelData1;
		int32_t L_62 = V_8;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_62, 4)), 1));
		uint8_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)))->___g_2 = L_64;
		// fillArray[i].b = pixelData[(i * 4) + 2];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_65 = ___fillArray0;
		int32_t L_66 = V_8;
		NullCheck(L_65);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___pixelData1;
		int32_t L_68 = V_8;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_68, 4)), 2));
		uint8_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___b_3 = L_70;
		// fillArray[i].a = pixelData[(i * 4) + 3];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_71 = ___fillArray0;
		int32_t L_72 = V_8;
		NullCheck(L_71);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ___pixelData1;
		int32_t L_74 = V_8;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_74, 4)), 3));
		uint8_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72)))->___a_4 = L_76;
		// for (int i = 0; i < fillArray.Length; i++)
		int32_t L_77 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0118:
	{
		// for (int i = 0; i < fillArray.Length; i++)
		int32_t L_78 = V_8;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_79 = ___fillArray0;
		NullCheck(L_79);
		V_9 = (bool)((((int32_t)L_78) < ((int32_t)((int32_t)(((RuntimeArray*)L_79)->max_length))))? 1 : 0);
		bool L_80 = V_9;
		if (L_80)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_019b;
	}

IL_0128:
	{
		// int bi = 0;
		V_10 = 0;
		// for (int i = 0; i < fillArray.Length; i++)
		V_11 = 0;
		goto IL_018d;
	}

IL_0131:
	{
		// fillArray[i].r = pixelData[bi++];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_81 = ___fillArray0;
		int32_t L_82 = V_11;
		NullCheck(L_81);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ___pixelData1;
		int32_t L_84 = V_10;
		int32_t L_85 = L_84;
		V_10 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		NullCheck(L_83);
		int32_t L_86 = L_85;
		uint8_t L_87 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_82)))->___r_1 = L_87;
		// fillArray[i].g = pixelData[bi++];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_88 = ___fillArray0;
		int32_t L_89 = V_11;
		NullCheck(L_88);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ___pixelData1;
		int32_t L_91 = V_10;
		int32_t L_92 = L_91;
		V_10 = ((int32_t)il2cpp_codegen_add(L_92, 1));
		NullCheck(L_90);
		int32_t L_93 = L_92;
		uint8_t L_94 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)))->___g_2 = L_94;
		// fillArray[i].b = pixelData[bi++];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_95 = ___fillArray0;
		int32_t L_96 = V_11;
		NullCheck(L_95);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ___pixelData1;
		int32_t L_98 = V_10;
		int32_t L_99 = L_98;
		V_10 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		NullCheck(L_97);
		int32_t L_100 = L_99;
		uint8_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		((L_95)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_96)))->___b_3 = L_101;
		// fillArray[i].a = 255;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_102 = ___fillArray0;
		int32_t L_103 = V_11;
		NullCheck(L_102);
		((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_103)))->___a_4 = (uint8_t)((int32_t)255);
		// for (int i = 0; i < fillArray.Length; i++)
		int32_t L_104 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_018d:
	{
		// for (int i = 0; i < fillArray.Length; i++)
		int32_t L_105 = V_11;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_106 = ___fillArray0;
		NullCheck(L_106);
		V_12 = (bool)((((int32_t)L_105) < ((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length))))? 1 : 0);
		bool L_107 = V_12;
		if (L_107)
		{
			goto IL_0131;
		}
	}
	{
	}

IL_019b:
	{
	}

IL_019c:
	{
		// }
		return;
	}
}
// System.Void Dummiesman.ImageLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageLoaderHelper__ctor_mADF1F5D3782898A04779AD45B573AA7580A8A3AF (ImageLoaderHelper_t8603BF10D0193AFD974D45CB504409448995359B* __this, const RuntimeMethod* method) 
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
// UnityEngine.Texture2D Dummiesman.ImageUtils::ConvertToNormalMap(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ImageUtils_ConvertToNormalMap_mA5DE17921A34EAE184F8E6FD14213480FF7B5C88 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_6 = NULL;
	int32_t G_B3_0 = 0;
	{
		// Texture2D returnTex = tex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___tex0;
		V_0 = L_0;
		// if(tex.format != TextureFormat.RGBA32 && tex.format != TextureFormat.ARGB32)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___tex0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_001a;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = ___tex0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_3, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_2 = (bool)G_B3_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// returnTex = new Texture2D(tex.width, tex.height, TextureFormat.RGBA32, true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___tex0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___tex0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_10, L_7, L_9, 4, (bool)1, NULL);
		V_0 = L_10;
	}

IL_0035:
	{
		// Color[] pixels = tex.GetPixels();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___tex0;
		NullCheck(L_11);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_12;
		L_12 = Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039(L_11, NULL);
		V_1 = L_12;
		// for (int i = 0; i < pixels.Length; i++)
		V_3 = 0;
		goto IL_0096;
	}

IL_0040:
	{
		// Color temp = pixels[i];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_13 = V_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		// temp.a = pixels[i].r;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		float L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___r_0;
		(&V_4)->___a_3 = L_19;
		// temp.r = 0f;
		(&V_4)->___r_0 = (0.0f);
		// temp.g = pixels[i].g;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_20 = V_1;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		float L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___g_1;
		(&V_4)->___g_1 = L_22;
		// temp.b = 0f;
		(&V_4)->___b_2 = (0.0f);
		// pixels[i] = temp;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_23 = V_1;
		int32_t L_24 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = V_4;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_25);
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0096:
	{
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_27 = V_3;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_28 = V_1;
		NullCheck(L_28);
		V_5 = (bool)((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))? 1 : 0);
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0040;
		}
	}
	{
		// returnTex.SetPixels(pixels);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_31 = V_1;
		NullCheck(L_30);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_30, L_31, NULL);
		// returnTex.Apply(true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = V_0;
		NullCheck(L_32);
		Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3(L_32, (bool)1, NULL);
		// return returnTex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = V_0;
		V_6 = L_33;
		goto IL_00b7;
	}

IL_00b7:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = V_6;
		return L_34;
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
// System.Int32 Dummiesman.TGALoader::GetBits(System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TGALoader_GetBits_m644EA9B2DA0F84A296F1779AB2E352B65383211E (uint8_t ___b0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return (b >> offset) & ((1 << count) - 1);
		uint8_t L_0 = ___b0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_0>>((int32_t)(L_1&((int32_t)31)))))&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_2&((int32_t)31))))), 1))));
		goto IL_0013;
	}

IL_0013:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Color32[] Dummiesman.TGALoader::LoadRawTGAData(System.IO.BinaryReader,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* TGALoader_LoadRawTGAData_mE8533A32EB9376821A049F17FC68B035F0CF6DA5 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___r0, int32_t ___bitDepth1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_2 = NULL;
	{
		// Color32[] pulledColors = new Color32[width * height];
		int32_t L_0 = ___width2;
		int32_t L_1 = ___height3;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		// byte[] colorData = r.ReadBytes(width * height * (bitDepth / 8));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = ___r0;
		int32_t L_4 = ___width2;
		int32_t L_5 = ___height3;
		int32_t L_6 = ___bitDepth1;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_3, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_4, L_5)), ((int32_t)(L_6/8)))));
		V_1 = L_7;
		// ImageLoaderHelper.FillPixelArray(pulledColors, colorData, (bitDepth / 8), true);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		int32_t L_10 = ___bitDepth1;
		ImageLoaderHelper_FillPixelArray_m72B6D7E7DBBE2FFE61A038FA877217A68185A46C(L_8, L_9, ((int32_t)(L_10/8)), (bool)1, NULL);
		// return pulledColors;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_11 = V_0;
		V_2 = L_11;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_12 = V_2;
		return L_12;
	}
}
// UnityEngine.Color32[] Dummiesman.TGALoader::LoadRLETGAData(System.IO.BinaryReader,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* TGALoader_LoadRLETGAData_m697F5F83681111FDB4A4260CB501CBFB280DAEF7 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___r0, int32_t ___bitDepth1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_0 = NULL;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_13 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	{
		// Color32[] pulledColors = new Color32[width * height];
		int32_t L_0 = ___width2;
		int32_t L_1 = ___height3;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		// int pulledColorCount = 0;
		V_1 = 0;
		goto IL_00cc;
	}

IL_0011:
	{
		// byte rlePacket = r.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = ___r0;
		NullCheck(L_3);
		uint8_t L_4;
		L_4 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_3);
		V_2 = L_4;
		// int RLEPacketType = GetBits(rlePacket, 7, 1);
		uint8_t L_5 = V_2;
		int32_t L_6;
		L_6 = TGALoader_GetBits_m644EA9B2DA0F84A296F1779AB2E352B65383211E(L_5, 7, 1, NULL);
		V_3 = L_6;
		// int RLEPixelCount = GetBits(rlePacket, 0, 7) + 1;
		uint8_t L_7 = V_2;
		int32_t L_8;
		L_8 = TGALoader_GetBits_m644EA9B2DA0F84A296F1779AB2E352B65383211E(L_7, 0, 7, NULL);
		V_4 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// if (RLEPacketType == 0)
		int32_t L_9 = V_3;
		V_5 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0080;
		}
	}
	{
		// for (int i = 0; i < RLEPixelCount; i++)
		V_6 = 0;
		goto IL_0071;
	}

IL_003e:
	{
		// var color = (bitDepth == 32) ? r.ReadColor32RGBA().FlipRB() : r.ReadColor32RGB().FlipRB();
		int32_t L_11 = ___bitDepth1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)32))))
		{
			goto IL_0051;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = ___r0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13;
		L_13 = BinaryExtensions_ReadColor32RGB_m4E6A56048B5909CE85A0EC79B45F161FD1AAAD86(L_12, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14;
		L_14 = ColorExtensions_FlipRB_mAE6EB26665B0643B471B17C6E9CE67D18ADC0FDD(L_13, NULL);
		G_B6_0 = L_14;
		goto IL_005c;
	}

IL_0051:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = ___r0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		L_16 = BinaryExtensions_ReadColor32RGBA_m08B1549AF8CA5D27A28E9B2A80BFD74E94B2E92D(L_15, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17;
		L_17 = ColorExtensions_FlipRB_mAE6EB26665B0643B471B17C6E9CE67D18ADC0FDD(L_16, NULL);
		G_B6_0 = L_17;
	}

IL_005c:
	{
		V_7 = G_B6_0;
		// pulledColors[i + pulledColorCount] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_18 = V_0;
		int32_t L_19 = V_6;
		int32_t L_20 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_21 = V_7;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, L_20))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_21);
		// for (int i = 0; i < RLEPixelCount; i++)
		int32_t L_22 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0071:
	{
		// for (int i = 0; i < RLEPixelCount; i++)
		int32_t L_23 = V_6;
		int32_t L_24 = V_4;
		V_8 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_00c6;
	}

IL_0080:
	{
		// var color = (bitDepth == 32) ? r.ReadColor32RGBA().FlipRB() : r.ReadColor32RGB().FlipRB();
		int32_t L_26 = ___bitDepth1;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)32))))
		{
			goto IL_0093;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = ___r0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28;
		L_28 = BinaryExtensions_ReadColor32RGB_m4E6A56048B5909CE85A0EC79B45F161FD1AAAD86(L_27, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_29;
		L_29 = ColorExtensions_FlipRB_mAE6EB26665B0643B471B17C6E9CE67D18ADC0FDD(L_28, NULL);
		G_B12_0 = L_29;
		goto IL_009e;
	}

IL_0093:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_30 = ___r0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_31;
		L_31 = BinaryExtensions_ReadColor32RGBA_m08B1549AF8CA5D27A28E9B2A80BFD74E94B2E92D(L_30, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_32;
		L_32 = ColorExtensions_FlipRB_mAE6EB26665B0643B471B17C6E9CE67D18ADC0FDD(L_31, NULL);
		G_B12_0 = L_32;
	}

IL_009e:
	{
		V_9 = G_B12_0;
		// for (int i = 0; i < RLEPixelCount; i++)
		V_10 = 0;
		goto IL_00b9;
	}

IL_00a5:
	{
		// pulledColors[i + pulledColorCount] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_33 = V_0;
		int32_t L_34 = V_10;
		int32_t L_35 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_36 = V_9;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_34, L_35))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_36);
		// for (int i = 0; i < RLEPixelCount; i++)
		int32_t L_37 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00b9:
	{
		// for (int i = 0; i < RLEPixelCount; i++)
		int32_t L_38 = V_10;
		int32_t L_39 = V_4;
		V_11 = (bool)((((int32_t)L_38) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_11;
		if (L_40)
		{
			goto IL_00a5;
		}
	}
	{
	}

IL_00c6:
	{
		// pulledColorCount += RLEPixelCount;
		int32_t L_41 = V_1;
		int32_t L_42 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_41, L_42));
	}

IL_00cc:
	{
		// while (pulledColorCount < pulledColors.Length)
		int32_t L_43 = V_1;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_44 = V_0;
		NullCheck(L_44);
		V_12 = (bool)((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))? 1 : 0);
		bool L_45 = V_12;
		if (L_45)
		{
			goto IL_0011;
		}
	}
	{
		// return pulledColors;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_46 = V_0;
		V_13 = L_46;
		goto IL_00e0;
	}

IL_00e0:
	{
		// }
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_47 = V_13;
		return L_47;
	}
}
// UnityEngine.Texture2D Dummiesman.TGALoader::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TGALoader_Load_m8F5D5BCAA30FD14B48110AFF16E5B6452BAEBD70 (String_t* ___fileName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	{
		// using (var imageFile = File.OpenRead(fileName))
		String_t* L_0 = ___fileName0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1;
		L_1 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0012:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001c;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_001c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return Load(imageFile);
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
			L_5 = TGALoader_Load_mFFD983DFCBF01C4B0C51AEC8829191B59E63AD20(L_4, NULL);
			V_1 = L_5;
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Texture2D Dummiesman.TGALoader::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TGALoader_Load_mA6CEA84E76054B05FE07E43AA47C20F76FCE20A4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	{
		// using (var ms = new MemoryStream(bytes))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0012:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001c;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_001c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return Load(ms);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
			L_5 = TGALoader_Load_mFFD983DFCBF01C4B0C51AEC8829191B59E63AD20(L_4, NULL);
			V_1 = L_5;
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Texture2D Dummiesman.TGALoader::Load(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TGALoader_Load_mFFD983DFCBF01C4B0C51AEC8829191B59E63AD20 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___TGAStream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral267226911D4A958D79875B1057280198F25BE5F6);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int16_t V_2 = 0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_5 = NULL;
	bool V_6 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B4_0 = 0;
	int16_t G_B10_0 = 0;
	int16_t G_B10_1 = 0;
	int16_t G_B9_0 = 0;
	int16_t G_B9_1 = 0;
	int32_t G_B11_0 = 0;
	int16_t G_B11_1 = 0;
	int16_t G_B11_2 = 0;
	{
		// using (BinaryReader r = new BinaryReader(TGAStream))
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___TGAStream0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f5:
			{// begin finally (depth: 1)
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = V_0;
					if (!L_2)
					{
						goto IL_00ff;
					}
				}
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_00ff:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// r.BaseStream.Seek(2, SeekOrigin.Begin);
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = V_0;
				NullCheck(L_4);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5;
				L_5 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_4);
				NullCheck(L_5);
				int64_t L_6;
				L_6 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(30 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_5, ((int64_t)2), 0);
				// byte imageType = r.ReadByte();
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = V_0;
				NullCheck(L_7);
				uint8_t L_8;
				L_8 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_7);
				V_1 = L_8;
				// if (imageType != 10 && imageType != 2)
				uint8_t L_9 = V_1;
				if ((((int32_t)L_9) == ((int32_t)((int32_t)10))))
				{
					goto IL_002d_1;
				}
			}
			{
				uint8_t L_10 = V_1;
				G_B4_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_002e_1;
			}

IL_002d_1:
			{
				G_B4_0 = 0;
			}

IL_002e_1:
			{
				V_6 = (bool)G_B4_0;
				bool L_11 = V_6;
				if (!L_11)
				{
					goto IL_0053_1;
				}
			}
			{
				// Debug.LogError($"Unsupported targa image type. ({imageType})");
				uint8_t L_12 = V_1;
				uint8_t L_13 = L_12;
				RuntimeObject* L_14 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_13);
				String_t* L_15;
				L_15 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral267226911D4A958D79875B1057280198F25BE5F6, L_14, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_15, NULL);
				// return null;
				V_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
				goto IL_0100;
			}

IL_0053_1:
			{
				// r.BaseStream.Seek(12, SeekOrigin.Begin);
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = V_0;
				NullCheck(L_16);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17;
				L_17 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_16);
				NullCheck(L_17);
				int64_t L_18;
				L_18 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(30 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_17, ((int64_t)((int32_t)12)), 0);
				// short width = r.ReadInt16();
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_19 = V_0;
				NullCheck(L_19);
				int16_t L_20;
				L_20 = VirtualFuncInvoker0< int16_t >::Invoke(13 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_19);
				V_2 = L_20;
				// short height = r.ReadInt16();
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_21 = V_0;
				NullCheck(L_21);
				int16_t L_22;
				L_22 = VirtualFuncInvoker0< int16_t >::Invoke(13 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_21);
				V_3 = L_22;
				// int bitDepth = r.ReadByte();
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_23 = V_0;
				NullCheck(L_23);
				uint8_t L_24;
				L_24 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_23);
				V_4 = L_24;
				// if (bitDepth < 24)
				int32_t L_25 = V_4;
				V_8 = (bool)((((int32_t)L_25) < ((int32_t)((int32_t)24)))? 1 : 0);
				bool L_26 = V_8;
				if (!L_26)
				{
					goto IL_0090_1;
				}
			}
			{
				// throw new Exception("Tried to load TGA with unsupported bit depth");
				Exception_t* L_27 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_27);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3201B86FACEA09A6EC2396E7556112CD64565211)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TGALoader_Load_mFFD983DFCBF01C4B0C51AEC8829191B59E63AD20_RuntimeMethod_var)));
			}

IL_0090_1:
			{
				// r.BaseStream.Seek(1, SeekOrigin.Current);
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_28 = V_0;
				NullCheck(L_28);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_29;
				L_29 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_28);
				NullCheck(L_29);
				int64_t L_30;
				L_30 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(30 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_29, ((int64_t)1), 1);
				// Texture2D tex = new Texture2D(width, height, (bitDepth == 24) ? TextureFormat.RGB24 :  TextureFormat.ARGB32, true);
				int16_t L_31 = V_2;
				int16_t L_32 = V_3;
				int32_t L_33 = V_4;
				G_B9_0 = L_32;
				G_B9_1 = L_31;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)24))))
				{
					G_B10_0 = L_32;
					G_B10_1 = L_31;
					goto IL_00aa_1;
				}
			}
			{
				G_B11_0 = 5;
				G_B11_1 = G_B9_0;
				G_B11_2 = G_B9_1;
				goto IL_00ab_1;
			}

IL_00aa_1:
			{
				G_B11_0 = 3;
				G_B11_1 = G_B10_0;
				G_B11_2 = G_B10_1;
			}

IL_00ab_1:
			{
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
				NullCheck(L_34);
				Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_34, G_B11_2, G_B11_1, G_B11_0, (bool)1, NULL);
				V_5 = L_34;
				// if (imageType == 2)
				uint8_t L_35 = V_1;
				V_9 = (bool)((((int32_t)L_35) == ((int32_t)2))? 1 : 0);
				bool L_36 = V_9;
				if (!L_36)
				{
					goto IL_00d3_1;
				}
			}
			{
				// tex.SetPixels32(LoadRawTGAData(r, bitDepth, width, height));
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = V_5;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_38 = V_0;
				int32_t L_39 = V_4;
				int16_t L_40 = V_2;
				int16_t L_41 = V_3;
				Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_42;
				L_42 = TGALoader_LoadRawTGAData_mE8533A32EB9376821A049F17FC68B035F0CF6DA5(L_38, L_39, L_40, L_41, NULL);
				NullCheck(L_37);
				Texture2D_SetPixels32_m169F9873A21FB8DECA24DC1B8F06FB23D13BEE2A(L_37, L_42, NULL);
				goto IL_00e7_1;
			}

IL_00d3_1:
			{
				// tex.SetPixels32(LoadRLETGAData(r, bitDepth, width, height));
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_43 = V_5;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_44 = V_0;
				int32_t L_45 = V_4;
				int16_t L_46 = V_2;
				int16_t L_47 = V_3;
				Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_48;
				L_48 = TGALoader_LoadRLETGAData_m697F5F83681111FDB4A4260CB501CBFB280DAEF7(L_44, L_45, L_46, L_47, NULL);
				NullCheck(L_43);
				Texture2D_SetPixels32_m169F9873A21FB8DECA24DC1B8F06FB23D13BEE2A(L_43, L_48, NULL);
			}

IL_00e7_1:
			{
				// tex.Apply();
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_49 = V_5;
				NullCheck(L_49);
				Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_49, NULL);
				// return tex;
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_50 = V_5;
				V_7 = L_50;
				goto IL_0100;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0100:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_51 = V_7;
		return L_51;
	}
}
// System.Void Dummiesman.TGALoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGALoader__ctor_m3BD8839506BD5B26AA424AC8265DD4E71F24FA57 (TGALoader_tBF4AA5DFA40A991239260EF4CD506E8F5F59B1E2* __this, const RuntimeMethod* method) 
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
// UnityEngine.Color Dummiesman.Extensions.ColorExtensions::FlipRB(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorExtensions_FlipRB_mE0881F8E342236C92E353CB994086AB3916D8746 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Color(color.b, color.g, color.r, color.a);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		float L_1 = L_0.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color0;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___color0;
		float L_7 = L_6.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Color32 Dummiesman.Extensions.ColorExtensions::FlipRB(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ColorExtensions_FlipRB_mAE6EB26665B0643B471B17C6E9CE67D18ADC0FDD (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Color32(color.b, color.g, color.r, color.a);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___color0;
		uint8_t L_1 = L_0.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___color0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___color0;
		uint8_t L_5 = L_4.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___color0;
		uint8_t L_7 = L_6.___a_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9 = V_0;
		return L_9;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OBJObjectBuilder_get_PushedFaceCount_m0800BDEDCCE5D0006D125DE33878F032D415366E_inline (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* __this, const RuntimeMethod* method) 
{
	{
		// public int PushedFaceCount { get; private set; } = 0;
		int32_t L_0 = __this->___U3CPushedFaceCountU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OBJObjectBuilder_set_PushedFaceCount_m59B64D90A70C329BAB9F7E36961ED9C4D23744D8_inline (OBJObjectBuilder_t0FF6F614A40C0709678B6A0F9111F43397565F13* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int PushedFaceCount { get; private set; } = 0;
		int32_t L_0 = ___value0;
		__this->___U3CPushedFaceCountU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) 
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_8);
		return;
	}

IL_0034:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___item0;
		((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
