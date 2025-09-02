/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct attractionrewardsummary_Record : BnsTables::Shared::DrEl
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
signed char publisher;
char Pad0[3];
BnsTables::Shared::ExplicitTableRef reward_item_common[24];
__int32 reward_item_common_Size() const {return 24;};
signed char reward_item_common_category[24];
__int32 reward_item_common_category_Size() const {return 24;};
signed char reward_item_common_condition_type[24];
__int32 reward_item_common_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef reward_item_normal[24];
__int32 reward_item_normal_Size() const {return 24;};
signed char reward_item_normal_category[24];
__int32 reward_item_normal_category_Size() const {return 24;};
signed char reward_item_normal_condition_type[24];
__int32 reward_item_normal_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef reward_item_hard[24];
__int32 reward_item_hard_Size() const {return 24;};
signed char reward_item_hard_category[24];
__int32 reward_item_hard_category_Size() const {return 24;};
signed char reward_item_hard_condition_type[24];
__int32 reward_item_hard_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef reward_item_easy[24];
__int32 reward_item_easy_Size() const {return 24;};
signed char reward_item_easy_category[24];
__int32 reward_item_easy_category_Size() const {return 24;};
signed char reward_item_easy_condition_type[24];
__int32 reward_item_easy_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef main_reward_item_normal[5];
__int32 main_reward_item_normal_Size() const {return 5;};
BnsTables::Shared::ExplicitTableRef main_reward_item_hard[5];
__int32 main_reward_item_hard_Size() const {return 5;};
BnsTables::Shared::ExplicitTableRef main_reward_item_easy[5];
__int32 main_reward_item_easy_Size() const {return 5;};
BnsTables::Shared::ExplicitTableRef additional_reward_item[24];
__int32 additional_reward_item_Size() const {return 24;};
signed char additional_reward_item_category[24];
__int32 additional_reward_item_category_Size() const {return 24;};
signed char additional_reward_item_condition_type[24];
__int32 additional_reward_item_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef bonus_reward_item_common[24];
__int32 bonus_reward_item_common_Size() const {return 24;};
signed char bonus_reward_item_common_category[24];
__int32 bonus_reward_item_common_category_Size() const {return 24;};
signed char bonus_reward_item_common_condition_type[24];
__int32 bonus_reward_item_common_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef bonus_reward_item_easy[24];
__int32 bonus_reward_item_easy_Size() const {return 24;};
signed char bonus_reward_item_easy_category[24];
__int32 bonus_reward_item_easy_category_Size() const {return 24;};
signed char bonus_reward_item_easy_condition_type[24];
__int32 bonus_reward_item_easy_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef bonus_reward_item_normal[24];
__int32 bonus_reward_item_normal_Size() const {return 24;};
signed char bonus_reward_item_normal_category[24];
__int32 bonus_reward_item_normal_category_Size() const {return 24;};
signed char bonus_reward_item_normal_condition_type[24];
__int32 bonus_reward_item_normal_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef bonus_reward_item_hard[24];
__int32 bonus_reward_item_hard_Size() const {return 24;};
signed char bonus_reward_item_hard_category[24];
__int32 bonus_reward_item_hard_category_Size() const {return 24;};
signed char bonus_reward_item_hard_condition_type[24];
__int32 bonus_reward_item_hard_condition_type_Size() const {return 24;};
signed char bonus_reward_difficulty_type[3];
__int32 bonus_reward_difficulty_type_Size() const {return 3;};
char Pad1[1];
BnsTables::Shared::TableRef bonus_reward_quota[3];
__int32 bonus_reward_quota_Size() const {return 3;};
int bonus_reward_quota_tableId() const {return 69;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 18; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) attractionrewardsummary_RecordPtr // : DrRecordPtr
	{
		attractionrewardsummary_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}