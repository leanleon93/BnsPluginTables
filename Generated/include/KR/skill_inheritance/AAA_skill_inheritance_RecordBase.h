/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_inheritance_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 skill_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 parent_skill_id;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 350; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_inheritance_RecordPtr // : DrRecordPtr
	{
		skill_inheritance_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}