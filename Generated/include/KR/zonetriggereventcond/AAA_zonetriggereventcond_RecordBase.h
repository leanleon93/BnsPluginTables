/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class zonetriggereventcond_RecordSubType : __int32
    {
		zonetriggereventcond_record_sub_weekly_event = 0,
		zonetriggereventcond_record_sub_timeout_event = 1,
		zonetriggereventcond_record_sub_npc_killed_event = 2,
		zonetriggereventcond_record_sub_npc_killed_event2 = 3,
		zonetriggereventcond_record_sub_npc_survived_score_decision_timeout_event = 4,
		zonetriggereventcond_record_sub_npc_survived_timeout_event = 5,
		zonetriggereventcond_record_sub_boss_challenge_timeout_event = 6,
		zonetriggereventcond_record_sub_boss_challenge_round_score_event = 7,
		zonetriggereventcond_record_sub_boss_challenge_boss_npc_killed_event = 8,
		zonetriggereventcond_record_sub_random_time_interval_event = 9,
		zonetriggereventcond_record_sub_count = 10,
    };
#pragma pack(push, 1)
	struct zonetriggereventcond_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char cond_contents_type;
char Pad0[3];
BnsTables::Shared::TableRef cond_event_message;
int cond_event_message_tableId() const {return 159;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 1); }
		static __int16 TableId() { return 493; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonetriggereventcond_RecordPtr // : DrRecordPtr
	{
		zonetriggereventcond_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}