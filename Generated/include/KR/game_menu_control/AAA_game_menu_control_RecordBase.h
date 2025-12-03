/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct game_menu_control_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char menu_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char required_level;
signed char required_master_level;
char Pad0[2];
BnsTables::Shared::TableRef required_acquired_and_complete_quest;
int required_acquired_and_complete_quest_tableId() const {return 309;};
BnsTables::Shared::TableRef required_complete_quest;
int required_complete_quest_tableId() const {return 309;};
signed char restrict_gameoption_display_type;
signed char restrict_content_type;
char Pad1[2];
BnsTables::Shared::TableRef notifycenter_message;
int notifycenter_message_tableId() const {return 438;};
BnsTables::Shared::TableRef unavailability_confirm_text;
int unavailability_confirm_text_tableId() const {return 438;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 2); }
		static __int16 TableId() { return 159; }
		static __int32 SubType() { return -1; }
		enum class menu_type {
			pc_filter_hidden = 0,
			pet_filter_hidden = 1,
			outward_appearance_filter_hidden = 2,
			second_pasword = 3,
			immediate_escape = 4,
			callcenter = 5,
			survay = 6,
			petition = 7,
			tgos = 8,
			help = 9,
			hud_customize = 10,
			system_option = 11,
			change_channel = 12,
			return_to_arena_lobby = 13,
			return_world_server = 14,
			select_character = 15,
			log_out = 16,
			exit_game = 17,
			game_option_type_exit_game = 18,
			power_book = 19,
			web_character_info = 20,
			delivery = 21,
			auction = 22,
			cross = 23,
			craft = 24,
			search_party = 25,
			guild = 26,
			blacklist = 27,
			photo_album = 28,
			wardrobe = 29,
			wardrobe2 = 30,
			attendnace = 31,
			attendnace_benefit = 32,
			web_contents_guide = 33,
			web_event_guide = 34,
			nshop = 35,
			push_reward = 36,
			appearance_pictorial_book = 37,
			sandbox = 38,
			duel_lobby_return_to_world = 39,
			dungeon_lobby_return_to_world = 40,
			duel_lobby_leave_room = 41,
			guild_customize_leave = 42,
			dungeon_guide = 43,
			relic = 44,
			jpn_dungeon_guide = 45,
			leave_attraction = 46,
			jpn_payment = 47,
			jpn_commerce = 48,
			content_rating = 49,
			fish_collecting = 50,
			guide_movie = 51,
			pvp_data = 52,
			zone_exit = 53,
			levelup_reward = 54,
			web_probability = 55,
			renewal_interserver_dungeon = 56,
			renewal_party_search = 57,
			renewal_public_raid = 58,
			renewal_public_raid3 = 59,
			renewal_public_raid2 = 60,
			renewal_journal = 61,
			renewal_map = 62,
			renewal_craft = 63,
			renewal_fish_collecting = 64,
			renewal_skill_training_room = 65,
			renewal_contents_journal_2 = 66,
			renewal_game_information = 67,
			renewal_dungeon_guide = 68,
			renewal_web_contents_guide = 69,
			renewal_jpn_dungeon_guide = 70,
			renewal_customize = 71,
			renewal_web_character_info = 72,
			renewal_jumping_level = 73,
			renewal_job_change = 74,
			renewal_achievement = 75,
			renewal_account_contents = 76,
			renewal_inventory = 77,
			renewal_skilltraining = 78,
			renewal_slate = 79,
			renewal_museum = 80,
			renewal_wardrobe2 = 81,
			renewal_personal_customize = 82,
			renewal_wardrobe = 83,
			renewal_sandbox = 84,
			renewal_friends = 85,
			renewal_power_book = 86,
			renewal_guild = 87,
			renewal_auction = 88,
			renewal_ranking = 89,
			renewal_ranking2 = 90,
			renewal_delivery = 91,
			renewal_qq = 92,
			renewal_pvp_data = 93,
			renewal_photo_album = 94,
			renewal_attendance_timetable = 95,
			renewal_attendnace = 96,
			renewal_attendnace_benefit = 97,
			renewal_goods = 98,
			renewal_nshop = 99,
			renewal_tencent_ingameshop = 100,
			renewal_np_auction = 101,
			renewal_dragon_jade_shop = 102,
			renewal_mentoring = 103,
			renewal_ingame_notice = 104,
			renewal_tencent_event_notice = 105,
			renewal_tencent_community_event = 106,
			renewal_goods_store = 107,
			renewal_random_store = 108,
			renewal_boardgacha = 109,
			renewal_treasureboard = 110,
			renewal_web_event_guide = 111,
			renewal_glyph_inventory = 112,
			renewal_constealltion = 113,
			renewal_public_raid5 = 114,
			renewal_sealeddungeonreward = 115,
			renewal_inter_battle_field = 116,
			renewal_guerrilla_event1 = 117,
			renewal_guerrilla_event2 = 118,
			renewal_guerrilla_event3 = 119,
			renewal_wanted_mission = 120,
			renewal_expedition = 121,
			renewal_neopass = 122,
			renewal_worldachivement = 123,
			renewal_racoon_store = 124,
			renewal_notification_center = 125,
		};

		enum class restrict_gameoption_display_type {
			hide = 0,
			lock = 1,
		};

		enum class restrict_content_type {
			none = 0,
			gameoption = 1,
			system_menu = 2,
			all = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) game_menu_control_RecordPtr // : DrRecordPtr
	{
		game_menu_control_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}