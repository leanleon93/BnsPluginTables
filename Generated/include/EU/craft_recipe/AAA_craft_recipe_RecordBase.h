/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct craft_recipe_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef name;
int name_tableId() const {return 427;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 427;};
BnsTables::Shared::TableRef requirement_name;
int requirement_name_tableId() const {return 427;};
BnsTables::Shared::TableRef location_desc;
int location_desc_tableId() const {return 427;};
signed char category;
char Pad0[3];
__int32 inner_category;
__int32 money_cost;
BnsTables::Shared::TableRef material[5];
__int32 material_Size() const {return 5;};
int material_tableId() const {return 198;};
__int16 material_amount[5];
__int32 material_amount_Size() const {return 5;};
char Pad1[2];
BnsTables::Shared::TableRef brand_material[5];
__int32 brand_material_Size() const {return 5;};
int brand_material_tableId() const {return 191;};
signed char brand_material_condition_type[5];
__int32 brand_material_condition_type_Size() const {return 5;};
char Pad2[1];
__int16 brand_material_amount[5];
__int32 brand_material_amount_Size() const {return 5;};
__int16 limit_production_exp;
char Pad3[2];
BnsTables::Shared::TableRef complete_quest;
int complete_quest_tableId() const {return 299;};
__int16 reward_production_exp;
__int16 reward_production_exp_bonus;
__int16 half_production_exp_step;
__int16 zero_production_exp_step;
bool customizable;
signed char delivery_method;
char Pad4[2];
BnsTables::Shared::TableRef step[4];
__int32 step_Size() const {return 4;};
int step_tableId() const {return 84;};
signed char recipe_type;
signed char use_state;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 12); }
		static __int16 TableId() { return 83; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_recipe_RecordPtr // : DrRecordPtr
	{
		craft_recipe_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}