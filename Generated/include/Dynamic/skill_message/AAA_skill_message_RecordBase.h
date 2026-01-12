#pragma once
#include "../../EU/skill_message/AAA_skill_message_RecordBase.h"
#include "../../KR/skill_message/AAA_skill_message_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_message_Record = BnsTables::KR::skill_message_Record;
	#else
		using skill_message_Record = BnsTables::EU::skill_message_Record;
	#endif
}