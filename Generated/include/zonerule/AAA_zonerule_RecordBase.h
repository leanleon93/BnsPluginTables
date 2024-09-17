/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct zonerule_Record : DrEl
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
bool required_inactivated_main_faction;
bool required_activated_main_faction;
__int8 apply_content_ban_id;
bool allow_invite_party_in_arena;
bool show_leave_zone_popup_when_no_party_in_arena_enterance;
char Pad1[1];
Data::TableRef required_available_weekly_time;
int required_available_weekly_time_tableId(){return 431;};
bool town;
bool reentrance_pcspawn_check_later_when_enterworld;
bool infinite_durability;
bool enable_auto_mode;
__int8 auto_mode_type;
bool enable_auto_item_support;
bool activate_vehicle;
bool enable_change_channel;
bool allow_invite_party_in_same_channel_only;
bool enable_performance_option;
bool is_world_boss_spawn_zone;

		static TableVersion Version() { return TableVersion(5, 0); }
		static __int16 TableId() { return 454; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonerule_RecordPtr // : DrRecordPtr
	{
		zonerule_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonerule_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}