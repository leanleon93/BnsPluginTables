#pragma once
#include "../../EU/contentsjournal2noti/AAA_contentsjournal2noti_RecordBase.h"
#include "../../KR/contentsjournal2noti/AAA_contentsjournal2noti_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using contentsjournal2noti_Record = BnsTables::KR::contentsjournal2noti_Record;
	#else
		using contentsjournal2noti_Record = BnsTables::EU::contentsjournal2noti_Record;
	#endif
}