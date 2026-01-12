/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/skill_inheritance/AAA_skill_inheritance_RecordBase.h"
#include "../../KR/skill_inheritance/AAA_skill_inheritance_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_inheritance_Record = BnsTables::KR::skill_inheritance_Record;
	#else
		using skill_inheritance_Record = BnsTables::EU::skill_inheritance_Record;
	#endif
}