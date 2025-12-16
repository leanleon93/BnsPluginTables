/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct craft_group_recipe_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef group_item;
int group_item_tableId() const {return 202;};
signed char craft_union_type;
signed char craft_union_sub_type;
__int16 display_index;
__int16 required_craft_exp;
char Pad0[2];
BnsTables::Shared::TableRef required_completion_quest;
int required_completion_quest_tableId() const {return 307;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 83; }
		static __int32 SubType() { return -1; }
		enum class craft_union_type {
			none = 0,
			production_type_1 = 1,
			production_type_2 = 2,
			production_type_3 = 3,
			production_type_4 = 4,
			production_type_5 = 5,
			production_type_6 = 6,
			production_type_7 = 7,
			gathering_type_1 = 8,
			gathering_type_2 = 9,
			gathering_type_3 = 10,
			gathering_type_4 = 11,
			gathering_type_5 = 12,
			gathering_type_6 = 13,
			gathering_type_7 = 14,
		};

		enum class craft_union_sub_type {
			none = 0,
			gathering = 1,
			production_normal = 2,
			production_transaction = 3,
			production_expert = 4,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_group_recipe_RecordPtr // : DrRecordPtr
	{
		craft_group_recipe_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}