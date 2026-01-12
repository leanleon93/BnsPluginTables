#pragma once
#include "../../EU/zonetriggereventcond/zonetriggereventcond_npc_killed_event2_Record.h"
#include "../../KR/zonetriggereventcond/zonetriggereventcond_npc_killed_event2_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonetriggereventcond_npc_killed_event2_Record = BnsTables::KR::zonetriggereventcond_npc_killed_event2_Record;
	#else
		using zonetriggereventcond_npc_killed_event2_Record = BnsTables::EU::zonetriggereventcond_npc_killed_event2_Record;
	#endif
}