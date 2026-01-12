#pragma once
#include "../../EU/skipquest/AAA_skipquest_RecordBase.h"
#include "../../KR/skipquest/AAA_skipquest_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skipquest_Record = BnsTables::KR::skipquest_Record;
	#else
		using skipquest_Record = BnsTables::EU::skipquest_Record;
	#endif
}