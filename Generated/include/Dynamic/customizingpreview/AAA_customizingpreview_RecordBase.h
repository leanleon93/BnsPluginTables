#pragma once
#include "../../EU/customizingpreview/AAA_customizingpreview_RecordBase.h"
#include "../../KR/customizingpreview/AAA_customizingpreview_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using customizingpreview_Record = BnsTables::KR::customizingpreview_Record;
	#else
		using customizingpreview_Record = BnsTables::EU::customizingpreview_Record;
	#endif
}