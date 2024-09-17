/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct ranking2_season_schedule_Record : DrEl
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
Data::TableRef season;
int season_tableId(){return 300;};
__int8 schedule_number;
char Pad0[3];
wchar_t* start_time;
wchar_t* end_time;
Data::TableRef reward_group;
int reward_group_tableId(){return 299;};
bool is_join_reward;
bool is_job_reward;

		static TableVersion Version() { return TableVersion(4, 1); }
		static __int16 TableId() { return 302; }
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