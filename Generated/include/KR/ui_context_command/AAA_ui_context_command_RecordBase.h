/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct ui_context_command_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 target;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 command[30];
__int8 default_command[15];
__int8 main_command_count;

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
		//__unaligned __declspec(align(1)) const Data::ui_context_command_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}