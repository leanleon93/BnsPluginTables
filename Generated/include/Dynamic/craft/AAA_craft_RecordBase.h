#pragma once
#include "../../EU/craft/AAA_craft_RecordBase.h"
#include "../../KR/craft/AAA_craft_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using craft_Record = BnsTables::KR::craft_Record;
	#else
		using craft_Record = BnsTables::EU::craft_Record;
	#endif
}