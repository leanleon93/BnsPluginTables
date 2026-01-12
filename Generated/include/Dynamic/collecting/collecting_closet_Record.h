#pragma once
#include "../../EU/collecting/collecting_closet_Record.h"
#include "../../KR/collecting/collecting_closet_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using collecting_closet_Record = BnsTables::KR::collecting_closet_Record;
	#else
		using collecting_closet_Record = BnsTables::EU::collecting_closet_Record;
	#endif
}