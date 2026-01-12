#pragma once
#include "../../EU/difficulty_type_modify/AAA_difficulty_type_modify_RecordBase.h"
#include "../../KR/difficulty_type_modify/AAA_difficulty_type_modify_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using difficulty_type_modify_Record = BnsTables::KR::difficulty_type_modify_Record;
	#else
		using difficulty_type_modify_Record = BnsTables::EU::difficulty_type_modify_Record;
	#endif
}