/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct ranking2_season_group_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef contents;
int contents_tableId() const {return 325;};
BnsTables::Shared::TableRef season[10];
__int32 season_Size() const {return 10;};
int season_tableId() const {return 329;};
BnsTables::Shared::TableRef main_season;
int main_season_tableId() const {return 329;};
signed char contents_score_type;
char Pad0[3];
BnsTables::Shared::TableRef dungeon;
int dungeon_tableId() const {return 118;};
BnsTables::Shared::TableRef tier_contents_seasons[15];
__int32 tier_contents_seasons_Size() const {return 15;};
int tier_contents_seasons_tableId() const {return 330;};
BnsTables::Shared::TableRef tier;
int tier_tableId() const {return 332;};
__int64 min_accumulate_reward;
__int16 min_accumulate_reward_range;
__int16 world_group[10];
__int32 world_group_Size() const {return 10;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 330; }
		static __int32 SubType() { return -1; }
		enum class contents_score_type {
			invalid = 0,
			contents_single = 1,
			contents_total = 2,
			tier_total = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_season_group_RecordPtr // : DrRecordPtr
	{
		ranking2_season_group_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}