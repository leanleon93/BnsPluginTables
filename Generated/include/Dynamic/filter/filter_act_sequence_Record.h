#pragma once
#include "../../EU/filter/filter_act_sequence_Record.h"
#include "../../KR/filter/filter_act_sequence_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_act_sequence_Record = BnsTables::KR::filter_act_sequence_Record;
	#else
		using filter_act_sequence_Record = BnsTables::EU::filter_act_sequence_Record;
	#endif
}