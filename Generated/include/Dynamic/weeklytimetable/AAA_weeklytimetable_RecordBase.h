/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/weeklytimetable/AAA_weeklytimetable_RecordBase.h"
#include "../../KR/weeklytimetable/AAA_weeklytimetable_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using weeklytimetable_Record = BnsTables::KR::weeklytimetable_Record;
	#else
		using weeklytimetable_Record = BnsTables::EU::weeklytimetable_Record;
	#endif
}