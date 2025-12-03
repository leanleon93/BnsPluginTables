/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class skill3_RecordSubType : __int32
    {
		skill3_record_sub_active_skill = 0,
		skill3_record_sub_passive_skill = 1,
		skill3_record_sub_action = 2,
		skill3_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct skill3_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char variation_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 revised_event_probability_in_exec[5];
__int32 revised_event_probability_in_exec_Size() const {return 5;};
char Pad0[2];
BnsTables::Shared::TableRef skill_modify_limit;
int skill_modify_limit_tableId() const {return 372;};
bool is_ego_skill;
bool use_ego_skill_training_sequence;
char Pad1[2];
BnsTables::Shared::TableRef systematization[16];
__int32 systematization_Size() const {return 16;};
int systematization_tableId() const {return 378;};
__int16 damage_rate_pvp;
__int16 damage_rate_standard_stats;
BnsTables::Shared::TableRef quest;
int quest_tableId() const {return 309;};
signed char mission;
signed char caseindex;
signed char forwardingtype;
char Pad2[1];
wchar_t* name;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 438;};
signed char ui_stance[3];
__int32 ui_stance_Size() const {return 3;};
char Pad3[1];
__int16 short_cut_key;
__int16 short_cut_key_classic;
__int16 short_cut_key_bns_simple_context;
signed char ui_category;
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
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 189;};
__int16 icon_index;
char Pad4[2];
BnsTables::Shared::IconRef icon;
BnsTables::Shared::TableRef main_info1;
int main_info1_tableId() const {return 438;};
BnsTables::Shared::TableRef main_info2;
int main_info2_tableId() const {return 438;};
BnsTables::Shared::TableRef sub_info;
int sub_info_tableId() const {return 438;};
BnsTables::Shared::TableRef main_info1_diff;
int main_info1_diff_tableId() const {return 438;};
BnsTables::Shared::TableRef main_info2_diff;
int main_info2_diff_tableId() const {return 438;};
BnsTables::Shared::TableRef sub_info_diff;
int sub_info_diff_tableId() const {return 438;};
BnsTables::Shared::TableRef main_tooltip_1[5];
__int32 main_tooltip_1_Size() const {return 5;};
int main_tooltip_1_tableId() const {return 383;};
BnsTables::Shared::TableRef main_tooltip_2[5];
__int32 main_tooltip_2_Size() const {return 5;};
int main_tooltip_2_tableId() const {return 383;};
BnsTables::Shared::TableRef sub_tooltip[15];
__int32 sub_tooltip_Size() const {return 15;};
int sub_tooltip_tableId() const {return 383;};
BnsTables::Shared::TableRef stance_tooltip[5];
__int32 stance_tooltip_Size() const {return 5;};
int stance_tooltip_tableId() const {return 383;};
BnsTables::Shared::TableRef condition_tooltip[5];
__int32 condition_tooltip_Size() const {return 5;};
int condition_tooltip_tableId() const {return 383;};
BnsTables::Shared::TableRef ui_combo;
int ui_combo_tableId() const {return 363;};
signed char ui_category_display_type;
char Pad5[3];
BnsTables::Shared::TableRef ui_main_buff;
int ui_main_buff_tableId() const {return 119;};
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
signed char bullet_effect_start_skill_flow;
char Pad8[3];
float bullet_effect_show_offset;
float bullet_effect_duration;
BnsTables::Shared::TableRef description_weapon_soul_gem;
int description_weapon_soul_gem_tableId() const {return 438;};
BnsTables::Shared::TableRef skill_style;
int skill_style_tableId() const {return 377;};
BnsTables::Shared::TableRef skill_arcane_info;
int skill_arcane_info_tableId() const {return 355;};
bool ignore_hit_reaction;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(11, 0); }
		static __int16 TableId() { return 353; }
		static __int32 SubType() { return -1; }
		enum class ui_stance {
			stance_none = 0,
			npcgibonjase = 1,
			cheongeomse = 2,
			geomryeongse = 3,
			danta = 4,
			yeongye = 5,
			chesur = 6,
			nabdo = 7,
			gyeonggigong = 8,
			yeongigong = 9,
			ganggigong = 10,
			gweonchongmodeu = 11,
			reoncheomodeu = 12,
			pagoe = 13,
			boho = 14,
			cheorbyeog = 15,
			sohwan = 16,
			gyoran = 17,
			eunsin = 18,
			amsar = 19,
			geomsur = 20,
			eogeom = 21,
			bardo = 22,
			npcjase1 = 23,
			npcjase2 = 24,
			npcjase3 = 25,
			sohwansu_follow = 26,
			sohwansu_command_1 = 27,
			sohwansu_flying = 28,
			jusur = 29,
			gangrim = 30,
			yugweon = 31,
			gigong = 32,
			naengjeong = 33,
			gwanggi = 34,
			janggung = 35,
			jeongryeonggung = 36,
			jjireugi = 37,
			begi = 38,
			cheongroe = 39,
			hyeorroe = 40,
			eogeomse = 41,
			jeongsu = 42,
			yeogsu = 43,
			hansonyeogsu = 44,
			ganiyeonju = 45,
			upeo = 46,
			yeonju = 47,
			ssangweor = 48,
			noesin = 49,
			chimsig = 50,
			yeomje = 51,
			npcjusijase1 = 52,
			npcjusijase2 = 53,
			npcjusijase3 = 54,
		};

		enum class short_cut_key {
			none = 0,
			action1 = 1,
			action2 = 2,
			action3 = 3,
			classic_action1 = 4,
			classic_action2 = 5,
			classic_action3 = 6,
			skill_recommend = 7,
			skill_stance = 8,
			skill_slot1 = 9,
			skill_slot2 = 10,
			skill_slot3 = 11,
			skill_slot4 = 12,
			skill_slot5 = 13,
			skill_slot6 = 14,
			skill_slot7 = 15,
			skill_slot8 = 16,
			skill_slot9 = 17,
			skill_slot10 = 18,
			skill_slot11 = 19,
			skill_slot12 = 20,
			skill_q = 21,
			skill_e = 22,
			skill_special_1 = 23,
			skill_special_2 = 24,
			item_slot1 = 25,
			item_slot2 = 26,
			item_slot3 = 27,
			item_slot4 = 28,
			extra_skill_slot5 = 29,
			skill_duel_tag = 30,
			skill_duel_npc_challenge = 31,
			toggle_help = 32,
			toggle_dungeon_guide = 33,
			toggle_inventory = 34,
			toggle_gem = 35,
			toggle_equipped = 36,
			toggle_skill_book = 37,
			toggle_quest_journal = 38,
			toggle_minimap_scale = 39,
			toggle_minimap_visible = 40,
			toggle_quest_quick_slot = 41,
			toggle_collect_manufacture = 42,
			toggle_petition = 43,
			toggle_option = 44,
			toggle_minimap_alpha = 45,
			toggle_party_panel = 46,
			toggle_party_mark = 47,
			toggle_party_search = 48,
			toggle_hud_customize = 49,
			party_match = 50,
			manual_targeting = 51,
			strafe_left = 52,
			strafe_right = 53,
			dash_forward = 54,
			move_forward = 55,
			move_backward = 56,
			turn_left = 57,
			turn_right = 58,
			jump_up = 59,
			toggle_walk_run = 60,
			social_action1 = 61,
			social_action2 = 62,
			social_action3 = 63,
			social_action4 = 64,
			social_action5 = 65,
			social_action6 = 66,
			social_action7 = 67,
			social_action8 = 68,
			social_action9 = 69,
			social_action10 = 70,
			toggle_auto_move_forward = 71,
			enter_slash_chatting = 72,
			enter_normal_chatting = 73,
			enter_party_chatting = 74,
			enter_local_chatting = 75,
			enter_private_chatting = 76,
			toggle_hud = 77,
			toggle_light_hud_mode = 78,
			camera_up = 79,
			camera_down = 80,
			camera_zoomin = 81,
			camera_zoomout = 82,
			toggle_voice_chat_option = 83,
			mark1 = 84,
			mark2 = 85,
			mark3 = 86,
			mark4 = 87,
			mark5 = 88,
			mark6 = 89,
			mark7 = 90,
			mark8 = 91,
			mark_timer = 92,
			mark_timer_immune_break_down = 93,
			mark_timer_immune_break_kneel = 94,
			mark_timer_immune_break_stun = 95,
			mark_timer_immune_break_knockback = 96,
			unmark = 97,
			headline_start_timer = 98,
			minimap_depth_plus = 99,
			minimap_depth_minus = 100,
			rotate_camera = 101,
			rotate_player = 102,
			reset_camera = 103,
			toggle_bns = 104,
			notification_accept = 105,
			notification_decline = 106,
			toggle_joypad_ui_mode = 107,
			close_floating_panels = 108,
			joypad_esc = 109,
			joypad_set_mouse_position = 110,
			joypad_toggle_rotate_type = 111,
			turn_on_social_mode = 112,
			enter_party_search_channel_in_party_match = 113,
			toggle_sns = 114,
			toggle_powerbook = 115,
			toggle_skill_powerbook = 116,
			toggle_nshop = 117,
			toggle_character_info = 118,
			toggle_market = 119,
			toggle_money_market = 120,
			toggle_postbox = 121,
			toggle_tencent_in_game_shop = 122,
			toggle_tencent_cross = 123,
			toggle_second_password = 124,
			toggle_achievement = 125,
			toggle_pc_filter_hidden = 126,
			toggle_guild2 = 127,
			toggle_economy_communication = 128,
			cancel_order = 129,
			invite_party = 130,
			duel_start = 131,
			toggle_friend = 132,
			toggle_wardrobe = 133,
			toggle_dragon_jade_shop = 134,
			toggle_ranking = 135,
			toggle_ingame_notice = 136,
			change_item_bar_page = 137,
			duel_tag_order_first = 138,
			duel_tag_order_random = 139,
			leave_arena_square = 140,
			quick_turn = 141,
			joypad_special_function1 = 142,
			joypad_special_function2 = 143,
			accelerate_mouse_cursor_speed = 144,
			joypad_mouse_left_button = 145,
			joypad_mouse_right_button = 146,
			change_pet_filter_hidden = 147,
			toggle_damage_meter = 148,
			duel_camera_fitpawn_new = 149,
			duel_camera_free_new = 150,
			duel_camera_quater_new = 151,
			duel_camera_alpha_new = 152,
			duel_camera_beta_new = 153,
			duel_camera_free_up_new = 154,
			duel_camera_free_down_new = 155,
			toggle_goods_store = 156,
			enter_skill_training_room = 157,
			toggle_arena_entrance = 158,
			toggle_appearance_pictorial = 159,
			toggle_hybrid_mode = 160,
			toggle_personal_customize = 161,
			toggle_context_simple_mode = 162,
			toggle_mentoring = 163,
			toggle_pvp_enable = 164,
			nova_equip_skill_quick_slot = 165,
			toggle_account_contents = 166,
			toggle_contents_journal_2 = 167,
			toggle_fish_collecting = 168,
			toggle_slate = 169,
			toggle_auto_mode = 170,
			toggle_auto_mode_option = 171,
			toggle_auto_mode_enable_item_support = 172,
			toggle_pvp_data = 173,
			toggle_ride_vehicle = 174,
			toggle_museum = 175,
			equip_spare_item = 176,
			toggle_chat_minimize = 177,
			toggle_ranking2 = 178,
			toggle_glyph_inventory = 179,
			toggle_constellation = 180,
			toggle_sealed_scroll = 181,
			toggle_inter_battle_field = 182,
			toggle_wanted_mission = 183,
			toggle_expedition = 184,
			toggle_game_information = 185,
			toggle_mark_mode = 186,
			toggle_relic_inventory = 187,
			zone_exit = 188,
			toggle_neopass = 189,
			toggle_notification_center = 190,
			toggle_joypad_lock_on = 191,
			joypad_dash_backward = 192,
			classic_control_mode_lock_on = 193,
			toggle_voice_chat_mute = 194,
		};

		enum class ui_category {
			default_val = 0,
			target_near = 1,
			target_far = 2,
			target_down = 3,
			target_disabled = 4,
			target_in_the_air = 5,
			target_dodge = 6,
			target_carrying = 7,
			takedown = 8,
			dodge_by_counter = 9,
			parry_by_steelbody = 10,
			hit_with_heavyattack = 11,
			cast_magnetic_energy = 12,
			parry_by_blocking = 13,
			airdash = 14,
		};

		enum class ui_category_display_type {
			main = 0,
			sub = 1,
		};

		enum class boss_resistance_skill_cast {
			none = 0,
			cast = 1,
			fire_1 = 2,
			exec_1 = 3,
			fire_2 = 4,
			exec_2 = 5,
			fire_3 = 6,
			exec_3 = 7,
			fire_4 = 8,
			exec_4 = 9,
			fire_5 = 10,
			exec_5 = 11,
			finish = 12,
		};

		enum class attribute {
			none = 0,
			maggi = 1,
			bangyeog = 2,
			twinggigi = 3,
			bangeohaengdong = 4,
			daeswi = 5,
			idong = 6,
			hoepi = 7,
			daun = 8,
			neogbaeg = 9,
			gijeor = 10,
			geurogi = 11,
			gongjung = 12,
			haengdongburga = 13,
			idongburga = 14,
			daundaeeung = 15,
			maggijogeon = 16,
			hoepijogeon = 17,
			chimyeongtajogeon = 18,
			yeongyegi = 19,
			seutaenseu = 20,
			hoebog = 21,
			geijihoebog = 22,
			buhwar = 23,
			jiweon = 24,
			jeugsisijeon = 25,
			kaeseuting = 26,
			gadeubeureikeu = 27,
			barsache = 28,
			barsache2 = 29,
			jeab = 30,
			gwanjeorgi = 31,
			jangag = 32,
			biinganjangag = 33,
			heubgong = 34,
			jeabdaeeung = 35,
			jangagdaeeung = 36,
			heubgongdaeeung = 37,
			haeje = 38,
			dog = 39,
			kurtaim = 40,
			bur = 41,
			eoreum = 42,
			jeongi = 43,
			gigong = 44,
			teurigeo = 45,
			weopeu = 46,
			geungeori = 47,
			weongeori = 48,
			gwangyeog = 49,
			idongganeung = 50,
			demijijon = 51,
			sangtaemyeonyeog = 52,
			wichibaggugi = 53,
			eunsa = 54,
			dobar = 55,
		};

		enum class category {
			melee_physical = 0,
			range_physical = 1,
			force = 2,
		};

		enum class flowtype {
			keep_mainslot = 0,
			leave_caster = 1,
			transfer_simslot = 2,
			directly_simslot = 3,
		};

		enum class skill_type {
			caster = 0,
			target = 1,
			ground = 2,
			chain = 3,
			none_target = 4,
			summon = 5,
			boss_rush = 6,
			boss_multiground = 7,
			boss_linklaser = 8,
			make_campfire = 9,
			succession = 10,
			ground_succession = 11,
			duel_tag = 12,
			duel_interference = 13,
		};

		enum class hostile_type {
			none = 0,
			hostile = 1,
			support = 2,
		};

		enum class toggle {
			none = 0,
			on = 1,
			off = 2,
		};

		enum class skill_result_rule {
			decide_execute = 0,
			decide_execute_finish_each = 1,
			decide_each = 2,
			decide_each_finish_execute = 3,
			decide_each_finish_all_hit = 4,
			decide_each_finish_last_result = 5,
		};

		enum class auto_skill_result {
			none = 0,
			hit = 1,
			miss = 2,
			dodge = 3,
			parry = 4,
			perfect_parry = 5,
			bounce = 6,
			counter = 7,
			critical_hit = 8,
			hit_critical_hit = 9,
			back_hit_critical_hit = 10,
			not_hit = 11,
			all = 12,
			hit_critical_hit_parry = 13,
			parry_perfect_parry = 14,
			front_hit_critical_hit = 15,
			parry_perfect_parry_counter = 16,
			parry_perfect_parry_dodge = 17,
			parry_dodge = 18,
		};

		enum class cancel_by_override_skill {
			none = 0,
			override_skill = 1,
			all_skill = 2,
		};

		enum class recycle_group {
			none = 0,
			class_val = 1,
			item_1 = 2,
			item_2 = 3,
			class_2 = 4,
			db = 5,
			gadget = 6,
		};

		enum class consume_hp_type {
			point = 0,
			point_below = 1,
			point_above = 2,
			base_max_percent = 3,
			total_max_percent = 4,
			current_percent = 5,
		};

		enum class replace_target {
			none = 0,
			targets_target = 1,
			my_summoned = 2,
			my_summoneds_target = 3,
			link_target = 4,
			my_master = 5,
			my_masters_link_target = 6,
		};

		enum class charge_cancel_force_use_unpress_skill {
			none = 0,
			not_enough_sp2_by_repeat_condition = 1,
			over_charge = 2,
		};

		enum class perfect_dodge {
			none = 0,
			attack = 1,
			dodge = 2,
		};

		enum class exec_gather_type_1 {
			target = 0,
			target_360 = 1,
			target_front_180 = 2,
			target_back_180 = 3,
			target_front_90 = 4,
			target_back_90 = 5,
			target_front_15 = 6,
			target_front_30 = 7,
			target_front_45 = 8,
			target_front_60 = 9,
			target_front_120 = 10,
			target_front_270 = 11,
			laser = 12,
			target_and_link_target = 13,
			shifting_laser = 14,
		};

		enum class simultaneous_group {
			none = 0,
			phantom = 1,
		};

		enum class resistance_skill_type {
			none = 0,
			immune_party_all = 1,
			immune_party_projectile = 2,
			immune_caster_target_long = 3,
			immune_caster_target_short = 4,
			immune_caster_nontarget_move = 5,
		};

		enum class auto_combat_resistance_skill_type {
			none = 0,
			parry_counter = 1,
			move = 2,
			immune_type_1 = 3,
			immune_type_2 = 4,
			immune_type_3 = 5,
		};

		enum class phantom_end_type {
			none = 0,
			exec_end = 1,
			finish_end = 2,
		};

		enum class summoned_weapon_type {
			summoned_none = 0,
			summoned_sword = 1,
			summoned_glove = 2,
			summoned_hammer = 3,
			summoned_gun = 4,
		};

		enum class ground_type {
			ground = 0,
			target = 1,
		};

		enum class casting_target {
			none = 0,
			self = 1,
			target = 2,
			wide = 3,
			wide_laser = 4,
			ground = 5,
			ground_target = 6,
			mount = 7,
			catch_val = 8,
			inhalation = 9,
			silverstring = 10,
		};

		enum class attach_bone_type {
			none = 0,
			to_caster = 1,
			mount = 2,
			to_target = 3,
			to_caster_pos_only = 4,
			to_target_pos_only = 5,
		};

		enum class summoned_job {
			job_none = 0,
			geomsa = 1,
			gweonsa = 2,
			gigongsa = 3,
			gyeogsa = 4,
			yeogsa = 5,
			sohwansa = 6,
			amsarja = 7,
			gwigeomsa = 8,
			jusursa = 9,
			gigweonsa = 10,
			tusa = 11,
			gungsa = 12,
			changsursa = 13,
			noejeonsursa = 14,
			ssanggeomsa = 15,
			agsa = 16,
			pc_max = 17,
			sohwansu_ruki = 18,
			sohwansu_striker = 19,
			sohwansu_defender = 20,
			sohwansu_controller = 21,
		};

		enum class action_type {
			airdash = 0,
			pickup_deadbody = 1,
			putdown_deadbody = 2,
			sprint = 3,
			drift = 4,
			boost = 5,
			dive = 6,
			wall_move = 7,
			glide = 8,
			event_jump = 9,
			rocket_start = 10,
			hyper_move = 11,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill3_RecordPtr // : DrRecordPtr
	{
		skill3_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}