#pragma once
#include "../../EU/guilduniformpreset/AAA_guilduniformpreset_RecordBase.h"
#include "../../KR/guilduniformpreset/AAA_guilduniformpreset_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using guilduniformpreset_Record = BnsTables::KR::guilduniformpreset_Record;
	#else
		using guilduniformpreset_Record = BnsTables::EU::guilduniformpreset_Record;
	#endif
}