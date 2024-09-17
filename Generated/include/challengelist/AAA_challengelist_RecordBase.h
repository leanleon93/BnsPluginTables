/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct challengelist_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 challenge_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 required_level;
__int8 required_mastery_level;
char Pad0[2];
Data::TableRef challenge_quest_basic[20];
int challenge_quest_basic_tableId(){return 283;};
Data::TableRef challenge_quest_expansion[20];
int challenge_quest_expansion_tableId(){return 283;};
__int8 challenge_quest_grade[20];
__int8 challenge_quest_complete_count;
char Pad1[3];
Data::ExplicitTableRef challenge_quest_attraction[20];
__int8 challenge_quest_total_count;
__int8 challenge_npc_difficulty[20];
char Pad2[3];
Data::TableRef challenge_npc_kill[20];
int challenge_npc_kill_tableId(){return 255;};
Data::ExplicitTableRef challenge_npc_attraction[20];
__int8 challenge_npc_grade[20];
Data::TableRef challenge_npc_quest[20];
int challenge_npc_quest_tableId(){return 283;};
__int8 challenge_npc_total_count;
__int8 challenge_reward_total_count;
__int8 challenge_count_for_reward[20];
char Pad3[2];
Data::TableRef reward[20];
int reward_tableId(){return 52;};

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 51; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) challengelist_RecordPtr // : DrRecordPtr
	{
		challengelist_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::challengelist_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}