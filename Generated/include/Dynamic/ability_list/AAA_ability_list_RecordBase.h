#pragma once
#include "../../EU/ability_list/AAA_ability_list_RecordBase.h"
#include "../../KR/ability_list/AAA_ability_list_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using ability_list_Record = BnsTables::KR::ability_list_Record;
	#else
		using ability_list_Record = BnsTables::EU::ability_list_Record;
	#endif
}