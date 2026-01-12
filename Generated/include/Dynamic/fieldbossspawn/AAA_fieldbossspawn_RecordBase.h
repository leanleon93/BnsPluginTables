#pragma once
#include "../../EU/fieldbossspawn/AAA_fieldbossspawn_RecordBase.h"
#include "../../KR/fieldbossspawn/AAA_fieldbossspawn_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using fieldbossspawn_Record = BnsTables::KR::fieldbossspawn_Record;
	#else
		using fieldbossspawn_Record = BnsTables::EU::fieldbossspawn_Record;
	#endif
}