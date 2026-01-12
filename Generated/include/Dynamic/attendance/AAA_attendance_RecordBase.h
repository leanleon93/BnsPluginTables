#pragma once
#include "../../EU/attendance/AAA_attendance_RecordBase.h"
#include "../../KR/attendance/AAA_attendance_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using attendance_Record = BnsTables::KR::attendance_Record;
	#else
		using attendance_Record = BnsTables::EU::attendance_Record;
	#endif
}