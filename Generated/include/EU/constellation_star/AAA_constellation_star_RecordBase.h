/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct constellation_star_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef name;
int name_tableId() const {return 427;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 427;};
BnsTables::Shared::TableRef constellation;
int constellation_tableId() const {return 64;};
signed char star_type;
signed char order;
signed char required_pc_level;
signed char required_pc_mastery_level;
BnsTables::Shared::TableRef required_quest;
int required_quest_tableId() const {return 299;};
__int16 required_achievement_id;
__int16 required_achievement_step;
__int16 activate_probability;
char Pad0[2];
__int32 activate_cost_money;
BnsTables::Shared::TableRef activate_cost_item[6];
__int32 activate_cost_item_Size() const {return 6;};
int activate_cost_item_tableId() const {return 198;};
__int16 activate_cost_item_count[6];
__int32 activate_cost_item_count_Size() const {return 6;};
bool draw_enable;
char Pad1[3];
__int32 draw_option_cost_money;
BnsTables::Shared::TableRef draw_option_cost_item[6];
__int32 draw_option_cost_item_Size() const {return 6;};
int draw_option_cost_item_tableId() const {return 198;};
__int16 draw_option_cost_item_count[6];
__int32 draw_option_cost_item_count_Size() const {return 6;};
signed char option_select_count;
char Pad2[3];
BnsTables::Shared::TableRef option[50];
__int32 option_Size() const {return 50;};
int option_tableId() const {return 66;};
__int16 option_weight[50];
__int32 option_weight_Size() const {return 50;};
__int32 option_weight_total;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 1); }
		static __int16 TableId() { return 65; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) constellation_star_RecordPtr // : DrRecordPtr
	{
		constellation_star_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}