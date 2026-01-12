#pragma once
#include "../../EU/fishing_field_group/AAA_fishing_field_group_RecordBase.h"
#include "../../KR/fishing_field_group/AAA_fishing_field_group_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using fishing_field_group_Record = BnsTables::KR::fishing_field_group_Record;
	#else
		using fishing_field_group_Record = BnsTables::EU::fishing_field_group_Record;
	#endif
}