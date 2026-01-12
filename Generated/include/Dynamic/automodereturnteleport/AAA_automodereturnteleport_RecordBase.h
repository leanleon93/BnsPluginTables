#pragma once
#include "../../EU/automodereturnteleport/AAA_automodereturnteleport_RecordBase.h"
#include "../../KR/automodereturnteleport/AAA_automodereturnteleport_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using automodereturnteleport_Record = BnsTables::KR::automodereturnteleport_Record;
	#else
		using automodereturnteleport_Record = BnsTables::EU::automodereturnteleport_Record;
	#endif
}