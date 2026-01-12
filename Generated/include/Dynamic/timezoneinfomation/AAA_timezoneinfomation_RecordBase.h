/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/timezoneinfomation/AAA_timezoneinfomation_RecordBase.h"
#include "../../KR/timezoneinfomation/AAA_timezoneinfomation_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using timezoneinfomation_Record = BnsTables::KR::timezoneinfomation_Record;
	#else
		using timezoneinfomation_Record = BnsTables::EU::timezoneinfomation_Record;
	#endif
}