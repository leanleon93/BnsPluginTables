/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class partychatchannel_RecordSubType : __int32
    {
		partychatchannel_record_sub_normal = 0,
		partychatchannel_record_sub_main_faction = 1,
		partychatchannel_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct partychatchannel_Record : BnsTables::Shared::DrEl
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
signed char chnnelid;
char Pad0[3];
BnsTables::Shared::TableRef name;
int name_tableId() const {return 435;};
BnsTables::Shared::TableRef name_party_number;
int name_party_number_tableId() const {return 435;};
BnsTables::Shared::TableRef district;
int district_tableId() const {return 104;};
BnsTables::Shared::TableRef map_group_1;
int map_group_1_tableId() const {return 254;};
signed char arrange_type;
char Pad1[3];
BnsTables::Shared::TableRef group_name;
int group_name_tableId() const {return 435;};
signed char grade;
char Pad2[1];
__int16 auto_recruittime;
bool use_team_type;
bool use_difficulty_type[3];
__int32 use_difficulty_type_Size() const {return 3;};
BnsTables::Shared::TableRef interdungeon;
int interdungeon_tableId() const {return 194;};
BnsTables::Shared::TableRef party_match;
int party_match_tableId() const {return 286;};
BnsTables::Shared::TableRef teleport;
int teleport_tableId() const {return 431;};
BnsTables::Shared::TableRef dungeon;
int dungeon_tableId() const {return 117;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 285; }
		static __int32 SubType() { return -1; }
		enum class chnnelid {
			none = 0,
			value_1 = 1,
			value_2 = 2,
			value_3 = 3,
			value_4 = 4,
			value_5 = 5,
			value_6 = 6,
		};

		enum class arrange_type {
			district = 0,
			group_name = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) partychatchannel_RecordPtr // : DrRecordPtr
	{
		partychatchannel_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}