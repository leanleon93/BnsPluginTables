/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct itemrewardskillacquireroute_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef main_description;
int main_description_tableId(){return 420;};
BnsTables::Shared::ExplicitTableRef tooltip_description[50];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 214; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemrewardskillacquireroute_RecordPtr // : DrRecordPtr
	{
		itemrewardskillacquireroute_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemrewardskillacquireroute_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}