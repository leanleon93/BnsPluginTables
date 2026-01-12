#pragma once
#include "../../EU/contents_schedule/contents_schedule_random_store_1_Record.h"
#include "../../KR/contents_schedule/contents_schedule_random_store_1_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using contents_schedule_random_store_1_Record = BnsTables::KR::contents_schedule_random_store_1_Record;
	#else
		using contents_schedule_random_store_1_Record = BnsTables::EU::contents_schedule_random_store_1_Record;
	#endif
}