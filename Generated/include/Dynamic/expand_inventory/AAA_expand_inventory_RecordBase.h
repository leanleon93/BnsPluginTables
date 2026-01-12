/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/expand_inventory/AAA_expand_inventory_RecordBase.h"
#include "../../KR/expand_inventory/AAA_expand_inventory_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using expand_inventory_Record = BnsTables::KR::expand_inventory_Record;
	#else
		using expand_inventory_Record = BnsTables::EU::expand_inventory_Record;
	#endif
}