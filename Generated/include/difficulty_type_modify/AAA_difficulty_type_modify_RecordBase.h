/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct difficulty_type_modify_Record : DrEl
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
__int32 berserk_sequence_invoke_time[3];

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 98; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) difficulty_type_modify_RecordPtr // : DrRecordPtr
	{
		difficulty_type_modify_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::difficulty_type_modify_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}