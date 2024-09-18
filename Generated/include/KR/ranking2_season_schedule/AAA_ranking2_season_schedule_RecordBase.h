/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct ranking2_season_schedule_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef season;
int season_tableId(){return 313;};
__int8 schedule_number;
char Pad0[3];
wchar_t* start_time;
wchar_t* end_time;
BnsTables::Shared::TableRef reward_group;
int reward_group_tableId(){return 312;};
bool is_join_reward;
bool is_job_reward;
char Pad1[2];
__int32 lucky_reward_count;
__int8 require_tier;
char Pad2[1];
__int16 lucky_tax_reward_rate;
bool show_accumurate_reward;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 0); }
		static __int16 TableId() { return 315; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_season_schedule_RecordPtr // : DrRecordPtr
	{
		ranking2_season_schedule_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_season_schedule_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}