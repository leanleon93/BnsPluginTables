#pragma once
#include "../../EU/teen_body_material/AAA_teen_body_material_RecordBase.h"
#include "../../KR/teen_body_material/AAA_teen_body_material_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using teen_body_material_Record = BnsTables::KR::teen_body_material_Record;
	#else
		using teen_body_material_Record = BnsTables::EU::teen_body_material_Record;
	#endif
}