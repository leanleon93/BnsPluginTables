/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct mapunit_airdash_Record : mapunit_Record
	{
	public:
		BnsTables::Shared::TableRef env2spawn;
int env2spawn_tableId() const {return 489;};

		static __int32 SubType() { return 5; }
	};
#pragma pack(pop)
}