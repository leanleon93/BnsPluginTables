#pragma once
#include "../../EU/skillshow3/AAA_skillshow3_RecordBase.h"
#include "../../KR/skillshow3/AAA_skillshow3_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skillshow3_Record = BnsTables::KR::skillshow3_Record;
	#else
		using skillshow3_Record = BnsTables::EU::skillshow3_Record;
	#endif
}