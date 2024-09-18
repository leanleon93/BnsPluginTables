/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct cinema_result_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 race;
__int8 sex;
bool success;
__int8 game_mode;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef result_cinematic;
int result_cinematic_tableId(){return 56;};
wchar_t* panel_name;
wchar_t* level_seq_event_name;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 2); }
		static __int16 TableId() { return 55; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) cinema_result_RecordPtr // : DrRecordPtr
	{
		cinema_result_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::cinema_result_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}