#pragma once
#include "../../EU/energy_point/AAA_energy_point_RecordBase.h"
#include "../../KR/energy_point/AAA_energy_point_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using energy_point_Record = BnsTables::KR::energy_point_Record;
	#else
		using energy_point_Record = BnsTables::EU::energy_point_Record;
	#endif
}