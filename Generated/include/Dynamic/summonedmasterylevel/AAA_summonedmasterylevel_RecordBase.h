#pragma once
#include "../../EU/summonedmasterylevel/AAA_summonedmasterylevel_RecordBase.h"
#include "../../KR/summonedmasterylevel/AAA_summonedmasterylevel_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using summonedmasterylevel_Record = BnsTables::KR::summonedmasterylevel_Record;
	#else
		using summonedmasterylevel_Record = BnsTables::EU::summonedmasterylevel_Record;
	#endif
}