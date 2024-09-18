/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct equip_item_guide_item_list_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef item;
int item_tableId(){return 195;};
__int8 item_improve_level;
__int8 item_stage_number;
char Pad0[2];
BnsTables::Shared::TableRef item_guide;
int item_guide_tableId(){return 125;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 126; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) equip_item_guide_item_list_RecordPtr // : DrRecordPtr
	{
		equip_item_guide_item_list_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::equip_item_guide_item_list_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}