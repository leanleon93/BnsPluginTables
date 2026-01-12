#pragma once
#include "../../EU/questwarp/AAA_questwarp_RecordBase.h"
#include "../../KR/questwarp/AAA_questwarp_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using questwarp_Record = BnsTables::KR::questwarp_Record;
	#else
		using questwarp_Record = BnsTables::EU::questwarp_Record;
	#endif
}