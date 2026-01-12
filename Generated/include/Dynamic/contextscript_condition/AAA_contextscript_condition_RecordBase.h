#pragma once
#include "../../EU/contextscript_condition/AAA_contextscript_condition_RecordBase.h"
#include "../../KR/contextscript_condition/AAA_contextscript_condition_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using contextscript_condition_Record = BnsTables::KR::contextscript_condition_Record;
	#else
		using contextscript_condition_Record = BnsTables::EU::contextscript_condition_Record;
	#endif
}