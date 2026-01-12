#pragma once
#include "../../EU/itemsound/AAA_itemsound_RecordBase.h"
#include "../../KR/itemsound/AAA_itemsound_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using itemsound_Record = BnsTables::KR::itemsound_Record;
	#else
		using itemsound_Record = BnsTables::EU::itemsound_Record;
	#endif
}