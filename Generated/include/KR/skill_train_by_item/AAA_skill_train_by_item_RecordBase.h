/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_train_by_item_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
char Pad0[3];
BnsTables::Shared::TableRef main_origin_skill;
int main_origin_skill_tableId() const {return 349;};
BnsTables::Shared::TableRef main_change_skill;
int main_change_skill_tableId() const {return 349;};
BnsTables::Shared::TableRef sub_origin_skill[5];
__int32 sub_origin_skill_Size() const {return 5;};
int sub_origin_skill_tableId() const {return 349;};
BnsTables::Shared::TableRef sub_change_skill[5];
__int32 sub_change_skill_Size() const {return 5;};
int sub_change_skill_tableId() const {return 349;};
BnsTables::Shared::IconRef icon;
BnsTables::Shared::TableRef description;
int description_tableId() const {return 434;};
signed char item_equip_type;
signed char job;
char Pad1[2];
BnsTables::Shared::TableRef extract_skill_train_by_item;
int extract_skill_train_by_item_tableId() const {return 137;};
signed char ability[5];
__int32 ability_Size() const {return 5;};
char Pad2[3];
__int32 ability_value[5];
__int32 ability_value_Size() const {return 5;};
__int16 character_info_preview_priority;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(7, 0); }
		static __int16 TableId() { return 380; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_by_item_RecordPtr // : DrRecordPtr
	{
		skill_train_by_item_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}