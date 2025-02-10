/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct guild_craft_recipe_Record : BnsTables::Shared::DrEl
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
signed char craft_type;
signed char required_guild_level;
char Pad0[2];
BnsTables::Shared::TableRef required_faction;
int required_faction_tableId() const {return 136;};
signed char production_type[7];
__int32 production_type_Size() const {return 7;};
char Pad1[1];
__int16 production_type_required_exp[7];
__int32 production_type_required_exp_Size() const {return 7;};
signed char production_type_required_pc_count[7];
__int32 production_type_required_pc_count_Size() const {return 7;};
char Pad2[3];
__int32 contract_money;
BnsTables::Shared::TableRef contract_item[5];
__int32 contract_item_Size() const {return 5;};
int contract_item_tableId() const {return 197;};
__int16 contract_item_count[5];
__int32 contract_item_count_Size() const {return 5;};
char Pad3[2];
BnsTables::Shared::TableRef contract_bm_item;
int contract_bm_item_tableId() const {return 197;};
__int16 contract_bm_item_count;
char Pad4[2];
BnsTables::Shared::TableRef rent_bm_item;
int rent_bm_item_tableId() const {return 197;};
__int16 rent_bm_item_count;
char Pad5[2];
BnsTables::Shared::TableRef material[15];
__int32 material_Size() const {return 15;};
int material_tableId() const {return 197;};
__int16 material_count[15];
__int32 material_count_Size() const {return 15;};
__int16 material_donation_point[15];
__int32 material_donation_point_Size() const {return 15;};
BnsTables::Shared::TableRef brand_material[3];
__int32 brand_material_Size() const {return 3;};
int brand_material_tableId() const {return 190;};
signed char brand_material_condition_type[3];
__int32 brand_material_condition_type_Size() const {return 3;};
char Pad6[1];
__int16 brand_material_count[3];
__int32 brand_material_count_Size() const {return 3;};
__int16 brand_material_donation_point[3];
__int32 brand_material_donation_point_Size() const {return 3;};
__int32 time_cost;
BnsTables::Shared::TableRef result;
int result_tableId() const {return 197;};
__int16 result_count;
signed char result_bonus_guildlevel;
char Pad7[1];
__int16 result_bonus_count;
signed char result_receive_type;
signed char use_state;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 169; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_craft_recipe_RecordPtr // : DrRecordPtr
	{
		guild_craft_recipe_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}