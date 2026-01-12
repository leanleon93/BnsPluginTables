#pragma once
#include "../../EU/mileageplan/AAA_mileageplan_RecordBase.h"
#include "../../KR/mileageplan/AAA_mileageplan_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mileageplan_Record = BnsTables::KR::mileageplan_Record;
	#else
		using mileageplan_Record = BnsTables::EU::mileageplan_Record;
	#endif
}