/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once

namespace Data {
	#pragma pack(push, 1)
	const struct ExplicitTableRef {__int32 TableId; __int64 Key; };
const struct IconRef {__int64 IcontextureId; __int32 IconIndex; };
const struct TextRef {__int32 Unk; wchar_t* ReadableText; };
const struct XYZ {__int32 X; __int32 Y; __int32 Z; };
const struct RGB {char R; char G; char B; };
const struct TableRef { __int64 Key; };
const struct UnkFlag { char Unk[20]; };
const struct TableVersion { union Version { struct { __int16 MajorVersion; __int16 MinorVersion; }; unsigned __int32 VersionKey; }; Version Version; TableVersion() = default; TableVersion(__int16 major, __int16 minor) : Version{major, minor} {} };
const struct DataView {
		const char* Data;
		long long Length;
		//default constructor
		DataView() : Data(nullptr), Length(0) {}
		DataView(const char* ptr, long long len) : Data(ptr), Length(len) {}
	};
struct RecordResult {
		Data::DataView* recordDataView;
		Data::DataView* lookupDataView;
	};

	#pragma pack(pop)
}