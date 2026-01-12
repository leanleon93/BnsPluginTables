#pragma once
#include "../../EU/teleport/AAA_teleport_RecordBase.h"
#include "../../KR/teleport/AAA_teleport_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using teleport_Record = BnsTables::KR::teleport_Record;
	#else
		using teleport_Record = BnsTables::EU::teleport_Record;
	#endif
}