#pragma once
#include "../../EU/commonanim/AAA_commonanim_RecordBase.h"
#include "../../KR/commonanim/AAA_commonanim_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using commonanim_Record = BnsTables::KR::commonanim_Record;
	#else
		using commonanim_Record = BnsTables::EU::commonanim_Record;
	#endif
}