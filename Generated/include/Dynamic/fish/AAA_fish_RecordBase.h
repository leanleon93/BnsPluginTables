#pragma once
#include "../../EU/fish/AAA_fish_RecordBase.h"
#include "../../KR/fish/AAA_fish_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using fish_Record = BnsTables::KR::fish_Record;
	#else
		using fish_Record = BnsTables::EU::fish_Record;
	#endif
}