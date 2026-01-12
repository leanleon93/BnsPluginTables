/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/tendency_field/tendency_field_normal_Record.h"
#include "../../KR/tendency_field/tendency_field_normal_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using tendency_field_normal_Record = BnsTables::KR::tendency_field_normal_Record;
	#else
		using tendency_field_normal_Record = BnsTables::EU::tendency_field_normal_Record;
	#endif
}