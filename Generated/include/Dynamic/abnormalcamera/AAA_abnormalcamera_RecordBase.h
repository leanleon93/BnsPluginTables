#pragma once
#include "../../EU/abnormalcamera/AAA_abnormalcamera_RecordBase.h"
#include "../../KR/abnormalcamera/AAA_abnormalcamera_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using abnormalcamera_Record = BnsTables::KR::abnormalcamera_Record;
	#else
		using abnormalcamera_Record = BnsTables::EU::abnormalcamera_Record;
	#endif
}