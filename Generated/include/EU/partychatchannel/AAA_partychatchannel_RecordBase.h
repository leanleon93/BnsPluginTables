/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
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
__int8 chnnelid;
char Pad0[3];
BnsTables::Shared::TableRef name;
int name_tableId(){return 405;};
BnsTables::Shared::TableRef name_party_number;
int name_party_number_tableId(){return 405;};
BnsTables::Shared::TableRef district;
int district_tableId(){return 100;};
BnsTables::Shared::TableRef map_group_1;
int map_group_1_tableId(){return 237;};
__int8 arrange_type;
char Pad1[3];
BnsTables::Shared::TableRef group_name;
int group_name_tableId(){return 405;};
__int8 grade;
char Pad2[1];
__int16 auto_recruittime;
bool use_team_type;
bool use_difficulty_type[3];
BnsTables::Shared::TableRef interdungeon;
int interdungeon_tableId(){return 182;};
BnsTables::Shared::TableRef party_match;
int party_match_tableId(){return 263;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 98); }
		static __int16 TableId() { return 262; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) partychatchannel_RecordPtr // : DrRecordPtr
	{
		partychatchannel_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::partychatchannel_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}