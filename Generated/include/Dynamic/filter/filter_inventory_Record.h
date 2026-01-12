#pragma once
#include "../../EU/filter/filter_inventory_Record.h"
#include "../../KR/filter/filter_inventory_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_inventory_Record = BnsTables::KR::filter_inventory_Record;
	#else
		using filter_inventory_Record = BnsTables::EU::filter_inventory_Record;
	#endif
}