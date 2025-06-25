/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct pcinitialsetting_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char job;
__int16 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef quest[2];
__int32 quest_Size() const {return 2;};
int quest_tableId() const {return 306;};
signed char quest_mission_step[2];
__int32 quest_mission_step_Size() const {return 2;};
bool is_jumping_quest;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 2); }
		static __int16 TableId() { return 292; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pcinitialsetting_RecordPtr // : DrRecordPtr
	{
		pcinitialsetting_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}