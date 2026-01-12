#pragma once

#include "../../KR/recommandjobstyle/AAA_recommandjobstyle_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using recommandjobstyle_Record = BnsTables::KR::recommandjobstyle_Record;
	#else
		struct recommandjobstyle_Record {};
	#endif
}