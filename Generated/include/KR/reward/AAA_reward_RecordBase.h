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
BnsTables::Shared::TableRef fixed_item[8];
int fixed_item_tableId(){return 195;};
__int16 fixed_item_min[8];
__int16 fixed_item_max[8];
__int16 group_1_2_probability;
__int16 group_1_prob_weight;
BnsTables::Shared::TableRef group_1_item[16];
int group_1_item_tableId(){return 195;};
__int8 group_1_assured_count;
__int8 group_1_item_total_count;
__int16 group_2_prob_weight;
BnsTables::Shared::TableRef group_2_item[16];
int group_2_item_tableId(){return 195;};
__int8 group_2_assured_count;
__int8 group_2_item_total_count;
char Pad0[2];
__int32 group_1_2_total_prob_weight;
__int16 group_3_probability;
char Pad1[2];
BnsTables::Shared::TableRef group_3_item[32];
int group_3_item_tableId(){return 195;};
__int16 group_3_item_prob_weight[32];
__int32 group_3_item_total_prob_weight;
__int8 group_3_item_total_count;
char Pad2[1];
__int16 group_4_probability;
BnsTables::Shared::TableRef group_4_item[10];
int group_4_item_tableId(){return 195;};
__int8 group_4_selected_count;
char Pad3[3];
__int32 group_4_item_min[10];
__int32 group_4_item_max[10];
__int8 group_4_item_total_count;
char Pad4[1];
__int16 group_5_probability;
BnsTables::Shared::TableRef group_5_item[10];
int group_5_item_tableId(){return 195;};
__int8 group_5_selected_count;
char Pad5[3];
__int32 group_5_item_min[10];
__int32 group_5_item_max[10];
__int8 group_5_item_total_count;
char Pad6[3];
BnsTables::Shared::TableRef rare_item[120];
int rare_item_tableId(){return 195;};
__int32 rare_item_prob_weight_type;
__int32 rare_item_prob_weight[120];
__int8 rare_item_total_count;
char Pad7[1];
__int16 rare_item_min[120];
__int16 rare_item_max[120];
char Pad8[2];
BnsTables::Shared::TableRef selected_item[64];
int selected_item_tableId(){return 195;};
__int16 selected_item_count[64];
__int8 selected_item_assured_count;
char Pad9[3];
BnsTables::Shared::TableRef random_item[90];
int random_item_tableId(){return 195;};
BnsTables::Shared::TableRef smart_fixed_reward[8];
int smart_fixed_reward_tableId(){return 381;};
__int16 smart_group_1_2_probability;
__int16 smart_group_1_prob_weight;
BnsTables::Shared::TableRef smart_group_1_reward[16];
int smart_group_1_reward_tableId(){return 381;};
__int8 smart_group_1_assured_count;
__int8 smart_group_1_reward_total_count;
__int16 smart_group_2_prob_weight;
BnsTables::Shared::TableRef smart_group_2_reward[16];
int smart_group_2_reward_tableId(){return 381;};
__int8 smart_group_2_assured_count;
__int8 smart_group_2_reward_total_count;
char Pad10[2];
__int32 smart_group_1_2_total_prob_weight;
__int16 smart_group_3_probability;
char Pad11[2];
BnsTables::Shared::TableRef smart_group_3_reward[32];
int smart_group_3_reward_tableId(){return 381;};
__int16 smart_group_3_reward_prob_weight[32];
__int32 smart_group_3_reward_total_prob_weight;
__int8 smart_group_3_reward_total_count;
char Pad12[1];
__int16 smart_group_4_probability;
BnsTables::Shared::TableRef smart_group_4_reward[10];
int smart_group_4_reward_tableId(){return 381;};
__int8 smart_group_4_selected_count;
__int8 smart_group_4_reward_total_count;
__int16 smart_group_5_probability;
BnsTables::Shared::TableRef smart_group_5_reward[10];
int smart_group_5_reward_tableId(){return 381;};
__int8 smart_group_5_selected_count;
__int8 smart_group_5_reward_total_count;
char Pad13[2];
BnsTables::Shared::TableRef smart_rare_reward[120];
int smart_rare_reward_tableId(){return 381;};
__int32 smart_rare_reward_prob_weight_type;
__int32 smart_rare_reward_prob_weight[120];
__int8 smart_rare_reward_total_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 44); }
		static __int16 TableId() { return 326; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) reward_RecordPtr // : DrRecordPtr
	{
		reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}