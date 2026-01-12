#pragma once
#include "../../EU/event_contents/AAA_event_contents_RecordBase.h"
#include "../../KR/event_contents/AAA_event_contents_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using event_contents_Record = BnsTables::KR::event_contents_Record;
	#else
		using event_contents_Record = BnsTables::EU::event_contents_Record;
	#endif
}