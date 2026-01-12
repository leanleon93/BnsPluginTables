#pragma once
#include "../../EU/war_field/AAA_war_field_RecordBase.h"
#include "../../KR/war_field/AAA_war_field_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using war_field_Record = BnsTables::KR::war_field_Record;
	#else
		using war_field_Record = BnsTables::EU::war_field_Record;
	#endif
}