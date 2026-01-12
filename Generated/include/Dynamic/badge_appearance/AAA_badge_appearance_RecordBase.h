#pragma once
#include "../../EU/badge_appearance/AAA_badge_appearance_RecordBase.h"
#include "../../KR/badge_appearance/AAA_badge_appearance_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using badge_appearance_Record = BnsTables::KR::badge_appearance_Record;
	#else
		using badge_appearance_Record = BnsTables::EU::badge_appearance_Record;
	#endif
}