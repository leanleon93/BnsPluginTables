#pragma once
#include "../../EU/summoned_appearance/AAA_summoned_appearance_RecordBase.h"
#include "../../KR/summoned_appearance/AAA_summoned_appearance_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using summoned_appearance_Record = BnsTables::KR::summoned_appearance_Record;
	#else
		using summoned_appearance_Record = BnsTables::EU::summoned_appearance_Record;
	#endif
}