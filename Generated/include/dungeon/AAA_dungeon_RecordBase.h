/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
    enum class dungeon_RecordSubType : __int32
    {
		dungeon_record_sub_none = 0,
		dungeon_record_sub_normal = 1,
		dungeon_record_sub_sealed = 2,
		dungeon_record_sub_wave = 3,
		dungeon_record_sub_count = 4,
    };
#pragma pack(push, 1)
	struct dungeon_Record : DrEl
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
__int8 dungeon_type;
char Pad0[3];
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef zone_neutral[2];
int zone_neutral_tableId(){return 443;};
Data::TableRef zone[9];
int zone_tableId(){return 443;};
__int8 zone_mission_step[9];
char Pad1[3];
Data::TableRef feedback;
int feedback_tableId(){return 133;};
Data::TableRef arena_entrance_zone;
int arena_entrance_zone_tableId(){return 443;};
__int8 required_level;
__int8 required_mastery_level;
char Pad2[2];
Data::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 283;};
__int8 required_preceding_quest_check;
bool enable_heart_count;
__int8 max_instant_heart_count_difficulty_type[3];
char Pad3[3];
Data::TableRef gs_item_blade_master;
int gs_item_blade_master_tableId(){return 189;};
Data::TableRef gs_item_blade_master_hard;
int gs_item_blade_master_hard_tableId(){return 189;};
Data::TableRef gs_item_blade_master_easy;
int gs_item_blade_master_easy_tableId(){return 189;};
Data::TableRef gs_item_kung_fu_fighter;
int gs_item_kung_fu_fighter_tableId(){return 189;};
Data::TableRef gs_item_kung_fu_fighter_hard;
int gs_item_kung_fu_fighter_hard_tableId(){return 189;};
Data::TableRef gs_item_kung_fu_fighter_easy;
int gs_item_kung_fu_fighter_easy_tableId(){return 189;};
Data::TableRef gs_item_force_master;
int gs_item_force_master_tableId(){return 189;};
Data::TableRef gs_item_force_master_hard;
int gs_item_force_master_hard_tableId(){return 189;};
Data::TableRef gs_item_force_master_easy;
int gs_item_force_master_easy_tableId(){return 189;};
Data::TableRef gs_item_destroyer;
int gs_item_destroyer_tableId(){return 189;};
Data::TableRef gs_item_destroyer_hard;
int gs_item_destroyer_hard_tableId(){return 189;};
Data::TableRef gs_item_destroyer_easy;
int gs_item_destroyer_easy_tableId(){return 189;};
Data::TableRef gs_item_summoner;
int gs_item_summoner_tableId(){return 189;};
Data::TableRef gs_item_summoner_hard;
int gs_item_summoner_hard_tableId(){return 189;};
Data::TableRef gs_item_summoner_easy;
int gs_item_summoner_easy_tableId(){return 189;};
Data::TableRef gs_item_assassin;
int gs_item_assassin_tableId(){return 189;};
Data::TableRef gs_item_assassin_hard;
int gs_item_assassin_hard_tableId(){return 189;};
Data::TableRef gs_item_assassin_easy;
int gs_item_assassin_easy_tableId(){return 189;};
Data::TableRef gs_item_sword_master;
int gs_item_sword_master_tableId(){return 189;};
Data::TableRef gs_item_sword_master_hard;
int gs_item_sword_master_hard_tableId(){return 189;};
Data::TableRef gs_item_sword_master_easy;
int gs_item_sword_master_easy_tableId(){return 189;};
Data::TableRef gs_item_warlock;
int gs_item_warlock_tableId(){return 189;};
Data::TableRef gs_item_warlock_hard;
int gs_item_warlock_hard_tableId(){return 189;};
Data::TableRef gs_item_warlock_easy;
int gs_item_warlock_easy_tableId(){return 189;};
Data::TableRef gs_item_soul_fighter;
int gs_item_soul_fighter_tableId(){return 189;};
Data::TableRef gs_item_soul_fighter_hard;
int gs_item_soul_fighter_hard_tableId(){return 189;};
Data::TableRef gs_item_soul_fighter_easy;
int gs_item_soul_fighter_easy_tableId(){return 189;};
Data::TableRef gs_item_shooter;
int gs_item_shooter_tableId(){return 189;};
Data::TableRef gs_item_shooter_hard;
int gs_item_shooter_hard_tableId(){return 189;};
Data::TableRef gs_item_shooter_easy;
int gs_item_shooter_easy_tableId(){return 189;};
Data::TableRef gs_item_warrior;
int gs_item_warrior_tableId(){return 189;};
Data::TableRef gs_item_warrior_hard;
int gs_item_warrior_hard_tableId(){return 189;};
Data::TableRef gs_item_warrior_easy;
int gs_item_warrior_easy_tableId(){return 189;};
Data::TableRef gs_item_archer;
int gs_item_archer_tableId(){return 189;};
Data::TableRef gs_item_archer_hard;
int gs_item_archer_hard_tableId(){return 189;};
Data::TableRef gs_item_archer_easy;
int gs_item_archer_easy_tableId(){return 189;};
Data::TableRef gs_item_spear_master;
int gs_item_spear_master_tableId(){return 189;};
Data::TableRef gs_item_spear_master_hard;
int gs_item_spear_master_hard_tableId(){return 189;};
Data::TableRef gs_item_spear_master_easy;
int gs_item_spear_master_easy_tableId(){return 189;};
Data::TableRef gs_item_thunderer;
int gs_item_thunderer_tableId(){return 189;};
Data::TableRef gs_item_thunderer_hard;
int gs_item_thunderer_hard_tableId(){return 189;};
Data::TableRef gs_item_thunderer_easy;
int gs_item_thunderer_easy_tableId(){return 189;};
Data::TableRef gs_item_dual_blader;
int gs_item_dual_blader_tableId(){return 189;};
Data::TableRef gs_item_dual_blader_hard;
int gs_item_dual_blader_hard_tableId(){return 189;};
Data::TableRef gs_item_dual_blader_easy;
int gs_item_dual_blader_easy_tableId(){return 189;};
Data::TableRef gs_item_bard;
int gs_item_bard_tableId(){return 189;};
Data::TableRef gs_item_bard_hard;
int gs_item_bard_hard_tableId(){return 189;};
Data::TableRef gs_item_bard_easy;
int gs_item_bard_easy_tableId(){return 189;};
__int8 apply_contents_ban_id;
char Pad4[1];
__int16 pc_max;
bool ignore_party_difficulty_type;
char Pad5[3];
Data::TableRef npc_for_step[9];
int npc_for_step_tableId(){return 255;};
__int16 pc_spawn_for_step[9];
char Pad6[2];
__int32 money_for_step[9];
Data::TableRef item_for_step[9];
int item_for_step_tableId(){return 189;};
__int16 item_count_for_step[9];
char Pad7[2];
Data::TableRef quest_for_step[9];
int quest_for_step_tableId(){return 283;};
Data::TableRef quest;
int quest_tableId(){return 283;};
Data::TableRef dungeon_quest_difficulty_type[3];
int dungeon_quest_difficulty_type_tableId(){return 283;};
Data::TableRef effect_pc_difficulty_type[3];
int effect_pc_difficulty_type_tableId(){return 111;};
Data::TableRef effect_npc_difficulty_type[3];
int effect_npc_difficulty_type_tableId(){return 111;};
bool enable_skill_score;
char Pad8[3];
__int32 skill_score_recommend_gear_score;
__int32 skill_score_recommend_clear_time_step[5];
__int16 skill_score_recommend_clear_time_bonus[5];
__int16 skill_score_recommand_party_member_count_bonus_difficulty_type[3];
__int32 skill_score_recommend_hp_step[5];
__int16 skill_score_recommend_hp_bonus[5];
__int16 skill_score_recommend_use_heart_count;
__int16 skill_score_recommend_use_heart_count_bonus;
char Pad9[2];
__int32 skill_score_recommend_use_item_point;
__int16 skill_score_recommend_use_item_bonus;
char Pad10[2];
Data::TableRef skill_score_boss_npc;
int skill_score_boss_npc_tableId(){return 255;};
__int16 skill_score_boss_npc_bonus;
char Pad11[2];
Data::TableRef attraction_quest[10];
int attraction_quest_tableId(){return 283;};
bool ui_filter_attraction_quest_only;
char Pad12[3];
Data::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId(){return 405;};
Data::TableRef escape_cave_confirm_text;
int escape_cave_confirm_text_tableId(){return 405;};
__int8 ui_text_grade;
char Pad13[3];
Data::TableRef dungeon_name2;
int dungeon_name2_tableId(){return 405;};
Data::TableRef dungeon_desc;
int dungeon_desc_tableId(){return 405;};
bool faction_battle_field;
char Pad14[3];
wchar_t* arena_minimap;
__int16 recommend_attack_power_easy;
__int16 recommend_attack_power_normal;
__int16 recommend_attack_power_hard;
char Pad15[2];
Data::TableRef standard_gear_weapon_easy;
int standard_gear_weapon_easy_tableId(){return 189;};
Data::TableRef standard_gear_weapon_normal;
int standard_gear_weapon_normal_tableId(){return 189;};
Data::TableRef standard_gear_weapon_hard;
int standard_gear_weapon_hard_tableId(){return 189;};
bool use_difficulty_normal;
bool use_difficulty_hard;
char Pad16[2];
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 recommand_level_min;
__int8 recommand_level_max;
__int8 recommand_mastery_level_min;
__int8 recommand_mastery_level_max;
Data::TableRef display_quests[12];
int display_quests_tableId(){return 283;};
Data::TableRef tactic_normal;
int tactic_normal_tableId(){return 405;};
Data::TableRef tactic_hard;
int tactic_hard_tableId(){return 405;};
Data::TableRef tactic_easy;
int tactic_easy_tableId(){return 405;};
Data::TableRef recommend_alias_normal;
int recommend_alias_normal_tableId(){return 71;};
Data::TableRef recommend_alias_hard;
int recommend_alias_hard_tableId(){return 71;};
Data::TableRef recommend_alias_easy;
int recommend_alias_easy_tableId(){return 71;};
bool boss_ui_extend_distance;
char Pad17[3];
Data::TableRef boss_npc_alias[8];
int boss_npc_alias_tableId(){return 255;};
Data::TableRef boss_npc_section[8];
int boss_npc_section_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(9, 11); }
		static __int16 TableId() { return 110; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) dungeon_RecordPtr // : DrRecordPtr
	{
		dungeon_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::dungeon_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}