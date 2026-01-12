#pragma once
#include "../../EU/skillresultcontroll3/AAA_skillresultcontroll3_RecordBase.h"
#include "../../KR/skillresultcontroll3/AAA_skillresultcontroll3_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skillresultcontroll3_Record = BnsTables::KR::skillresultcontroll3_Record;
	#else
		using skillresultcontroll3_Record = BnsTables::EU::skillresultcontroll3_Record;
	#endif
}