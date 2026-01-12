#pragma once
#include "../../EU/item/item_weapon_Record.h"
#include "../../KR/item/item_weapon_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_weapon_Record = BnsTables::KR::item_weapon_Record;
	#else
		using item_weapon_Record = BnsTables::EU::item_weapon_Record;
	#endif
}