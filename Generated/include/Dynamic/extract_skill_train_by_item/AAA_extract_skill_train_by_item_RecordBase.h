#pragma once
#include "../../EU/extract_skill_train_by_item/AAA_extract_skill_train_by_item_RecordBase.h"
#include "../../KR/extract_skill_train_by_item/AAA_extract_skill_train_by_item_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using extract_skill_train_by_item_Record = BnsTables::KR::extract_skill_train_by_item_Record;
	#else
		using extract_skill_train_by_item_Record = BnsTables::EU::extract_skill_train_by_item_Record;
	#endif
}