#pragma once
#include "../../EU/skillmodifylimit/AAA_skillmodifylimit_RecordBase.h"
#include "../../KR/skillmodifylimit/AAA_skillmodifylimit_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skillmodifylimit_Record = BnsTables::KR::skillmodifylimit_Record;
	#else
		using skillmodifylimit_Record = BnsTables::EU::skillmodifylimit_Record;
	#endif
}