/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct closet_group_Record : BnsTables::Shared::DrEl
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
		signed char category;
char Pad0[1];
__int16 sort_no;
BnsTables::Shared::TableRef charge_of_item_for_instant_payment;
int charge_of_item_for_instant_payment_tableId() const {return 202;};
BnsTables::Shared::TableRef item_to_be_paid;
int item_to_be_paid_tableId() const {return 202;};
bool check_equip_characteristics;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 1); }
		static __int16 TableId() { return 60; }
		static __int32 SubType() { return -1; }
		enum class category {
			none = 0,
			custom = 1,
			jeryoung = 2,
			daesanak = 3,
			suwal = 4,
			baekchung = 5,
			geonwon = 6,
			seorock = 7,
			seongye = 8,
			northland_east = 9,
			npc_trade = 10,
			transform = 11,
			event = 12,
			shop = 13,
			faction = 14,
			etc = 15,
			cashshop = 16,
			ingameshop = 17,
			yongyuenshop = 18,
			fashionista = 19,
			unusable = 20,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) closet_group_RecordPtr // : DrRecordPtr
	{
		closet_group_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}