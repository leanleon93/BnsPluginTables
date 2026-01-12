#pragma once
#include "../../EU/quest_completion_loss/AAA_quest_completion_loss_RecordBase.h"
#include "../../KR/quest_completion_loss/AAA_quest_completion_loss_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using quest_completion_loss_Record = BnsTables::KR::quest_completion_loss_Record;
	#else
		using quest_completion_loss_Record = BnsTables::EU::quest_completion_loss_Record;
	#endif
}