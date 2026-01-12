#pragma once
#include "../../EU/duel_grade/AAA_duel_grade_RecordBase.h"
#include "../../KR/duel_grade/AAA_duel_grade_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using duel_grade_Record = BnsTables::KR::duel_grade_Record;
	#else
		using duel_grade_Record = BnsTables::EU::duel_grade_Record;
	#endif
}