/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct zonetriggereventcond_Record : DrEl
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
__int8 cond_contents_type;
char Pad0[3];
Data::TableRef cond_event_message;
int cond_event_message_tableId(){return 151;};

		static TableVersion Version() { return TableVersion(3, 0); }
		static __int16 TableId() { return 457; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonetriggereventcond_RecordPtr // : DrRecordPtr
	{
		zonetriggereventcond_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonetriggereventcond_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}