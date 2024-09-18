/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct soul_boost_mission_step_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef event;
int event_tableId(){return 383;};
__int8 step_number;
__int8 open_condition_type;
__int16 open_condition_value;
__int8 viewable_type;
char Pad0[3];
BnsTables::Shared::TableRef mission_task[50];
int mission_task_tableId(){return 387;};
BnsTables::Shared::TableRef mission_step_reward_item[4];
int mission_step_reward_item_tableId(){return 195;};
__int16 mission_step_reward_item_count[4];
wchar_t* name;
wchar_t* name_en;
wchar_t* name_fr;
wchar_t* name_de;
wchar_t* name_pt;
wchar_t* name_th;
wchar_t* name_vn;
BnsTables::Shared::TableRef name_text;
int name_text_tableId(){return 420;};
wchar_t* description;
wchar_t* description_en;
wchar_t* description_fr;
wchar_t* description_de;
wchar_t* description_pt;
wchar_t* description_th;
wchar_t* description_vn;
BnsTables::Shared::TableRef description_text;
int description_text_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(7, 1); }
		static __int16 TableId() { return 386; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_mission_step_RecordPtr // : DrRecordPtr
	{
		soul_boost_mission_step_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soul_boost_mission_step_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}