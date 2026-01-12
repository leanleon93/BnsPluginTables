#pragma once
#include "../../EU/cave2/AAA_cave2_RecordBase.h"
#include "../../KR/cave2/AAA_cave2_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using cave2_Record = BnsTables::KR::cave2_Record;
	#else
		using cave2_Record = BnsTables::EU::cave2_Record;
	#endif
}