#pragma once
#include "../../EU/fishing_paste/AAA_fishing_paste_RecordBase.h"
#include "../../KR/fishing_paste/AAA_fishing_paste_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using fishing_paste_Record = BnsTables::KR::fishing_paste_Record;
	#else
		using fishing_paste_Record = BnsTables::EU::fishing_paste_Record;
	#endif
}