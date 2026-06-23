/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct quest_case_val_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		signed char prob;
char Pad0[3];
BnsTables::Shared::TableRef mapunit[10];
__int32 mapunit_Size() const {return 10;};
int mapunit_tableId() const {return 266;};
__int16 range_min;
__int16 range_max;
signed char progress_mission;
signed char progress_value;
bool acquire_quest;
signed char gadget_required;
BnsTables::Shared::TableRef gadget;
int gadget_tableId() const {return 150;};
BnsTables::Shared::ExplicitTableRef unload_map_navigation_object;
BnsTables::Shared::TableRef valid_zone[2];
__int32 valid_zone_Size() const {return 2;};
int valid_zone_tableId() const {return 493;};
signed char completion_count;
signed char completion_count_op;
__int16 indicator;
bool show_in_tooltip;
char Pad1[3];
BnsTables::Shared::TableRef case_talksocial;
int case_talksocial_tableId() const {return 442;};
float case_talksocial_delay;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 0; }
		static __int32 SubType() { return -1; }
		enum class progress_mission {
			y = 0,
			reaction_only = 1,
			n = 2,
		};

		enum class gadget_required {
			dont_care = 0,
			carry_and_remove = 1,
			carry = 2,
			empty = 3,
			not_A = 4,
		};

		enum class completion_count_op {
			eq = 0,
			neq = 1,
			gt = 2,
			ge = 3,
			lt = 4,
			le = 5,
		};

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
			quest_side_episode_collabo_can_complete = 37,
			quest_side_episode_collabo_can_acquire = 38,
			quest_side_episode_collabo_can_progress = 39,
			quest_side_episode_collabo_next_acquire = 40,
			quest_side_episode_collabo_completed = 41,
			quest_challenge_today_can_complete = 42,
			quest_challenge_today_can_acquire = 43,
			quest_challenge_today_can_progress = 44,
			quest_challenge_today_next_acquire = 45,
			quest_challenge_today_completed = 46,
			quest_normal_repeat_can_complete = 47,
			quest_normal_repeat_can_acquire = 48,
			quest_normal_repeat_can_progress = 49,
			quest_normal_repeat_next_acquire = 50,
			quest_normal_repeat_completed = 51,
			quest_faction_repeat_can_complete = 52,
			quest_faction_repeat_can_acquire = 53,
			quest_faction_repeat_can_progress = 54,
			quest_faction_repeat_next_acquire = 55,
			quest_faction_repeat_not_progress = 56,
			quest_faction_repeat_completed = 57,
			quest_festival_repeat_can_complete = 58,
			quest_festival_repeat_can_acquire = 59,
			quest_festival_repeat_can_progress = 60,
			quest_festival_repeat_next_acquire = 61,
			quest_festival_repeat_completed = 62,
			quest_side_episode_repeat_can_complete = 63,
			quest_side_episode_repeat_can_acquire = 64,
			quest_side_episode_repeat_can_progress = 65,
			quest_side_episode_repeat_next_acquire = 66,
			quest_side_episode_repeat_completed = 67,
			quest_side_episode_collabo_repeat_can_complete = 68,
			quest_side_episode_collabo_repeat_can_acquire = 69,
			quest_side_episode_collabo_repeat_can_progress = 70,
			quest_side_episode_collabo_repeat_next_acquire = 71,
			quest_side_episode_collabo_repeat_completed = 72,
			quest_normal_dayofweek_can_complete = 73,
			quest_normal_dayofweek_can_acquire = 74,
			quest_normal_dayofweek_can_progress = 75,
			quest_normal_dayofweek_next_acquire = 76,
			quest_normal_dayofweek_completed = 77,
			quest_faction_dayofweek_can_complete = 78,
			quest_faction_dayofweek_can_acquire = 79,
			quest_faction_dayofweek_can_progress = 80,
			quest_faction_dayofweek_next_acquire = 81,
			quest_faction_dayofweek_not_progress = 82,
			quest_faction_dayofweek_completed = 83,
			quest_festival_dayofweek_can_complete = 84,
			quest_festival_dayofweek_can_acquire = 85,
			quest_festival_dayofweek_can_progress = 86,
			quest_festival_dayofweek_next_acquire = 87,
			quest_festival_dayofweek_completed = 88,
			quest_side_episode_dayofweek_can_complete = 89,
			quest_side_episode_dayofweek_can_acquire = 90,
			quest_side_episode_dayofweek_can_progress = 91,
			quest_side_episode_dayofweek_next_acquire = 92,
			quest_side_episode_dayofweek_completed = 93,
			quest_side_episode_collabo_dayofweek_can_complete = 94,
			quest_side_episode_collabo_dayofweek_can_acquire = 95,
			quest_side_episode_collabo_dayofweek_can_progress = 96,
			quest_side_episode_collabo_dayofweek_next_acquire = 97,
			quest_side_episode_collabo_dayofweek_completed = 98,
			quest_attraction_can_complete = 99,
			quest_attraction_can_acquire = 100,
			quest_attraction_can_progress = 101,
			quest_attraction_next_acquire = 102,
			quest_attraction_not_progress = 103,
			quest_attraction_completed = 104,
			quest_retired = 105,
			convoy = 106,
			mark_1 = 107,
			mark_2 = 108,
			mark_3 = 109,
			mark_4 = 110,
			mark_5 = 111,
			mark_6 = 112,
			mark_7 = 113,
			mark_8 = 114,
			mark_timer_0 = 115,
			mark_timer_1 = 116,
			mark_timer_2 = 117,
			mark_timer_3 = 118,
			mark_timer_4 = 119,
			mark_timer_5 = 120,
			mark_timer_6 = 121,
			mark_timer_7 = 122,
			mark_timer_8 = 123,
			mark_timer_9 = 124,
			mark_timer_10 = 125,
			guild_mark_1 = 126,
			guild_mark_2 = 127,
			guild_mark_3 = 128,
			guild_mark_4 = 129,
			guild_mark_5 = 130,
			axe = 131,
			coin = 132,
			quest_gadget_drop = 133,
			quest_gadget_required = 134,
			quest_board_start = 135,
			quest_vsboard_start = 136,
			quest_vsboard_end = 137,
			quest_vsboard_repeat_start = 138,
			quest_factionboard_start = 139,
			quest_factionboard_end = 140,
			quest_factionboard_repeat_start = 141,
			attack_epic_kill = 142,
			attack_epic_kill_gadget = 143,
			attack_job_kill = 144,
			attack_job_kill_gadget = 145,
			attack_normal_kill = 146,
			attack_normal_kill_gadget = 147,
			attack_faction_kill = 148,
			attack_faction_kill_gadget = 149,
			attack_festival_kill = 150,
			attack_festival_kill_gadget = 151,
			quest_simple_1 = 152,
			quest_simple_2 = 153,
			quest_simple_3 = 154,
			quest_simple_4 = 155,
			quest_simple_5 = 156,
			quest_tendency_1 = 157,
			quest_tendency_2 = 158,
			quest_tendency_3 = 159,
			quest_faction_challenge_today_can_complete = 160,
			quest_faction_challenge_today_can_acquire = 161,
			quest_faction_challenge_today_can_progress = 162,
			quest_faction_challenge_today_next_acquire = 163,
			quest_faction_challenge_today_not_progress = 164,
			quest_faction_challenge_today_completed = 165,
			quest_mentoring_can_complete = 166,
			quest_mentoring_can_acquire = 167,
			quest_mentoring_can_progress = 168,
			quest_mentoring_completed = 169,
			quest_bind_challenge_today_completed = 170,
			quest_bind_duel_challenge_today_completed = 171,
			quest_bind_festival_challenge_today_completed = 172,
			quest_bind_normal_completed = 173,
			quest_bind_duel_normal_completed = 174,
			quest_bind_festival_normal_completed = 175,
			quest_hunting_can_complete = 176,
			quest_hunting_can_acquire = 177,
			quest_hunting_can_progress = 178,
			quest_hunting_next_acquire = 179,
			quest_hunting_completed = 180,
			quest_hunting_repeat_can_complete = 181,
			quest_hunting_repeat_can_acquire = 182,
			quest_hunting_repeat_can_progress = 183,
			quest_hunting_repeat_next_acquire = 184,
			quest_hunting_repeat_completed = 185,
			quest_epic_replay_start = 186,
			quest_epic_replay_progress = 187,
			quest_epic_replay_complete = 188,
			quest_hidden_can_complete = 189,
			quest_hidden_can_acquire = 190,
			quest_hidden_can_progress = 191,
			quest_hidden_next_acquire = 192,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_case_val_RecordPtr // : DrRecordPtr
	{
		quest_case_val_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}