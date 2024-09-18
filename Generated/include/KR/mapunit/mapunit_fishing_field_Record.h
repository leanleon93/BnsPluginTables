/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct mapunit_fishing_field_Record : mapunit_Record
	{
	public:
		BnsTables::Shared::TableRef fishing_point_env;
int fishing_point_env_tableId(){return 462;};

		static __int32 SubType() { return 12; }
	};
#pragma pack(pop)
}