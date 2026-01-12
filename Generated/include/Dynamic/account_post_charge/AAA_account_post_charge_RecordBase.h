#pragma once
#include "../../EU/account_post_charge/AAA_account_post_charge_RecordBase.h"
#include "../../KR/account_post_charge/AAA_account_post_charge_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using account_post_charge_Record = BnsTables::KR::account_post_charge_Record;
	#else
		using account_post_charge_Record = BnsTables::EU::account_post_charge_Record;
	#endif
}