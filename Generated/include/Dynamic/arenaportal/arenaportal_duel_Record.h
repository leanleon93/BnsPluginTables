#pragma once
#include "../../EU/arenaportal/arenaportal_duel_Record.h"
#include "../../KR/arenaportal/arenaportal_duel_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using arenaportal_duel_Record = BnsTables::KR::arenaportal_duel_Record;
	#else
		using arenaportal_duel_Record = BnsTables::EU::arenaportal_duel_Record;
	#endif
}