#pragma once
#include "../../EU/customizingdetailicon/AAA_customizingdetailicon_RecordBase.h"
#include "../../KR/customizingdetailicon/AAA_customizingdetailicon_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using customizingdetailicon_Record = BnsTables::KR::customizingdetailicon_Record;
	#else
		using customizingdetailicon_Record = BnsTables::EU::customizingdetailicon_Record;
	#endif
}