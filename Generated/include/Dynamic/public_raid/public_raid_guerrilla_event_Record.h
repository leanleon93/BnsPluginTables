#pragma once
#include "../../EU/public_raid/public_raid_guerrilla_event_Record.h"
#include "../../KR/public_raid/public_raid_guerrilla_event_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using public_raid_guerrilla_event_Record = BnsTables::KR::public_raid_guerrilla_event_Record;
	#else
		using public_raid_guerrilla_event_Record = BnsTables::EU::public_raid_guerrilla_event_Record;
	#endif
}