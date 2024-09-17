/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct ranking2_season_Record : DrEl
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
Data::TableRef season_group;
int season_group_tableId(){return 301;};
__int8 season_number;
__int8 season_type;
char Pad0[2];
wchar_t* name;
wchar_t* name_en;
wchar_t* name_fr;
wchar_t* name_de;
wchar_t* name_pt;
wchar_t* name_th;
wchar_t* name_vn;
Data::TableRef name_text;
int name_text_tableId(){return 405;};
bool job_ranking;
char Pad1[3];
Data::TableRef total_season;
int total_season_tableId(){return 300;};
Data::TableRef season_schedule[20];
int season_schedule_tableId(){return 302;};
Data::TableRef main_season_schedule;
int main_season_schedule_tableId(){return 302;};
wchar_t* season_representative_icon;
wchar_t* list_background_imageset;

		static TableVersion Version() { return TableVersion(9, 3); }
		static __int16 TableId() { return 300; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_season_RecordPtr // : DrRecordPtr
	{
		ranking2_season_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_season_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}