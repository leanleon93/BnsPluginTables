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
int zone_tableId(){return 443;};
__int32 play_time;
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
BnsTables::Shared::TableRef public_raid;
int public_raid_tableId(){return 279;};
BnsTables::Shared::TableRef reward[4];
int reward_tableId(){return 177;};
__int32 reward_time[4];
BnsTables::Shared::TableRef finish_reward;
int finish_reward_tableId(){return 177;};
BnsTables::Shared::TableRef timeout_reward;
int timeout_reward_tableId(){return 177;};
BnsTables::Shared::TableRef goal_foot_switch;
int goal_foot_switch_tableId(){return 446;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 176; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) hyper_racing_game_RecordPtr // : DrRecordPtr
	{
		hyper_racing_game_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::hyper_racing_game_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}