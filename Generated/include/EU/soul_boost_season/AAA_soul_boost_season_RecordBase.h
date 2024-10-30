/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct soul_boost_season_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef soul_boost_event;
int soul_boost_event_tableId() const {return 383;};
signed char max_pc_count;
char Pad0[3];
wchar_t* start_time;
wchar_t* end_time;
wchar_t* result_expiration_time;
signed char season_slot_id;
char Pad1[3];
wchar_t* season_name;
wchar_t* season_name_en;
wchar_t* season_name_fr;
wchar_t* season_name_de;
wchar_t* season_name_pt;
wchar_t* season_name_th;
wchar_t* season_name_vn;
BnsTables::Shared::TableRef season_name_text;
int season_name_text_tableId() const {return 420;};
wchar_t* season_banner_image_ref;
bool is_battle_pass;
signed char required_level;
signed char required_mastery_level;
char Pad2[1];
BnsTables::Shared::TableRef required_preceding_quest[2];
__int32 required_preceding_quest_Size() const {return 2;};
int required_preceding_quest_tableId() const {return 294;};
BnsTables::Shared::TableRef purchase_grade_item[10];
__int32 purchase_grade_item_Size() const {return 10;};
int purchase_grade_item_tableId() const {return 195;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 1); }
		static __int16 TableId() { return 388; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_season_RecordPtr // : DrRecordPtr
	{
		soul_boost_season_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}