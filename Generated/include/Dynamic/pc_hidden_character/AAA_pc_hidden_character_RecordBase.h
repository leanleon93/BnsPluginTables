#pragma once
#include "../../EU/pc_hidden_character/AAA_pc_hidden_character_RecordBase.h"
#include "../../KR/pc_hidden_character/AAA_pc_hidden_character_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using pc_hidden_character_Record = BnsTables::KR::pc_hidden_character_Record;
	#else
		using pc_hidden_character_Record = BnsTables::EU::pc_hidden_character_Record;
	#endif
}