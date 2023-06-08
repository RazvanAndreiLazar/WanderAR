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

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// B83.Image.BMP.BMPImage
struct BMPImage_tA6E059574F192A9BB574E7B260012D990055F05C;
// B83.Image.BMP.BMPLoader
struct BMPLoader_t8C88A751EA549C5D60C3E41F58F456A97D8B5C83;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Dummiesman.ImageLoader
struct ImageLoader_t8A370851A05DC8FBFA9EF3A8348BC2D76445BD82;
// Dummiesman.ImageLoaderHelper
struct ImageLoaderHelper_t8603BF10D0193AFD974D45CB504409448995359B;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// Dummiesman.TGALoader
struct TGALoader_tBF4AA5DFA40A991239260EF4CD506E8F5F59B1E2;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
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
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjLoopHash_t0314B9758A262019FC1EFB5432DE4F2D2139B20B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0FFABE86E9532C726C3E9C7D10AFE388437A380D;
IL2CPP_EXTERN_C String_t* _stringLiteral1A3E4D14FCCE4BCFFF56E01EE25543AD3912FB19;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral24A67F22FEE896ED79449BFCF3EC311FB14605C6;
IL2CPP_EXTERN_C String_t* _stringLiteral267226911D4A958D79875B1057280198F25BE5F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3201B86FACEA09A6EC2396E7556112CD64565211;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
IL2CPP_EXTERN_C String_t* _stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B;
IL2CPP_EXTERN_C String_t* _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C;
IL2CPP_EXTERN_C String_t* _stringLiteral9FB5B88DDC4C14C62E4014842DEC88E8353401A0;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralB93D5DFE334D74396F45A6431764B0B46F089032;
IL2CPP_EXTERN_C String_t* _stringLiteralBEFAFB5DB9B504BEEF8A79E3E990D713103F15A0;
IL2CPP_EXTERN_C String_t* _stringLiteralC00413A65EA4BBDF5F981E7DC7F68313AA28D95F;
IL2CPP_EXTERN_C String_t* _stringLiteralCACB21833BB4CA1A557B18751B7691C087DC04A2;
IL2CPP_EXTERN_C String_t* _stringLiteralCCC77F6BEC01F19B25AEAE1DA587DC5A6486B284;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA7CFEAD2959669C703813D83A33F35133DB619;
IL2CPP_EXTERN_C const RuntimeMethod* DDSLoader_Load_mA93B6593C1BC710A3411B4CD9809284C43D9B1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DDSLoader_Load_mE78B735A0481C6BC72A7A1C769B13912EA626E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageLoader_LoadTexture_m05091EED446921B94BDFBA4EEDC14656D11B2D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TGALoader_Load_mFFD983DFCBF01C4B0C51AEC8829191B59E63AD20_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
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
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
