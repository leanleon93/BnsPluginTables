/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
		static __int16 TableId() { return 0; }
		static __int32 SubType() { return -1; }
		enum class mastery_level_open_state {
			dont_care = 0,
			close = 1,
			open = 2,
		};

		enum class preceding_quest_check {
			and_val = 0,
			or_val = 1,
		};

		enum class job {
			job_none = 0,
			geomsa = 1,
			gweonsa = 2,
			gigongsa = 3,
			gyeogsa = 4,
			yeogsa = 5,
			sohwansa = 6,
			amsarja = 7,
			gwigeomsa = 8,
			jusursa = 9,
			gigweonsa = 10,
			tusa = 11,
			gungsa = 12,
			changsursa = 13,
			noejeonsursa = 14,
			ssanggeomsa = 15,
			agsa = 16,
			pc_max = 17,
			sohwansu_ruki = 18,
			sohwansu_striker = 19,
			sohwansu_defender = 20,
			sohwansu_controller = 21,
		};

		enum class production_id {
			none = 0,
			production_type_1 = 1,
			production_type_2 = 2,
			production_type_3 = 3,
			production_type_4 = 4,
			production_type_5 = 5,
			production_type_6 = 6,
			production_type_7 = 7,
			gathering_type_1 = 8,
			gathering_type_2 = 9,
			gathering_type_3 = 10,
			gathering_type_4 = 11,
			gathering_type_5 = 12,
			gathering_type_6 = 13,
			gathering_type_7 = 14,
		};

		enum class valid_dayofweek_end_day {
			none = 0,
			mon = 1,
			tue = 2,
			wed = 3,
			thu = 4,
			fri = 5,
			sat = 6,
			sun = 7,
		};
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