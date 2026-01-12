#pragma once
#include "../../EU/itemrewardskillacquireroute/AAA_itemrewardskillacquireroute_RecordBase.h"
#include "../../KR/itemrewardskillacquireroute/AAA_itemrewardskillacquireroute_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using itemrewardskillacquireroute_Record = BnsTables::KR::itemrewardskillacquireroute_Record;
	#else
		using itemrewardskillacquireroute_Record = BnsTables::EU::itemrewardskillacquireroute_Record;
	#endif
}