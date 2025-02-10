/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct hyper_racing_game_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 461;};
__int32 play_time;
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
BnsTables::Shared::TableRef public_raid;
int public_raid_tableId() const {return 290;};
BnsTables::Shared::TableRef reward[4];
__int32 reward_Size() const {return 4;};
int reward_tableId() const {return 181;};
__int32 reward_time[4];
__int32 reward_time_Size() const {return 4;};
BnsTables::Shared::TableRef finish_reward;
int finish_reward_tableId() const {return 181;};
BnsTables::Shared::TableRef timeout_reward;
int timeout_reward_tableId() const {return 181;};
BnsTables::Shared::TableRef goal_foot_switch;
int goal_foot_switch_tableId() const {return 464;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 180; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) hyper_racing_game_RecordPtr // : DrRecordPtr
	{
		hyper_racing_game_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}