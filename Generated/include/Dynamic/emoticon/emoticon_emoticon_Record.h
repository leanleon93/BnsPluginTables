#pragma once
#include "../../EU/emoticon/emoticon_emoticon_Record.h"
#include "../../KR/emoticon/emoticon_emoticon_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using emoticon_emoticon_Record = BnsTables::KR::emoticon_emoticon_Record;
	#else
		using emoticon_emoticon_Record = BnsTables::EU::emoticon_emoticon_Record;
	#endif
}