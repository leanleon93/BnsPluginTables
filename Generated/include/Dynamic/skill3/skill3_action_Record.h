#pragma once
#include "../../EU/skill3/skill3_action_Record.h"
#include "../../KR/skill3/skill3_action_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill3_action_Record = BnsTables::KR::skill3_action_Record;
	#else
		using skill3_action_Record = BnsTables::EU::skill3_action_Record;
	#endif
}