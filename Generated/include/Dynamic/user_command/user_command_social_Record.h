#pragma once
#include "../../EU/user_command/user_command_social_Record.h"
#include "../../KR/user_command/user_command_social_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using user_command_social_Record = BnsTables::KR::user_command_social_Record;
	#else
		using user_command_social_Record = BnsTables::EU::user_command_social_Record;
	#endif
}