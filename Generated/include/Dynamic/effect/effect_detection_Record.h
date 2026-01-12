/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/effect/effect_detection_Record.h"
#include "../../KR/effect/effect_detection_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_detection_Record = BnsTables::KR::effect_detection_Record;
	#else
		using effect_detection_Record = BnsTables::EU::effect_detection_Record;
	#endif
}