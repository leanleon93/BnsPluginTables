#pragma once
#include "../../EU/partychatchannel/partychatchannel_normal_Record.h"
#include "../../KR/partychatchannel/partychatchannel_normal_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using partychatchannel_normal_Record = BnsTables::KR::partychatchannel_normal_Record;
	#else
		using partychatchannel_normal_Record = BnsTables::EU::partychatchannel_normal_Record;
	#endif
}