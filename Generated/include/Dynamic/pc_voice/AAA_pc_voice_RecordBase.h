#pragma once
#include "../../EU/pc_voice/AAA_pc_voice_RecordBase.h"
#include "../../KR/pc_voice/AAA_pc_voice_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using pc_voice_Record = BnsTables::KR::pc_voice_Record;
	#else
		using pc_voice_Record = BnsTables::EU::pc_voice_Record;
	#endif
}