/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct itemtransformrecipe_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef upgrade_grocery;
int upgrade_grocery_tableId(){return 214;};
__int8 required_inven_capacity;
char Pad0[3];
__int32 money_cost;
BnsTables::Shared::ExplicitTableRef main_ingredient;
__int8 main_ingredient_condition_type;
__int8 main_ingredient_min_level;
__int16 main_ingredient_stack_count;
BnsTables::Shared::TableRef main_ingredient_title_name;
int main_ingredient_title_name_tableId(){return 405;};
BnsTables::Shared::TableRef main_ingredient_title_item;
int main_ingredient_title_item_tableId(){return 189;};
bool keep_main_ingredient_weapon_gem_slot;
bool keep_main_ingredient_weapon_appearance;
bool keep_main_ingredient_spirit;
bool consume_main_ingredient;
BnsTables::Shared::ExplicitTableRef sub_ingredient[7];
__int8 sub_ingredient_condition_type[7];
__int8 sub_ingredient_min_level[7];
__int16 sub_ingredient_stack_count[7];
BnsTables::Shared::TableRef sub_ingredient_title_name[7];
int sub_ingredient_title_name_tableId(){return 405;};
BnsTables::Shared::TableRef sub_ingredient_title_item[7];
int sub_ingredient_title_item_tableId(){return 189;};
bool consume_sub_ingredient;
char Pad1[3];
BnsTables::Shared::TableRef fixed_ingredient[8];
int fixed_ingredient_tableId(){return 189;};
__int16 fixed_ingredient_stack_count[8];
bool consume_fixed_ingredient;
__int8 special_fixed_index;
bool enable_batch_transform;
bool is_fixed_result_recipe;
__int16 rare_item_success_probability;
char Pad2[2];
BnsTables::Shared::ExplicitTableRef rare_item[10];
__int8 rare_item_total_count;
__int8 rare_item_select_count;
__int16 rare_item_stack_count[10];
__int16 normal_item_success_probability;
BnsTables::Shared::ExplicitTableRef normal_item[10];
__int8 normal_item_total_count;
__int8 normal_item_select_count;
__int16 normal_item_stack_count[10];
char Pad3[2];
BnsTables::Shared::ExplicitTableRef premium_item[10];
__int8 premium_item_total_count;
__int8 premium_item_select_count;
__int16 premium_item_stack_count[10];
__int16 random_item_success_probability;
BnsTables::Shared::ExplicitTableRef random_item[10];
__int8 random_item_total_count;
char Pad4[1];
__int16 random_item_select_prop_weight[10];
bool random_failure_mileage_save;
char Pad5[1];
BnsTables::Shared::TableRef random_failure_mileage_influence_recipe[2];
int random_failure_mileage_influence_recipe_tableId(){return 212;};
BnsTables::Shared::TableRef random_retry_cost;
int random_retry_cost_tableId(){return 213;};
__int8 main_ingredient_weapon_gem_type;
char Pad6[1];
__int16 main_ingredient_weapon_gem_level;
__int8 main_ingredient_weapon_gem_grade;
__int8 sub_ingredient_weapon_gem_type[7];
__int16 sub_ingredient_weapon_gem_level[7];
__int8 sub_ingredient_weapon_gem_grade[7];
char Pad7[1];
__int16 weapon_gem_transform_fail_probability;
BnsTables::Shared::TableRef title_item;
int title_item_tableId(){return 189;};
BnsTables::Shared::TableRef title_name;
int title_name_tableId(){return 405;};
BnsTables::Shared::TableRef title_reward;
int title_reward_tableId(){return 290;};
__int8 upper_category;
__int8 category;
bool use_random;
char Pad8[1];
BnsTables::Shared::TableRef fail_effect;
int fail_effect_tableId(){return 111;};
BnsTables::Shared::TableRef quest;
int quest_tableId(){return 283;};
bool bm_ingredient_recipe;
__int8 warning;
__int8 event_index;
char Pad9[1];
__int32 recipe_score;
__int8 recipe_series;
__int8 definite_discount_minimum_value;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 212; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemtransformrecipe_RecordPtr // : DrRecordPtr
	{
		itemtransformrecipe_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemtransformrecipe_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}