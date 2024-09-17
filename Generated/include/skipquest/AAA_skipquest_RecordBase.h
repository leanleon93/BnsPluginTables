/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct skipquest_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 level;
__int16 mastery_level;
char Pad0[2];
Data::TableRef quest;
int quest_tableId(){return 283;};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 362; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skipquest_RecordPtr // : DrRecordPtr
	{
		skipquest_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skipquest_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}