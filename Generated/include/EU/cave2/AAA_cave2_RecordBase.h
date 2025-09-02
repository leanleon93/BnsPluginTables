/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct cave2_Record : BnsTables::Shared::DrEl
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
		__int16 id;
char Pad0[2];
wchar_t* alias;
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
BnsTables::Shared::TableRef zone[16];
__int32 zone_Size() const {return 16;};
int zone_tableId() const {return 479;};
bool enable_heart_count;
signed char max_instant_heart_count;
__int16 pc_max;
bool enable_skill_score;
char Pad1[3];
__int32 skill_score_recommend_gear_score;
__int32 skill_score_recommend_clear_time_step[5];
__int32 skill_score_recommend_clear_time_step_Size() const {return 5;};
__int16 skill_score_recommend_clear_time_bonus[5];
__int32 skill_score_recommend_clear_time_bonus_Size() const {return 5;};
__int16 skill_score_recommand_party_member_count_bonus;
__int32 skill_score_recommend_hp_step[5];
__int32 skill_score_recommend_hp_step_Size() const {return 5;};
__int16 skill_score_recommend_hp_bonus[5];
__int32 skill_score_recommend_hp_bonus_Size() const {return 5;};
__int16 skill_score_recommend_use_heart_count;
__int16 skill_score_recommend_use_heart_count_bonus;
char Pad2[2];
__int32 skill_score_recommend_use_item_point;
__int16 skill_score_recommend_use_item_bonus;
char Pad3[2];
BnsTables::Shared::TableRef skill_score_boss_npc;
int skill_score_boss_npc_tableId() const {return 276;};
__int16 skill_score_boss_npc_bonus;
char Pad4[2];
BnsTables::Shared::TableRef attraction_quest[5];
__int32 attraction_quest_Size() const {return 5;};
int attraction_quest_tableId() const {return 306;};
bool ui_filter_attraction_quest_only;
char Pad5[3];
BnsTables::Shared::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId() const {return 434;};
BnsTables::Shared::TableRef escape_cave_confirm_text;
int escape_cave_confirm_text_tableId() const {return 434;};
signed char ui_text_grade;
char Pad6[3];
BnsTables::Shared::TableRef cave2_name2;
int cave2_name2_tableId() const {return 434;};
BnsTables::Shared::TableRef cave2_desc;
int cave2_desc_tableId() const {return 434;};
BnsTables::Shared::TableRef arena_entrance_zone;
int arena_entrance_zone_tableId() const {return 479;};
wchar_t* arena_minimap;
bool arena_disable_zone_phase;
signed char required_level;
signed char required_mastery_level;
char Pad7[1];
BnsTables::Shared::TableRef quest_for_ignoring_required_level;
int quest_for_ignoring_required_level_tableId() const {return 306;};
BnsTables::Shared::TableRef gs_item_blade_master;
int gs_item_blade_master_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_kung_fu_fighter;
int gs_item_kung_fu_fighter_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_force_master;
int gs_item_force_master_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_destroyer;
int gs_item_destroyer_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_summoner;
int gs_item_summoner_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_assassin;
int gs_item_assassin_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_sword_master;
int gs_item_sword_master_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_warlock;
int gs_item_warlock_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_soul_fighter;
int gs_item_soul_fighter_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_shooter;
int gs_item_shooter_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_warrior;
int gs_item_warrior_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_archer;
int gs_item_archer_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_spear_master;
int gs_item_spear_master_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_thunderer;
int gs_item_thunderer_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_dual_blader;
int gs_item_dual_blader_tableId() const {return 202;};
BnsTables::Shared::TableRef gs_item_bard;
int gs_item_bard_tableId() const {return 202;};
__int16 recommend_attack_power;
char Pad8[2];
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId() const {return 202;};
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
signed char recommand_level_min;
signed char recommand_level_max;
signed char recommand_mastery_level_min;
signed char recommand_mastery_level_max;
BnsTables::Shared::TableRef display_quests[12];
__int32 display_quests_Size() const {return 12;};
int display_quests_tableId() const {return 306;};
BnsTables::Shared::TableRef tactic;
int tactic_tableId() const {return 434;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId() const {return 74;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 37); }
		static __int16 TableId() { return 49; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) cave2_RecordPtr // : DrRecordPtr
	{
		cave2_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}