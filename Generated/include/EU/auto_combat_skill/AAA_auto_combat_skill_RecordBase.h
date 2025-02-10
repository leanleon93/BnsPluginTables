/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct auto_combat_skill_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 parent_skill_id;
signed char variation_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* name;
signed char priority;
char Pad0[3];
BnsTables::Shared::TableRef cast_condition[2];
__int32 cast_condition_Size() const {return 2;};
int cast_condition_tableId() const {return 22;};
signed char cast_condition_op;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 23; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) auto_combat_skill_RecordPtr // : DrRecordPtr
	{
		auto_combat_skill_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}