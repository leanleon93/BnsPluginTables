#pragma once
#include "../../EU/badgesynthesisrecipe/AAA_badgesynthesisrecipe_RecordBase.h"
#include "../../KR/badgesynthesisrecipe/AAA_badgesynthesisrecipe_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using badgesynthesisrecipe_Record = BnsTables::KR::badgesynthesisrecipe_Record;
	#else
		using badgesynthesisrecipe_Record = BnsTables::EU::badgesynthesisrecipe_Record;
	#endif
}