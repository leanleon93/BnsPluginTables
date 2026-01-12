#pragma once
#include "../../EU/attachment/AAA_attachment_RecordBase.h"
#include "../../KR/attachment/AAA_attachment_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using attachment_Record = BnsTables::KR::attachment_Record;
	#else
		using attachment_Record = BnsTables::EU::attachment_Record;
	#endif
}