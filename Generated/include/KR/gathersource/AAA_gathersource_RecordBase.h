/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct gathersource_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char gather_type;
__int16 required_pc_level;
signed char required_gather_level;
char Pad0[1];
__int16 max_range;
char Pad1[2];
BnsTables::Shared::TableRef item[4];
__int32 item_Size() const {return 4;};
int item_tableId() const {return 195;};
signed char item_count_min[4];
__int32 item_count_min_Size() const {return 4;};
signed char item_count_max[4];
__int32 item_count_max_Size() const {return 4;};
signed char item_probability[4];
__int32 item_probability_Size() const {return 4;};
__int16 reward_exp;
char Pad2[2];
__int32 gather_action_duration;
__int32 respawn_time;
wchar_t* mesh_name;
wchar_t* animset_name;
wchar_t* gather_start_animname;
wchar_t* gather_end_animname;
wchar_t* gather_stay_animname;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 156; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) gathersource_RecordPtr // : DrRecordPtr
	{
		gathersource_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}