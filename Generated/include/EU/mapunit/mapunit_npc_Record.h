/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct mapunit_npc_Record : mapunit_Record
	{
	public:
		BnsTables::Shared::TableRef npc;
int npc_tableId() const {return 276;};
bool ignore_object_pos;
bool in_sight_only;
bool many_counts;

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}