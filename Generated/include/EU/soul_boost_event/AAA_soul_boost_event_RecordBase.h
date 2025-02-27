/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct soul_boost_event_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef event_name_text;
int event_name_text_tableId() const {return 426;};
wchar_t* event_name;
wchar_t* event_name_en;
wchar_t* event_name_fr;
wchar_t* event_name_de;
wchar_t* event_name_pt;
wchar_t* event_name_th;
wchar_t* event_name_vn;
signed char mission_step_name_type;
char Pad0[3];
wchar_t* front_imageset;
wchar_t* back_imageset;
wchar_t* foot_imageset;
wchar_t* slot_imageset;
__int32 max_point;
__int32 max_item_point;
__int32 grade_point[100];
__int32 grade_point_Size() const {return 100;};
BnsTables::Shared::TableRef grade_reward[100];
__int32 grade_reward_Size() const {return 100;};
int grade_reward_tableId() const {return 390;};
BnsTables::Shared::TableRef bm_grade_reward[100];
__int32 bm_grade_reward_Size() const {return 100;};
int bm_grade_reward_tableId() const {return 390;};
__int32 exchange_reward_point;
BnsTables::Shared::TableRef exchange_reward_item;
int exchange_reward_item_tableId() const {return 197;};
__int16 exchange_reward_item_count;
char Pad1[2];
__int32 exchange_reward_contribution;
__int32 bm_exchange_reward_point;
BnsTables::Shared::TableRef bm_exchange_reward_item;
int bm_exchange_reward_item_tableId() const {return 197;};
__int16 bm_exchange_reward_item_count;
char Pad2[2];
__int32 bm_exchange_reward_contribution;
signed char bm_accumulate_reward_interval_day;
char Pad3[3];
BnsTables::Shared::TableRef bm_accumulate_reward_item;
int bm_accumulate_reward_item_tableId() const {return 197;};
__int16 bm_accumulate_reward_item_count;
signed char bm_accumulate_reward_start_time_type;
char Pad4[1];
BnsTables::Shared::TableRef bm_activate_item;
int bm_activate_item_tableId() const {return 197;};
__int16 bm_activate_item_count;
signed char unlocated_store_type;
char Pad5[1];
BnsTables::Shared::TableRef mission_step[40];
__int32 mission_step_Size() const {return 40;};
int mission_step_tableId() const {return 392;};
BnsTables::Shared::TableRef core_reward_item[10];
__int32 core_reward_item_Size() const {return 10;};
int core_reward_item_tableId() const {return 197;};
bool purchase_grade;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(8, 1); }
		static __int16 TableId() { return 389; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_event_RecordPtr // : DrRecordPtr
	{
		soul_boost_event_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}