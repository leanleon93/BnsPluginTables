/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct mapunit_npc_group_Record : mapunit_Record
	{
	public:
		BnsTables::Shared::TableRef npc;
int npc_tableId(){return 255;};

		static __int32 SubType() { return 8; }
	};
#pragma pack(pop)
}