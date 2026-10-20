/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct pet_stone_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
signed char pick_type;
char Pad0[2];
BnsTables::Shared::TableRef reward_stone[120];
__int32 reward_stone_Size() const {return 120;};
int reward_stone_tableId() const {return 318;};
__int32 reward_stone_prob_weight[120];
__int32 reward_stone_prob_weight_Size() const {return 120;};
__int32 reward_stone_prob_weight_total;
signed char reward_stone_total_count;
char Pad1[3];
BnsTables::Shared::TableRef reward_group_id[10];
__int32 reward_group_id_Size() const {return 10;};
int reward_group_id_tableId() const {return 319;};
__int32 reward_group_prob_weight[10];
__int32 reward_group_prob_weight_Size() const {return 10;};
__int32 reward_group_prob_weight_total;
signed char reward_group_total_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 321; }
		static __int32 SubType() { return -1; }
		enum class publisher {
			NONE = 0,
			NCK = 1,
			NCA = 2,
			NCJ = 3,
			NCT = 4,
			INV = 5,
			TX = 6,
			NCK_NEO_GOLD = 7,
		};

		enum class pick_type {
			stone = 0,
			group = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pet_stone_reward_RecordPtr // : DrRecordPtr
	{
		pet_stone_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}