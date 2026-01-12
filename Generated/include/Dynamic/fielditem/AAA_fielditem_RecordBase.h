#pragma once
#include "../../EU/fielditem/AAA_fielditem_RecordBase.h"
#include "../../KR/fielditem/AAA_fielditem_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using fielditem_Record = BnsTables::KR::fielditem_Record;
	#else
		using fielditem_Record = BnsTables::EU::fielditem_Record;
	#endif
}