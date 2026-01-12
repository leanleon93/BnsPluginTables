#pragma once
#include "../../EU/duel_bot_training_room_version/AAA_duel_bot_training_room_version_RecordBase.h"
#include "../../KR/duel_bot_training_room_version/AAA_duel_bot_training_room_version_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using duel_bot_training_room_version_Record = BnsTables::KR::duel_bot_training_room_version_Record;
	#else
		using duel_bot_training_room_version_Record = BnsTables::EU::duel_bot_training_room_version_Record;
	#endif
}