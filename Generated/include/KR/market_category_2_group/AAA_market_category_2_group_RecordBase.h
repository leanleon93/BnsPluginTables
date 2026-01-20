/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class market_category_2_group_RecordSubType : __int32
    {
		market_category_2_group_record_sub_favorite = 0,
		market_category_2_group_record_sub_world_boss = 1,
		market_category_2_group_record_sub_market_category_2 = 2,
		market_category_2_group_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct market_category_2_group_Record : BnsTables::Shared::DrEl
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
		__int32 sort_no;
bool visible;
char Pad0[3];
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 441;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 263; }
		static __int32 SubType() { return -1; }
		enum class market_category_2 {
			none = 0,
			weapon = 1,
			equip_gem = 2,
			accessory = 3,
			dress = 4,
			weapon_gem = 5,
			medicine = 6,
			food = 7,
			build_up_stone = 8,
			talisman = 9,
			tool = 10,
			equip_material = 11,
			union_material = 12,
			dress_material = 13,
			etc_material = 14,
			coin = 15,
			deed = 16,
			quest = 17,
			etc_change = 18,
			etc_box = 19,
			badge = 20,
			relic = 21,
			skill_train_by_item_extract = 22,
			gold = 23,
			spirit = 24,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) market_category_2_group_RecordPtr // : DrRecordPtr
	{
		market_category_2_group_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}