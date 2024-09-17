/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct soul_boost_event_Record : DrEl
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
Data::TableRef event_name_text;
int event_name_text_tableId(){return 405;};
wchar_t* event_name;
wchar_t* event_name_en;
wchar_t* event_name_fr;
wchar_t* event_name_de;
wchar_t* event_name_pt;
wchar_t* event_name_th;
wchar_t* event_name_vn;
__int8 mission_step_name_type;
char Pad0[3];
wchar_t* front_imageset;
wchar_t* back_imageset;
wchar_t* foot_imageset;
wchar_t* slot_imageset;
__int32 max_point;
__int32 max_item_point;
__int32 grade_point[100];
Data::TableRef grade_reward[100];
int grade_reward_tableId(){return 369;};
Data::TableRef bm_grade_reward[100];
int bm_grade_reward_tableId(){return 369;};
__int32 exchange_reward_point;
Data::TableRef exchange_reward_item;
int exchange_reward_item_tableId(){return 189;};
__int16 exchange_reward_item_count;
char Pad1[2];
__int32 bm_exchange_reward_point;
Data::TableRef bm_exchange_reward_item;
int bm_exchange_reward_item_tableId(){return 189;};
__int16 bm_exchange_reward_item_count;
__int8 bm_accumulate_reward_interval_day;
char Pad2[1];
Data::TableRef bm_accumulate_reward_item;
int bm_accumulate_reward_item_tableId(){return 189;};
__int16 bm_accumulate_reward_item_count;
__int8 bm_accumulate_reward_start_time_type;
char Pad3[1];
Data::TableRef bm_activate_item;
int bm_activate_item_tableId(){return 189;};
__int16 bm_activate_item_count;
__int8 unlocated_store_type;
char Pad4[1];
Data::TableRef mission_step[40];
int mission_step_tableId(){return 371;};
Data::TableRef core_reward_item[10];
int core_reward_item_tableId(){return 189;};
bool purchase_grade;

		static TableVersion Version() { return TableVersion(6, 1); }
		static __int16 TableId() { return 368; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_event_RecordPtr // : DrRecordPtr
	{
		soul_boost_event_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soul_boost_event_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}