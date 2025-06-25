/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct item_brand_tooltip_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 brand_id;
signed char item_condition_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 434;};
__int16 game_category_3;
signed char item_grade;
signed char equip_level;
signed char equip_mastery_level;
signed char equip_job_check[4];
__int32 equip_job_check_Size() const {return 4;};
signed char equip_sex;
signed char equip_race;
signed char equip_solo_duel_grade;
signed char equip_team_duel_grade;
char Pad0[3];
BnsTables::Shared::IconRef icon;
BnsTables::Shared::IconRef tag_icon;
BnsTables::Shared::IconRef tag_icon_grade;
BnsTables::Shared::TableRef main_info;
int main_info_tableId() const {return 434;};
BnsTables::Shared::TableRef sub_info;
int sub_info_tableId() const {return 434;};
BnsTables::Shared::TableRef description2;
int description2_tableId() const {return 434;};
BnsTables::Shared::TableRef description4_title;
int description4_title_tableId() const {return 434;};
BnsTables::Shared::TableRef description5_title;
int description5_title_tableId() const {return 434;};
BnsTables::Shared::TableRef description6_title;
int description6_title_tableId() const {return 434;};
BnsTables::Shared::TableRef description4;
int description4_tableId() const {return 434;};
BnsTables::Shared::TableRef description5;
int description5_tableId() const {return 434;};
BnsTables::Shared::TableRef description6;
int description6_tableId() const {return 434;};
BnsTables::Shared::TableRef store_description;
int store_description_tableId() const {return 434;};
BnsTables::Shared::TableRef title_item;
int title_item_tableId() const {return 202;};
bool show_related_item;
char Pad1[3];
BnsTables::Shared::TableRef related_item[30];
__int32 related_item_Size() const {return 30;};
int related_item_tableId() const {return 202;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 10); }
		static __int16 TableId() { return 196; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_brand_tooltip_RecordPtr // : DrRecordPtr
	{
		item_brand_tooltip_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}