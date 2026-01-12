#pragma once
#include "../../EU/achievement_register/achievement_register_attach_equip_gem_piece_Record.h"
#include "../../KR/achievement_register/achievement_register_attach_equip_gem_piece_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_attach_equip_gem_piece_Record = BnsTables::KR::achievement_register_attach_equip_gem_piece_Record;
	#else
		using achievement_register_attach_equip_gem_piece_Record = BnsTables::EU::achievement_register_attach_equip_gem_piece_Record;
	#endif
}