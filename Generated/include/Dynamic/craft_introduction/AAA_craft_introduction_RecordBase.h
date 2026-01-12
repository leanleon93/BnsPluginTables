#pragma once
#include "../../EU/craft_introduction/AAA_craft_introduction_RecordBase.h"
#include "../../KR/craft_introduction/AAA_craft_introduction_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using craft_introduction_Record = BnsTables::KR::craft_introduction_Record;
	#else
		using craft_introduction_Record = BnsTables::EU::craft_introduction_Record;
	#endif
}