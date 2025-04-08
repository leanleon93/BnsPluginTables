/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class field_zone_RecordSubType : __int32
    {
		field_zone_record_sub_normal = 0,
		field_zone_record_sub_guild_battle_field_entrance = 1,
		field_zone_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct field_zone_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef zone[30];
__int32 zone_Size() const {return 30;};
int zone_tableId() const {return 471;};
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
BnsTables::Shared::TableRef attraction_quest[5];
__int32 attraction_quest_Size() const {return 5;};
int attraction_quest_tableId() const {return 299;};
bool ui_filter_attraction_quest_only;
char Pad0[3];
BnsTables::Shared::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId() const {return 427;};
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 427;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 427;};
signed char ui_text_grade;
char Pad1[3];
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 16); }
		static __int16 TableId() { return 146; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) field_zone_RecordPtr // : DrRecordPtr
	{
		field_zone_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}