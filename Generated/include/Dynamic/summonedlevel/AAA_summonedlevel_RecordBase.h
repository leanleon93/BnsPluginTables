#pragma once
#include "../../EU/summonedlevel/AAA_summonedlevel_RecordBase.h"
#include "../../KR/summonedlevel/AAA_summonedlevel_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using summonedlevel_Record = BnsTables::KR::summonedlevel_Record;
	#else
		using summonedlevel_Record = BnsTables::EU::summonedlevel_Record;
	#endif
}