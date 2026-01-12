#pragma once
#include "../../EU/simple_field/AAA_simple_field_RecordBase.h"
#include "../../KR/simple_field/AAA_simple_field_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using simple_field_Record = BnsTables::KR::simple_field_Record;
	#else
		using simple_field_Record = BnsTables::EU::simple_field_Record;
	#endif
}