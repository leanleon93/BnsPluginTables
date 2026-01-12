#pragma once
#include "../../EU/bossnpc/AAA_bossnpc_RecordBase.h"
#include "../../KR/bossnpc/AAA_bossnpc_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using bossnpc_Record = BnsTables::KR::bossnpc_Record;
	#else
		using bossnpc_Record = BnsTables::EU::bossnpc_Record;
	#endif
}