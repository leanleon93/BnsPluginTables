/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_train_category_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 job;
__int32 view_skill_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 tree_id;
__int16 pc_level;
__int16 pc_mastery_level;
char Pad0[2];
Data::TableRef complete_quest;
int complete_quest_tableId(){return 283;};
Data::TableRef jumping_pc_complete_quest;
int jumping_pc_complete_quest_tableId(){return 283;};
__int32 consumed_tp;
__int8 sort_id;
bool ui_invisible;
bool context_lock_disable;

		static TableVersion Version() { return TableVersion(0, 37); }
		static __int16 TableId() { return 354; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_category_RecordPtr // : DrRecordPtr
	{
		skill_train_category_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_train_category_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}