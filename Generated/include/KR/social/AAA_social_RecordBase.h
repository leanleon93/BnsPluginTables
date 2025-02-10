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
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 duration;
BnsTables::Shared::TableRef balloon_text;
int balloon_text_tableId() const {return 425;};
bool voice_sync;
char Pad0[3];
wchar_t* show;
__int32 balloon_duration;
__int32 kismet_start_time;
wchar_t* kismet;
signed char rotate;
char Pad1[3];
BnsTables::Shared::TableRef spawn_cinematic;
int spawn_cinematic_tableId() const {return 57;};
BnsTables::Shared::TableRef message;
int message_tableId() const {return 156;};
signed char message_target_type;
signed char message_contents_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 25); }
		static __int16 TableId() { return 387; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) social_RecordPtr // : DrRecordPtr
	{
		social_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}