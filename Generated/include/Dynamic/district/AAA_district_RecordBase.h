/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/district/AAA_district_RecordBase.h"
#include "../../KR/district/AAA_district_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using district_Record = BnsTables::KR::district_Record;
	#else
		using district_Record = BnsTables::EU::district_Record;
	#endif
}