#pragma once
#include "../../EU/challengelist/AAA_challengelist_RecordBase.h"
#include "../../KR/challengelist/AAA_challengelist_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using challengelist_Record = BnsTables::KR::challengelist_Record;
	#else
		using challengelist_Record = BnsTables::EU::challengelist_Record;
	#endif
}