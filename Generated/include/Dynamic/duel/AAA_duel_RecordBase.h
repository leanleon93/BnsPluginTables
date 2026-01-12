#pragma once
#include "../../EU/duel/AAA_duel_RecordBase.h"
#include "../../KR/duel/AAA_duel_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using duel_Record = BnsTables::KR::duel_Record;
	#else
		using duel_Record = BnsTables::EU::duel_Record;
	#endif
}