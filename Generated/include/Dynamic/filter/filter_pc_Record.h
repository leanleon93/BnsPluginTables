#pragma once
#include "../../EU/filter/filter_pc_Record.h"
#include "../../KR/filter/filter_pc_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_pc_Record = BnsTables::KR::filter_pc_Record;
	#else
		using filter_pc_Record = BnsTables::EU::filter_pc_Record;
	#endif
}