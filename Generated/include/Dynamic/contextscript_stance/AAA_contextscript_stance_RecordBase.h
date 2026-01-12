#pragma once
#include "../../EU/contextscript_stance/AAA_contextscript_stance_RecordBase.h"
#include "../../KR/contextscript_stance/AAA_contextscript_stance_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using contextscript_stance_Record = BnsTables::KR::contextscript_stance_Record;
	#else
		using contextscript_stance_Record = BnsTables::EU::contextscript_stance_Record;
	#endif
}