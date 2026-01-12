#pragma once
#include "../../EU/zonetriggereventstage/AAA_zonetriggereventstage_RecordBase.h"
#include "../../KR/zonetriggereventstage/AAA_zonetriggereventstage_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonetriggereventstage_Record = BnsTables::KR::zonetriggereventstage_Record;
	#else
		using zonetriggereventstage_Record = BnsTables::EU::zonetriggereventstage_Record;
	#endif
}