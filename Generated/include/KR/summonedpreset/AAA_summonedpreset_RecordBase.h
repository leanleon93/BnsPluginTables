/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct summonedpreset_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 race;
__int8 part_type;
__int8 part_value;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 price;
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId(){return 182;};
__int16 icon_index;
char Pad0[2];
BnsTables::Shared::TableRef desc;
int desc_tableId(){return 420;};
__int8 param8[96];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 409; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summonedpreset_RecordPtr // : DrRecordPtr
	{
		summonedpreset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::summonedpreset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}