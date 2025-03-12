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
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
char Pad0[3];
BnsTables::Shared::TableRef upgrade_grocery;
int upgrade_grocery_tableId() const {return 224;};
signed char required_inven_capacity;
char Pad1[3];
__int32 money_cost;
BnsTables::Shared::ExplicitTableRef main_ingredient;
signed char main_ingredient_condition_type;
signed char main_ingredient_min_level;
__int16 main_ingredient_stack_count;
BnsTables::Shared::TableRef main_ingredient_title_name;
int main_ingredient_title_name_tableId() const {return 427;};
BnsTables::Shared::TableRef main_ingredient_title_item;
int main_ingredient_title_item_tableId() const {return 198;};
bool keep_main_ingredient_weapon_gem_slot;
bool keep_main_ingredient_weapon_appearance;
bool keep_main_ingredient_spirit;
bool consume_main_ingredient;
BnsTables::Shared::ExplicitTableRef sub_ingredient[7];
__int32 sub_ingredient_Size() const {return 7;};
signed char sub_ingredient_condition_type[7];
__int32 sub_ingredient_condition_type_Size() const {return 7;};
signed char sub_ingredient_min_level[7];
__int32 sub_ingredient_min_level_Size() const {return 7;};
__int16 sub_ingredient_stack_count[7];
__int32 sub_ingredient_stack_count_Size() const {return 7;};
BnsTables::Shared::TableRef sub_ingredient_title_name[7];
__int32 sub_ingredient_title_name_Size() const {return 7;};
int sub_ingredient_title_name_tableId() const {return 427;};
BnsTables::Shared::TableRef sub_ingredient_title_item[7];
__int32 sub_ingredient_title_item_Size() const {return 7;};
int sub_ingredient_title_item_tableId() const {return 198;};
bool consume_sub_ingredient;
char Pad2[3];
BnsTables::Shared::TableRef fixed_ingredient[8];
__int32 fixed_ingredient_Size() const {return 8;};
int fixed_ingredient_tableId() const {return 198;};
__int16 fixed_ingredient_stack_count[8];
__int32 fixed_ingredient_stack_count_Size() const {return 8;};
bool consume_fixed_ingredient;
signed char special_fixed_index;
bool enable_batch_transform;
bool is_fixed_result_recipe;
__int16 rare_item_success_probability;
char Pad3[2];
BnsTables::Shared::ExplicitTableRef rare_item[10];
__int32 rare_item_Size() const {return 10;};
signed char rare_item_total_count;
signed char rare_item_select_count;
__int16 rare_item_stack_count[10];
__int32 rare_item_stack_count_Size() const {return 10;};
__int16 normal_item_success_probability;
BnsTables::Shared::ExplicitTableRef normal_item[10];
__int32 normal_item_Size() const {return 10;};
signed char normal_item_total_count;
signed char normal_item_select_count;
__int16 normal_item_stack_count[10];
__int32 normal_item_stack_count_Size() const {return 10;};
char Pad4[2];
BnsTables::Shared::ExplicitTableRef premium_item[10];
__int32 premium_item_Size() const {return 10;};
signed char premium_item_total_count;
signed char premium_item_select_count;
__int16 premium_item_stack_count[10];
__int32 premium_item_stack_count_Size() const {return 10;};
__int16 random_item_success_probability;
BnsTables::Shared::ExplicitTableRef random_item[10];
__int32 random_item_Size() const {return 10;};
signed char random_item_total_count;
char Pad5[1];
__int16 random_item_select_prop_weight[10];
__int32 random_item_select_prop_weight_Size() const {return 10;};
bool random_failure_mileage_save;
char Pad6[1];
BnsTables::Shared::TableRef random_failure_mileage_distribution_type;
int random_failure_mileage_distribution_type_tableId() const {return 310;};
BnsTables::Shared::TableRef random_failure_mileage_influence_recipe[2];
__int32 random_failure_mileage_influence_recipe_Size() const {return 2;};
int random_failure_mileage_influence_recipe_tableId() const {return 222;};
BnsTables::Shared::TableRef random_retry_cost;
int random_retry_cost_tableId() const {return 223;};
signed char main_ingredient_weapon_gem_type;
char Pad7[1];
__int16 main_ingredient_weapon_gem_level;
signed char main_ingredient_weapon_gem_grade;
signed char sub_ingredient_weapon_gem_type[7];
__int32 sub_ingredient_weapon_gem_type_Size() const {return 7;};
__int16 sub_ingredient_weapon_gem_level[7];
__int32 sub_ingredient_weapon_gem_level_Size() const {return 7;};
signed char sub_ingredient_weapon_gem_grade[7];
__int32 sub_ingredient_weapon_gem_grade_Size() const {return 7;};
char Pad8[1];
__int16 weapon_gem_transform_fail_probability;
BnsTables::Shared::TableRef title_item;
int title_item_tableId() const {return 198;};
BnsTables::Shared::TableRef title_name;
int title_name_tableId() const {return 427;};
BnsTables::Shared::TableRef title_reward;
int title_reward_tableId() const {return 309;};
signed char upper_category;
signed char category;
bool use_random;
char Pad9[1];
BnsTables::Shared::TableRef fail_effect;
int fail_effect_tableId() const {return 115;};
BnsTables::Shared::TableRef quest;
int quest_tableId() const {return 299;};
bool bm_ingredient_recipe;
signed char warning;
signed char event_index;
char Pad10[1];
__int32 recipe_score;
signed char recipe_series;
signed char definite_discount_minimum_value;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 3); }
		static __int16 TableId() { return 222; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemtransformrecipe_RecordPtr // : DrRecordPtr
	{
		itemtransformrecipe_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}