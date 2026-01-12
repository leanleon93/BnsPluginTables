#pragma once
#include "../../EU/duel_observer_skill_slot/AAA_duel_observer_skill_slot_RecordBase.h"
#include "../../KR/duel_observer_skill_slot/AAA_duel_observer_skill_slot_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using duel_observer_skill_slot_Record = BnsTables::KR::duel_observer_skill_slot_Record;
	#else
		using duel_observer_skill_slot_Record = BnsTables::EU::duel_observer_skill_slot_Record;
	#endif
}