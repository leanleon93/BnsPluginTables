#pragma once
#include "../../EU/skilltargetfilter3/AAA_skilltargetfilter3_RecordBase.h"
#include "../../KR/skilltargetfilter3/AAA_skilltargetfilter3_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skilltargetfilter3_Record = BnsTables::KR::skilltargetfilter3_Record;
	#else
		using skilltargetfilter3_Record = BnsTables::EU::skilltargetfilter3_Record;
	#endif
}