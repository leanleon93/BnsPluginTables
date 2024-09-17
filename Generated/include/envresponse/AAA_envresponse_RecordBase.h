/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct envresponse_Record : DrEl
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
wchar_t* trigger_kismet;
wchar_t* trigger_bgm;
__int32 trigger_bgm_duration;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 118; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) envresponse_RecordPtr // : DrRecordPtr
	{
		envresponse_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::envresponse_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}