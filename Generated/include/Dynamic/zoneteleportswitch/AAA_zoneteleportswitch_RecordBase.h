#pragma once
#include "../../EU/zoneteleportswitch/AAA_zoneteleportswitch_RecordBase.h"
#include "../../KR/zoneteleportswitch/AAA_zoneteleportswitch_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneteleportswitch_Record = BnsTables::KR::zoneteleportswitch_Record;
	#else
		using zoneteleportswitch_Record = BnsTables::EU::zoneteleportswitch_Record;
	#endif
}