/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct static_chat_channel_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name2;
int name2_tableId(){return 405;};
__int8 partychanneltype;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 382; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) static_chat_channel_RecordPtr // : DrRecordPtr
	{
		static_chat_channel_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::static_chat_channel_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}