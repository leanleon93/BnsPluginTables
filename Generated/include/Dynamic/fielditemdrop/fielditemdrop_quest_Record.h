#pragma once
#include "../../EU/fielditemdrop/fielditemdrop_quest_Record.h"
#include "../../KR/fielditemdrop/fielditemdrop_quest_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using fielditemdrop_quest_Record = BnsTables::KR::fielditemdrop_quest_Record;
	#else
		using fielditemdrop_quest_Record = BnsTables::EU::fielditemdrop_quest_Record;
	#endif
}