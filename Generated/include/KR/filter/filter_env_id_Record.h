/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct filter_env_id_Record : filter_Record
	{
	public:
		BnsTables::Shared::TableRef env2spawn;
int env2spawn_tableId() const {return 464;};

		static __int32 SubType() { return 26; }
	};
#pragma pack(pop)
}