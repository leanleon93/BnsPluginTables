/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
    enum class skill3_RecordSubType : __int32
    {
		skill3_record_sub_active_skill = 0,
		skill3_record_sub_passive_skill = 1,
		skill3_record_sub_action = 2,
		skill3_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct skill3_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
__int8 variation_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 revised_event_probability_in_exec[5];
char Pad0[2];
Data::TableRef skill_modify_limit;
int skill_modify_limit_tableId(){return 341;};
bool is_ego_skill;
bool use_ego_skill_training_sequence;
char Pad1[2];
Data::TableRef systematization[16];
int systematization_tableId(){return 346;};
__int16 damage_rate_pvp;
__int16 damage_rate_standard_stats;
Data::TableRef quest;
int quest_tableId(){return 283;};
__int8 mission;
__int8 caseindex;
__int8 forwardingtype;
char Pad2[1];
wchar_t* name;
Data::TableRef name2;
int name2_tableId(){return 405;};
__int8 ui_stance[3];
char Pad3[1];
__int16 short_cut_key;
__int16 short_cut_key_classic;
__int16 short_cut_key_bns_simple_context;
__int8 ui_category;
bool ui_is_show_context_combo;
bool ui_is_show_context_key_change;
bool ui_is_show_context_immune_break;
bool ui_is_show_context_combo_highlight;
bool use_duel_observer_history;
wchar_t* cast_decal_component;
wchar_t* decal_component;
bool invoke_fx_msg;
bool stop_exec_show;
bool weapon_property;
bool auto_casting;
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad4[2];
Data::IconRef icon;
Data::TableRef main_info1;
int main_info1_tableId(){return 405;};
Data::TableRef main_info2;
int main_info2_tableId(){return 405;};
Data::TableRef sub_info;
int sub_info_tableId(){return 405;};
Data::TableRef main_info1_diff;
int main_info1_diff_tableId(){return 405;};
Data::TableRef main_info2_diff;
int main_info2_diff_tableId(){return 405;};
Data::TableRef sub_info_diff;
int sub_info_diff_tableId(){return 405;};
Data::TableRef main_tooltip_1[5];
int main_tooltip_1_tableId(){return 351;};
Data::TableRef main_tooltip_2[5];
int main_tooltip_2_tableId(){return 351;};
Data::TableRef sub_tooltip[10];
int sub_tooltip_tableId(){return 351;};
Data::TableRef stance_tooltip[5];
int stance_tooltip_tableId(){return 351;};
Data::TableRef condition_tooltip[5];
int condition_tooltip_tableId(){return 351;};
Data::TableRef ui_combo;
int ui_combo_tableId(){return 332;};
__int8 ui_category_display_type;
char Pad5[3];
Data::TableRef ui_main_buff;
int ui_main_buff_tableId(){return 111;};
bool show_cast_bar;
bool show_exec_bar;
bool show_repeat_bar;
char Pad6[1];
__int32 skill_attack_power_min;
__int32 skill_attack_power_max;
__int32 skill_attack_sub_power_min;
__int32 skill_attack_sub_power_max;
bool ignore_parent_tooltip;
bool die_knockback;
bool cast_last_anim_pause;
bool filter_group_1;
bool filter_group_2;
bool filter_group_3;
bool play_extra_sound;
char Pad7[1];
wchar_t* extra_sound_show;
float extra_sound_show_lmittime;
__int8 bullet_effect_start_skill_flow;
char Pad8[3];
float bullet_effect_show_offset;
float bullet_effect_duration;
Data::TableRef description_weapon_soul_gem;
int description_weapon_soul_gem_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(10, 1); }
		static __int16 TableId() { return 324; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill3_RecordPtr // : DrRecordPtr
	{
		skill3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}