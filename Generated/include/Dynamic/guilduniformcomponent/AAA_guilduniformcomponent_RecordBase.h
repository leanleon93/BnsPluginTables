#pragma once
#include "../../EU/guilduniformcomponent/AAA_guilduniformcomponent_RecordBase.h"
#include "../../KR/guilduniformcomponent/AAA_guilduniformcomponent_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using guilduniformcomponent_Record = BnsTables::KR::guilduniformcomponent_Record;
	#else
		using guilduniformcomponent_Record = BnsTables::EU::guilduniformcomponent_Record;
	#endif
}