#pragma once
#include "../../EU/rankingreward/AAA_rankingreward_RecordBase.h"
#include "../../KR/rankingreward/AAA_rankingreward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using rankingreward_Record = BnsTables::KR::rankingreward_Record;
	#else
		using rankingreward_Record = BnsTables::EU::rankingreward_Record;
	#endif
}