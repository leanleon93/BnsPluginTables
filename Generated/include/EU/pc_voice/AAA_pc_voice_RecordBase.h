/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct pc_voice_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char id;
signed char sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char pc_voice_set_id;
signed char usable_race[4];
__int32 usable_race_Size() const {return 4;};
signed char default_race[4];
__int32 default_race_Size() const {return 4;};
char Pad0[3];
BnsTables::Shared::TableRef name;
int name_tableId() const {return 426;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 426;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 287; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_voice_RecordPtr // : DrRecordPtr
	{
		pc_voice_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}