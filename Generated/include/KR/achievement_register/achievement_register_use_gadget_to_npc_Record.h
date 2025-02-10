/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_use_gadget_to_npc_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef gadget;
int gadget_tableId() const {return 143;};
BnsTables::Shared::TableRef npc;
int npc_tableId() const {return 269;};

		static __int32 SubType() { return 14; }
	};
#pragma pack(pop)
}