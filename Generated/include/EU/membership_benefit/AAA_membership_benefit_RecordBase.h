/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct membership_benefit_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char benefit_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
char Pad0[3];
__int64 value;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 435;};
BnsTables::Shared::IconRef icon;
wchar_t* icon_image_set;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(8, 0); }
		static __int16 TableId() { return 270; }
		static __int32 SubType() { return -1; }
		enum class benefit_type {
			none = 0,
			gettable_blue_virtual_currency = 1,
			discount_market_tax = 2,
			concurrent_sale_count_bonus = 3,
			accumulated_sale_count_bonus = 4,
			unlocated_warehouse = 5,
			premium_depository = 6,
			consume_depository = 7,
			stack_sale_bonus = 8,
			additional_npc_kill_exp_diff_by_zone_rule = 9,
			additional_npc_kill_exp_percent_by_zone_rule = 10,
			additional_npc_kill_money_diff_by_zone_rule = 11,
			additional_npc_kill_money_percent_by_zone_rule = 12,
			accumulated_purchase_count_bonus = 13,
			purchase_min_price_bonus = 14,
			skip_purchase_required_quest = 15,
			discount_money_post_send_tax = 16,
			discount_market_purchase_tax = 17,
			skip_market_trade_min_level = 18,
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
	struct __declspec(align(4)) membership_benefit_RecordPtr // : DrRecordPtr
	{
		membership_benefit_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}