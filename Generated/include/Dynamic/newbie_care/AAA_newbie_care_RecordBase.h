/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/newbie_care/AAA_newbie_care_RecordBase.h"
#include "../../KR/newbie_care/AAA_newbie_care_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using newbie_care_Record = BnsTables::KR::newbie_care_Record;
	#else
		using newbie_care_Record = BnsTables::EU::newbie_care_Record;
	#endif
}