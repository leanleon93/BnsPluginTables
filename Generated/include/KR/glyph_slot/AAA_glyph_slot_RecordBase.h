/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct glyph_slot_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 slot;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 slot_type;
__int8 slot_color;
char Pad0[2];
__int32 required_level;
__int32 required_mastery_level;
BnsTables::Shared::TableRef required_sealed_dungeon;
int required_sealed_dungeon_tableId(){return 114;};
__int16 required_sealed_level;
__int16 required_quest_id;
__int16 required_achievement_id;
__int16 required_achievement_step;
__int32 cost_money;
BnsTables::Shared::TableRef cost_item[4];
int cost_item_tableId(){return 195;};
__int16 cost_item_count[4];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 160; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) glyph_slot_RecordPtr // : DrRecordPtr
	{
		glyph_slot_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::glyph_slot_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}