#pragma once
#include "../../EU/filter/filter_field_item_Record.h"
#include "../../KR/filter/filter_field_item_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_field_item_Record = BnsTables::KR::filter_field_item_Record;
	#else
		using filter_field_item_Record = BnsTables::EU::filter_field_item_Record;
	#endif
}