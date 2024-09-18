/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct time_limit_field_zone_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef time_limit_quota;
int time_limit_quota_tableId(){return 66;};
__int8 required_level;
__int8 required_mastery_level;
char Pad0[2];
BnsTables::Shared::TableRef required_cost;
int required_cost_tableId(){return 76;};
BnsTables::Shared::TableRef time_limit_field_zone_name2;
int time_limit_field_zone_name2_tableId(){return 405;};
BnsTables::Shared::TableRef time_limit_field_zone_desc;
int time_limit_field_zone_desc_tableId(){return 405;};
__int8 ui_text_grade;
char Pad1[3];
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};
__int16 recommend_attack_power;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 406; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) time_limit_field_zone_RecordPtr // : DrRecordPtr
	{
		time_limit_field_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::time_limit_field_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}