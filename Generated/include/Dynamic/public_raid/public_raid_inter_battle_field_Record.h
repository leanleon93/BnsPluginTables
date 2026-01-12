/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/public_raid/public_raid_inter_battle_field_Record.h"
#include "../../KR/public_raid/public_raid_inter_battle_field_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using public_raid_inter_battle_field_Record = BnsTables::KR::public_raid_inter_battle_field_Record;
	#else
		using public_raid_inter_battle_field_Record = BnsTables::EU::public_raid_inter_battle_field_Record;
	#endif
}