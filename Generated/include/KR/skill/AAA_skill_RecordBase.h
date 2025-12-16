/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class skill_RecordSubType : __int32
    {
		skill_record_sub_active_skill = 0,
		skill_record_sub_passive_skill = 1,
		skill_record_sub_action = 2,
		skill_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct skill_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char variation_1_level;
signed char variation_2_level;
signed char variation_3_level;
signed char variation_4_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* name;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 438;};
__int16 short_cut_key;
__int16 short_cut_key_classic;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 1); }
		static __int16 TableId() { return 366; }
		static __int32 SubType() { return -1; }
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
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_RecordPtr // : DrRecordPtr
	{
		skill_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}