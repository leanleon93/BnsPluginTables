/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_emoticon_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct emoticon_emoticon_Record : emoticon_Record
	{
	public:
		BnsTables::Shared::TableRef tip;
int tip_tableId() const {return 434;};
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 434;};
BnsTables::Shared::TableRef candidate_name;
int candidate_name_tableId() const {return 434;};
BnsTables::Shared::TableRef single_name;
int single_name_tableId() const {return 434;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}