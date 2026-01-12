#pragma once
#include "../../EU/dieanim/AAA_dieanim_RecordBase.h"
#include "../../KR/dieanim/AAA_dieanim_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using dieanim_Record = BnsTables::KR::dieanim_Record;
	#else
		using dieanim_Record = BnsTables::EU::dieanim_Record;
	#endif
}