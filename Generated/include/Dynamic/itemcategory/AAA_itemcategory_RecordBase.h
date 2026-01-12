#pragma once
#include "../../EU/itemcategory/AAA_itemcategory_RecordBase.h"
#include "../../KR/itemcategory/AAA_itemcategory_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using itemcategory_Record = BnsTables::KR::itemcategory_Record;
	#else
		using itemcategory_Record = BnsTables::EU::itemcategory_Record;
	#endif
}