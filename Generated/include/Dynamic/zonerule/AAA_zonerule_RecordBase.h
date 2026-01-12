#pragma once
#include "../../EU/zonerule/AAA_zonerule_RecordBase.h"
#include "../../KR/zonerule/AAA_zonerule_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonerule_Record = BnsTables::KR::zonerule_Record;
	#else
		using zonerule_Record = BnsTables::EU::zonerule_Record;
	#endif
}