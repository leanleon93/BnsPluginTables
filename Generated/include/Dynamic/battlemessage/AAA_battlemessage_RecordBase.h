#pragma once
#include "../../EU/battlemessage/AAA_battlemessage_RecordBase.h"
#include "../../KR/battlemessage/AAA_battlemessage_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using battlemessage_Record = BnsTables::KR::battlemessage_Record;
	#else
		using battlemessage_Record = BnsTables::EU::battlemessage_Record;
	#endif
}