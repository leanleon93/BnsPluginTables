/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct auto_combat_customized_skill_Record : DrEl
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
__int8 sort_id;
__int8 recommend_setting_slot_index;
char Pad0[2];
Data::TableRef recommend_setting_cast_condition[2];
int recommend_setting_cast_condition_tableId(){return 20;};
__int8 recommend_setting_cast_condition_op;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 21; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) auto_combat_customized_skill_RecordPtr // : DrRecordPtr
	{
		auto_combat_customized_skill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::auto_combat_customized_skill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}