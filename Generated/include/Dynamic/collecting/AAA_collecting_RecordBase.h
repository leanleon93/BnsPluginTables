/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/collecting/AAA_collecting_RecordBase.h"
#include "../../KR/collecting/AAA_collecting_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using collecting_Record = BnsTables::KR::collecting_Record;
	#else
		using collecting_Record = BnsTables::EU::collecting_Record;
	#endif
}