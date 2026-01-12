#pragma once
#include "../../EU/filter/filter_content_quota_charge_Record.h"
#include "../../KR/filter/filter_content_quota_charge_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_content_quota_charge_Record = BnsTables::KR::filter_content_quota_charge_Record;
	#else
		using filter_content_quota_charge_Record = BnsTables::EU::filter_content_quota_charge_Record;
	#endif
}