/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct contributionreward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char contribution_type;
char Pad0[3];
BnsTables::Shared::TableRef minimum_group_item;
int minimum_group_item_tableId() const {return 197;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 13); }
		static __int16 TableId() { return 76; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contributionreward_RecordPtr // : DrRecordPtr
	{
		contributionreward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}