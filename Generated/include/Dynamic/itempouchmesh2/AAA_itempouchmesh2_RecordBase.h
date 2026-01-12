#pragma once
#include "../../EU/itempouchmesh2/AAA_itempouchmesh2_RecordBase.h"
#include "../../KR/itempouchmesh2/AAA_itempouchmesh2_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using itempouchmesh2_Record = BnsTables::KR::itempouchmesh2_Record;
	#else
		using itempouchmesh2_Record = BnsTables::EU::itempouchmesh2_Record;
	#endif
}