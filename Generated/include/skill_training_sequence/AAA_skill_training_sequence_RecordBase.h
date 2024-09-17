/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct skill_training_sequence_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 repeat_count;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 359; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_training_sequence_RecordPtr // : DrRecordPtr
	{
		skill_training_sequence_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_training_sequence_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}