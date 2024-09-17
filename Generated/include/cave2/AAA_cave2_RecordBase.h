/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct cave2_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 id;
char Pad0[2];
wchar_t* alias;
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef zone[16];
int zone_tableId(){return 443;};
bool enable_heart_count;
__int8 max_instant_heart_count;
__int16 pc_max;
bool enable_skill_score;
char Pad1[3];
__int32 skill_score_recommend_gear_score;
__int32 skill_score_recommend_clear_time_step[5];
__int16 skill_score_recommend_clear_time_bonus[5];
__int16 skill_score_recommand_party_member_count_bonus;
__int32 skill_score_recommend_hp_step[5];
__int16 skill_score_recommend_hp_bonus[5];
__int16 skill_score_recommend_use_heart_count;
__int16 skill_score_recommend_use_heart_count_bonus;
char Pad2[2];
__int32 skill_score_recommend_use_item_point;
__int16 skill_score_recommend_use_item_bonus;
char Pad3[2];
Data::TableRef skill_score_boss_npc;
int skill_score_boss_npc_tableId(){return 255;};
__int16 skill_score_boss_npc_bonus;
char Pad4[2];
Data::TableRef attraction_quest[5];
int attraction_quest_tableId(){return 283;};
bool ui_filter_attraction_quest_only;
char Pad5[3];
Data::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId(){return 405;};
Data::TableRef escape_cave_confirm_text;
int escape_cave_confirm_text_tableId(){return 405;};
__int8 ui_text_grade;
char Pad6[3];
Data::TableRef cave2_name2;
int cave2_name2_tableId(){return 405;};
Data::TableRef cave2_desc;
int cave2_desc_tableId(){return 405;};
Data::TableRef arena_entrance_zone;
int arena_entrance_zone_tableId(){return 443;};
wchar_t* arena_minimap;
bool arena_disable_zone_phase;
__int8 required_level;
__int8 required_mastery_level;
char Pad7[1];
Data::TableRef quest_for_ignoring_required_level;
int quest_for_ignoring_required_level_tableId(){return 283;};
Data::TableRef gs_item_blade_master;
int gs_item_blade_master_tableId(){return 189;};
Data::TableRef gs_item_kung_fu_fighter;
int gs_item_kung_fu_fighter_tableId(){return 189;};
Data::TableRef gs_item_force_master;
int gs_item_force_master_tableId(){return 189;};
Data::TableRef gs_item_destroyer;
int gs_item_destroyer_tableId(){return 189;};
Data::TableRef gs_item_summoner;
int gs_item_summoner_tableId(){return 189;};
Data::TableRef gs_item_assassin;
int gs_item_assassin_tableId(){return 189;};
Data::TableRef gs_item_sword_master;
int gs_item_sword_master_tableId(){return 189;};
Data::TableRef gs_item_warlock;
int gs_item_warlock_tableId(){return 189;};
Data::TableRef gs_item_soul_fighter;
int gs_item_soul_fighter_tableId(){return 189;};
Data::TableRef gs_item_shooter;
int gs_item_shooter_tableId(){return 189;};
Data::TableRef gs_item_warrior;
int gs_item_warrior_tableId(){return 189;};
Data::TableRef gs_item_archer;
int gs_item_archer_tableId(){return 189;};
Data::TableRef gs_item_spear_master;
int gs_item_spear_master_tableId(){return 189;};
Data::TableRef gs_item_thunderer;
int gs_item_thunderer_tableId(){return 189;};
Data::TableRef gs_item_dual_blader;
int gs_item_dual_blader_tableId(){return 189;};
Data::TableRef gs_item_bard;
int gs_item_bard_tableId(){return 189;};
__int16 recommend_attack_power;
char Pad8[2];
Data::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 189;};
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 recommand_level_min;
__int8 recommand_level_max;
__int8 recommand_mastery_level_min;
__int8 recommand_mastery_level_max;
Data::TableRef display_quests[12];
int display_quests_tableId(){return 283;};
Data::TableRef tactic;
int tactic_tableId(){return 405;};
Data::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};

		static TableVersion Version() { return TableVersion(0, 37); }
		static __int16 TableId() { return 49; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) cave2_RecordPtr // : DrRecordPtr
	{
		cave2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::cave2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}