#pragma once
#include "../../EU/guilduniformslider/AAA_guilduniformslider_RecordBase.h"
#include "../../KR/guilduniformslider/AAA_guilduniformslider_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using guilduniformslider_Record = BnsTables::KR::guilduniformslider_Record;
	#else
		using guilduniformslider_Record = BnsTables::EU::guilduniformslider_Record;
	#endif
}