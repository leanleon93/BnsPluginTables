#pragma once
#include "../../EU/skill_train_category/AAA_skill_train_category_RecordBase.h"
#include "../../KR/skill_train_category/AAA_skill_train_category_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_train_category_Record = BnsTables::KR::skill_train_category_Record;
	#else
		using skill_train_category_Record = BnsTables::EU::skill_train_category_Record;
	#endif
}