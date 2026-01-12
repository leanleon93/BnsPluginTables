#pragma once
#include "../../EU/achievement_register/achievement_register_attach_gem_to_weapon_n_Record.h"
#include "../../KR/achievement_register/achievement_register_attach_gem_to_weapon_n_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_attach_gem_to_weapon_n_Record = BnsTables::KR::achievement_register_attach_gem_to_weapon_n_Record;
	#else
		using achievement_register_attach_gem_to_weapon_n_Record = BnsTables::EU::achievement_register_attach_gem_to_weapon_n_Record;
	#endif
}