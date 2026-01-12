#pragma once
#include "../../EU/boast/boast_duel_Record.h"
#include "../../KR/boast/boast_duel_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using boast_duel_Record = BnsTables::KR::boast_duel_Record;
	#else
		using boast_duel_Record = BnsTables::EU::boast_duel_Record;
	#endif
}