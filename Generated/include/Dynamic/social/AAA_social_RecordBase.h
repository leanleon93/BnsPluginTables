#pragma once
#include "../../EU/social/AAA_social_RecordBase.h"
#include "../../KR/social/AAA_social_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using social_Record = BnsTables::KR::social_Record;
	#else
		using social_Record = BnsTables::EU::social_Record;
	#endif
}