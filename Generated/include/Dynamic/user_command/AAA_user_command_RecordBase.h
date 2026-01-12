#pragma once
#include "../../EU/user_command/AAA_user_command_RecordBase.h"
#include "../../KR/user_command/AAA_user_command_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using user_command_Record = BnsTables::KR::user_command_Record;
	#else
		using user_command_Record = BnsTables::EU::user_command_Record;
	#endif
}