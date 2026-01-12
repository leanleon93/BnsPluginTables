#pragma once
#include "../../EU/icontexture/AAA_icontexture_RecordBase.h"
#include "../../KR/icontexture/AAA_icontexture_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using icontexture_Record = BnsTables::KR::icontexture_Record;
	#else
		using icontexture_Record = BnsTables::EU::icontexture_Record;
	#endif
}