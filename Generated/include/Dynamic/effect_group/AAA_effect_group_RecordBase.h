#pragma once
#include "../../EU/effect_group/AAA_effect_group_RecordBase.h"
#include "../../KR/effect_group/AAA_effect_group_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_group_Record = BnsTables::KR::effect_group_Record;
	#else
		using effect_group_Record = BnsTables::EU::effect_group_Record;
	#endif
}