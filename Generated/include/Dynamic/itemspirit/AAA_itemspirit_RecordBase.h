#pragma once
#include "../../EU/itemspirit/AAA_itemspirit_RecordBase.h"
#include "../../KR/itemspirit/AAA_itemspirit_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using itemspirit_Record = BnsTables::KR::itemspirit_Record;
	#else
		using itemspirit_Record = BnsTables::EU::itemspirit_Record;
	#endif
}