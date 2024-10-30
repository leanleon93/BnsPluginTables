/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct randomstore_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char random_store_number;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char limit_level;
bool free_draw_enable;
bool item_draw_enable;
bool money_draw_enable;
bool instant_payment_draw_enable;
char Pad0[3];
BnsTables::Shared::TableRef charge_of_item_draw;
int charge_of_item_draw_tableId() const {return 195;};
__int64 charge_of_money_draw;
BnsTables::Shared::TableRef charge_of_item_instant_payment_draw;
int charge_of_item_instant_payment_draw_tableId() const {return 195;};
BnsTables::Shared::TableRef charge_of_item_five_times_draw;
int charge_of_item_five_times_draw_tableId() const {return 195;};
signed char charge_of_item_count_five_times_draw;
char Pad1[3];
__int64 charge_of_money_five_times_draw;
BnsTables::Shared::TableRef charge_of_item_instant_payment_five_times_draw;
int charge_of_item_instant_payment_five_times_draw_tableId() const {return 195;};
bool free_reward_draw_enable;
char Pad2[3];
__int32 free_reward_draw_add_value;
bool premium_reward_draw_enable;
char Pad3[1];
__int16 premium_reward_draw_premium_draw_count;
__int32 acquire_draw_reward_set_repeat_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 8); }
		static __int16 TableId() { return 305; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) randomstore_RecordPtr // : DrRecordPtr
	{
		randomstore_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}