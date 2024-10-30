/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct soul_boost_mission_task_Record : BnsTables::Shared::DrEl
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
wchar_t* name;
wchar_t* name_en;
wchar_t* name_fr;
wchar_t* name_de;
wchar_t* name_pt;
wchar_t* name_th;
wchar_t* name_vn;
BnsTables::Shared::TableRef name_text;
int name_text_tableId() const {return 420;};
BnsTables::Shared::TableRef event;
int event_tableId() const {return 383;};
BnsTables::Shared::TableRef mission_step;
int mission_step_tableId() const {return 386;};
signed char task_number;
char Pad0[3];
BnsTables::Shared::TableRef mission;
int mission_tableId() const {return 385;};
signed char proceedable_type;
signed char actor_type;
char Pad1[2];
__int64 goal_count;
__int32 mission_point;
signed char mission_level;
char Pad2[3];
wchar_t* description;
wchar_t* description_en;
wchar_t* description_fr;
wchar_t* description_de;
wchar_t* description_pt;
wchar_t* description_th;
wchar_t* description_vn;
BnsTables::Shared::TableRef description_text;
int description_text_tableId() const {return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 2); }
		static __int16 TableId() { return 387; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_mission_task_RecordPtr // : DrRecordPtr
	{
		soul_boost_mission_task_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}