/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct pcinitialsetting_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 race;
__int8 job;
__int16 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef quest[2];
int quest_tableId(){return 283;};
__int8 quest_mission_step[2];

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 269; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pcinitialsetting_RecordPtr // : DrRecordPtr
	{
		pcinitialsetting_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pcinitialsetting_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}