#pragma once
#include "../../EU/quest_giveup_loss/AAA_quest_giveup_loss_RecordBase.h"
#include "../../KR/quest_giveup_loss/AAA_quest_giveup_loss_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using quest_giveup_loss_Record = BnsTables::KR::quest_giveup_loss_Record;
	#else
		using quest_giveup_loss_Record = BnsTables::EU::quest_giveup_loss_Record;
	#endif
}