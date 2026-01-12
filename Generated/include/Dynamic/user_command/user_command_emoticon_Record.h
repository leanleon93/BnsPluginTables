#pragma once
#include "../../EU/user_command/user_command_emoticon_Record.h"
#include "../../KR/user_command/user_command_emoticon_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using user_command_emoticon_Record = BnsTables::KR::user_command_emoticon_Record;
	#else
		using user_command_emoticon_Record = BnsTables::EU::user_command_emoticon_Record;
	#endif
}