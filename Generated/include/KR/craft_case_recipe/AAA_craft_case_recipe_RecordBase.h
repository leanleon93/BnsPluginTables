/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct craft_case_recipe_Record : BnsTables::Shared::DrEl
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
		wchar_t* alias;
signed char publisher;
char Pad0[3];
BnsTables::Shared::TableRef group_alias;
int group_alias_tableId() const {return 83;};
signed char case_option;
char Pad1[3];
__int32 craft_duration;
signed char use_state;
char Pad2[3];
BnsTables::Shared::TableRef name;
int name_tableId() const {return 434;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 434;};
BnsTables::Shared::TableRef requirement_name;
int requirement_name_tableId() const {return 434;};
BnsTables::Shared::TableRef location_desc;
int location_desc_tableId() const {return 434;};
__int16 required_craft_exp;
char Pad3[2];
__int32 required_achievement_id;
__int16 required_achievement_step_min;
char Pad4[2];
__int32 cost_money;
BnsTables::Shared::ExplicitTableRef cost_material[8];
__int32 cost_material_Size() const {return 8;};
signed char cost_material_condition_type[8];
__int32 cost_material_condition_type_Size() const {return 8;};
__int16 cost_material_amount[8];
__int32 cost_material_amount_Size() const {return 8;};
__int16 reward_craft_exp;
__int16 half_craft_exp_step;
__int16 zero_craft_exp_step;
__int16 reward_craft_bonus_exp;
__int16 half_craft_bonus_exp_step;
__int16 zero_craft_bonus_exp_step;
BnsTables::Shared::TableRef reward_item[5];
__int32 reward_item_Size() const {return 5;};
int reward_item_tableId() const {return 202;};
__int32 reward_item_min[5];
__int32 reward_item_min_Size() const {return 5;};
__int32 reward_item_max[5];
__int32 reward_item_max_Size() const {return 5;};
__int32 reward_item_reference[5];
__int32 reward_item_reference_Size() const {return 5;};
BnsTables::Shared::TableRef reward_item_random_distribution[5];
__int32 reward_item_random_distribution_Size() const {return 5;};
int reward_item_random_distribution_tableId() const {return 317;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 81; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_case_recipe_RecordPtr // : DrRecordPtr
	{
		craft_case_recipe_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}