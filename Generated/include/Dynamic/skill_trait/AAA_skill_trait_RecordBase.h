#pragma once
#include "../../EU/skill_trait/AAA_skill_trait_RecordBase.h"
#include "../../KR/skill_trait/AAA_skill_trait_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_trait_Record = BnsTables::KR::skill_trait_Record;
	#else
		using skill_trait_Record = BnsTables::EU::skill_trait_Record;
	#endif
}