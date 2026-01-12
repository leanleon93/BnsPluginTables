#pragma once
#include "../../EU/fielditemdrop/fielditemdrop_env_Record.h"
#include "../../KR/fielditemdrop/fielditemdrop_env_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using fielditemdrop_env_Record = BnsTables::KR::fielditemdrop_env_Record;
	#else
		using fielditemdrop_env_Record = BnsTables::EU::fielditemdrop_env_Record;
	#endif
}