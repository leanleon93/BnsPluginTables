#pragma once
#include "../../EU/guide_movie/guide_movie_dungeon_Record.h"
#include "../../KR/guide_movie/guide_movie_dungeon_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using guide_movie_dungeon_Record = BnsTables::KR::guide_movie_dungeon_Record;
	#else
		using guide_movie_dungeon_Record = BnsTables::EU::guide_movie_dungeon_Record;
	#endif
}