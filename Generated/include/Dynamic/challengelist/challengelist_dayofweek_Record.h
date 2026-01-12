#pragma once
#include "../../EU/challengelist/challengelist_dayofweek_Record.h"
#include "../../KR/challengelist/challengelist_dayofweek_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using challengelist_dayofweek_Record = BnsTables::KR::challengelist_dayofweek_Record;
	#else
		using challengelist_dayofweek_Record = BnsTables::EU::challengelist_dayofweek_Record;
	#endif
}