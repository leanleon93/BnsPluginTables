#pragma once
#include "../../EU/random_distribution/AAA_random_distribution_RecordBase.h"
#include "../../KR/random_distribution/AAA_random_distribution_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using random_distribution_Record = BnsTables::KR::random_distribution_Record;
	#else
		using random_distribution_Record = BnsTables::EU::random_distribution_Record;
	#endif
}