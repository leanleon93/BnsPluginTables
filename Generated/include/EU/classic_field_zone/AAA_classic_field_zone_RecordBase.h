/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct classic_field_zone_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef zone[2];
int zone_tableId(){return 443;};
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
BnsTables::Shared::TableRef attraction_quest[5];
int attraction_quest_tableId(){return 283;};
bool ui_filter_attraction_quest_only;
char Pad0[3];
BnsTables::Shared::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId(){return 405;};
BnsTables::Shared::TableRef escape_cave_confirm_text;
int escape_cave_confirm_text_tableId(){return 405;};
__int16 recommend_attack_power;
char Pad1[2];
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 189;};
BnsTables::Shared::TableRef classic_field_zone_name2;
int classic_field_zone_name2_tableId(){return 405;};
BnsTables::Shared::TableRef classic_field_zone_desc;
int classic_field_zone_desc_tableId(){return 405;};
wchar_t* thumbnail_image;
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 ui_text_grade;
char Pad2[3];
BnsTables::Shared::TableRef tactic;
int tactic_tableId(){return 405;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};
__int8 recommend_level_min;
__int8 recommend_level_max;
__int8 recommend_mastery_level_min;
__int8 recommend_mastery_level_max;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 17); }
		static __int16 TableId() { return 57; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) classic_field_zone_RecordPtr // : DrRecordPtr
	{
		classic_field_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::classic_field_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}