#pragma once
#include "../../EU/worldbossspawngroup/AAA_worldbossspawngroup_RecordBase.h"
#include "../../KR/worldbossspawngroup/AAA_worldbossspawngroup_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using worldbossspawngroup_Record = BnsTables::KR::worldbossspawngroup_Record;
	#else
		using worldbossspawngroup_Record = BnsTables::EU::worldbossspawngroup_Record;
	#endif
}