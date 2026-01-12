#pragma once
#include "../../EU/party_battle_field_zone/party_battle_field_zone_capture_the_flag_Record.h"
#include "../../KR/party_battle_field_zone/party_battle_field_zone_capture_the_flag_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using party_battle_field_zone_capture_the_flag_Record = BnsTables::KR::party_battle_field_zone_capture_the_flag_Record;
	#else
		using party_battle_field_zone_capture_the_flag_Record = BnsTables::EU::party_battle_field_zone_capture_the_flag_Record;
	#endif
}