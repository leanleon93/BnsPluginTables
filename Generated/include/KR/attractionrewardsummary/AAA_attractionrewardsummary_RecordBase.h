/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct attractionrewardsummary_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::ExplicitTableRef reward_item_common[24];
__int8 reward_item_common_category[24];
__int8 reward_item_common_condition_type[24];
BnsTables::Shared::ExplicitTableRef reward_item_normal[24];
__int8 reward_item_normal_category[24];
__int8 reward_item_normal_condition_type[24];
BnsTables::Shared::ExplicitTableRef reward_item_hard[24];
__int8 reward_item_hard_category[24];
__int8 reward_item_hard_condition_type[24];
BnsTables::Shared::ExplicitTableRef reward_item_easy[24];
__int8 reward_item_easy_category[24];
__int8 reward_item_easy_condition_type[24];
BnsTables::Shared::ExplicitTableRef main_reward_item_normal[5];
BnsTables::Shared::ExplicitTableRef main_reward_item_hard[5];
BnsTables::Shared::ExplicitTableRef main_reward_item_easy[5];
BnsTables::Shared::ExplicitTableRef additional_reward_item[24];
__int8 additional_reward_item_category[24];
__int8 additional_reward_item_condition_type[24];
BnsTables::Shared::ExplicitTableRef bonus_reward_item_common[24];
__int8 bonus_reward_item_common_category[24];
__int8 bonus_reward_item_common_condition_type[24];
BnsTables::Shared::ExplicitTableRef bonus_reward_item_easy[24];
__int8 bonus_reward_item_easy_category[24];
__int8 bonus_reward_item_easy_condition_type[24];
BnsTables::Shared::ExplicitTableRef bonus_reward_item_normal[24];
__int8 bonus_reward_item_normal_category[24];
__int8 bonus_reward_item_normal_condition_type[24];
BnsTables::Shared::ExplicitTableRef bonus_reward_item_hard[24];
__int8 bonus_reward_item_hard_category[24];
__int8 bonus_reward_item_hard_condition_type[24];
__int8 bonus_reward_difficulty_type[3];
char Pad0[1];
BnsTables::Shared::TableRef bonus_reward_quota[3];
int bonus_reward_quota_tableId(){return 67;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 9); }
		static __int16 TableId() { return 18; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) attractionrewardsummary_RecordPtr // : DrRecordPtr
	{
		attractionrewardsummary_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::attractionrewardsummary_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}