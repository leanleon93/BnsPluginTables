/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct worldaccountexpedition_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 group;
__int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool deprecated;
__int8 expedition_type;
char Pad0[2];
Data::ExplicitTableRef target[60];
__int16 count[60];
__int8 condition;
__int8 ability[5];
char Pad1[2];
__int32 ability_value[5];
__int32 ability_base_value[5];
bool boss;
char Pad2[3];
Data::TableRef map_group_1;
int map_group_1_tableId(){return 237;};
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef description;
int description_tableId(){return 405;};
Data::TableRef story;
int story_tableId(){return 405;};
wchar_t* boss_image;
Data::IconRef target_icon[5];
Data::TableRef target_desc[5];
int target_desc_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(5, 0); }
		static __int16 TableId() { return 435; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) worldaccountexpedition_RecordPtr // : DrRecordPtr
	{
		worldaccountexpedition_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::worldaccountexpedition_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}