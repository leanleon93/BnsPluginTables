/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class user_command_RecordSubType : __int32
    {
		user_command_record_sub_command = 0,
		user_command_record_sub_social = 1,
		user_command_record_sub_system_social = 2,
		user_command_record_sub_emoticon = 3,
		user_command_record_sub_count = 4,
    };
#pragma pack(push, 1)
	struct user_command_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef text;
int text_tableId() const {return 435;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 41); }
		static __int16 TableId() { return 447; }
		static __int32 SubType() { return -1; }
		enum class command {
			none = 0,
			chat_sight = 1,
			chat_party = 2,
			chat_whisper = 3,
			chat_in_domain = 4,
			chat_world = 5,
			chat_guild = 6,
			chat_guild_manager = 7,
			chat_faction = 8,
			chat_party_search = 9,
			chat_field_dungeon = 10,
			chat_qq = 11,
			chat_team = 12,
			chat_watch = 13,
			chat_friends = 14,
			party_invite = 15,
			duel_invite = 16,
			dungeon_invite = 17,
			unrated_duel_invite = 18,
			party_suggest_join = 19,
			party_leave = 20,
			guild_invite = 21,
			banish_guild_member = 22,
			game_time_info = 23,
			trade_invite = 24,
			blacklist_add = 25,
			link_to_join_party = 26,
			link_to_suggest_join_party = 27,
			enter_party_search_channel = 28,
			leave_party_search_channel = 29,
			social_following = 30,
			help = 31,
			sit_down = 32,
			power_book = 33,
			character_info = 34,
			diff_character_info = 35,
			sns = 36,
			nshop = 37,
			market = 38,
			skill_power_book = 39,
			add_friend = 40,
			postbox = 41,
			tgos = 42,
			message_by_item_district = 43,
			message_by_item_all = 44,
			warp_to_guildmember = 45,
			call_guildmember = 46,
			warp_to_guild_call_area = 47,
			report_bot = 48,
			report_spammer = 49,
			dice = 50,
			challengeparty_invite = 51,
			challengeparty_leave = 52,
			challengeparty_banish = 53,
			guild_apply = 54,
		};

		enum class social_type {
			command = 0,
			filter = 1,
		};

		enum class system_social_type {
			none = 0,
			party_match_social = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) user_command_RecordPtr // : DrRecordPtr
	{
		user_command_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}