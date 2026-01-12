/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/skipteleport/AAA_skipteleport_RecordBase.h"
#include "../../KR/skipteleport/AAA_skipteleport_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skipteleport_Record = BnsTables::KR::skipteleport_Record;
	#else
		using skipteleport_Record = BnsTables::EU::skipteleport_Record;
	#endif
}