#pragma once
#include "../../EU/duel_bot/AAA_duel_bot_RecordBase.h"
#include "../../KR/duel_bot/AAA_duel_bot_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using duel_bot_Record = BnsTables::KR::duel_bot_Record;
	#else
		using duel_bot_Record = BnsTables::EU::duel_bot_Record;
	#endif
}