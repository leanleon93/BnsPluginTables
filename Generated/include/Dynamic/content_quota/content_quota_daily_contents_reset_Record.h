#pragma once
#include "../../EU/content_quota/content_quota_daily_contents_reset_Record.h"
#include "../../KR/content_quota/content_quota_daily_contents_reset_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_daily_contents_reset_Record = BnsTables::KR::content_quota_daily_contents_reset_Record;
	#else
		using content_quota_daily_contents_reset_Record = BnsTables::EU::content_quota_daily_contents_reset_Record;
	#endif
}