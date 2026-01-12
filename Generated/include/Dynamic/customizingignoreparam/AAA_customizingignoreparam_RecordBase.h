#pragma once
#include "../../EU/customizingignoreparam/AAA_customizingignoreparam_RecordBase.h"
#include "../../KR/customizingignoreparam/AAA_customizingignoreparam_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using customizingignoreparam_Record = BnsTables::KR::customizingignoreparam_Record;
	#else
		using customizingignoreparam_Record = BnsTables::EU::customizingignoreparam_Record;
	#endif
}