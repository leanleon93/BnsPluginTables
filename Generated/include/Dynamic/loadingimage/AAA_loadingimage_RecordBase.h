#pragma once
#include "../../EU/loadingimage/AAA_loadingimage_RecordBase.h"
#include "../../KR/loadingimage/AAA_loadingimage_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using loadingimage_Record = BnsTables::KR::loadingimage_Record;
	#else
		using loadingimage_Record = BnsTables::EU::loadingimage_Record;
	#endif
}