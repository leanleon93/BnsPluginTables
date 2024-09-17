/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct field_zone_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef zone[30];
int zone_tableId(){return 443;};
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef attraction_quest[5];
int attraction_quest_tableId(){return 283;};
bool ui_filter_attraction_quest_only;
char Pad0[3];
Data::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId(){return 405;};
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
__int8 ui_text_grade;
char Pad1[3];
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};

		static TableVersion Version() { return TableVersion(0, 16); }
		static __int16 TableId() { return 140; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) field_zone_RecordPtr // : DrRecordPtr
	{
		field_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::field_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}