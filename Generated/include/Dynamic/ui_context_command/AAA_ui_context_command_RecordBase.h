#pragma once
#include "../../EU/ui_context_command/AAA_ui_context_command_RecordBase.h"
#include "../../KR/ui_context_command/AAA_ui_context_command_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using ui_context_command_Record = BnsTables::KR::ui_context_command_Record;
	#else
		using ui_context_command_Record = BnsTables::EU::ui_context_command_Record;
	#endif
}