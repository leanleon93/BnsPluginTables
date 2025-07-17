/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct ui_command_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char command;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 427;};
wchar_t* icon;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 60); }
		static __int16 TableId() { return 435; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ui_command_RecordPtr // : DrRecordPtr
	{
		ui_command_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}