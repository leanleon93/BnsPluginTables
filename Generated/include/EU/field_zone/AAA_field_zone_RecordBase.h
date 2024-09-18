/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
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
int zone_tableId(){return 443;};
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
BnsTables::Shared::TableRef attraction_quest[5];
int attraction_quest_tableId(){return 283;};
bool ui_filter_attraction_quest_only;
char Pad0[3];
BnsTables::Shared::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId(){return 405;};
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 405;};
BnsTables::Shared::TableRef desc;
int desc_tableId(){return 405;};
__int8 ui_text_grade;
char Pad1[3];
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId(){return 18;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 16); }
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