/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct zonerule_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool enable_infinite_hyper_energy;
bool enable_reset_combat_mode;
char Pad0[2];
__int32 reset_combat_mode_recycle_duration;
bool enable_co_ownership_pouch;
bool enable_pvp;
signed char pvp_mode_type;
bool required_inactivated_main_faction;
bool required_activated_main_faction;
signed char apply_content_ban_id;
bool allow_invite_party_in_arena;
bool show_leave_zone_popup_when_no_party_in_arena_enterance;
BnsTables::Shared::TableRef required_available_weekly_time;
int required_available_weekly_time_tableId() const {return 461;};
bool town;
bool reentrance_pcspawn_check_later_when_enterworld;
bool infinite_durability;
bool enable_auto_mode;
signed char auto_mode_type;
bool enable_auto_item_support;
bool activate_vehicle;
bool enable_change_channel;
bool allow_invite_party_in_same_channel_only;
bool enable_performance_option;
bool is_world_boss_spawn_zone;
bool use_default_skill;
bool apply_membership_benefit;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(10, 1); }
		static __int16 TableId() { return 491; }
		static __int32 SubType() { return -1; }
		enum class pvp_mode_type {
			none = 0,
			free_for_all = 1,
		};

		enum class apply_content_ban_id {
			invalid = 0,
			duel = 1,
			faction_battle_field = 2,
			dungeon = 3,
			attendance = 4,
			jumping_character = 5,
			duel_bot_challenge = 6,
			fraud = 7,
			zone_rule_group = 8,
			party_battle_field_matching = 9,
			duel_matching = 10,
		};

		enum class auto_mode_type {
			disallow = 0,
			basic = 1,
			advanced = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonerule_RecordPtr // : DrRecordPtr
	{
		zonerule_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}