/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct ranking2_season_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef season_group;
int season_group_tableId() const {return 314;};
signed char season_number;
signed char season_type;
char Pad0[2];
wchar_t* name;
wchar_t* name_en;
wchar_t* name_fr;
wchar_t* name_de;
wchar_t* name_pt;
wchar_t* name_th;
wchar_t* name_vn;
BnsTables::Shared::TableRef name_text;
int name_text_tableId() const {return 420;};
bool job_ranking;
char Pad1[3];
BnsTables::Shared::TableRef total_season;
int total_season_tableId() const {return 313;};
BnsTables::Shared::TableRef season_schedule[20];
__int32 season_schedule_Size() const {return 20;};
int season_schedule_tableId() const {return 315;};
BnsTables::Shared::TableRef main_season_schedule;
int main_season_schedule_tableId() const {return 315;};
wchar_t* season_representative_icon;
wchar_t* list_background_imageset;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(9, 3); }
		static __int16 TableId() { return 313; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_season_RecordPtr // : DrRecordPtr
	{
		ranking2_season_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}