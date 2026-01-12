/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/game_message/AAA_game_message_RecordBase.h"
#include "../../KR/game_message/AAA_game_message_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using game_message_Record = BnsTables::KR::game_message_Record;
	#else
		using game_message_Record = BnsTables::EU::game_message_Record;
	#endif
}