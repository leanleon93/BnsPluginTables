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
int soul_boost_event_tableId(){return 368;};
__int8 max_pc_count;
char Pad0[3];
wchar_t* start_time;
wchar_t* end_time;
wchar_t* result_expiration_time;
__int8 season_slot_id;
char Pad1[3];
wchar_t* season_name;
wchar_t* season_name_en;
wchar_t* season_name_fr;
wchar_t* season_name_de;
wchar_t* season_name_pt;
wchar_t* season_name_th;
wchar_t* season_name_vn;
BnsTables::Shared::TableRef season_name_text;
int season_name_text_tableId(){return 405;};
wchar_t* season_banner_image_ref;
bool is_battle_pass;
__int8 required_level;
__int8 required_mastery_level;
char Pad2[1];
BnsTables::Shared::TableRef required_preceding_quest[2];
int required_preceding_quest_tableId(){return 283;};
BnsTables::Shared::TableRef purchase_grade_item[10];
int purchase_grade_item_tableId(){return 189;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 1); }
		static __int16 TableId() { return 373; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_season_RecordPtr // : DrRecordPtr
	{
		soul_boost_season_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soul_boost_season_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}