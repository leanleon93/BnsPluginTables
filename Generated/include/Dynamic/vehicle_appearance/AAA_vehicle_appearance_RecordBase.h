#pragma once
#include "../../EU/vehicle_appearance/AAA_vehicle_appearance_RecordBase.h"
#include "../../KR/vehicle_appearance/AAA_vehicle_appearance_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using vehicle_appearance_Record = BnsTables::KR::vehicle_appearance_Record;
	#else
		using vehicle_appearance_Record = BnsTables::EU::vehicle_appearance_Record;
	#endif
}