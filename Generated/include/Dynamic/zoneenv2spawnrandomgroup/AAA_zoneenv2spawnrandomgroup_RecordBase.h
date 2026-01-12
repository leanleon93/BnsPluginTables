#pragma once
#include "../../EU/zoneenv2spawnrandomgroup/AAA_zoneenv2spawnrandomgroup_RecordBase.h"
#include "../../KR/zoneenv2spawnrandomgroup/AAA_zoneenv2spawnrandomgroup_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2spawnrandomgroup_Record = BnsTables::KR::zoneenv2spawnrandomgroup_Record;
	#else
		using zoneenv2spawnrandomgroup_Record = BnsTables::EU::zoneenv2spawnrandomgroup_Record;
	#endif
}