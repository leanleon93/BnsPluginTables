/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class dungeon_RecordSubType : __int32
    {
		dungeon_record_sub_none = 0,
		dungeon_record_sub_normal = 1,
		dungeon_record_sub_sealed = 2,
		dungeon_record_sub_wave = 3,
		dungeon_record_sub_count = 4,
    };
#pragma pack(push, 1)
	struct dungeon_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char dungeon_type;
char Pad0[3];
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
BnsTables::Shared::TableRef zone_neutral[2];
__int32 zone_neutral_Size() const {return 2;};
int zone_neutral_tableId() const {return 478;};
BnsTables::Shared::TableRef zone[9];
__int32 zone_Size() const {return 9;};
int zone_tableId() const {return 478;};
signed char zone_mission_step[9];
__int32 zone_mission_step_Size() const {return 9;};
char Pad1[3];
BnsTables::Shared::TableRef feedback;
int feedback_tableId() const {return 142;};
BnsTables::Shared::TableRef arena_entrance_zone;
int arena_entrance_zone_tableId() const {return 478;};
signed char required_level;
signed char required_mastery_level;
char Pad2[2];
BnsTables::Shared::TableRef required_preceding_quest[3];
__int32 required_preceding_quest_Size() const {return 3;};
int required_preceding_quest_tableId() const {return 306;};
signed char required_preceding_quest_check;
bool enable_heart_count;
signed char max_instant_heart_count_difficulty_type[3];
__int32 max_instant_heart_count_difficulty_type_Size() const {return 3;};
char Pad3[3];
BnsTables::Shared::TableRef gs_item_blade_master;
int gs_item_blade_master_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_blade_master_hard;
int gs_item_blade_master_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_blade_master_easy;
int gs_item_blade_master_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_kung_fu_fighter;
int gs_item_kung_fu_fighter_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_kung_fu_fighter_hard;
int gs_item_kung_fu_fighter_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_kung_fu_fighter_easy;
int gs_item_kung_fu_fighter_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_force_master;
int gs_item_force_master_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_force_master_hard;
int gs_item_force_master_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_force_master_easy;
int gs_item_force_master_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_destroyer;
int gs_item_destroyer_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_destroyer_hard;
int gs_item_destroyer_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_destroyer_easy;
int gs_item_destroyer_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_summoner;
int gs_item_summoner_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_summoner_hard;
int gs_item_summoner_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_summoner_easy;
int gs_item_summoner_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_assassin;
int gs_item_assassin_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_assassin_hard;
int gs_item_assassin_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_assassin_easy;
int gs_item_assassin_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_sword_master;
int gs_item_sword_master_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_sword_master_hard;
int gs_item_sword_master_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_sword_master_easy;
int gs_item_sword_master_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_warlock;
int gs_item_warlock_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_warlock_hard;
int gs_item_warlock_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_warlock_easy;
int gs_item_warlock_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_soul_fighter;
int gs_item_soul_fighter_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_soul_fighter_hard;
int gs_item_soul_fighter_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_soul_fighter_easy;
int gs_item_soul_fighter_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_shooter;
int gs_item_shooter_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_shooter_hard;
int gs_item_shooter_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_shooter_easy;
int gs_item_shooter_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_warrior;
int gs_item_warrior_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_warrior_hard;
int gs_item_warrior_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_warrior_easy;
int gs_item_warrior_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_archer;
int gs_item_archer_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_archer_hard;
int gs_item_archer_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_archer_easy;
int gs_item_archer_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_spear_master;
int gs_item_spear_master_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_spear_master_hard;
int gs_item_spear_master_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_spear_master_easy;
int gs_item_spear_master_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_thunderer;
int gs_item_thunderer_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_thunderer_hard;
int gs_item_thunderer_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_thunderer_easy;
int gs_item_thunderer_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_dual_blader;
int gs_item_dual_blader_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_dual_blader_hard;
int gs_item_dual_blader_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_dual_blader_easy;
int gs_item_dual_blader_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_bard;
int gs_item_bard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_bard_hard;
int gs_item_bard_hard_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_bard_easy;
int gs_item_bard_easy_tableId() const {return 202;};
signed char apply_contents_ban_id;
char Pad4[1];
__int16 pc_max;
bool ignore_party_difficulty_type;
char Pad5[3];
BnsTables::Shared::TableRef npc_for_step[9];
__int32 npc_for_step_Size() const {return 9;};
int npc_for_step_tableId() const {return 276;};
__int16 pc_spawn_for_step[9];
__int32 pc_spawn_for_step_Size() const {return 9;};
char Pad6[2];
__int32 money_for_step[9];
__int32 money_for_step_Size() const {return 9;};
BnsTables::Shared::TableRef item_for_step[9];
__int32 item_for_step_Size() const {return 9;};
int item_for_step_tableId() const {return 202;};
__int16 item_count_for_step[9];
__int32 item_count_for_step_Size() const {return 9;};
char Pad7[2];
BnsTables::Shared::TableRef quest_for_step[9];
__int32 quest_for_step_Size() const {return 9;};
int quest_for_step_tableId() const {return 306;};
BnsTables::Shared::TableRef quest;
int quest_tableId() const {return 306;};
BnsTables::Shared::TableRef dungeon_quest_difficulty_type[3];
__int32 dungeon_quest_difficulty_type_Size() const {return 3;};
int dungeon_quest_difficulty_type_tableId() const {return 306;};
BnsTables::Shared::TableRef effect_pc_difficulty_type[3];
__int32 effect_pc_difficulty_type_Size() const {return 3;};
int effect_pc_difficulty_type_tableId() const {return 118;};
BnsTables::Shared::TableRef effect_npc_difficulty_type[3];
__int32 effect_npc_difficulty_type_Size() const {return 3;};
int effect_npc_difficulty_type_tableId() const {return 118;};
bool enable_skill_score;
char Pad8[3];
__int32 skill_score_recommend_gear_score;
__int32 skill_score_recommend_clear_time_step[5];
__int32 skill_score_recommend_clear_time_step_Size() const {return 5;};
__int16 skill_score_recommend_clear_time_bonus[5];
__int32 skill_score_recommend_clear_time_bonus_Size() const {return 5;};
__int16 skill_score_recommand_party_member_count_bonus_difficulty_type[3];
__int32 skill_score_recommand_party_member_count_bonus_difficulty_type_Size() const {return 3;};
__int32 skill_score_recommend_hp_step[5];
__int32 skill_score_recommend_hp_step_Size() const {return 5;};
__int16 skill_score_recommend_hp_bonus[5];
__int32 skill_score_recommend_hp_bonus_Size() const {return 5;};
__int16 skill_score_recommend_use_heart_count;
__int16 skill_score_recommend_use_heart_count_bonus;
char Pad9[2];
__int32 skill_score_recommend_use_item_point;
__int16 skill_score_recommend_use_item_bonus;
char Pad10[2];
BnsTables::Shared::TableRef skill_score_boss_npc;
int skill_score_boss_npc_tableId() const {return 276;};
__int16 skill_score_boss_npc_bonus;
char Pad11[2];
BnsTables::Shared::TableRef attraction_quest[10];
__int32 attraction_quest_Size() const {return 10;};
int attraction_quest_tableId() const {return 306;};
bool ui_filter_attraction_quest_only;
char Pad12[3];
BnsTables::Shared::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId() const {return 434;};
BnsTables::Shared::TableRef escape_cave_confirm_text;
int escape_cave_confirm_text_tableId() const {return 434;};
signed char ui_text_grade;
char Pad13[3];
BnsTables::Shared::TableRef dungeon_name2;
int dungeon_name2_tableId() const {return 434;};
BnsTables::Shared::TableRef dungeon_desc;
int dungeon_desc_tableId() const {return 434;};
bool faction_battle_field;
char Pad14[3];
wchar_t* arena_minimap;
__int16 recommend_attack_power_easy;
__int16 recommend_attack_power_normal;
__int16 recommend_attack_power_hard;
char Pad15[2];
BnsTables::Shared::TableRef standard_gear_weapon_easy;
int standard_gear_weapon_easy_tableId() const {return 202;};
BnsTables::Shared::TableRef standard_gear_weapon_normal;
int standard_gear_weapon_normal_tableId() const {return 202;};
BnsTables::Shared::TableRef standard_gear_weapon_hard;
int standard_gear_weapon_hard_tableId() const {return 202;};
bool use_difficulty_normal;
bool use_difficulty_hard;
char Pad16[2];
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
signed char recommand_level_min;
signed char recommand_level_max;
signed char recommand_mastery_level_min;
signed char recommand_mastery_level_max;
BnsTables::Shared::TableRef display_quests[12];
__int32 display_quests_Size() const {return 12;};
int display_quests_tableId() const {return 306;};
BnsTables::Shared::TableRef tactic_normal;
int tactic_normal_tableId() const {return 434;};
BnsTables::Shared::TableRef tactic_hard;
int tactic_hard_tableId() const {return 434;};
BnsTables::Shared::TableRef tactic_easy;
int tactic_easy_tableId() const {return 434;};
BnsTables::Shared::TableRef recommend_alias_normal;
int recommend_alias_normal_tableId() const {return 74;};
BnsTables::Shared::TableRef recommend_alias_hard;
int recommend_alias_hard_tableId() const {return 74;};
BnsTables::Shared::TableRef recommend_alias_easy;
int recommend_alias_easy_tableId() const {return 74;};
bool boss_ui_extend_distance;
char Pad17[3];
BnsTables::Shared::TableRef boss_npc_alias[8];
__int32 boss_npc_alias_Size() const {return 8;};
int boss_npc_alias_tableId() const {return 276;};
BnsTables::Shared::TableRef boss_npc_section[8];
__int32 boss_npc_section_Size() const {return 8;};
int boss_npc_section_tableId() const {return 434;};
__int32 dungeon_challenge_reward_min_combat_power;
__int32 dungeon_challenge_reward_recommend_combat_power;
__int16 dungeon_challenge_reward_interval_count;
char Pad18[2];
BnsTables::Shared::TableRef dungeon_challenge_reward_npc;
int dungeon_challenge_reward_npc_tableId() const {return 276;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(10, 0); }
		static __int16 TableId() { return 117; }
		static __int32 SubType() { return -1; }
		enum class dungeon_type {
			unbind = 0,
			bind = 1,
		};

		enum class required_preceding_quest_check {
			and_val = 0,
			or_val = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) dungeon_RecordPtr // : DrRecordPtr
	{
		dungeon_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}