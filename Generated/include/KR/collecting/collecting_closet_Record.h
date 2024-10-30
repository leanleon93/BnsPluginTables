/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_collecting_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct collecting_closet_Record : collecting_Record
	{
	public:
		signed char category;
char Pad_sub_0[3];
BnsTables::Shared::TableRef collect_closet[8];
__int32 collect_closet_Size() const {return 8;};
int collect_closet_tableId() const {return 60;};
BnsTables::Shared::TableRef collect_closet_replace[8];
__int32 collect_closet_replace_Size() const {return 8;};
int collect_closet_replace_tableId() const {return 60;};
BnsTables::Shared::TableRef collect_closet_subreplace[8];
__int32 collect_closet_subreplace_Size() const {return 8;};
int collect_closet_subreplace_tableId() const {return 60;};
BnsTables::Shared::TableRef collect_skill_skin[4];
__int32 collect_skill_skin_Size() const {return 4;};
int collect_skill_skin_tableId() const {return 357;};
BnsTables::Shared::TableRef reward_item[6];
__int32 reward_item_Size() const {return 6;};
int reward_item_tableId() const {return 195;};
__int16 reward_item_count[6];
__int32 reward_item_count_Size() const {return 6;};
__int32 reward_money;
__int32 reward_collecting_score;
signed char ability[3];
__int32 ability_Size() const {return 3;};
char Pad_sub_1[1];
__int32 ability_value[3];
__int32 ability_value_Size() const {return 3;};
__int32 ability_base_value[3];
__int32 ability_base_value_Size() const {return 3;};
wchar_t* expiration_time;
bool can_not_used;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}