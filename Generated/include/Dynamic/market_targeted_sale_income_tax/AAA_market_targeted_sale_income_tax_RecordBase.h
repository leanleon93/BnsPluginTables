#pragma once
#include "../../EU/market_targeted_sale_income_tax/AAA_market_targeted_sale_income_tax_RecordBase.h"
#include "../../KR/market_targeted_sale_income_tax/AAA_market_targeted_sale_income_tax_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using market_targeted_sale_income_tax_Record = BnsTables::KR::market_targeted_sale_income_tax_Record;
	#else
		using market_targeted_sale_income_tax_Record = BnsTables::EU::market_targeted_sale_income_tax_Record;
	#endif
}