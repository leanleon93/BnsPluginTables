#pragma once
#include "../../EU/emoticon/AAA_emoticon_RecordBase.h"
#include "../../KR/emoticon/AAA_emoticon_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using emoticon_Record = BnsTables::KR::emoticon_Record;
	#else
		using emoticon_Record = BnsTables::EU::emoticon_Record;
	#endif
}