#pragma once
#include "../../EU/skillsystematization/AAA_skillsystematization_RecordBase.h"
#include "../../KR/skillsystematization/AAA_skillsystematization_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skillsystematization_Record = BnsTables::KR::skillsystematization_Record;
	#else
		using skillsystematization_Record = BnsTables::EU::skillsystematization_Record;
	#endif
}