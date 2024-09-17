/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_Record : DrEl
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
bool init_enable;
char Pad0[3];
__int32 init_enable_duration;
Data::TableRef name2;
int name2_tableId(){return 405;};
bool hide_disable;
__int8 category;
char Pad1[2];
Data::TableRef required_fielditem;
int required_fielditem_tableId(){return 137;};
Data::TableRef manipulate_by_item;
int manipulate_by_item_tableId(){return 189;};
__int16 manipulate_by_item_count;
bool show_require_manipulate_by_item_message;
bool consume_item_by_manipulate;
Data::TableRef broadcast_manipulate_cinematic;
int broadcast_manipulate_cinematic_tableId(){return 56;};
__int8 show_confirm_type;
__int8 manipulate_notification_range;
char Pad2[2];
__int32 required_faction_score;
__int32 required_faction_score_max;
bool consume_faction_score;
char Pad3[3];
__int32 manipulate_duration;
Data::TableRef manipulated_effect;
int manipulated_effect_tableId(){return 111;};
Data::TableRef main_faction_effect;
int main_faction_effect_tableId(){return 111;};
__int16 main_faction_effect_distance;
char Pad4[2];
Data::TableRef cannot_manipulate_effect;
int cannot_manipulate_effect_tableId(){return 111;};
bool cannot_manipulate_in_combat;
bool cannot_manipulate_in_max_instant_heart_count;
bool required_joined_main_faction;
bool required_activated_main_faction;
Data::TableRef required_activated_faction;
int required_activated_faction_tableId(){return 130;};
__int32 respawn_duration;
bool rollback;
char Pad5[1];
__int16 max_hp;
Data::TableRef attack_skill[4];
int attack_skill_tableId(){return 335;};
Data::TableRef attack_skill3[4];
int attack_skill3_tableId(){return 324;};
bool dice_result_broadcast;
bool save_authorizer;
bool occurrence_event_in_respawn;
char Pad6[1];
Data::TableRef reward;
int reward_tableId(){return 313;};
Data::TableRef job_reward_blade_master;
int job_reward_blade_master_tableId(){return 313;};
Data::TableRef job_reward_kung_fu_fighter;
int job_reward_kung_fu_fighter_tableId(){return 313;};
Data::TableRef job_reward_force_master;
int job_reward_force_master_tableId(){return 313;};
Data::TableRef job_reward_shooter;
int job_reward_shooter_tableId(){return 313;};
Data::TableRef job_reward_destroyer;
int job_reward_destroyer_tableId(){return 313;};
Data::TableRef job_reward_summoner;
int job_reward_summoner_tableId(){return 313;};
Data::TableRef job_reward_assassin;
int job_reward_assassin_tableId(){return 313;};
Data::TableRef job_reward_sword_master;
int job_reward_sword_master_tableId(){return 313;};
Data::TableRef job_reward_warlock;
int job_reward_warlock_tableId(){return 313;};
Data::TableRef job_reward_soul_fighter;
int job_reward_soul_fighter_tableId(){return 313;};
Data::TableRef job_reward_warrior;
int job_reward_warrior_tableId(){return 313;};
Data::TableRef job_reward_archer;
int job_reward_archer_tableId(){return 313;};
Data::TableRef job_reward_spear_master;
int job_reward_spear_master_tableId(){return 313;};
Data::TableRef job_reward_thunderer;
int job_reward_thunderer_tableId(){return 313;};
Data::TableRef job_reward_dual_blader;
int job_reward_dual_blader_tableId(){return 313;};
Data::TableRef job_reward_bard;
int job_reward_bard_tableId(){return 313;};
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
Data::TableRef action_name2;
int action_name2_tableId(){return 405;};
Data::TableRef action_desc2;
int action_desc2_tableId(){return 405;};
bool hide_close;
bool hide_empty;
bool tooltip_option;
bool show_quest_indicator;
wchar_t* default_indicator_image;
__int8 forwarding_types[20];
Data::TableRef quests[20];
int quests_tableId(){return 283;};
__int8 missions[20];
__int8 cases[20];
__int16 case_subtypes[20];
__int8 loot_forwarding_types[8];
Data::TableRef loot_quests[8];
int loot_quests_tableId(){return 283;};
__int8 loot_missions[8];
__int8 loot_cases[8];
Data::TableRef loot_item[8];
int loot_item_tableId(){return 189;};
bool lootable;
char Pad8[3];
Data::ExplicitTableRef attraction;
wchar_t* caster_reaction_attach;
wchar_t* spawn_mesh;
wchar_t* spawn_animset;
Data::TableRef image_text;
int image_text_tableId(){return 405;};
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

		static TableVersion Version() { return TableVersion(4, 5); }
		static __int16 TableId() { return 444; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneenv2_RecordPtr // : DrRecordPtr
	{
		zoneenv2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zoneenv2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}