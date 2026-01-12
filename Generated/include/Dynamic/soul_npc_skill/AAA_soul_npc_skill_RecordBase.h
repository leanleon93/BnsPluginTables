#pragma once
#include "../../EU/soul_npc_skill/AAA_soul_npc_skill_RecordBase.h"
#include "../../KR/soul_npc_skill/AAA_soul_npc_skill_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using soul_npc_skill_Record = BnsTables::KR::soul_npc_skill_Record;
	#else
		using soul_npc_skill_Record = BnsTables::EU::soul_npc_skill_Record;
	#endif
}