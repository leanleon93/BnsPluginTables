#pragma once
#include "../../EU/autotargetparameter/AAA_autotargetparameter_RecordBase.h"
#include "../../KR/autotargetparameter/AAA_autotargetparameter_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using autotargetparameter_Record = BnsTables::KR::autotargetparameter_Record;
	#else
		using autotargetparameter_Record = BnsTables::EU::autotargetparameter_Record;
	#endif
}