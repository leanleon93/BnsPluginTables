/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class achievement_register_RecordSubType : __int32
    {
		achievement_register_record_sub_null = 0,
		achievement_register_record_sub_kill_boss_npc = 1,
		achievement_register_record_sub_kill_npc = 2,
		achievement_register_record_sub_kill_pc = 3,
		achievement_register_record_sub_equip_item_brand_n = 4,
		achievement_register_record_sub_equip_item_n = 5,
		achievement_register_record_sub_use_grocery = 6,
		achievement_register_record_sub_use_grocery_n = 7,
		achievement_register_record_sub_use_grocery_brand_n = 8,
		achievement_register_record_sub_time = 9,
		achievement_register_record_sub_use_skill_to_npc = 10,
		achievement_register_record_sub_defend_npc_skill = 11,
		achievement_register_record_sub_pc_exhaustion = 12,
		achievement_register_record_sub_pc_dead = 13,
		achievement_register_record_sub_use_gadget_to_npc = 14,
		achievement_register_record_sub_quest_complete = 15,
		achievement_register_record_sub_quest_complete_count = 16,
		achievement_register_record_sub_tendency_quest_complete_count = 17,
		achievement_register_record_sub_duel_win_count = 18,
		achievement_register_record_sub_duel_grade = 19,
		achievement_register_record_sub_manipulate_env = 20,
		achievement_register_record_sub_exchange_faction_score_count = 21,
		achievement_register_record_sub_teleport_count = 22,
		achievement_register_record_sub_help_restoration = 23,
		achievement_register_record_sub_help_resurrect = 24,
		achievement_register_record_sub_get_contribution_count = 25,
		achievement_register_record_sub_get_contribution_score = 26,
		achievement_register_record_sub_give_faction_score_to_refiner = 27,
		achievement_register_record_sub_duel_bot_challenge_finished_floor = 28,
		achievement_register_record_sub_accumulate_field_play_point_by_simple_tendency_quest = 29,
		achievement_register_record_sub_accumulate_faction_score = 30,
		achievement_register_record_sub_growth_item = 31,
		achievement_register_record_sub_attach_equip_gem_piece = 32,
		achievement_register_record_sub_decompose_item = 33,
		achievement_register_record_sub_decompose_item_n = 34,
		achievement_register_record_sub_decompose_item_equip_type_n = 35,
		achievement_register_record_sub_decompose_item_weapon_gem_level_n = 36,
		achievement_register_record_sub_attach_gem_to_weapon = 37,
		achievement_register_record_sub_attach_gem_to_weapon_n = 38,
		achievement_register_record_sub_awakening_item = 39,
		achievement_register_record_sub_transform_item_brand = 40,
		achievement_register_record_sub_transform_item = 41,
		achievement_register_record_sub_zero_durability = 42,
		achievement_register_record_sub_repair_item = 43,
		achievement_register_record_sub_check_combination_count = 44,
		achievement_register_record_sub_completition_star_words = 45,
		achievement_register_record_sub_detach_post_attachment_count = 46,
		achievement_register_record_sub_detach_post_attachment_money = 47,
		achievement_register_record_sub_detach_post_attachment_item = 48,
		achievement_register_record_sub_detach_post_attachment_item_n = 49,
		achievement_register_record_sub_take_craft_count = 50,
		achievement_register_record_sub_take_craft_item = 51,
		achievement_register_record_sub_take_craft_item_n = 52,
		achievement_register_record_sub_inventory_size = 53,
		achievement_register_record_sub_wardrobe_size = 54,
		achievement_register_record_sub_depot_size = 55,
		achievement_register_record_sub_depository_2_size = 56,
		achievement_register_record_sub_pc_level = 57,
		achievement_register_record_sub_pc_mastery_level = 58,
		achievement_register_record_sub_client_only = 59,
		achievement_register_record_sub_party_battle_win_count = 60,
		achievement_register_record_sub_party_battle_challenge_count = 61,
		achievement_register_record_sub_party_battle_grade = 62,
		achievement_register_record_sub_lead_the_ball_goal_in_count = 63,
		achievement_register_record_sub_skill_training_subject_complete = 64,
		achievement_register_record_sub_dispose_item_buy_price_required_point = 65,
		achievement_register_record_sub_accumulate_party_battle_point_by_party_battle_field = 66,
		achievement_register_record_sub_acquire_fish_count = 67,
		achievement_register_record_sub_acquire_specific_fish_count = 68,
		achievement_register_record_sub_acquire_fish_size_count = 69,
		achievement_register_record_sub_acquire_fish_grade_count = 70,
		achievement_register_record_sub_acquire_fish_size_grade_count = 71,
		achievement_register_record_sub_accumulate_life_contents_point_by_fishing = 72,
		achievement_register_record_sub_hyper_racing_game_participation = 73,
		achievement_register_record_sub_hyper_racing_game_finish = 74,
		achievement_register_record_sub_hyper_racing_game_record = 75,
		achievement_register_record_sub_finish_feedback = 76,
		achievement_register_record_sub_duel_npc_challenge_finished_floor = 77,
		achievement_register_record_sub_count = 78,
    };
#pragma pack(push, 1)
	struct achievement_register_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;
signed char job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view job_EnumValue() const {return Get_job_EnumValue(key.job);};
wchar_t* alias;
__int16 version;
char Pad0[2];
__int32 max_value;
bool for_newbie_care;
bool persistant;
bool increment_from_client;
char Pad1[1];
BnsTables::Shared::TableRef achievement[8];
__int32 achievement_Size() const {return 8;};
int achievement_tableId() const {return 6;};
BnsTables::Shared::TableRef register_name;
int register_name_tableId() const {return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 7; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) achievement_register_RecordPtr // : DrRecordPtr
	{
		achievement_register_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}