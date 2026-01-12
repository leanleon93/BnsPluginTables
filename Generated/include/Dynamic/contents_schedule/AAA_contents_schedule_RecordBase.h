/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/contents_schedule/AAA_contents_schedule_RecordBase.h"
#include "../../KR/contents_schedule/AAA_contents_schedule_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using contents_schedule_Record = BnsTables::KR::contents_schedule_Record;
	#else
		using contents_schedule_Record = BnsTables::EU::contents_schedule_Record;
	#endif
}