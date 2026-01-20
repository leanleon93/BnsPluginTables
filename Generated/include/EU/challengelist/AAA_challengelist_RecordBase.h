/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class challengelist_RecordSubType : __int32
    {
		challengelist_record_sub_dayofweek = 0,
		challengelist_record_sub_week = 1,
		challengelist_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct challengelist_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char challenge_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char required_level;
signed char required_mastery_level;
char Pad0[2];
BnsTables::Shared::TableRef challenge_quest_basic[20];
__int32 challenge_quest_basic_Size() const {return 20;};
int challenge_quest_basic_tableId() const {return 309;};
BnsTables::Shared::TableRef challenge_quest_expansion[20];
__int32 challenge_quest_expansion_Size() const {return 20;};
int challenge_quest_expansion_tableId() const {return 309;};
signed char challenge_quest_grade[20];
__int32 challenge_quest_grade_Size() const {return 20;};
signed char challenge_quest_complete_count;
char Pad1[3];
BnsTables::Shared::ExplicitTableRef challenge_quest_attraction[20];
__int32 challenge_quest_attraction_Size() const {return 20;};
signed char challenge_quest_total_count;
signed char challenge_npc_difficulty[20];
__int32 challenge_npc_difficulty_Size() const {return 20;};
char Pad2[3];
BnsTables::Shared::TableRef challenge_npc_kill[20];
__int32 challenge_npc_kill_Size() const {return 20;};
int challenge_npc_kill_tableId() const {return 279;};
BnsTables::Shared::ExplicitTableRef challenge_npc_attraction[20];
__int32 challenge_npc_attraction_Size() const {return 20;};
signed char challenge_npc_grade[20];
__int32 challenge_npc_grade_Size() const {return 20;};
BnsTables::Shared::TableRef challenge_npc_quest[20];
__int32 challenge_npc_quest_Size() const {return 20;};
int challenge_npc_quest_tableId() const {return 309;};
signed char challenge_npc_total_count;
signed char challenge_reward_total_count;
signed char challenge_count_for_reward[20];
__int32 challenge_count_for_reward_Size() const {return 20;};
char Pad3[2];
BnsTables::Shared::TableRef reward[20];
__int32 reward_Size() const {return 20;};
int reward_tableId() const {return 52;};
BnsTables::Shared::TableRef account_reward_quota[20];
__int32 account_reward_quota_Size() const {return 20;};
int account_reward_quota_tableId() const {return 69;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 51; }
		static __int32 SubType() { return -1; }
		enum class challenge_type {
			none = 0,
			sun = 1,
			mon = 2,
			tue = 3,
			wed = 4,
			thu = 5,
			fri = 6,
			sat = 7,
			week1 = 8,
			week2 = 9,
			week3 = 10,
			week4 = 11,
			week5 = 12,
			week6 = 13,
			week7 = 14,
			week8 = 15,
			week9 = 16,
			week10 = 17,
		};

		enum class challenge_npc_grade {
			none = 0,
			grade1 = 1,
			grade2 = 2,
			grade3 = 3,
		};

		enum class challenge_npc_difficulty {
			none = 0,
			easy = 1,
			normal = 2,
			hard = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) challengelist_RecordPtr // : DrRecordPtr
	{
		challengelist_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}