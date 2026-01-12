/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/terrain/AAA_terrain_RecordBase.h"
#include "../../KR/terrain/AAA_terrain_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using terrain_Record = BnsTables::KR::terrain_Record;
	#else
		using terrain_Record = BnsTables::EU::terrain_Record;
	#endif
}