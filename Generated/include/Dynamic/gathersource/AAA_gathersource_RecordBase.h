#pragma once
#include "../../EU/gathersource/AAA_gathersource_RecordBase.h"
#include "../../KR/gathersource/AAA_gathersource_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using gathersource_Record = BnsTables::KR::gathersource_Record;
	#else
		using gathersource_Record = BnsTables::EU::gathersource_Record;
	#endif
}