#pragma once
#include "../../EU/summonedpreset/AAA_summonedpreset_RecordBase.h"
#include "../../KR/summonedpreset/AAA_summonedpreset_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using summonedpreset_Record = BnsTables::KR::summonedpreset_Record;
	#else
		using summonedpreset_Record = BnsTables::EU::summonedpreset_Record;
	#endif
}