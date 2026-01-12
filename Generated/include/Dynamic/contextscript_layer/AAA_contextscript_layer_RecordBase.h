#pragma once
#include "../../EU/contextscript_layer/AAA_contextscript_layer_RecordBase.h"
#include "../../KR/contextscript_layer/AAA_contextscript_layer_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using contextscript_layer_Record = BnsTables::KR::contextscript_layer_Record;
	#else
		using contextscript_layer_Record = BnsTables::EU::contextscript_layer_Record;
	#endif
}