#pragma once
#include "../../EU/tendency_field/AAA_tendency_field_RecordBase.h"
#include "../../KR/tendency_field/AAA_tendency_field_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using tendency_field_Record = BnsTables::KR::tendency_field_Record;
	#else
		using tendency_field_Record = BnsTables::EU::tendency_field_Record;
	#endif
}