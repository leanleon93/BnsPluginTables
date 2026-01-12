#pragma once
#include "../../EU/game_menu_control/AAA_game_menu_control_RecordBase.h"
#include "../../KR/game_menu_control/AAA_game_menu_control_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using game_menu_control_Record = BnsTables::KR::game_menu_control_Record;
	#else
		using game_menu_control_Record = BnsTables::EU::game_menu_control_Record;
	#endif
}