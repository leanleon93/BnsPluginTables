/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct zonepcspawn_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;
__int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::XYZ pos;
Data::XYZ summon_pos;
__int16 yaw;
char Pad0[2];
wchar_t* description;

		static TableVersion Version() { return TableVersion(0, 49); }
		static __int16 TableId() { return 452; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonepcspawn_RecordPtr // : DrRecordPtr
	{
		zonepcspawn_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonepcspawn_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}