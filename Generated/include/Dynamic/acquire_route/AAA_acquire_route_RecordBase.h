#pragma once
#include "../../EU/acquire_route/AAA_acquire_route_RecordBase.h"
#include "../../KR/acquire_route/AAA_acquire_route_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using acquire_route_Record = BnsTables::KR::acquire_route_Record;
	#else
		using acquire_route_Record = BnsTables::EU::acquire_route_Record;
	#endif
}