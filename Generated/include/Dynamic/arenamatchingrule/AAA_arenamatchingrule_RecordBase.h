#pragma once
#include "../../EU/arenamatchingrule/AAA_arenamatchingrule_RecordBase.h"
#include "../../KR/arenamatchingrule/AAA_arenamatchingrule_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using arenamatchingrule_Record = BnsTables::KR::arenamatchingrule_Record;
	#else
		using arenamatchingrule_Record = BnsTables::EU::arenamatchingrule_Record;
	#endif
}