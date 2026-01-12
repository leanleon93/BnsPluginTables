#pragma once
#include "../../EU/zonetriggereventstage/zonetriggereventstage_stage_Record.h"
#include "../../KR/zonetriggereventstage/zonetriggereventstage_stage_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonetriggereventstage_stage_Record = BnsTables::KR::zonetriggereventstage_stage_Record;
	#else
		using zonetriggereventstage_stage_Record = BnsTables::EU::zonetriggereventstage_stage_Record;
	#endif
}