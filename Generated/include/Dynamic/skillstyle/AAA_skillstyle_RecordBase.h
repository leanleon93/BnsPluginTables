#pragma once
#include "../../EU/skillstyle/AAA_skillstyle_RecordBase.h"
#include "../../KR/skillstyle/AAA_skillstyle_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skillstyle_Record = BnsTables::KR::skillstyle_Record;
	#else
		using skillstyle_Record = BnsTables::EU::skillstyle_Record;
	#endif
}