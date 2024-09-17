/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct constellation_star_option_Record : DrEl
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

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 65; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) constellation_star_option_RecordPtr // : DrRecordPtr
	{
		constellation_star_option_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::constellation_star_option_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}