#pragma once
#include "../../EU/customizingpreview/customizingpreview_light_Record.h"
#include "../../KR/customizingpreview/customizingpreview_light_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using customizingpreview_light_Record = BnsTables::KR::customizingpreview_light_Record;
	#else
		using customizingpreview_light_Record = BnsTables::EU::customizingpreview_light_Record;
	#endif
}