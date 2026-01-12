/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/zoneevent/AAA_zoneevent_RecordBase.h"
#include "../../KR/zoneevent/AAA_zoneevent_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneevent_Record = BnsTables::KR::zoneevent_Record;
	#else
		using zoneevent_Record = BnsTables::EU::zoneevent_Record;
	#endif
}