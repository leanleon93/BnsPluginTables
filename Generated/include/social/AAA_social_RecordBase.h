/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct social_Record : DrEl
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
__int32 duration;
Data::TableRef balloon_text;
int balloon_text_tableId(){return 405;};
bool voice_sync;
char Pad0[3];
wchar_t* show;
__int32 balloon_duration;
__int32 kismet_start_time;
wchar_t* kismet;
__int8 rotate;
char Pad1[3];
Data::TableRef spawn_cinematic;
int spawn_cinematic_tableId(){return 56;};
Data::TableRef message;
int message_tableId(){return 151;};
__int8 message_target_type;
__int8 message_contents_type;

		static TableVersion Version() { return TableVersion(0, 25); }
		static __int16 TableId() { return 367; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) social_RecordPtr // : DrRecordPtr
	{
		social_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::social_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}