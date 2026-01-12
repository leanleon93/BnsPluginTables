/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/filter/filter_cinematic_Record.h"
#include "../../KR/filter/filter_cinematic_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_cinematic_Record = BnsTables::KR::filter_cinematic_Record;
	#else
		using filter_cinematic_Record = BnsTables::EU::filter_cinematic_Record;
	#endif
}