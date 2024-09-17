/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct soul_boost_mission_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 mission_type;
__int8 entity_type[10];
char Pad0[1];
wchar_t* condition_alias[10];
__int64 condition[10];

		static TableVersion Version() { return TableVersion(5, 0); }
		static __int16 TableId() { return 370; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_mission_RecordPtr // : DrRecordPtr
	{
		soul_boost_mission_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soul_boost_mission_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}