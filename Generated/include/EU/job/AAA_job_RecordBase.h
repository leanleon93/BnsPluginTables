/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct job_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name2;
int name2_tableId(){return 405;};
BnsTables::Shared::IconRef icon;
BnsTables::Shared::TableRef desc;
int desc_tableId(){return 405;};
wchar_t* lobby_job_imageset;
wchar_t* character_info_job_imageset;
wchar_t* character_info_job_imageset2;
BnsTables::Shared::TableRef item_map_job_icon;
int item_map_job_icon_tableId(){return 405;};
BnsTables::Shared::TableRef item_map_job_style_icon[3];
int item_map_job_style_icon_tableId(){return 405;};
wchar_t* common_job_imageset;
__int8 stance[3];
char Pad0[1];
wchar_t* skillmap_backimageset;
__int16 skillmap_backimageset_width;
__int16 skillmap_backimageset_height;
BnsTables::Shared::TableRef lobby_slot_job_icon_texture;
int lobby_slot_job_icon_texture_tableId(){return 178;};
__int16 lobby_slot_job_icon_index;
char Pad1[2];
wchar_t* lobby_job_symbol_image;
BnsTables::Shared::TableRef introduce_job_style[3];
int introduce_job_style_tableId(){return 225;};
BnsTables::Shared::TableRef play_style_desc;
int play_style_desc_tableId(){return 405;};
wchar_t* play_style_imageset;
__int8 play_difficulty;
char Pad2[3];
BnsTables::Shared::TableRef play_difficulty_desc;
int play_difficulty_desc_tableId(){return 405;};
wchar_t* hud_player_job_imageset;
__int16 action_key;
__int16 bns_action_key;
BnsTables::Shared::TableRef training_desc_default;
int training_desc_default_tableId(){return 405;};
BnsTables::Shared::TableRef training_desc_attack;
int training_desc_attack_tableId(){return 405;};
BnsTables::Shared::TableRef training_desc_defence;
int training_desc_defence_tableId(){return 405;};
BnsTables::Shared::TableRef training_desc_maze;
int training_desc_maze_tableId(){return 405;};
BnsTables::Shared::TableRef training_desc_protect;
int training_desc_protect_tableId(){return 405;};
BnsTables::Shared::TableRef training_desc_control;
int training_desc_control_tableId(){return 405;};
BnsTables::Shared::TableRef training_desc_distance;
int training_desc_distance_tableId(){return 405;};
__int16 training_chart_value_attack;
__int16 training_chart_value_defence;
__int16 training_chart_value_maze;
__int16 training_chart_value_protect;
__int16 training_chart_value_control;
__int16 training_chart_value_distance;
wchar_t* train_background_imageset;
__int16 lobby_chart_value_protection;
__int16 lobby_chart_value_control;
__int16 lobby_chart_value_distance;
__int16 lobby_chart_value_simplecontrols;
__int16 lobby_chart_value_defense;
__int16 lobby_chart_value_melee;
wchar_t* lobby_play_bink;
wchar_t* filter_name[3];
wchar_t* highlight_font;
BnsTables::Shared::TableRef job_quest_text;
int job_quest_text_tableId(){return 405;};
__int16 damage_show_split_percent;
char Pad3[2];
BnsTables::Shared::TableRef job_style_name[10];
int job_style_name_tableId(){return 405;};
BnsTables::Shared::TableRef skill_train_ui_job_style_name[10];
int skill_train_ui_job_style_name_tableId(){return 405;};
wchar_t* skill_train_ui_job_style_imageset[10];
BnsTables::Shared::TableRef skill_train_ui_trait_open_button_text[10];
int skill_train_ui_trait_open_button_text_tableId(){return 405;};
BnsTables::Shared::TableRef skill_train_ui_page_job_style_name[10];
int skill_train_ui_page_job_style_name_tableId(){return 405;};
wchar_t* skill_train_ui_page_job_style_imageset[10];
wchar_t* skill_trainingroom_ui_job_style_imageset[10];
bool use_guard_gauge;
bool use_ui_skill_combo;
__int16 use_ui_skill_train_combo_action;
BnsTables::Shared::TableRef contents_journal_job_style_icon[3];
int contents_journal_job_style_icon_tableId(){return 405;};
float equip_weapon_scale;
__int8 phantom_weapon_active_type;
char Pad4[1];
__int16 phantom_weapon_active_effect_flag_1st;
__int16 phantom_weapon_active_effect_flag_2nd;
__int16 phantom_weapon_count;
wchar_t* phantom_weapon_anim_set;
bool phantom_weapon_start_create_socket;
char Pad5[1];
__int16 phantom_weapon_start_create_height;
bool phantom_weapon_reload_create_socket;
char Pad6[1];
__int16 phantom_weapon_reload_create_height;
bool phantom_weapon_customized_attach_scale;
char Pad7[3];
wchar_t* phantom_weapon_attach_socket_name_1st[6];
wchar_t* phantom_weapon_attach_socket_name_2nd[6];
wchar_t* phantom_weapon_spawn_start_bone;
float phantom_weapon_spawn_duration_1st;
float phantom_weapon_spawn_duration_2nd;
float phantom_weapon_spawn_attach_duration;
wchar_t* phantom_weapon_spawn_show_1st[6];
wchar_t* phantom_weapon_spawn_show_2nd[6];
wchar_t* phantom_weapon_spawn_end_bone;
float phantom_weapon_end_duration;
wchar_t* phantom_weapon_end_show[6];
float phantom_weapon_exec_end_duration;
wchar_t* phantom_weapon_exec_end_show[6];
float phantom_weapon_finish_duration;
wchar_t* phantom_weapon_finish_show[6];
wchar_t* phantom_weapon_idle_animation_1st[6];
wchar_t* phantom_weapon_idle_animation_2nd[6];
float phantom_weapon_sync_time;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 61); }
		static __int16 TableId() { return 223; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_RecordPtr // : DrRecordPtr
	{
		job_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}