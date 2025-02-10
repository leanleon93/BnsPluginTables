/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class user_command_RecordSubType : __int32
    {
		user_command_record_sub_command = 0,
		user_command_record_sub_social = 1,
		user_command_record_sub_system_social = 2,
		user_command_record_sub_emoticon = 3,
		user_command_record_sub_count = 4,
    };
#pragma pack(push, 1)
	struct user_command_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef text;
int text_tableId() const {return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 41); }
		static __int16 TableId() { return 432; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) user_command_RecordPtr // : DrRecordPtr
	{
		user_command_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}