/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct worldaccountexpedition_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 group;
signed char level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool deprecated;
signed char expedition_type;
char Pad0[2];
BnsTables::Shared::ExplicitTableRef target[60];
__int32 target_Size() const {return 60;};
__int16 count[60];
__int32 count_Size() const {return 60;};
signed char condition;
signed char ability[5];
__int32 ability_Size() const {return 5;};
char Pad1[2];
__int32 ability_value[5];
__int32 ability_value_Size() const {return 5;};
__int32 ability_base_value[5];
__int32 ability_base_value_Size() const {return 5;};
bool boss;
char Pad2[3];
BnsTables::Shared::TableRef map_group_1;
int map_group_1_tableId() const {return 247;};
BnsTables::Shared::TableRef name;
int name_tableId() const {return 427;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 427;};
BnsTables::Shared::TableRef story;
int story_tableId() const {return 427;};
wchar_t* boss_image;
BnsTables::Shared::IconRef target_icon[5];
__int32 target_icon_Size() const {return 5;};
BnsTables::Shared::TableRef target_desc[5];
__int32 target_desc_Size() const {return 5;};
int target_desc_tableId() const {return 427;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 1); }
		static __int16 TableId() { return 458; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) worldaccountexpedition_RecordPtr // : DrRecordPtr
	{
		worldaccountexpedition_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}