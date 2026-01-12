/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/questbonusreward/AAA_questbonusreward_RecordBase.h"
#include "../../KR/questbonusreward/AAA_questbonusreward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using questbonusreward_Record = BnsTables::KR::questbonusreward_Record;
	#else
		using questbonusreward_Record = BnsTables::EU::questbonusreward_Record;
	#endif
}