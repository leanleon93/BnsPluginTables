/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/board_gacha/AAA_board_gacha_RecordBase.h"
#include "../../KR/board_gacha/AAA_board_gacha_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using board_gacha_Record = BnsTables::KR::board_gacha_Record;
	#else
		using board_gacha_Record = BnsTables::EU::board_gacha_Record;
	#endif
}