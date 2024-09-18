/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

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
int name_tableId(){return 420;};
BnsTables::Shared::TableRef description;
int description_tableId(){return 420;};
BnsTables::Shared::TableRef constellation;
int constellation_tableId(){return 64;};
__int8 star_type;
__int8 order;
__int8 required_pc_level;
__int8 required_pc_mastery_level;
BnsTables::Shared::TableRef required_quest;
int required_quest_tableId(){return 294;};
__int16 required_achievement_id;
__int16 required_achievement_step;
__int16 activate_probability;
char Pad0[2];
__int32 activate_cost_money;
BnsTables::Shared::TableRef activate_cost_item[6];
int activate_cost_item_tableId(){return 195;};
__int16 activate_cost_item_count[6];
bool draw_enable;
char Pad1[3];
__int32 draw_option_cost_money;
BnsTables::Shared::TableRef draw_option_cost_item[6];
int draw_option_cost_item_tableId(){return 195;};
__int16 draw_option_cost_item_count[6];
__int8 option_select_count;
char Pad2[3];
BnsTables::Shared::TableRef option[50];
int option_tableId(){return 66;};
__int16 option_weight[50];
__int32 option_weight_total;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 1); }
		static __int16 TableId() { return 65; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) constellation_star_RecordPtr // : DrRecordPtr
	{
		constellation_star_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::constellation_star_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}