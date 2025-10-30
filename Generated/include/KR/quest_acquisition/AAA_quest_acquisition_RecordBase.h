/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct quest_acquisition_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
signed char level;
signed char mastery_level;
signed char mastery_level_open_state;
signed char recommended_level;
BnsTables::Shared::TableRef preceding_quest[16];
__int32 preceding_quest_Size() const {return 16;};
int preceding_quest_tableId() const {return 307;};
BnsTables::Shared::TableRef preceding_quest_retired[16];
__int32 preceding_quest_retired_Size() const {return 16;};
int preceding_quest_retired_tableId() const {return 307;};
signed char preceding_quest_mission_step[16];
__int32 preceding_quest_mission_step_Size() const {return 16;};
signed char preceding_quest_count[16];
__int32 preceding_quest_count_Size() const {return 16;};
signed char preceding_quest_check;
signed char job[16];
__int32 job_Size() const {return 16;};
char Pad0[1];
__int16 sort_no;
signed char production_id;
char Pad1[1];
__int16 production_exp;
__int16 faction_level;
__int16 faction_level_max;
signed char valid_dayofweek_start_day[7];
__int32 valid_dayofweek_start_day_Size() const {return 7;};
signed char valid_dayofweek_start_hour[7];
__int32 valid_dayofweek_start_hour_Size() const {return 7;};
signed char valid_dayofweek_end_day[7];
__int32 valid_dayofweek_end_day_Size() const {return 7;};
signed char valid_dayofweek_end_hour[7];
__int32 valid_dayofweek_end_hour_Size() const {return 7;};
BnsTables::Shared::TableRef reward[3];
__int32 reward_Size() const {return 3;};
int reward_tableId() const {return 308;};
BnsTables::Shared::TableRef talk_to_self_guide_msg;
int talk_to_self_guide_msg_tableId() const {return 159;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 505; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_acquisition_RecordPtr // : DrRecordPtr
	{
		quest_acquisition_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}