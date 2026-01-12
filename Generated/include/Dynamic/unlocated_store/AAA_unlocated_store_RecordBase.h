#pragma once
#include "../../EU/unlocated_store/AAA_unlocated_store_RecordBase.h"
#include "../../KR/unlocated_store/AAA_unlocated_store_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using unlocated_store_Record = BnsTables::KR::unlocated_store_Record;
	#else
		using unlocated_store_Record = BnsTables::EU::unlocated_store_Record;
	#endif
}