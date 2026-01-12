#pragma once
#include "../../EU/cinematic/AAA_cinematic_RecordBase.h"
#include "../../KR/cinematic/AAA_cinematic_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using cinematic_Record = BnsTables::KR::cinematic_Record;
	#else
		using cinematic_Record = BnsTables::EU::cinematic_Record;
	#endif
}