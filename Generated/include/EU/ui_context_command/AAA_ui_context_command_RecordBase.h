/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct ui_context_command_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char target;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char command[30];
__int32 command_Size() const {return 30;};
signed char default_command[15];
__int32 default_command_Size() const {return 15;};
signed char main_command_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 44); }
		static __int16 TableId() { return 429; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ui_context_command_RecordPtr // : DrRecordPtr
	{
		ui_context_command_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}