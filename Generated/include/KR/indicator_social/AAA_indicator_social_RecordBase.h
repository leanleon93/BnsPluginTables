/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct indicator_social_Record : BnsTables::Shared::DrEl
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
__int32 interval;
__int32 duration2;
__int32 begine_time2[10];
__int32 begine_time2_Size() const {return 10;};
BnsTables::Shared::TableRef balloon_text2[10];
__int32 balloon_text2_Size() const {return 10;};
int balloon_text2_tableId() const {return 438;};
__int32 balloon_text2_duration[10];
__int32 balloon_text2_duration_Size() const {return 10;};
bool voice_sync[10];
__int32 voice_sync_Size() const {return 10;};
char Pad0[2];
wchar_t* show2[10];
__int32 show2_Size() const {return 10;};
signed char rotate2[10];
__int32 rotate2_Size() const {return 10;};
char Pad1[2];
BnsTables::Shared::TableRef sub_npc2[10];
__int32 sub_npc2_Size() const {return 10;};
int sub_npc2_tableId() const {return 279;};
BnsTables::Shared::TableRef sub_indicator_social2[10];
__int32 sub_indicator_social2_Size() const {return 10;};
int sub_indicator_social2_tableId() const {return 192;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 18); }
		static __int16 TableId() { return 192; }
		static __int32 SubType() { return -1; }
		enum class rotate2 {
			keep = 0,
			server_yaw = 1,
			toplayer = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) indicator_social_RecordPtr // : DrRecordPtr
	{
		indicator_social_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}