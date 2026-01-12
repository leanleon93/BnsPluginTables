#pragma once
#include "../../EU/fishing_field/AAA_fishing_field_RecordBase.h"
#include "../../KR/fishing_field/AAA_fishing_field_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using fishing_field_Record = BnsTables::KR::fishing_field_Record;
	#else
		using fishing_field_Record = BnsTables::EU::fishing_field_Record;
	#endif
}