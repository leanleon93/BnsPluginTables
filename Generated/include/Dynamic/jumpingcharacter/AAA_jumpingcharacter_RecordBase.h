#pragma once
#include "../../EU/jumpingcharacter/AAA_jumpingcharacter_RecordBase.h"
#include "../../KR/jumpingcharacter/AAA_jumpingcharacter_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using jumpingcharacter_Record = BnsTables::KR::jumpingcharacter_Record;
	#else
		using jumpingcharacter_Record = BnsTables::EU::jumpingcharacter_Record;
	#endif
}