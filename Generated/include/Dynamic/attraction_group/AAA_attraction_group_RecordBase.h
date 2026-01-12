#pragma once
#include "../../EU/attraction_group/AAA_attraction_group_RecordBase.h"
#include "../../KR/attraction_group/AAA_attraction_group_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using attraction_group_Record = BnsTables::KR::attraction_group_Record;
	#else
		using attraction_group_Record = BnsTables::EU::attraction_group_Record;
	#endif
}