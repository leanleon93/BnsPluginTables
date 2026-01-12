#pragma once
#include "../../EU/skillsystematizationgroup/AAA_skillsystematizationgroup_RecordBase.h"
#include "../../KR/skillsystematizationgroup/AAA_skillsystematizationgroup_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skillsystematizationgroup_Record = BnsTables::KR::skillsystematizationgroup_Record;
	#else
		using skillsystematizationgroup_Record = BnsTables::EU::skillsystematizationgroup_Record;
	#endif
}