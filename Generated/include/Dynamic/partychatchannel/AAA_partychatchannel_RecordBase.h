#pragma once
#include "../../EU/partychatchannel/AAA_partychatchannel_RecordBase.h"
#include "../../KR/partychatchannel/AAA_partychatchannel_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using partychatchannel_Record = BnsTables::KR::partychatchannel_Record;
	#else
		using partychatchannel_Record = BnsTables::EU::partychatchannel_Record;
	#endif
}