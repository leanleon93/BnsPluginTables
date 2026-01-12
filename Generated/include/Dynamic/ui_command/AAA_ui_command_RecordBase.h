#pragma once
#include "../../EU/ui_command/AAA_ui_command_RecordBase.h"
#include "../../KR/ui_command/AAA_ui_command_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using ui_command_Record = BnsTables::KR::ui_command_Record;
	#else
		using ui_command_Record = BnsTables::EU::ui_command_Record;
	#endif
}