/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct user_command_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef text;
int text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 41); }
		static __int16 TableId() { return 417; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) user_command_RecordPtr // : DrRecordPtr
	{
		user_command_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::user_command_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}