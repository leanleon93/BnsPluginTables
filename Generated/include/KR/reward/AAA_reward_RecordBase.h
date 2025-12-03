/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
bool blind_auction;
char Pad0[2];
BnsTables::Shared::TableRef fixed_item[8];
__int32 fixed_item_Size() const {return 8;};
int fixed_item_tableId() const {return 203;};
__int16 fixed_item_min[8];
__int32 fixed_item_min_Size() const {return 8;};
__int16 fixed_item_max[8];
__int32 fixed_item_max_Size() const {return 8;};
__int16 group_1_2_probability;
__int16 group_1_prob_weight;
BnsTables::Shared::TableRef group_1_item[16];
__int32 group_1_item_Size() const {return 16;};
int group_1_item_tableId() const {return 203;};
signed char group_1_assured_count;
signed char group_1_item_total_count;
__int16 group_2_prob_weight;
BnsTables::Shared::TableRef group_2_item[16];
__int32 group_2_item_Size() const {return 16;};
int group_2_item_tableId() const {return 203;};
signed char group_2_assured_count;
signed char group_2_item_total_count;
char Pad1[2];
__int32 group_1_2_total_prob_weight;
__int16 group_3_probability;
char Pad2[2];
BnsTables::Shared::TableRef group_3_item[32];
__int32 group_3_item_Size() const {return 32;};
int group_3_item_tableId() const {return 203;};
__int16 group_3_item_prob_weight[32];
__int32 group_3_item_prob_weight_Size() const {return 32;};
__int32 group_3_item_total_prob_weight;
signed char group_3_item_total_count;
char Pad3[1];
__int16 group_4_probability;
BnsTables::Shared::TableRef group_4_item[10];
__int32 group_4_item_Size() const {return 10;};
int group_4_item_tableId() const {return 203;};
signed char group_4_selected_count;
char Pad4[3];
__int32 group_4_item_min[10];
__int32 group_4_item_min_Size() const {return 10;};
__int32 group_4_item_max[10];
__int32 group_4_item_max_Size() const {return 10;};
signed char group_4_item_total_count;
char Pad5[1];
__int16 group_5_probability;
BnsTables::Shared::TableRef group_5_item[10];
__int32 group_5_item_Size() const {return 10;};
int group_5_item_tableId() const {return 203;};
signed char group_5_selected_count;
char Pad6[3];
__int32 group_5_item_min[10];
__int32 group_5_item_min_Size() const {return 10;};
__int32 group_5_item_max[10];
__int32 group_5_item_max_Size() const {return 10;};
signed char group_5_item_total_count;
char Pad7[3];
BnsTables::Shared::TableRef rare_item[120];
__int32 rare_item_Size() const {return 120;};
int rare_item_tableId() const {return 203;};
__int32 rare_item_prob_weight_type;
__int32 rare_item_prob_weight[120];
__int32 rare_item_prob_weight_Size() const {return 120;};
signed char rare_item_total_count;
char Pad8[1];
__int16 rare_item_min[120];
__int32 rare_item_min_Size() const {return 120;};
__int16 rare_item_max[120];
__int32 rare_item_max_Size() const {return 120;};
char Pad9[2];
BnsTables::Shared::TableRef selected_item[64];
__int32 selected_item_Size() const {return 64;};
int selected_item_tableId() const {return 203;};
__int16 selected_item_count[64];
__int32 selected_item_count_Size() const {return 64;};
signed char selected_item_assured_count;
char Pad10[3];
__int64 selected_item_decompose_money[64];
__int32 selected_item_decompose_money_Size() const {return 64;};
BnsTables::Shared::TableRef random_item[90];
__int32 random_item_Size() const {return 90;};
int random_item_tableId() const {return 203;};
BnsTables::Shared::TableRef smart_fixed_reward[8];
__int32 smart_fixed_reward_Size() const {return 8;};
int smart_fixed_reward_tableId() const {return 399;};
__int16 smart_group_1_2_probability;
__int16 smart_group_1_prob_weight;
BnsTables::Shared::TableRef smart_group_1_reward[16];
__int32 smart_group_1_reward_Size() const {return 16;};
int smart_group_1_reward_tableId() const {return 399;};
signed char smart_group_1_assured_count;
signed char smart_group_1_reward_total_count;
__int16 smart_group_2_prob_weight;
BnsTables::Shared::TableRef smart_group_2_reward[16];
__int32 smart_group_2_reward_Size() const {return 16;};
int smart_group_2_reward_tableId() const {return 399;};
signed char smart_group_2_assured_count;
signed char smart_group_2_reward_total_count;
char Pad11[2];
__int32 smart_group_1_2_total_prob_weight;
__int16 smart_group_3_probability;
char Pad12[2];
BnsTables::Shared::TableRef smart_group_3_reward[32];
__int32 smart_group_3_reward_Size() const {return 32;};
int smart_group_3_reward_tableId() const {return 399;};
__int16 smart_group_3_reward_prob_weight[32];
__int32 smart_group_3_reward_prob_weight_Size() const {return 32;};
__int32 smart_group_3_reward_total_prob_weight;
signed char smart_group_3_reward_total_count;
char Pad13[1];
__int16 smart_group_4_probability;
BnsTables::Shared::TableRef smart_group_4_reward[10];
__int32 smart_group_4_reward_Size() const {return 10;};
int smart_group_4_reward_tableId() const {return 399;};
signed char smart_group_4_selected_count;
signed char smart_group_4_reward_total_count;
__int16 smart_group_5_probability;
BnsTables::Shared::TableRef smart_group_5_reward[10];
__int32 smart_group_5_reward_Size() const {return 10;};
int smart_group_5_reward_tableId() const {return 399;};
signed char smart_group_5_selected_count;
signed char smart_group_5_reward_total_count;
char Pad14[2];
BnsTables::Shared::TableRef smart_rare_reward[120];
__int32 smart_rare_reward_Size() const {return 120;};
int smart_rare_reward_tableId() const {return 399;};
__int32 smart_rare_reward_prob_weight_type;
__int32 smart_rare_reward_prob_weight[120];
__int32 smart_rare_reward_prob_weight_Size() const {return 120;};
signed char smart_rare_reward_total_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 343; }
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
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) reward_RecordPtr // : DrRecordPtr
	{
		reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}