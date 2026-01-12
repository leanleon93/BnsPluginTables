#pragma once
#include "../../EU/glyph/AAA_glyph_RecordBase.h"
#include "../../KR/glyph/AAA_glyph_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using glyph_Record = BnsTables::KR::glyph_Record;
	#else
		using glyph_Record = BnsTables::EU::glyph_Record;
	#endif
}