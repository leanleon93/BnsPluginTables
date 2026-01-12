#pragma once
#include "../../EU/public_raid/AAA_public_raid_RecordBase.h"
#include "../../KR/public_raid/AAA_public_raid_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using public_raid_Record = BnsTables::KR::public_raid_Record;
	#else
		using public_raid_Record = BnsTables::EU::public_raid_Record;
	#endif
}