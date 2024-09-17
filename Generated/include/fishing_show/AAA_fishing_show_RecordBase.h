/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct fishing_show_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 show_type;
char Pad0[3];
wchar_t* player_show;
wchar_t* fishing_rod_anim;
wchar_t* fishing_float_show;
wchar_t* fish_anim;
__int32 fishing_show_duration;
bool loop;

		static TableVersion Version() { return TableVersion(0, 12); }
		static __int16 TableId() { return 147; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fishing_show_RecordPtr // : DrRecordPtr
	{
		fishing_show_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fishing_show_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}