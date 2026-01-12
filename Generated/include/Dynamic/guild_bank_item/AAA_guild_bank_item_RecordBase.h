#pragma once
#include "../../EU/guild_bank_item/AAA_guild_bank_item_RecordBase.h"
#include "../../KR/guild_bank_item/AAA_guild_bank_item_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using guild_bank_item_Record = BnsTables::KR::guild_bank_item_Record;
	#else
		using guild_bank_item_Record = BnsTables::EU::guild_bank_item_Record;
	#endif
}