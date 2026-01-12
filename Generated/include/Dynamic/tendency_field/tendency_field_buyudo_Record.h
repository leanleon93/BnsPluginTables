#pragma once
#include "../../EU/tendency_field/tendency_field_buyudo_Record.h"
#include "../../KR/tendency_field/tendency_field_buyudo_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using tendency_field_buyudo_Record = BnsTables::KR::tendency_field_buyudo_Record;
	#else
		using tendency_field_buyudo_Record = BnsTables::EU::tendency_field_buyudo_Record;
	#endif
}