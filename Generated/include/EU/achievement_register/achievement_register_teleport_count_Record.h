/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_teleport_count_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef teleport;
int teleport_tableId() const {return 430;};

		static __int32 SubType() { return 22; }
	};
#pragma pack(pop)
}