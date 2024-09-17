/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct auto_combat_skill_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 parent_skill_id;
__int8 variation_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* name;
__int8 priority;
char Pad0[3];
Data::TableRef cast_condition[2];
int cast_condition_tableId(){return 22;};
__int8 cast_condition_op;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 23; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) auto_combat_skill_RecordPtr // : DrRecordPtr
	{
		auto_combat_skill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::auto_combat_skill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}