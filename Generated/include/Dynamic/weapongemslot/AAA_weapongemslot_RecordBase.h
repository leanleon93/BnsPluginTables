#pragma once
#include "../../EU/weapongemslot/AAA_weapongemslot_RecordBase.h"
#include "../../KR/weapongemslot/AAA_weapongemslot_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using weapongemslot_Record = BnsTables::KR::weapongemslot_Record;
	#else
		using weapongemslot_Record = BnsTables::EU::weapongemslot_Record;
	#endif
}