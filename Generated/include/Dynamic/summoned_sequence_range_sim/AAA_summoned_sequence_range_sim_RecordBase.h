#pragma once
#include "../../EU/summoned_sequence_range_sim/AAA_summoned_sequence_range_sim_RecordBase.h"
#include "../../KR/summoned_sequence_range_sim/AAA_summoned_sequence_range_sim_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using summoned_sequence_range_sim_Record = BnsTables::KR::summoned_sequence_range_sim_Record;
	#else
		using summoned_sequence_range_sim_Record = BnsTables::EU::summoned_sequence_range_sim_Record;
	#endif
}