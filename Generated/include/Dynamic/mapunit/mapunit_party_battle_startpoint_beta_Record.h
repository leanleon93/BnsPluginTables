#pragma once
#include "../../EU/mapunit/mapunit_party_battle_startpoint_beta_Record.h"
#include "../../KR/mapunit/mapunit_party_battle_startpoint_beta_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mapunit_party_battle_startpoint_beta_Record = BnsTables::KR::mapunit_party_battle_startpoint_beta_Record;
	#else
		using mapunit_party_battle_startpoint_beta_Record = BnsTables::EU::mapunit_party_battle_startpoint_beta_Record;
	#endif
}