#pragma once
#include "../../EU/filter/filter_weapon_type_Record.h"
#include "../../KR/filter/filter_weapon_type_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_weapon_type_Record = BnsTables::KR::filter_weapon_type_Record;
	#else
		using filter_weapon_type_Record = BnsTables::EU::filter_weapon_type_Record;
	#endif
}