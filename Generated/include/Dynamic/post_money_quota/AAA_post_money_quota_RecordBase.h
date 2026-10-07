/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/post_money_quota/AAA_post_money_quota_RecordBase.h"
#include "../../KR/post_money_quota/AAA_post_money_quota_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using post_money_quota_Record = BnsTables::KR::post_money_quota_Record;
	#else
		using post_money_quota_Record = BnsTables::EU::post_money_quota_Record;
	#endif
}