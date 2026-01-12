/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/filter/AAA_filter_RecordBase.h"
#include "../../KR/filter/AAA_filter_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_Record = BnsTables::KR::filter_Record;
	#else
		using filter_Record = BnsTables::EU::filter_Record;
	#endif
}