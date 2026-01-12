/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/key_cap/AAA_key_cap_RecordBase.h"
#include "../../KR/key_cap/AAA_key_cap_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using key_cap_Record = BnsTables::KR::key_cap_Record;
	#else
		using key_cap_Record = BnsTables::EU::key_cap_Record;
	#endif
}