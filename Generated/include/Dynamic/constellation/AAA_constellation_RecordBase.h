/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/constellation/AAA_constellation_RecordBase.h"
#include "../../KR/constellation/AAA_constellation_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using constellation_Record = BnsTables::KR::constellation_Record;
	#else
		using constellation_Record = BnsTables::EU::constellation_Record;
	#endif
}