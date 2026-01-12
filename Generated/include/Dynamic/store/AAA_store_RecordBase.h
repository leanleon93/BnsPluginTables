#pragma once
#include "../../EU/store/AAA_store_RecordBase.h"
#include "../../KR/store/AAA_store_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using store_Record = BnsTables::KR::store_Record;
	#else
		using store_Record = BnsTables::EU::store_Record;
	#endif
}