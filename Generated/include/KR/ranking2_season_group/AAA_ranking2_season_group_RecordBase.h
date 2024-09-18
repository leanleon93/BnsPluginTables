/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

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
int contents_tableId(){return 309;};
BnsTables::Shared::TableRef season[10];
int season_tableId(){return 313;};
BnsTables::Shared::TableRef main_season;
int main_season_tableId(){return 313;};
__int8 contents_score_type;
char Pad0[3];
BnsTables::Shared::TableRef dungeon;
int dungeon_tableId(){return 114;};
BnsTables::Shared::TableRef tier_contents_seasons[15];
int tier_contents_seasons_tableId(){return 314;};
BnsTables::Shared::TableRef tier;
int tier_tableId(){return 316;};
__int64 min_accumulate_reward;
__int16 min_accumulate_reward_range;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 0); }
		static __int16 TableId() { return 314; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_season_group_RecordPtr // : DrRecordPtr
	{
		ranking2_season_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_season_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}