/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/contributionreward/AAA_contributionreward_RecordBase.h"
#include "../../KR/contributionreward/AAA_contributionreward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using contributionreward_Record = BnsTables::KR::contributionreward_Record;
	#else
		using contributionreward_Record = BnsTables::EU::contributionreward_Record;
	#endif
}