/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct vehicle_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef appearance;
int appearance_tableId() const {return 440;};
BnsTables::Shared::TableRef context_script;
int context_script_tableId() const {return 75;};
signed char disable_move_type[8];
__int32 disable_move_type_Size() const {return 8;};
__int32 group;
__int32 level;
BnsTables::Shared::TableRef item;
int item_tableId() const {return 197;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 0); }
		static __int16 TableId() { return 441; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) vehicle_RecordPtr // : DrRecordPtr
	{
		vehicle_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}