/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_party_search_shortcut_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct party_search_shortcut_teleport_Record : party_search_shortcut_Record
	{
	public:
		BnsTables::Shared::TableRef destination;
int destination_tableId() const {return 450;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}