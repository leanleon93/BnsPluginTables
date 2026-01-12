#pragma once
#include "../../EU/skillattributerule/AAA_skillattributerule_RecordBase.h"
#include "../../KR/skillattributerule/AAA_skillattributerule_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skillattributerule_Record = BnsTables::KR::skillattributerule_Record;
	#else
		using skillattributerule_Record = BnsTables::EU::skillattributerule_Record;
	#endif
}