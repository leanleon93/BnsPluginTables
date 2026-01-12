#pragma once
#include "../../EU/itemskill/AAA_itemskill_RecordBase.h"
#include "../../KR/itemskill/AAA_itemskill_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using itemskill_Record = BnsTables::KR::itemskill_Record;
	#else
		using itemskill_Record = BnsTables::EU::itemskill_Record;
	#endif
}