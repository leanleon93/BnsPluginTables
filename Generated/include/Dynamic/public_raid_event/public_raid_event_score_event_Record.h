#pragma once
#include "../../EU/public_raid_event/public_raid_event_score_event_Record.h"
#include "../../KR/public_raid_event/public_raid_event_score_event_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using public_raid_event_score_event_Record = BnsTables::KR::public_raid_event_score_event_Record;
	#else
		using public_raid_event_score_event_Record = BnsTables::EU::public_raid_event_score_event_Record;
	#endif
}