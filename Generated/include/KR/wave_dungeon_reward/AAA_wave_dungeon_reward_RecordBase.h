/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct wave_dungeon_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;
signed char difficulty_type;
signed char wave;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 reward_exp;
__int32 reward_money;
__int32 reward_item_prob[5];
__int32 reward_item_prob_Size() const {return 5;};
signed char reward_item_total_count;
char Pad0[3];
BnsTables::Shared::TableRef reward_item[5];
__int32 reward_item_Size() const {return 5;};
int reward_item_tableId() const {return 208;};
__int16 reward_item_count[5];
__int32 reward_item_count_Size() const {return 5;};
signed char reward_result_type;
char Pad1[1];
__int32 kill_score_min;
__int32 kill_score_max;
__int32 fatigability_cost;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 476; }
		static __int32 SubType() { return -1; }
		enum class difficulty_type {
			none = 0,
			easy = 1,
			normal = 2,
			hard = 3,
		};

		enum class reward_result_type {
			wave = 0,
			killscore = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) wave_dungeon_reward_RecordPtr // : DrRecordPtr
	{
		wave_dungeon_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}