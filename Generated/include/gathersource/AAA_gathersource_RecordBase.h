/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct gathersource_Record : DrEl
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
__int8 gather_type;
__int16 required_pc_level;
__int8 required_gather_level;
char Pad0[1];
__int16 max_range;
char Pad1[2];
Data::TableRef item[4];
int item_tableId(){return 189;};
__int8 item_count_min[4];
__int8 item_count_max[4];
__int8 item_probability[4];
__int16 reward_exp;
char Pad2[2];
__int32 gather_action_duration;
__int32 respawn_time;
wchar_t* mesh_name;
wchar_t* animset_name;
wchar_t* gather_start_animname;
wchar_t* gather_end_animname;
wchar_t* gather_stay_animname;

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 152; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) gathersource_RecordPtr // : DrRecordPtr
	{
		gathersource_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::gathersource_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}