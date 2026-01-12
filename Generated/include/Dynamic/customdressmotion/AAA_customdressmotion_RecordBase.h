#pragma once
#include "../../EU/customdressmotion/AAA_customdressmotion_RecordBase.h"
#include "../../KR/customdressmotion/AAA_customdressmotion_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using customdressmotion_Record = BnsTables::KR::customdressmotion_Record;
	#else
		using customdressmotion_Record = BnsTables::EU::customdressmotion_Record;
	#endif
}