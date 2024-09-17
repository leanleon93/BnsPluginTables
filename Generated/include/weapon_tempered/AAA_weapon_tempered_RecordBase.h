/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct weapon_tempered_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 weapon_type;
__int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* show;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 430; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) weapon_tempered_RecordPtr // : DrRecordPtr
	{
		weapon_tempered_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::weapon_tempered_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}