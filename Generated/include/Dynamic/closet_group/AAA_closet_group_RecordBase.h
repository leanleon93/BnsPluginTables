#pragma once
#include "../../EU/closet_group/AAA_closet_group_RecordBase.h"
#include "../../KR/closet_group/AAA_closet_group_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using closet_group_Record = BnsTables::KR::closet_group_Record;
	#else
		using closet_group_Record = BnsTables::EU::closet_group_Record;
	#endif
}