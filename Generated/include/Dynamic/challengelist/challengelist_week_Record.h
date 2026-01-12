#pragma once
#include "../../EU/challengelist/challengelist_week_Record.h"
#include "../../KR/challengelist/challengelist_week_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using challengelist_week_Record = BnsTables::KR::challengelist_week_Record;
	#else
		using challengelist_week_Record = BnsTables::EU::challengelist_week_Record;
	#endif
}