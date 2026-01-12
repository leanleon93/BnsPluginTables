#pragma once
#include "../../EU/skillcontext/AAA_skillcontext_RecordBase.h"
#include "../../KR/skillcontext/AAA_skillcontext_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skillcontext_Record = BnsTables::KR::skillcontext_Record;
	#else
		using skillcontext_Record = BnsTables::EU::skillcontext_Record;
	#endif
}