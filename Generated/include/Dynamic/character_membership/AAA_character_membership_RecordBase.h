/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/character_membership/AAA_character_membership_RecordBase.h"
#include "../../KR/character_membership/AAA_character_membership_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using character_membership_Record = BnsTables::KR::character_membership_Record;
	#else
		using character_membership_Record = BnsTables::EU::character_membership_Record;
	#endif
}