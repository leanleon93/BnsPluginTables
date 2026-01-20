/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct job_change_item_exchange_type_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char item_exchange_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char condition;
char Pad0[3];
wchar_t* icon;
BnsTables::Shared::TableRef name_text;
int name_text_tableId() const {return 441;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 3); }
		static __int16 TableId() { return 238; }
		static __int32 SubType() { return -1; }
		enum class item_exchange_type {
			none = 0,
			weapon = 1,
			weapon_appearance = 2,
			costume = 3,
			earring = 4,
			eyeglass = 5,
			hat = 6,
			ring = 7,
			necklace = 8,
			gem_1 = 9,
			gem_2 = 10,
			gem_3 = 11,
			gem_4 = 12,
			gem_5 = 13,
			gem_6 = 14,
			gem_7 = 15,
			gem_8 = 16,
			attach = 17,
			belt = 18,
			bracelet = 19,
			soul = 20,
			soul_2 = 21,
			gloves = 22,
			pet_1 = 23,
			pet_2 = 24,
			rune_1 = 25,
			rune_2 = 26,
			nova = 27,
			badge_1_premium = 28,
			badge_2_premium = 29,
			badge_3_premium = 30,
			badge_1_normal = 31,
			badge_2_normal = 32,
			badge_3_normal = 33,
			badge_appearance = 34,
			vehicle = 35,
			armlet_1 = 36,
			armlet_2 = 37,
			weapon_enchant_gem = 38,
			skill_train_by_item = 39,
			weapon_soul_gem = 40,
		};

		enum class condition {
			item_equip_type = 0,
			weapon_appearance = 1,
			weapon_enchant_gem = 2,
			skill_train_by_item = 3,
			weapon_soul_gem = 4,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_change_item_exchange_type_RecordPtr // : DrRecordPtr
	{
		job_change_item_exchange_type_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}