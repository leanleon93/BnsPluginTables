/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/datacontrol/AAA_datacontrol_RecordBase.h"
#include "../../KR/datacontrol/AAA_datacontrol_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using datacontrol_Record = BnsTables::KR::datacontrol_Record;
	#else
		using datacontrol_Record = BnsTables::EU::datacontrol_Record;
	#endif
}