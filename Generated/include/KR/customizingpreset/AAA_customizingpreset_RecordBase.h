/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct customizingpreset_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 race;
__int8 sex;
__int8 part_type;
__int8 part_value;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId(){return 182;};
__int16 icon_index;
__int8 param8[96];
char Pad0[2];
BnsTables::Shared::TableRef desc;
int desc_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 8); }
		static __int16 TableId() { return 93; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingpreset_RecordPtr // : DrRecordPtr
	{
		customizingpreset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::customizingpreset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}