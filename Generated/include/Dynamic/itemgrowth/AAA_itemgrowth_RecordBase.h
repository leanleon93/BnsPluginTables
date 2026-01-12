#pragma once
#include "../../EU/itemgrowth/AAA_itemgrowth_RecordBase.h"
#include "../../KR/itemgrowth/AAA_itemgrowth_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using itemgrowth_Record = BnsTables::KR::itemgrowth_Record;
	#else
		using itemgrowth_Record = BnsTables::EU::itemgrowth_Record;
	#endif
}