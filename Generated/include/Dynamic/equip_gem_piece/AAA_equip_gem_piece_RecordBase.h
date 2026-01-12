#pragma once
#include "../../EU/equip_gem_piece/AAA_equip_gem_piece_RecordBase.h"
#include "../../KR/equip_gem_piece/AAA_equip_gem_piece_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using equip_gem_piece_Record = BnsTables::KR::equip_gem_piece_Record;
	#else
		using equip_gem_piece_Record = BnsTables::EU::equip_gem_piece_Record;
	#endif
}