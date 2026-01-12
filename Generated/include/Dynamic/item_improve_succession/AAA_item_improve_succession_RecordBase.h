#pragma once
#include "../../EU/item_improve_succession/AAA_item_improve_succession_RecordBase.h"
#include "../../KR/item_improve_succession/AAA_item_improve_succession_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_improve_succession_Record = BnsTables::KR::item_improve_succession_Record;
	#else
		using item_improve_succession_Record = BnsTables::EU::item_improve_succession_Record;
	#endif
}