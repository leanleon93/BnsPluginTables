#pragma once
#include "../../EU/content_quota/content_quota_public_raid_Record.h"
#include "../../KR/content_quota/content_quota_public_raid_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_public_raid_Record = BnsTables::KR::content_quota_public_raid_Record;
	#else
		using content_quota_public_raid_Record = BnsTables::EU::content_quota_public_raid_Record;
	#endif
}