#pragma once
#include "../../EU/summoned_sequence_action/AAA_summoned_sequence_action_RecordBase.h"
#include "../../KR/summoned_sequence_action/AAA_summoned_sequence_action_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using summoned_sequence_action_Record = BnsTables::KR::summoned_sequence_action_Record;
	#else
		using summoned_sequence_action_Record = BnsTables::EU::summoned_sequence_action_Record;
	#endif
}