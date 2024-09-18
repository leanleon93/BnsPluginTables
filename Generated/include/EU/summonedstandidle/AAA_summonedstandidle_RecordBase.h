/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct summonedstandidle_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 skip_time;
__int32 event_time;
wchar_t* idle_event_ani_1[4];
__int16 idle_event_ani_rate_1[4];
__int16 lobby_idle_event_ani_rate_1[4];
__int8 idle_event_type_1[4];
wchar_t* second_idle;
wchar_t* idle_event_ani_2[4];
__int16 idle_event_ani_rate_2[4];
__int16 lobby_idle_event_ani_rate_2[4];
__int8 idle_event_type_2[4];
__int16 hp_idle_rate;
char Pad0[2];
wchar_t* hp_idle;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 396; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summonedstandidle_RecordPtr // : DrRecordPtr
	{
		summonedstandidle_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::summonedstandidle_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}