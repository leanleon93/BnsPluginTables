/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct guild_member_grade_authority_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char authority;
signed char guild_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool editable[5];
__int32 editable_Size() const {return 5;};
bool initial_value[5];
__int32 initial_value_Size() const {return 5;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 11); }
		static __int16 TableId() { return 173; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_member_grade_authority_RecordPtr // : DrRecordPtr
	{
		guild_member_grade_authority_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}