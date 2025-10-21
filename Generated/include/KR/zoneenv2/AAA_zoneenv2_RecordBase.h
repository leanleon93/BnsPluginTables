/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class zoneenv2_RecordSubType : __int32
    {
		zoneenv2_record_sub_button = 0,
		zoneenv2_record_sub_chest = 1,
		zoneenv2_record_sub_pot = 2,
		zoneenv2_record_sub_gate = 3,
		zoneenv2_record_sub_wall = 4,
		zoneenv2_record_sub_refiner = 5,
		zoneenv2_record_sub_control_point = 6,
		zoneenv2_record_sub_portal = 7,
		zoneenv2_record_sub_portal_list = 8,
		zoneenv2_record_sub_foot_switch = 9,
		zoneenv2_record_sub_effect_region = 10,
		zoneenv2_record_sub_airdash = 11,
		zoneenv2_record_sub_airdash_leave = 12,
		zoneenv2_record_sub_oceanic_region = 13,
		zoneenv2_record_sub_fall_death = 14,
		zoneenv2_record_sub_multiple_loop = 15,
		zoneenv2_record_sub_deck = 16,
		zoneenv2_record_sub_fishing_point = 17,
		zoneenv2_record_sub_attraction_popup = 18,
		zoneenv2_record_sub_enter_arena_dungeonlobby = 19,
		zoneenv2_record_sub_board = 20,
		zoneenv2_record_sub_count = 21,
    };
#pragma pack(push, 1)
	struct zoneenv2_Record : BnsTables::Shared::DrEl
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
bool init_enable;
char Pad0[3];
__int32 init_enable_duration;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
bool hide_disable;
signed char category;
char Pad1[2];
BnsTables::Shared::TableRef required_fielditem;
int required_fielditem_tableId() const {return 146;};
BnsTables::Shared::TableRef manipulate_by_item;
int manipulate_by_item_tableId() const {return 202;};
__int16 manipulate_by_item_count;
bool show_require_manipulate_by_item_message;
bool consume_item_by_manipulate;
BnsTables::Shared::TableRef broadcast_manipulate_cinematic;
int broadcast_manipulate_cinematic_tableId() const {return 57;};
signed char show_confirm_type;
signed char manipulate_notification_range;
char Pad2[2];
__int32 required_faction_score;
__int32 required_faction_score_max;
bool consume_faction_score;
char Pad3[3];
__int32 manipulate_duration;
BnsTables::Shared::TableRef manipulated_effect;
int manipulated_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef main_faction_effect;
int main_faction_effect_tableId() const {return 118;};
__int16 main_faction_effect_distance;
char Pad4[2];
BnsTables::Shared::TableRef cannot_manipulate_effect;
int cannot_manipulate_effect_tableId() const {return 118;};
bool cannot_manipulate_in_combat;
bool cannot_manipulate_in_max_instant_heart_count;
bool required_joined_main_faction;
bool required_activated_main_faction;
BnsTables::Shared::TableRef required_activated_faction;
int required_activated_faction_tableId() const {return 139;};
__int32 respawn_duration;
bool rollback;
char Pad5[1];
__int16 max_hp;
BnsTables::Shared::TableRef attack_skill[4];
__int32 attack_skill_Size() const {return 4;};
int attack_skill_tableId() const {return 363;};
BnsTables::Shared::TableRef attack_skill3[4];
__int32 attack_skill3_Size() const {return 4;};
int attack_skill3_tableId() const {return 350;};
bool dice_result_broadcast;
bool save_authorizer;
bool occurrence_event_in_respawn;
char Pad6[1];
BnsTables::Shared::TableRef reward;
int reward_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_blade_master;
int job_reward_blade_master_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_kung_fu_fighter;
int job_reward_kung_fu_fighter_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_force_master;
int job_reward_force_master_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_shooter;
int job_reward_shooter_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_destroyer;
int job_reward_destroyer_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_summoner;
int job_reward_summoner_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_assassin;
int job_reward_assassin_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_sword_master;
int job_reward_sword_master_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_warlock;
int job_reward_warlock_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_soul_fighter;
int job_reward_soul_fighter_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_warrior;
int job_reward_warrior_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_archer;
int job_reward_archer_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_spear_master;
int job_reward_spear_master_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_thunderer;
int job_reward_thunderer_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_dual_blader;
int job_reward_dual_blader_tableId() const {return 340;};
BnsTables::Shared::TableRef job_reward_bard;
int job_reward_bard_tableId() const {return 340;};
bool broadcast_pickup_reward_to_world;
bool acquire_reward_to_inventory;
char Pad7[2];
__int32 reward_faction_score;
wchar_t* gain_faction_score_showname;
wchar_t* caster_animname;
wchar_t* caster_showname;
wchar_t* caster_picking_animname;
wchar_t* caster_manipulate_finish_showname;
wchar_t* env_animname;
wchar_t* env_sound_name;
BnsTables::Shared::TableRef action_name2;
int action_name2_tableId() const {return 435;};
BnsTables::Shared::TableRef action_desc2;
int action_desc2_tableId() const {return 435;};
bool hide_close;
bool hide_empty;
bool tooltip_option;
bool show_quest_indicator;
wchar_t* default_indicator_image;
signed char forwarding_types[20];
__int32 forwarding_types_Size() const {return 20;};
BnsTables::Shared::TableRef quests[20];
__int32 quests_Size() const {return 20;};
int quests_tableId() const {return 307;};
signed char missions[20];
__int32 missions_Size() const {return 20;};
signed char cases[20];
__int32 cases_Size() const {return 20;};
__int16 case_subtypes[20];
__int32 case_subtypes_Size() const {return 20;};
signed char loot_forwarding_types[8];
__int32 loot_forwarding_types_Size() const {return 8;};
BnsTables::Shared::TableRef loot_quests[8];
__int32 loot_quests_Size() const {return 8;};
int loot_quests_tableId() const {return 307;};
signed char loot_missions[8];
__int32 loot_missions_Size() const {return 8;};
signed char loot_cases[8];
__int32 loot_cases_Size() const {return 8;};
BnsTables::Shared::TableRef loot_item[8];
__int32 loot_item_Size() const {return 8;};
int loot_item_tableId() const {return 202;};
bool lootable;
char Pad8[3];
BnsTables::Shared::ExplicitTableRef attraction;
wchar_t* caster_reaction_attach;
wchar_t* spawn_mesh;
wchar_t* spawn_animset;
BnsTables::Shared::TableRef image_text;
int image_text_tableId() const {return 435;};
wchar_t* mapunit_image_enable_close_true_imageset;
wchar_t* mapunit_image_enable_close_true_over_imageset;
__int16 mapunit_image_enable_close_true_size_x;
__int16 mapunit_image_enable_close_true_size_y;
wchar_t* mapunit_image_enable_close_false_imageset;
wchar_t* mapunit_image_enable_close_false_over_imageset;
__int16 mapunit_image_enable_close_false_size_x;
__int16 mapunit_image_enable_close_false_size_y;
wchar_t* mapunit_image_enable_open_imageset;
wchar_t* mapunit_image_enable_open_over_imageset;
__int16 mapunit_image_enable_open_size_x;
__int16 mapunit_image_enable_open_size_y;
wchar_t* mapunit_image_disable_imageset;
wchar_t* mapunit_image_disable_over_imageset;
__int16 mapunit_image_disable_size_x;
__int16 mapunit_image_disable_size_y;
wchar_t* mapunit_image_unconfirmed_imageset;
wchar_t* mapunit_image_unconfirmed_over_imageset;
__int16 mapunit_image_unconfirmed_size_x;
__int16 mapunit_image_unconfirmed_size_y;
bool force_show_nameplate;
bool need_to_show_probability;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 481; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneenv2_RecordPtr // : DrRecordPtr
	{
		zoneenv2_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}