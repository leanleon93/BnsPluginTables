#pragma once
#include "../../EU/zonetriggereventcond/zonetriggereventcond_timeout_event_Record.h"
#include "../../KR/zonetriggereventcond/zonetriggereventcond_timeout_event_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonetriggereventcond_timeout_event_Record = BnsTables::KR::zonetriggereventcond_timeout_event_Record;
	#else
		using zonetriggereventcond_timeout_event_Record = BnsTables::EU::zonetriggereventcond_timeout_event_Record;
	#endif
}