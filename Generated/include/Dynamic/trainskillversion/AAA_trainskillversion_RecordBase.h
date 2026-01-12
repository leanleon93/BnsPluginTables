#pragma once
#include "../../EU/trainskillversion/AAA_trainskillversion_RecordBase.h"
#include "../../KR/trainskillversion/AAA_trainskillversion_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using trainskillversion_Record = BnsTables::KR::trainskillversion_Record;
	#else
		using trainskillversion_Record = BnsTables::EU::trainskillversion_Record;
	#endif
}