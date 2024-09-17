/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct vehicle_Record : DrEl
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
__int16 vehicle_speed;
char Pad0[2];
__int32 sprint_speed;
__int32 glide_speed;
__int32 boost_speed;
__int32 turn_rate;
__int32 jump_height;
__int32 jump_run_height;
__int32 jump_sprint_height;
__int32 riding_action_duration;
Data::TableRef appearance;
int appearance_tableId(){return 419;};
Data::TableRef context_script;
int context_script_tableId(){return 74;};
__int8 disable_move_type[8];
__int32 group;
__int32 level;
Data::TableRef item;
int item_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(4, 0); }
		static __int16 TableId() { return 420; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) vehicle_RecordPtr // : DrRecordPtr
	{
		vehicle_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::vehicle_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}