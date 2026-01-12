#pragma once
#include "../../EU/envresponse/AAA_envresponse_RecordBase.h"
#include "../../KR/envresponse/AAA_envresponse_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using envresponse_Record = BnsTables::KR::envresponse_Record;
	#else
		using envresponse_Record = BnsTables::EU::envresponse_Record;
	#endif
}