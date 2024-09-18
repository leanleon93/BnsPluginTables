/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct social_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef balloon_text;
int balloon_text_tableId(){return 420;};
bool voice_sync;
char Pad0[3];
wchar_t* show;
__int32 balloon_duration;
__int32 kismet_start_time;
wchar_t* kismet;
__int8 rotate;
char Pad1[3];
BnsTables::Shared::TableRef spawn_cinematic;
int spawn_cinematic_tableId(){return 57;};
BnsTables::Shared::TableRef message;
int message_tableId(){return 155;};
__int8 message_target_type;
__int8 message_contents_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 25); }
		static __int16 TableId() { return 382; }
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