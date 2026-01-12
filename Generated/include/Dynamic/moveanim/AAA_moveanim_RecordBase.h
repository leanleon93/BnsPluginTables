#pragma once
#include "../../EU/moveanim/AAA_moveanim_RecordBase.h"
#include "../../KR/moveanim/AAA_moveanim_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using moveanim_Record = BnsTables::KR::moveanim_Record;
	#else
		using moveanim_Record = BnsTables::EU::moveanim_Record;
	#endif
}