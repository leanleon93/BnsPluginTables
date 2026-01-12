#pragma once
#include "../../EU/content_quota/content_quota_mentee_quest_Record.h"
#include "../../KR/content_quota/content_quota_mentee_quest_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_mentee_quest_Record = BnsTables::KR::content_quota_mentee_quest_Record;
	#else
		using content_quota_mentee_quest_Record = BnsTables::EU::content_quota_mentee_quest_Record;
	#endif
}