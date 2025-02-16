/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct jobskillset_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 skill[100];
__int32 skill_Size() const {return 100;};
signed char acquire_type[100];
__int32 acquire_type_Size() const {return 100;};
__int32 style_level_2_skill[2];
__int32 style_level_2_skill_Size() const {return 2;};
__int32 style_level_3_skill[2];
__int32 style_level_3_skill_Size() const {return 2;};
__int32 style_level_4_skill[2];
__int32 style_level_4_skill_Size() const {return 2;};
__int32 style_level_5_skill[2];
__int32 style_level_5_skill_Size() const {return 2;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 234; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jobskillset_RecordPtr // : DrRecordPtr
	{
		jobskillset_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}