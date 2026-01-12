#pragma once
#include "../../EU/pc_voice_set/AAA_pc_voice_set_RecordBase.h"
#include "../../KR/pc_voice_set/AAA_pc_voice_set_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using pc_voice_set_Record = BnsTables::KR::pc_voice_set_Record;
	#else
		using pc_voice_set_Record = BnsTables::EU::pc_voice_set_Record;
	#endif
}