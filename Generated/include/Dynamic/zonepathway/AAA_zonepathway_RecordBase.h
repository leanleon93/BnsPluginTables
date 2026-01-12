#pragma once
#include "../../EU/zonepathway/AAA_zonepathway_RecordBase.h"
#include "../../KR/zonepathway/AAA_zonepathway_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonepathway_Record = BnsTables::KR::zonepathway_Record;
	#else
		using zonepathway_Record = BnsTables::EU::zonepathway_Record;
	#endif
}