/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct item_improve_option_list_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
char Pad0[3];
BnsTables::Shared::TableRef option[50];
__int32 option_Size() const {return 50;};
int option_tableId() const {return 212;};
__int16 option_weight[50];
__int32 option_weight_Size() const {return 50;};
__int32 option_weight_total;
__int32 draw_cost_money[4];
__int32 draw_cost_money_Size() const {return 4;};
BnsTables::Shared::TableRef draw_cost_main_item[4];
__int32 draw_cost_main_item_Size() const {return 4;};
int draw_cost_main_item_tableId() const {return 202;};
__int16 draw_cost_main_item_count[4];
__int32 draw_cost_main_item_count_Size() const {return 4;};
BnsTables::Shared::TableRef draw_cost_sub_item_1[6];
__int32 draw_cost_sub_item_1_Size() const {return 6;};
int draw_cost_sub_item_1_tableId() const {return 202;};
__int16 draw_cost_sub_item_count_1[6];
__int32 draw_cost_sub_item_count_1_Size() const {return 6;};
BnsTables::Shared::TableRef draw_cost_sub_item_2[6];
__int32 draw_cost_sub_item_2_Size() const {return 6;};
int draw_cost_sub_item_2_tableId() const {return 202;};
__int16 draw_cost_sub_item_count_2[6];
__int32 draw_cost_sub_item_count_2_Size() const {return 6;};
BnsTables::Shared::TableRef draw_cost_sub_item_3[6];
__int32 draw_cost_sub_item_3_Size() const {return 6;};
int draw_cost_sub_item_3_tableId() const {return 202;};
__int16 draw_cost_sub_item_count_3[6];
__int32 draw_cost_sub_item_count_3_Size() const {return 6;};
BnsTables::Shared::TableRef draw_cost_sub_item_4[6];
__int32 draw_cost_sub_item_4_Size() const {return 6;};
int draw_cost_sub_item_4_tableId() const {return 202;};
__int16 draw_cost_sub_item_count_4[6];
__int32 draw_cost_sub_item_count_4_Size() const {return 6;};
BnsTables::Shared::TableRef succession_random_option[50];
__int32 succession_random_option_Size() const {return 50;};
int succession_random_option_tableId() const {return 212;};
__int16 succession_random_option_weight[50];
__int32 succession_random_option_weight_Size() const {return 50;};
__int32 succession_random_option_weight_total;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 0); }
		static __int16 TableId() { return 213; }
		static __int32 SubType() { return -1; }
		enum class job {
			job_none = 0,
			geomsa = 1,
			gweonsa = 2,
			gigongsa = 3,
			gyeogsa = 4,
			yeogsa = 5,
			sohwansa = 6,
			amsarja = 7,
			gwigeomsa = 8,
			jusursa = 9,
			gigweonsa = 10,
			tusa = 11,
			gungsa = 12,
			changsursa = 13,
			noejeonsursa = 14,
			ssanggeomsa = 15,
			agsa = 16,
			pc_max = 17,
			sohwansu_ruki = 18,
			sohwansu_striker = 19,
			sohwansu_defender = 20,
			sohwansu_controller = 21,
		};

		enum class publisher {
			NONE = 0,
			NCK = 1,
			NCA = 2,
			NCJ = 3,
			NCT = 4,
			INV = 5,
			TX = 6,
			NCK_NEO_GOLD = 7,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_improve_option_list_RecordPtr // : DrRecordPtr
	{
		item_improve_option_list_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}