#pragma once
#include "../../EU/summoned_sequence/AAA_summoned_sequence_RecordBase.h"
#include "../../KR/summoned_sequence/AAA_summoned_sequence_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using summoned_sequence_Record = BnsTables::KR::summoned_sequence_Record;
	#else
		using summoned_sequence_Record = BnsTables::EU::summoned_sequence_Record;
	#endif
}