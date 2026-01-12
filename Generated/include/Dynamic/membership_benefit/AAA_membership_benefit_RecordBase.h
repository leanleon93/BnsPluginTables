#pragma once
#include "../../EU/membership_benefit/AAA_membership_benefit_RecordBase.h"
#include "../../KR/membership_benefit/AAA_membership_benefit_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using membership_benefit_Record = BnsTables::KR::membership_benefit_Record;
	#else
		using membership_benefit_Record = BnsTables::EU::membership_benefit_Record;
	#endif
}