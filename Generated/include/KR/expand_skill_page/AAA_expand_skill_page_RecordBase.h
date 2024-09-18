/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct expand_skill_page_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 skill_page;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 money;
__int8 charge_type;
char Pad0[3];
BnsTables::Shared::TableRef required_item[4];
int required_item_tableId(){return 195;};
__int8 required_item_count[4];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 133; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) expand_skill_page_RecordPtr // : DrRecordPtr
	{
		expand_skill_page_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::expand_skill_page_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}