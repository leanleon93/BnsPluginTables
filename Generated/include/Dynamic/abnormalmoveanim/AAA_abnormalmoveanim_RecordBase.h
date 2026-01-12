#pragma once
#include "../../EU/abnormalmoveanim/AAA_abnormalmoveanim_RecordBase.h"
#include "../../KR/abnormalmoveanim/AAA_abnormalmoveanim_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using abnormalmoveanim_Record = BnsTables::KR::abnormalmoveanim_Record;
	#else
		using abnormalmoveanim_Record = BnsTables::EU::abnormalmoveanim_Record;
	#endif
}