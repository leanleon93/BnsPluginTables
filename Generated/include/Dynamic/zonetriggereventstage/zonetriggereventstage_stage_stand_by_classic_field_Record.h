#pragma once
#include "../../EU/zonetriggereventstage/zonetriggereventstage_stage_stand_by_classic_field_Record.h"
#include "../../KR/zonetriggereventstage/zonetriggereventstage_stage_stand_by_classic_field_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonetriggereventstage_stage_stand_by_classic_field_Record = BnsTables::KR::zonetriggereventstage_stage_stand_by_classic_field_Record;
	#else
		using zonetriggereventstage_stage_stand_by_classic_field_Record = BnsTables::EU::zonetriggereventstage_stage_stand_by_classic_field_Record;
	#endif
}