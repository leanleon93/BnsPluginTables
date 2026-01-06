/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_npc_change_appearance_Record : effect_Record
	{
	public:
		BnsTables::Shared::TableRef npc;
int npc_tableId() const {return 276;};
BnsTables::Shared::TableRef weapon;
int weapon_tableId() const {return 202;};

		static __int32 SubType() { return 988; }
	};
#pragma pack(pop)
}