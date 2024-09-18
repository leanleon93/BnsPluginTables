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
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 interval;
__int32 duration2;
__int32 begine_time2[10];
BnsTables::Shared::TableRef balloon_text2[10];
int balloon_text2_tableId(){return 420;};
__int32 balloon_text2_duration[10];
bool voice_sync[10];
char Pad0[2];
wchar_t* show2[10];
__int8 rotate2[10];
char Pad1[2];
BnsTables::Shared::TableRef sub_npc2[10];
int sub_npc2_tableId(){return 265;};
BnsTables::Shared::TableRef sub_indicator_social2[10];
int sub_indicator_social2_tableId(){return 185;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 18); }
		static __int16 TableId() { return 185; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) indicator_social_RecordPtr // : DrRecordPtr
	{
		indicator_social_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::indicator_social_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}