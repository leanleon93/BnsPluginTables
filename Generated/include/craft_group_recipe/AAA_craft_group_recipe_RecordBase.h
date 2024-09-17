/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct craft_group_recipe_Record : DrEl
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
Data::TableRef group_item;
int group_item_tableId(){return 189;};
__int8 craft_union_type;
__int8 craft_union_sub_type;
__int16 display_index;
__int16 required_craft_exp;
char Pad0[2];
Data::TableRef required_completion_quest;
int required_completion_quest_tableId(){return 283;};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 80; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_group_recipe_RecordPtr // : DrRecordPtr
	{
		craft_group_recipe_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::craft_group_recipe_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}