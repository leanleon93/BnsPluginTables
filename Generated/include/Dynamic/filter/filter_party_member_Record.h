#pragma once
#include "../../EU/filter/filter_party_member_Record.h"
#include "../../KR/filter/filter_party_member_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_party_member_Record = BnsTables::KR::filter_party_member_Record;
	#else
		using filter_party_member_Record = BnsTables::EU::filter_party_member_Record;
	#endif
}