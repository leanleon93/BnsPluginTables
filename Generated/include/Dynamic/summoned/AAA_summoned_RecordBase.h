/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/summoned/AAA_summoned_RecordBase.h"
#include "../../KR/summoned/AAA_summoned_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using summoned_Record = BnsTables::KR::summoned_Record;
	#else
		using summoned_Record = BnsTables::EU::summoned_Record;
	#endif
}