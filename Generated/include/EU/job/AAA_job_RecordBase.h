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
                signed char job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
BnsTables::Shared::IconRef icon;
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 435;};
wchar_t* lobby_job_imageset;
wchar_t* character_info_job_imageset;
wchar_t* character_info_job_imageset2;
BnsTables::Shared::TableRef item_map_job_icon;
int item_map_job_icon_tableId() const {return 435;};
BnsTables::Shared::TableRef item_map_job_style_icon[3];
__int32 item_map_job_style_icon_Size() const {return 3;};
int item_map_job_style_icon_tableId() const {return 435;};
wchar_t* common_job_imageset;
signed char stance[3];
__int32 stance_Size() const {return 3;};
char Pad0[1];
wchar_t* skillmap_backimageset;
__int16 skillmap_backimageset_width;
__int16 skillmap_backimageset_height;
BnsTables::Shared::TableRef lobby_slot_job_icon_texture;
int lobby_slot_job_icon_texture_tableId() const {return 188;};
__int16 lobby_slot_job_icon_index;
char Pad1[2];
wchar_t* lobby_job_symbol_image;
BnsTables::Shared::TableRef introduce_job_style[3];
__int32 introduce_job_style_Size() const {return 3;};
int introduce_job_style_tableId() const {return 241;};
BnsTables::Shared::TableRef play_style_desc;
int play_style_desc_tableId() const {return 435;};
wchar_t* play_style_imageset;
signed char play_difficulty;
char Pad2[3];
BnsTables::Shared::TableRef play_difficulty_desc;
int play_difficulty_desc_tableId() const {return 435;};
wchar_t* hud_player_job_imageset;
__int16 action_key;
__int16 bns_action_key;
BnsTables::Shared::TableRef training_desc_default;
int training_desc_default_tableId() const {return 435;};
BnsTables::Shared::TableRef training_desc_attack;
int training_desc_attack_tableId() const {return 435;};
BnsTables::Shared::TableRef training_desc_defence;
int training_desc_defence_tableId() const {return 435;};
BnsTables::Shared::TableRef training_desc_maze;
int training_desc_maze_tableId() const {return 435;};
BnsTables::Shared::TableRef training_desc_protect;
int training_desc_protect_tableId() const {return 435;};
BnsTables::Shared::TableRef training_desc_control;
int training_desc_control_tableId() const {return 435;};
BnsTables::Shared::TableRef training_desc_distance;
int training_desc_distance_tableId() const {return 435;};
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
__int32 filter_name_Size() const {return 3;};
wchar_t* highlight_font;
BnsTables::Shared::TableRef job_quest_text;
int job_quest_text_tableId() const {return 435;};
__int16 damage_show_split_percent;
char Pad3[2];
BnsTables::Shared::TableRef job_style_name[10];
__int32 job_style_name_Size() const {return 10;};
int job_style_name_tableId() const {return 435;};
BnsTables::Shared::TableRef skill_train_ui_job_style_name[10];
__int32 skill_train_ui_job_style_name_Size() const {return 10;};
int skill_train_ui_job_style_name_tableId() const {return 435;};
wchar_t* skill_train_ui_job_style_imageset[10];
__int32 skill_train_ui_job_style_imageset_Size() const {return 10;};
BnsTables::Shared::TableRef skill_train_ui_trait_open_button_text[10];
__int32 skill_train_ui_trait_open_button_text_Size() const {return 10;};
int skill_train_ui_trait_open_button_text_tableId() const {return 435;};
BnsTables::Shared::TableRef skill_train_ui_page_job_style_name[10];
__int32 skill_train_ui_page_job_style_name_Size() const {return 10;};
int skill_train_ui_page_job_style_name_tableId() const {return 435;};
wchar_t* skill_train_ui_page_job_style_imageset[10];
__int32 skill_train_ui_page_job_style_imageset_Size() const {return 10;};
wchar_t* skill_trainingroom_ui_job_style_imageset[10];
__int32 skill_trainingroom_ui_job_style_imageset_Size() const {return 10;};
bool use_guard_gauge;
bool use_ui_skill_combo;
__int16 use_ui_skill_train_combo_action;
BnsTables::Shared::TableRef contents_journal_job_style_icon[3];
__int32 contents_journal_job_style_icon_Size() const {return 3;};
int contents_journal_job_style_icon_tableId() const {return 435;};
float equip_weapon_scale;
signed char phantom_weapon_active_type;
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
__int32 phantom_weapon_attach_socket_name_1st_Size() const {return 6;};
wchar_t* phantom_weapon_attach_socket_name_2nd[6];
__int32 phantom_weapon_attach_socket_name_2nd_Size() const {return 6;};
wchar_t* phantom_weapon_spawn_start_bone;
float phantom_weapon_spawn_duration_1st;
float phantom_weapon_spawn_duration_2nd;
float phantom_weapon_spawn_attach_duration;
wchar_t* phantom_weapon_spawn_show_1st[6];
__int32 phantom_weapon_spawn_show_1st_Size() const {return 6;};
wchar_t* phantom_weapon_spawn_show_2nd[6];
__int32 phantom_weapon_spawn_show_2nd_Size() const {return 6;};
wchar_t* phantom_weapon_spawn_end_bone;
float phantom_weapon_end_duration;
wchar_t* phantom_weapon_end_show[6];
__int32 phantom_weapon_end_show_Size() const {return 6;};
float phantom_weapon_exec_end_duration;
wchar_t* phantom_weapon_exec_end_show[6];
__int32 phantom_weapon_exec_end_show_Size() const {return 6;};
float phantom_weapon_finish_duration;
wchar_t* phantom_weapon_finish_show[6];
__int32 phantom_weapon_finish_show_Size() const {return 6;};
wchar_t* phantom_weapon_idle_animation_1st[6];
__int32 phantom_weapon_idle_animation_1st_Size() const {return 6;};
wchar_t* phantom_weapon_idle_animation_2nd[6];
__int32 phantom_weapon_idle_animation_2nd_Size() const {return 6;};
float phantom_weapon_sync_time;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 61); }
		static __int16 TableId() { return 238; }
		static __int32 SubType() { return -1; }
		enum class job {
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

		enum class stance {
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

		enum class action_key {
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

		enum class phantom_weapon_active_type {
			none = 0,
			equip = 1,
			effect_flag = 2,
		};

		enum class phantom_weapon_active_effect_flag_1st {
			none = 0,
			stun = 1,
			airdash = 2,
			knockback = 3,
			bind_phantom = 4,
			link = 5,
			detection = 6,
			internal_injury = 7,
			immediately_exec = 8,
			concentration = 9,
			infinity_shot = 10,
			down = 11,
			swoon = 12,
			defence = 13,
			kneel = 14,
			provocation = 15,
			midair_1 = 16,
			midair_2 = 17,
			midair_3 = 18,
			frostbite = 19,
			magnetic_seal = 20,
			fast_freezing = 21,
			rupture = 22,
			impregnability = 23,
			prickblood = 24,
			wildfire_1 = 25,
			wildfire_2 = 26,
			wildfire_3 = 27,
			hide = 28,
			burrow = 29,
			smokescreen = 30,
			embers = 31,
			poison = 32,
			applied_poison = 33,
			spider_web = 34,
			time_bomb = 35,
			defence_block = 36,
			dash_block = 37,
			dexterity = 38,
			soulblade_1 = 39,
			soulblade_2 = 40,
			soulblade_3 = 41,
			joint = 42,
			flydragon = 43,
			landdragon = 44,
			silverweb_1 = 45,
			silverweb_2 = 46,
			justguard = 47,
			force_flag_1 = 48,
			force_flag_2 = 49,
			force_flag_3 = 50,
			catchshield = 51,
			poundshort = 52,
			axechopshort = 53,
			swingstrikeshort = 54,
			chilblain = 55,
			frontdown = 56,
			bleeding = 57,
			npc_state_1 = 58,
			npc_state_2 = 59,
			npc_state_3 = 60,
			npc_state_4 = 61,
			npc_state_5 = 62,
			npc_state_6 = 63,
			npc_state_7 = 64,
			npc_state_8 = 65,
			hardwall_break = 66,
			react_link = 67,
			counter = 68,
			Shadow = 69,
			Shuriken = 70,
			Instantkick = 71,
			Hyperkick = 72,
			Saver = 73,
			HeartStab = 74,
			LeafDodge = 75,
			DragonKick = 76,
			BurstBlow = 77,
			Blood = 78,
			BloodFullStack = 79,
			Poison2 = 80,
			Poison2FullStack = 81,
			TankingDrain = 82,
			EmberFullStack = 83,
			PoisonFullStack = 84,
			FireBit = 85,
			FireBitFullStack = 86,
			IceBit = 87,
			Hole = 88,
			HoleFullStack = 89,
			Bubble = 90,
			Swallow = 91,
			FireBit2 = 92,
			IceBit2 = 93,
			IceBitFullStack = 94,
			FireWall1 = 95,
			FireWall2 = 96,
			FireWall3 = 97,
			FireWall4 = 98,
			HighKick = 99,
			Abdomen = 100,
			ShortBurst = 101,
			MartialFullHit = 102,
			Smash = 103,
			Hole1 = 104,
			Hole2 = 105,
			Hole3 = 106,
			TargetHole1 = 107,
			TargetHole2 = 108,
			TargetHole3 = 109,
			Hornet = 110,
			MorningGlory = 111,
			cannot_resurrect = 112,
			enable_guild_battle_field = 113,
			Immune_link = 114,
			GhostX0 = 115,
			GhostX1 = 116,
			GhostX2 = 117,
			GhostX3 = 118,
			Thornbus = 119,
			BloodBurst = 120,
			AdventMark1 = 121,
			AdventMark2 = 122,
			HyperMove = 123,
			Talisman = 124,
			Spector01 = 125,
			Spector02 = 126,
			Spector03 = 127,
			Phantomsoul = 128,
			BlueSky = 129,
			EgoAutoParry = 130,
			Pierce = 131,
			burn = 132,
			AttackGlide = 133,
			SecondGaugeStopped = 134,
			BigBossJump = 135,
			BigBossState_1 = 136,
			JobSkillFlag_1 = 137,
			JobSkillFlag_2 = 138,
			JobSkillFlag_3 = 139,
			JobSkillFlag_4 = 140,
			JobSkillFlag_5 = 141,
			JobSkillFlag_6 = 142,
			JobSkillFlag_7 = 143,
			JobSkillFlag_8 = 144,
			JobSkillFlag_9 = 145,
			JobSkillFlag_10 = 146,
			JobSkillFlag_11 = 147,
			JobSkillFlag_12 = 148,
			JobSkillFlag_13 = 149,
			JobSkillFlag_14 = 150,
			JobSkillFlag_15 = 151,
			JobSkillFlag_16 = 152,
			JobSkillFlag_17 = 153,
			JobSkillFlag_18 = 154,
			JobSkillFlag_19 = 155,
			JobSkillFlag_20 = 156,
			JobSkillFlag_21 = 157,
			JobSkillFlag_22 = 158,
			JobSkillFlag_23 = 159,
			JobSkillFlag_24 = 160,
			JobSkillFlag_25 = 161,
			JobSkillFlag_26 = 162,
			JobSkillFlag_27 = 163,
			JobSkillFlag_28 = 164,
			JobSkillFlag_29 = 165,
			JobSkillFlag_30 = 166,
			JobSkillFlag_31 = 167,
			JobSkillFlag_32 = 168,
			JobSkillFlag_33 = 169,
			JobSkillFlag_34 = 170,
			JobSkillFlag_35 = 171,
			JobSkillFlag_36 = 172,
			JobSkillFlag_37 = 173,
			JobSkillFlag_38 = 174,
			JobSkillFlag_39 = 175,
			JobSkillFlag_40 = 176,
			JobSkillFlag_41 = 177,
			JobSkillFlag_42 = 178,
			JobSkillFlag_43 = 179,
			JobSkillFlag_44 = 180,
			JobSkillFlag_45 = 181,
			JobSkillFlag_46 = 182,
			JobSkillFlag_47 = 183,
			JobSkillFlag_48 = 184,
			JobSkillFlag_49 = 185,
			JobSkillFlag_50 = 186,
			JobSkillFlag_51 = 187,
			JobSkillFlag_52 = 188,
			JobSkillFlag_53 = 189,
			JobSkillFlag_54 = 190,
			JobSkillFlag_55 = 191,
			JobSkillFlag_56 = 192,
			npc_skill_1 = 193,
			npc_skill_2 = 194,
			npc_skill_3 = 195,
			npc_skill_4 = 196,
			npc_skill_5 = 197,
			npc_skill_6 = 198,
			npc_skill_7 = 199,
			npc_skill_8 = 200,
			npc_skill_9 = 201,
			npc_skill_10 = 202,
			npc_skill_11 = 203,
			npc_skill_12 = 204,
			stun_miss = 205,
			down_miss = 206,
			Struggle = 207,
			boutiquefree = 208,
			tumbling_block = 209,
			PeaceArea = 210,
			perfect_dodged = 211,
			kneel_miss = 212,
			glyph_1 = 213,
			glyph_2 = 214,
			glyph_3 = 215,
			glyph_4 = 216,
			glyph_5 = 217,
			glyph_6 = 218,
			glyph_7 = 219,
			glyph_8 = 220,
			glyph_9 = 221,
			glyph_10 = 222,
			glyph_11 = 223,
			glyph_12 = 224,
			glyph_13 = 225,
			glyph_14 = 226,
			glyph_15 = 227,
			glyph_16 = 228,
			glyph_17 = 229,
			glyph_18 = 230,
			glyph_19 = 231,
			glyph_20 = 232,
			Break_1 = 233,
			Break_2 = 234,
			Break_3 = 235,
			condition_event_1 = 236,
			condition_event_2 = 237,
			condition_event_3 = 238,
			condition_event_4 = 239,
			condition_event_5 = 240,
			condition_event_6 = 241,
			condition_event_7 = 242,
			condition_event_8 = 243,
			condition_event_9 = 244,
			condition_event_10 = 245,
			linked = 246,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_RecordPtr // : DrRecordPtr
	{
		job_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}