/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/market_register_amount_tax_rate/AAA_market_register_amount_tax_rate_RecordBase.h"
#include "../../KR/market_register_amount_tax_rate/AAA_market_register_amount_tax_rate_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using market_register_amount_tax_rate_Record = BnsTables::KR::market_register_amount_tax_rate_Record;
	#else
		using market_register_amount_tax_rate_Record = BnsTables::EU::market_register_amount_tax_rate_Record;
	#endif
}