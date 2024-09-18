/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct mapunit_link_Record : mapunit_Record
	{
	public:
		__int16 link_mapid;
char Pad_sub_0[2];
float link_map_location_x;
float link_map_location_y;

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}