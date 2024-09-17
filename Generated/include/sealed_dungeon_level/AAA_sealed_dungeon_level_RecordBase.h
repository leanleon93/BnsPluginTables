/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct sealed_dungeon_level_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 sealed_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 sealed_exp;
wchar_t* scroll_level_font;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 315; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) sealed_dungeon_level_RecordPtr // : DrRecordPtr
	{
		sealed_dungeon_level_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::sealed_dungeon_level_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}