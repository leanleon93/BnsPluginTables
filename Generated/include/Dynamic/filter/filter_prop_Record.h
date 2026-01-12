/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/filter/filter_prop_Record.h"
#include "../../KR/filter/filter_prop_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_prop_Record = BnsTables::KR::filter_prop_Record;
	#else
		using filter_prop_Record = BnsTables::EU::filter_prop_Record;
	#endif
}