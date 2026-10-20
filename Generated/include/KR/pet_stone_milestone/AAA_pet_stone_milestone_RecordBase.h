/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct pet_stone_milestone_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 required_count;
char Pad0[2];
BnsTables::Shared::TableRef membership_benefit;
int membership_benefit_tableId() const {return 283;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 2); }
		static __int16 TableId() { return 320; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pet_stone_milestone_RecordPtr // : DrRecordPtr
	{
		pet_stone_milestone_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}