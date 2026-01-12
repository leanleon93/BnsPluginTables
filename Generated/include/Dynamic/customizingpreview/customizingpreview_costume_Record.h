#pragma once
#include "../../EU/customizingpreview/customizingpreview_costume_Record.h"
#include "../../KR/customizingpreview/customizingpreview_costume_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using customizingpreview_costume_Record = BnsTables::KR::customizingpreview_costume_Record;
	#else
		using customizingpreview_costume_Record = BnsTables::EU::customizingpreview_costume_Record;
	#endif
}