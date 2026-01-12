#pragma once
#include "../../EU/skilldashattribute3/AAA_skilldashattribute3_RecordBase.h"
#include "../../KR/skilldashattribute3/AAA_skilldashattribute3_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skilldashattribute3_Record = BnsTables::KR::skilldashattribute3_Record;
	#else
		using skilldashattribute3_Record = BnsTables::EU::skilldashattribute3_Record;
	#endif
}