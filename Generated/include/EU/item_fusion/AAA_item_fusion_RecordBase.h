/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct item_fusion_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 category;
char Pad_key_0[2];
__int32 score;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef cost_group;
int cost_group_tableId() const {return 79;};
BnsTables::Shared::TableRef result_item[80];
__int32 result_item_Size() const {return 80;};
int result_item_tableId() const {return 202;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 205; }
		static __int32 SubType() { return -1; }
		enum class category {
			none = 0,
			costume = 1,
			head_attach = 2,
			face_attach = 3,
			costume_attach = 4,
			summoned_pet_costume = 5,
			summoned_pet_hat = 6,
			summoned_pet_attach = 7,
			gam1 = 8,
			gan2 = 9,
			jin3 = 10,
			son4 = 11,
			ri5 = 12,
			gon6 = 13,
			tae7 = 14,
			geon8 = 15,
			weapon_gem = 16,
			sword = 17,
			gauntlet = 18,
			aura_bangle = 19,
			axe = 20,
			dagger = 21,
			staff = 22,
			lyn_sword = 23,
			warlock_dagger = 24,
			soul_fighter_gauntlet = 25,
			gun = 26,
			long_bow = 27,
			great_sword = 28,
			orb = 29,
			necklace = 30,
			ring = 31,
			earring = 32,
			bracelet = 33,
			belt = 34,
			gloves = 35,
			soul = 36,
			soul_2 = 37,
			nova = 38,
			pet = 39,
			corundum_white = 40,
			corundum_black = 41,
			corundum_pink = 42,
			corundum_yellow = 43,
			corundum_bluegreen = 44,
			corundum_blue = 45,
			dual_blade = 46,
			instrument = 47,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_fusion_RecordPtr // : DrRecordPtr
	{
		item_fusion_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}