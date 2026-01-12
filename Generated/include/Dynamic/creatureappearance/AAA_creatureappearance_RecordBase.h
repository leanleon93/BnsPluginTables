#pragma once
#include "../../EU/creatureappearance/AAA_creatureappearance_RecordBase.h"
#include "../../KR/creatureappearance/AAA_creatureappearance_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using creatureappearance_Record = BnsTables::KR::creatureappearance_Record;
	#else
		using creatureappearance_Record = BnsTables::EU::creatureappearance_Record;
	#endif
}