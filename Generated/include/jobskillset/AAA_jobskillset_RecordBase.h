/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct jobskillset_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 skill[100];
__int8 acquire_type[100];
__int32 style_level_2_skill[2];
__int32 style_level_3_skill[2];
__int32 style_level_4_skill[2];
__int32 style_level_5_skill[2];

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 224; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jobskillset_RecordPtr // : DrRecordPtr
	{
		jobskillset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::jobskillset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}