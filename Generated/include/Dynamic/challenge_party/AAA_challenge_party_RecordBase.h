#pragma once
#include "../../EU/challenge_party/AAA_challenge_party_RecordBase.h"
#include "../../KR/challenge_party/AAA_challenge_party_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using challenge_party_Record = BnsTables::KR::challenge_party_Record;
	#else
		using challenge_party_Record = BnsTables::EU::challenge_party_Record;
	#endif
}