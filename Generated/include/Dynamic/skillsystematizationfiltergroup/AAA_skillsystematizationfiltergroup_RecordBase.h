#pragma once
#include "../../EU/skillsystematizationfiltergroup/AAA_skillsystematizationfiltergroup_RecordBase.h"
#include "../../KR/skillsystematizationfiltergroup/AAA_skillsystematizationfiltergroup_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skillsystematizationfiltergroup_Record = BnsTables::KR::skillsystematizationfiltergroup_Record;
	#else
		using skillsystematizationfiltergroup_Record = BnsTables::EU::skillsystematizationfiltergroup_Record;
	#endif
}