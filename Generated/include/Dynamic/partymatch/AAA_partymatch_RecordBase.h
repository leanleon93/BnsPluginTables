#pragma once
#include "../../EU/partymatch/AAA_partymatch_RecordBase.h"
#include "../../KR/partymatch/AAA_partymatch_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using partymatch_Record = BnsTables::KR::partymatch_Record;
	#else
		using partymatch_Record = BnsTables::EU::partymatch_Record;
	#endif
}