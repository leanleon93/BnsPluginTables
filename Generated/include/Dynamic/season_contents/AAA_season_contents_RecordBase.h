/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/season_contents/AAA_season_contents_RecordBase.h"
#include "../../KR/season_contents/AAA_season_contents_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using season_contents_Record = BnsTables::KR::season_contents_Record;
	#else
		using season_contents_Record = BnsTables::EU::season_contents_Record;
	#endif
}