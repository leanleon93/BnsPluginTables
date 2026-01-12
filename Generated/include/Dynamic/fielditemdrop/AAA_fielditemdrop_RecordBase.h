#pragma once
#include "../../EU/fielditemdrop/AAA_fielditemdrop_RecordBase.h"
#include "../../KR/fielditemdrop/AAA_fielditemdrop_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using fielditemdrop_Record = BnsTables::KR::fielditemdrop_Record;
	#else
		using fielditemdrop_Record = BnsTables::EU::fielditemdrop_Record;
	#endif
}