#pragma once
#include "../../EU/statesocial/AAA_statesocial_RecordBase.h"
#include "../../KR/statesocial/AAA_statesocial_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using statesocial_Record = BnsTables::KR::statesocial_Record;
	#else
		using statesocial_Record = BnsTables::EU::statesocial_Record;
	#endif
}