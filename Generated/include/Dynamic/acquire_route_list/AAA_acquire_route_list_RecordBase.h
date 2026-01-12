#pragma once
#include "../../EU/acquire_route_list/AAA_acquire_route_list_RecordBase.h"
#include "../../KR/acquire_route_list/AAA_acquire_route_list_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using acquire_route_list_Record = BnsTables::KR::acquire_route_list_Record;
	#else
		using acquire_route_list_Record = BnsTables::EU::acquire_route_list_Record;
	#endif
}