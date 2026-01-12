#pragma once
#include "../../EU/questreward/AAA_questreward_RecordBase.h"
#include "../../KR/questreward/AAA_questreward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using questreward_Record = BnsTables::KR::questreward_Record;
	#else
		using questreward_Record = BnsTables::EU::questreward_Record;
	#endif
}