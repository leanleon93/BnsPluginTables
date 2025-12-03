/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct indicator_image_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 indicator;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* mesh_iconset;
wchar_t* minimap;
wchar_t* minimap_over;
wchar_t* minimap_boder;
wchar_t* minimap_boder_over;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 30); }
		static __int16 TableId() { return 191; }
		static __int32 SubType() { return -1; }
		enum class indicator {
			default_val = 0,
			quest_epic_can_complete = 1,
			quest_epic_can_acquire = 2,
			quest_epic_can_progress = 3,
			quest_epic_next_acquire = 4,
			quest_epic_completed = 5,
			quest_job_can_complete = 6,
			quest_job_can_acquire = 7,
			quest_job_can_progress = 8,
			quest_job_next_acquire = 9,
			quest_job_completed = 10,
			quest_normal_can_complete = 11,
			quest_normal_can_acquire = 12,
			quest_normal_can_progress = 13,
			quest_normal_next_acquire = 14,
			quest_normal_completed = 15,
			quest_faction_can_complete = 16,
			quest_faction_can_acquire = 17,
			quest_faction_can_progress = 18,
			quest_faction_next_acquire = 19,
			quest_faction_not_progress = 20,
			quest_faction_completed = 21,
			quest_festival_can_complete = 22,
			quest_festival_can_acquire = 23,
			quest_festival_can_progress = 24,
			quest_festival_next_acquire = 25,
			quest_festival_completed = 26,
			quest_special_can_complete = 27,
			quest_special_can_acquire = 28,
			quest_special_can_progress = 29,
			quest_special_next_acquire = 30,
			quest_special_completed = 31,
			quest_side_episode_can_complete = 32,
			quest_side_episode_can_acquire = 33,
			quest_side_episode_can_progress = 34,
			quest_side_episode_next_acquire = 35,
			quest_side_episode_completed = 36,
			quest_challenge_today_can_complete = 37,
			quest_challenge_today_can_acquire = 38,
			quest_challenge_today_can_progress = 39,
			quest_challenge_today_next_acquire = 40,
			quest_challenge_today_completed = 41,
			quest_normal_repeat_can_complete = 42,
			quest_normal_repeat_can_acquire = 43,
			quest_normal_repeat_can_progress = 44,
			quest_normal_repeat_next_acquire = 45,
			quest_normal_repeat_completed = 46,
			quest_faction_repeat_can_complete = 47,
			quest_faction_repeat_can_acquire = 48,
			quest_faction_repeat_can_progress = 49,
			quest_faction_repeat_next_acquire = 50,
			quest_faction_repeat_not_progress = 51,
			quest_faction_repeat_completed = 52,
			quest_festival_repeat_can_complete = 53,
			quest_festival_repeat_can_acquire = 54,
			quest_festival_repeat_can_progress = 55,
			quest_festival_repeat_next_acquire = 56,
			quest_festival_repeat_completed = 57,
			quest_side_episode_repeat_can_complete = 58,
			quest_side_episode_repeat_can_acquire = 59,
			quest_side_episode_repeat_can_progress = 60,
			quest_side_episode_repeat_next_acquire = 61,
			quest_side_episode_repeat_completed = 62,
			quest_normal_dayofweek_can_complete = 63,
			quest_normal_dayofweek_can_acquire = 64,
			quest_normal_dayofweek_can_progress = 65,
			quest_normal_dayofweek_next_acquire = 66,
			quest_normal_dayofweek_completed = 67,
			quest_faction_dayofweek_can_complete = 68,
			quest_faction_dayofweek_can_acquire = 69,
			quest_faction_dayofweek_can_progress = 70,
			quest_faction_dayofweek_next_acquire = 71,
			quest_faction_dayofweek_not_progress = 72,
			quest_faction_dayofweek_completed = 73,
			quest_festival_dayofweek_can_complete = 74,
			quest_festival_dayofweek_can_acquire = 75,
			quest_festival_dayofweek_can_progress = 76,
			quest_festival_dayofweek_next_acquire = 77,
			quest_festival_dayofweek_completed = 78,
			quest_side_episode_dayofweek_can_complete = 79,
			quest_side_episode_dayofweek_can_acquire = 80,
			quest_side_episode_dayofweek_can_progress = 81,
			quest_side_episode_dayofweek_next_acquire = 82,
			quest_side_episode_dayofweek_completed = 83,
			quest_attraction_can_complete = 84,
			quest_attraction_can_acquire = 85,
			quest_attraction_can_progress = 86,
			quest_attraction_next_acquire = 87,
			quest_attraction_not_progress = 88,
			quest_attraction_completed = 89,
			quest_retired = 90,
			convoy = 91,
			mark_1 = 92,
			mark_2 = 93,
			mark_3 = 94,
			mark_4 = 95,
			mark_5 = 96,
			mark_6 = 97,
			mark_7 = 98,
			mark_8 = 99,
			mark_timer_0 = 100,
			mark_timer_1 = 101,
			mark_timer_2 = 102,
			mark_timer_3 = 103,
			mark_timer_4 = 104,
			mark_timer_5 = 105,
			mark_timer_6 = 106,
			mark_timer_7 = 107,
			mark_timer_8 = 108,
			mark_timer_9 = 109,
			mark_timer_10 = 110,
			guild_mark_1 = 111,
			guild_mark_2 = 112,
			guild_mark_3 = 113,
			guild_mark_4 = 114,
			guild_mark_5 = 115,
			axe = 116,
			coin = 117,
			quest_gadget_drop = 118,
			quest_gadget_required = 119,
			quest_board_start = 120,
			quest_vsboard_start = 121,
			quest_vsboard_end = 122,
			quest_vsboard_repeat_start = 123,
			quest_factionboard_start = 124,
			quest_factionboard_end = 125,
			quest_factionboard_repeat_start = 126,
			attack_epic_kill = 127,
			attack_epic_kill_gadget = 128,
			attack_job_kill = 129,
			attack_job_kill_gadget = 130,
			attack_normal_kill = 131,
			attack_normal_kill_gadget = 132,
			attack_faction_kill = 133,
			attack_faction_kill_gadget = 134,
			attack_festival_kill = 135,
			attack_festival_kill_gadget = 136,
			quest_simple_1 = 137,
			quest_simple_2 = 138,
			quest_simple_3 = 139,
			quest_simple_4 = 140,
			quest_simple_5 = 141,
			quest_tendency_1 = 142,
			quest_tendency_2 = 143,
			quest_tendency_3 = 144,
			quest_faction_challenge_today_can_complete = 145,
			quest_faction_challenge_today_can_acquire = 146,
			quest_faction_challenge_today_can_progress = 147,
			quest_faction_challenge_today_next_acquire = 148,
			quest_faction_challenge_today_not_progress = 149,
			quest_faction_challenge_today_completed = 150,
			quest_mentoring_can_complete = 151,
			quest_mentoring_can_acquire = 152,
			quest_mentoring_can_progress = 153,
			quest_mentoring_completed = 154,
			quest_bind_challenge_today_completed = 155,
			quest_bind_duel_challenge_today_completed = 156,
			quest_bind_festival_challenge_today_completed = 157,
			quest_bind_normal_completed = 158,
			quest_bind_duel_normal_completed = 159,
			quest_bind_festival_normal_completed = 160,
			quest_hunting_can_complete = 161,
			quest_hunting_can_acquire = 162,
			quest_hunting_can_progress = 163,
			quest_hunting_next_acquire = 164,
			quest_hunting_completed = 165,
			quest_hunting_repeat_can_complete = 166,
			quest_hunting_repeat_can_acquire = 167,
			quest_hunting_repeat_can_progress = 168,
			quest_hunting_repeat_next_acquire = 169,
			quest_hunting_repeat_completed = 170,
			quest_epic_replay_start = 171,
			quest_epic_replay_progress = 172,
			quest_epic_replay_complete = 173,
			quest_hidden_can_complete = 174,
			quest_hidden_can_acquire = 175,
			quest_hidden_can_progress = 176,
			quest_hidden_next_acquire = 177,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) indicator_image_RecordPtr // : DrRecordPtr
	{
		indicator_image_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}