#pragma once
#include "../../EU/weapon_appearance_change_cost/AAA_weapon_appearance_change_cost_RecordBase.h"
#include "../../KR/weapon_appearance_change_cost/AAA_weapon_appearance_change_cost_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using weapon_appearance_change_cost_Record = BnsTables::KR::weapon_appearance_change_cost_Record;
	#else
		using weapon_appearance_change_cost_Record = BnsTables::EU::weapon_appearance_change_cost_Record;
	#endif
}