#pragma once
#include "../../EU/zonechannelchange/AAA_zonechannelchange_RecordBase.h"
#include "../../KR/zonechannelchange/AAA_zonechannelchange_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonechannelchange_Record = BnsTables::KR::zonechannelchange_Record;
	#else
		using zonechannelchange_Record = BnsTables::EU::zonechannelchange_Record;
	#endif
}