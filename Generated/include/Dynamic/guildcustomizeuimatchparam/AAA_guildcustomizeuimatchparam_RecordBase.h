#pragma once
#include "../../EU/guildcustomizeuimatchparam/AAA_guildcustomizeuimatchparam_RecordBase.h"
#include "../../KR/guildcustomizeuimatchparam/AAA_guildcustomizeuimatchparam_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using guildcustomizeuimatchparam_Record = BnsTables::KR::guildcustomizeuimatchparam_Record;
	#else
		using guildcustomizeuimatchparam_Record = BnsTables::EU::guildcustomizeuimatchparam_Record;
	#endif
}