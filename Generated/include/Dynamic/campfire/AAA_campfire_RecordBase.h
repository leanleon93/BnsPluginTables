#pragma once
#include "../../EU/campfire/AAA_campfire_RecordBase.h"
#include "../../KR/campfire/AAA_campfire_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using campfire_Record = BnsTables::KR::campfire_Record;
	#else
		using campfire_Record = BnsTables::EU::campfire_Record;
	#endif
}