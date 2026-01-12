#pragma once
#include "../../EU/moveanimtransit/AAA_moveanimtransit_RecordBase.h"
#include "../../KR/moveanimtransit/AAA_moveanimtransit_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using moveanimtransit_Record = BnsTables::KR::moveanimtransit_Record;
	#else
		using moveanimtransit_Record = BnsTables::EU::moveanimtransit_Record;
	#endif
}