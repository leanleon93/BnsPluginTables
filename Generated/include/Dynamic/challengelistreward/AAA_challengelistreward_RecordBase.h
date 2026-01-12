#pragma once
#include "../../EU/challengelistreward/AAA_challengelistreward_RecordBase.h"
#include "../../KR/challengelistreward/AAA_challengelistreward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using challengelistreward_Record = BnsTables::KR::challengelistreward_Record;
	#else
		using challengelistreward_Record = BnsTables::EU::challengelistreward_Record;
	#endif
}