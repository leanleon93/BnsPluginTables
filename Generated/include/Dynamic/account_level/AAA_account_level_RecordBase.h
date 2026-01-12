/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/account_level/AAA_account_level_RecordBase.h"
#include "../../KR/account_level/AAA_account_level_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using account_level_Record = BnsTables::KR::account_level_Record;
	#else
		using account_level_Record = BnsTables::EU::account_level_Record;
	#endif
}