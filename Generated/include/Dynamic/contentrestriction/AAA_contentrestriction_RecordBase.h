#pragma once
#include "../../EU/contentrestriction/AAA_contentrestriction_RecordBase.h"
#include "../../KR/contentrestriction/AAA_contentrestriction_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using contentrestriction_Record = BnsTables::KR::contentrestriction_Record;
	#else
		using contentrestriction_Record = BnsTables::EU::contentrestriction_Record;
	#endif
}