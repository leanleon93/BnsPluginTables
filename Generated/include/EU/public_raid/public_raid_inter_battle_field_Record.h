/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_public_raid_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct public_raid_inter_battle_field_Record : public_raid_Record
	{
	public:
		BnsTables::Shared::TableRef portal_ticket_item_info;
int portal_ticket_item_info_tableId(){return 189;};
BnsTables::Shared::TableRef entrance_quota;
int entrance_quota_tableId(){return 66;};
BnsTables::Shared::TableRef arena_portal;
int arena_portal_tableId(){return 13;};
__int8 arena_move_max_party_member_count;

		static __int32 SubType() { return 5; }
	};
#pragma pack(pop)
}