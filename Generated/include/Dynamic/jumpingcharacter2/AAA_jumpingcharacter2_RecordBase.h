#pragma once
#include "../../EU/jumpingcharacter2/AAA_jumpingcharacter2_RecordBase.h"
#include "../../KR/jumpingcharacter2/AAA_jumpingcharacter2_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using jumpingcharacter2_Record = BnsTables::KR::jumpingcharacter2_Record;
	#else
		using jumpingcharacter2_Record = BnsTables::EU::jumpingcharacter2_Record;
	#endif
}