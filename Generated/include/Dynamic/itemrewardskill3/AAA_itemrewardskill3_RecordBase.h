#pragma once
#include "../../EU/itemrewardskill3/AAA_itemrewardskill3_RecordBase.h"
#include "../../KR/itemrewardskill3/AAA_itemrewardskill3_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using itemrewardskill3_Record = BnsTables::KR::itemrewardskill3_Record;
	#else
		using itemrewardskill3_Record = BnsTables::EU::itemrewardskill3_Record;
	#endif
}