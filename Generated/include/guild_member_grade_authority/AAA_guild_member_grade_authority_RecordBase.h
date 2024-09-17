/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct guild_member_grade_authority_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 authority;
__int8 guild_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool editable[5];
bool initial_value[5];

		static TableVersion Version() { return TableVersion(0, 11); }
		static __int16 TableId() { return 169; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_member_grade_authority_RecordPtr // : DrRecordPtr
	{
		guild_member_grade_authority_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guild_member_grade_authority_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}