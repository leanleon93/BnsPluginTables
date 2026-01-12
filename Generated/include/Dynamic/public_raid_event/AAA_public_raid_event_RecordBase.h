/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/public_raid_event/AAA_public_raid_event_RecordBase.h"
#include "../../KR/public_raid_event/AAA_public_raid_event_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using public_raid_event_Record = BnsTables::KR::public_raid_event_Record;
	#else
		using public_raid_event_Record = BnsTables::EU::public_raid_event_Record;
	#endif
}