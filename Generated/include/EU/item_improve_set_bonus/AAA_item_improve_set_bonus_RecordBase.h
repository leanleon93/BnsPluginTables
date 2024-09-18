/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct item_improve_set_bonus_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef name;
int name_tableId(){return 405;};
BnsTables::Shared::ExplicitTableRef target_item[20];
__int8 target_item_condition_type[20];
__int8 target_equip_pos[20];
BnsTables::Shared::IconRef target_equip_pos_icon[20];
__int8 min_item_grade;
char Pad0[1];
__int16 total_improve_level[30];
char Pad1[2];
BnsTables::Shared::TableRef total_improve_level_effect[30];
int total_improve_level_effect_tableId(){return 111;};
BnsTables::Shared::TableRef total_improve_level_effect_description[30];
int total_improve_level_effect_description_tableId(){return 405;};
__int8 total_improve_level_ability[30];
char Pad2[2];
__int32 total_improve_level_ability_value[30];
__int32 total_improve_level_ability_base_value[30];
BnsTables::Shared::TableRef total_improve_level_condition_event[30];
int total_improve_level_condition_event_tableId(){return 62;};
__int16 min_improve_level[30];
BnsTables::Shared::TableRef min_improve_level_effect[30];
int min_improve_level_effect_tableId(){return 111;};
BnsTables::Shared::TableRef min_improve_level_effect_description[30];
int min_improve_level_effect_description_tableId(){return 405;};
__int8 min_improve_level_ability[30];
char Pad3[2];
__int32 min_improve_level_ability_value[30];
__int32 min_improve_level_ability_base_value[30];
BnsTables::Shared::TableRef min_improve_level_condition_event[30];
int min_improve_level_condition_event_tableId(){return 62;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 0); }
		static __int16 TableId() { return 201; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_improve_set_bonus_RecordPtr // : DrRecordPtr
	{
		item_improve_set_bonus_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_improve_set_bonus_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}