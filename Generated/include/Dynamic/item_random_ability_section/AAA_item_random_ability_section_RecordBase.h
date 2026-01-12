#pragma once
#include "../../EU/item_random_ability_section/AAA_item_random_ability_section_RecordBase.h"
#include "../../KR/item_random_ability_section/AAA_item_random_ability_section_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_random_ability_section_Record = BnsTables::KR::item_random_ability_section_Record;
	#else
		using item_random_ability_section_Record = BnsTables::EU::item_random_ability_section_Record;
	#endif
}