#pragma once
#include "../../EU/skillacquirecondition/AAA_skillacquirecondition_RecordBase.h"
#include "../../KR/skillacquirecondition/AAA_skillacquirecondition_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skillacquirecondition_Record = BnsTables::KR::skillacquirecondition_Record;
	#else
		using skillacquirecondition_Record = BnsTables::EU::skillacquirecondition_Record;
	#endif
}