#pragma once
#include "../../EU/weapon_tempered/AAA_weapon_tempered_RecordBase.h"
#include "../../KR/weapon_tempered/AAA_weapon_tempered_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using weapon_tempered_Record = BnsTables::KR::weapon_tempered_Record;
	#else
		using weapon_tempered_Record = BnsTables::EU::weapon_tempered_Record;
	#endif
}