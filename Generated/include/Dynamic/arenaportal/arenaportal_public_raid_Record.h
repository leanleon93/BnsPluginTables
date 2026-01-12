/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/arenaportal/arenaportal_public_raid_Record.h"
#include "../../KR/arenaportal/arenaportal_public_raid_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using arenaportal_public_raid_Record = BnsTables::KR::arenaportal_public_raid_Record;
	#else
		using arenaportal_public_raid_Record = BnsTables::EU::arenaportal_public_raid_Record;
	#endif
}