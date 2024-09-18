/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct item_brand_tooltip_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 brand_id;
__int8 item_condition_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name2;
int name2_tableId(){return 405;};
__int16 game_category_3;
__int8 item_grade;
__int8 equip_level;
__int8 equip_mastery_level;
__int8 equip_job_check[4];
__int8 equip_sex;
__int8 equip_race;
__int8 equip_solo_duel_grade;
__int8 equip_team_duel_grade;
char Pad0[3];
BnsTables::Shared::IconRef icon;
BnsTables::Shared::IconRef tag_icon;
BnsTables::Shared::IconRef tag_icon_grade;
BnsTables::Shared::TableRef main_info;
int main_info_tableId(){return 405;};
BnsTables::Shared::TableRef sub_info;
int sub_info_tableId(){return 405;};
BnsTables::Shared::TableRef description2;
int description2_tableId(){return 405;};
BnsTables::Shared::TableRef description4_title;
int description4_title_tableId(){return 405;};
BnsTables::Shared::TableRef description5_title;
int description5_title_tableId(){return 405;};
BnsTables::Shared::TableRef description6_title;
int description6_title_tableId(){return 405;};
BnsTables::Shared::TableRef description4;
int description4_tableId(){return 405;};
BnsTables::Shared::TableRef description5;
int description5_tableId(){return 405;};
BnsTables::Shared::TableRef description6;
int description6_tableId(){return 405;};
BnsTables::Shared::TableRef store_description;
int store_description_tableId(){return 405;};
BnsTables::Shared::TableRef title_item;
int title_item_tableId(){return 189;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 9); }
		static __int16 TableId() { return 184; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_brand_tooltip_RecordPtr // : DrRecordPtr
	{
		item_brand_tooltip_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_brand_tooltip_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}