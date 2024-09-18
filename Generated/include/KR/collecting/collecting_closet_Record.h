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
		__int8 category;
char Pad_sub_0[3];
BnsTables::Shared::TableRef collect_closet[8];
int collect_closet_tableId(){return 60;};
BnsTables::Shared::TableRef collect_closet_replace[8];
int collect_closet_replace_tableId(){return 60;};
BnsTables::Shared::TableRef collect_closet_subreplace[8];
int collect_closet_subreplace_tableId(){return 60;};
BnsTables::Shared::TableRef collect_skill_skin[4];
int collect_skill_skin_tableId(){return 357;};
BnsTables::Shared::TableRef reward_item[6];
int reward_item_tableId(){return 195;};
__int16 reward_item_count[6];
__int32 reward_money;
__int32 reward_collecting_score;
__int8 ability[3];
char Pad_sub_1[1];
__int32 ability_value[3];
__int32 ability_base_value[3];
wchar_t* expiration_time;
bool can_not_used;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}