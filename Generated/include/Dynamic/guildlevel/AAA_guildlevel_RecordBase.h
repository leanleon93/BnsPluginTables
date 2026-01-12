#pragma once
#include "../../EU/guildlevel/AAA_guildlevel_RecordBase.h"
#include "../../KR/guildlevel/AAA_guildlevel_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using guildlevel_Record = BnsTables::KR::guildlevel_Record;
	#else
		using guildlevel_Record = BnsTables::EU::guildlevel_Record;
	#endif
}