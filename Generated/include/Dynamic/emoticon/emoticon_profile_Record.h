/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/emoticon/emoticon_profile_Record.h"
#include "../../KR/emoticon/emoticon_profile_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using emoticon_profile_Record = BnsTables::KR::emoticon_profile_Record;
	#else
		using emoticon_profile_Record = BnsTables::EU::emoticon_profile_Record;
	#endif
}