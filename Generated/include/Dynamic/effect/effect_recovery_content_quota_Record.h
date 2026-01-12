#pragma once
#include "../../EU/effect/effect_recovery_content_quota_Record.h"
#include "../../KR/effect/effect_recovery_content_quota_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_recovery_content_quota_Record = BnsTables::KR::effect_recovery_content_quota_Record;
	#else
		using effect_recovery_content_quota_Record = BnsTables::EU::effect_recovery_content_quota_Record;
	#endif
}