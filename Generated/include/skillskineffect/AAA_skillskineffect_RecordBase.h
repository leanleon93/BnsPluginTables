/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct skillskineffect_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
__int16 skillskin_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* normal_component;
wchar_t* critical_component;
wchar_t* back_normal_component;
wchar_t* back_critical_component;
wchar_t* buff_continuance_component;
wchar_t* immune_buff_component;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 345; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillskineffect_RecordPtr // : DrRecordPtr
	{
		skillskineffect_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillskineffect_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}