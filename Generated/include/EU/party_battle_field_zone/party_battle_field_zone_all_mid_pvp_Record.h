/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_party_battle_field_zone_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct party_battle_field_zone_all_mid_pvp_Record : party_battle_field_zone_Record
	{
	public:
		char Pad_sub_0[2];
BnsTables::Shared::TableRef alpha_tower_1_npc;
int alpha_tower_1_npc_tableId() const {return 291;};
BnsTables::Shared::TableRef alpha_tower_2_npc;
int alpha_tower_2_npc_tableId() const {return 291;};
BnsTables::Shared::TableRef alpha_base_npc;
int alpha_base_npc_tableId() const {return 291;};
BnsTables::Shared::TableRef beta_tower_1_npc;
int beta_tower_1_npc_tableId() const {return 291;};
BnsTables::Shared::TableRef beta_tower_2_npc;
int beta_tower_2_npc_tableId() const {return 291;};
BnsTables::Shared::TableRef beta_base_npc;
int beta_base_npc_tableId() const {return 291;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}