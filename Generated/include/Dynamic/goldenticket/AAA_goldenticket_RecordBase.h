#pragma once
#include "../../EU/goldenticket/AAA_goldenticket_RecordBase.h"
#include "../../KR/goldenticket/AAA_goldenticket_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using goldenticket_Record = BnsTables::KR::goldenticket_Record;
	#else
		using goldenticket_Record = BnsTables::EU::goldenticket_Record;
	#endif
}