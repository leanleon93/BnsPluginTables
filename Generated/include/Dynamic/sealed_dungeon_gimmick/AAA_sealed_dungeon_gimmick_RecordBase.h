#pragma once
#include "../../EU/sealed_dungeon_gimmick/AAA_sealed_dungeon_gimmick_RecordBase.h"
#include "../../KR/sealed_dungeon_gimmick/AAA_sealed_dungeon_gimmick_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using sealed_dungeon_gimmick_Record = BnsTables::KR::sealed_dungeon_gimmick_Record;
	#else
		using sealed_dungeon_gimmick_Record = BnsTables::EU::sealed_dungeon_gimmick_Record;
	#endif
}