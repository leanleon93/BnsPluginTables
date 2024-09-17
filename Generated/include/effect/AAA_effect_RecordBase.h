/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_Record : DrEl
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
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef name3;
int name3_tableId(){return 405;};
__int16 level;
bool show_icon;
bool show_left_time;
bool show_linkbar;
char Pad0[3];
wchar_t* target_indicator_icon;
bool target_indicator_show;
bool show_job_indicator;
bool save_db;
__int8 miss_probability;
__int32 passive_duration;
__int32 passive_interval;
__int32 expiration_duration_sec;
__int8 stack_amount;
__int8 stack_count;
bool reattach_effect_after_changing_stack_count;
char Pad1[1];
Data::TableRef transform_effect;
int transform_effect_tableId(){return 111;};
__int8 buff_type;
__int8 binding_skill_step_type;
__int16 immune_breaker_attribute;
__int16 attribute[8];
__int64 attribute_value;
__int64 attribute_value_2;
__int64 attribute_value_3;
__int16 immune_attribute[8];
__int64 immune_attribute_value;
__int64 immune_attribute_value_2;
__int64 immune_attribute_value_3;
__int16 flag[4];
__int16 max_stack_flag;
__int8 function[10];
bool drop_field_item;
bool drop_weapon_field_item;
__int8 detach_count;
__int8 detach_slot[4];
bool apply_duration_formula;
bool change_default_stance_by_detach_timeout;
bool target_combat_mode;
bool aoe_damage;
char Pad2[1];
__int16 attack_attribute_coefficient_percent;
__int8 inhalation_linker;
__int8 inhalation_linked;
__int8 mount_linker;
__int8 mount_linked;
__int8 catch_linker;
__int8 catch_linked;
__int32 faction_score_min;
__int32 faction_score_max;
bool leave_zone_detach;
bool not_dead_to_exhaustion_detach;
bool effect_region_leaved_detach;
bool invoked_by_effect;
__int8 event_effect_target[4];
Data::TableRef event_effect[4];
int event_effect_tableId(){return 111;};
__int8 second_slot_event_effect_target[4];
Data::TableRef second_slot_event_effect[4];
int second_slot_event_effect_tableId(){return 111;};
__int8 third_slot_event_effect_target[4];
Data::TableRef third_slot_event_effect[4];
int third_slot_event_effect_tableId(){return 111;};
__int8 fourth_slot_event_effect_target[4];
Data::TableRef fourth_slot_event_effect[4];
int fourth_slot_event_effect_tableId(){return 111;};
__int16 modify_ability[8];
__int64 modify_ability_diff[8];
__int16 modify_ability_percent[8];
__int8 passive_moveanim_idle;
bool pause_auto_targeting;
bool not_targetable;
bool is_dot_effect;
bool no_critical_hit;
bool party_broadcast;
__int8 ui_slot;
__int8 ui_category;
bool use_extra_skill_stack_count;
__int8 combat_job[2];
bool ui_difficult;
bool is_transform_effect;
bool is_reuse_standby_effect;
__int8 item_type;
bool is_powergauge_effect;
bool ignore_hide_buff_graph_effect;
bool is_battle_royal_field_pc_info;
__int8 battle_royal_field_effect_pouch_group;
__int8 grocery_effect_type;
__int16 grocery_effect_level;
bool knockback_jump;
__int8 idleanimpriority;
wchar_t* normal_component;
wchar_t* critical_component;
wchar_t* back_normal_component;
wchar_t* back_critical_component;
wchar_t* buff_continuance_component;
wchar_t* immune_buff_component;
wchar_t* detach_show;
wchar_t* dispel_show;
bool play_detach_show_hide;
char Pad3[3];
wchar_t* die_show;
wchar_t* additional_die_show;
wchar_t* exhaustion_show;
wchar_t* immuned_show;
wchar_t* caster_show;
wchar_t* fire_show;
bool animation_freeze;
char Pad4[3];
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad5[2];
Data::IconRef icon;
Data::TableRef description2;
int description2_tableId(){return 405;};
Data::TableRef description3;
int description3_tableId(){return 405;};
Data::TableRef description4;
int description4_tableId(){return 405;};
Data::TableRef description5;
int description5_tableId(){return 405;};
Data::TableRef description_constellation;
int description_constellation_tableId(){return 405;};
__int8 description2_arg_type[4];
wchar_t* description2_arg_value[4];
__int32 mount_attach_duration;
__int32 mount_detach_duration;
Data::TableRef linker_abnormal;
int linker_abnormal_tableId(){return 233;};
Data::TableRef linkee_abnormal;
int linkee_abnormal_tableId(){return 233;};
__int32 link_attach_duration;
__int32 link_detach_duration;
bool catch_legs_physics;
bool catch_arms_physics;
bool catch_body_physics;
bool camera_block;
__int8 battle_message_type;
char Pad6[3];
wchar_t* flash_sound_mode;
__int8 skillresultpriority;
char Pad7[3];
wchar_t* hit_show;
wchar_t* miss_show;
wchar_t* dodge_show;
wchar_t* parry_show;
wchar_t* perfect_parry_show;
wchar_t* bounce_show;
wchar_t* conter_show;
wchar_t* critical_hit_show;
bool damagesignal;
bool play_despawn_show;
bool play_transit;
char Pad8[1];
__int32 transit_time;
__int8 duel_warp;
char Pad9[3];
Data::TableRef attach_notify_message;
int attach_notify_message_tableId(){return 151;};
Data::TableRef description_item_random_option;
int description_item_random_option_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(34, 0); }
		static __int16 TableId() { return 111; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) effect_RecordPtr // : DrRecordPtr
	{
		effect_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::effect_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}