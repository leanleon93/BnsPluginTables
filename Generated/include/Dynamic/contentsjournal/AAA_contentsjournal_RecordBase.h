#pragma once
#include "../../EU/contentsjournal/AAA_contentsjournal_RecordBase.h"
#include "../../KR/contentsjournal/AAA_contentsjournal_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using contentsjournal_Record = BnsTables::KR::contentsjournal_Record;
	#else
		using contentsjournal_Record = BnsTables::EU::contentsjournal_Record;
	#endif
}