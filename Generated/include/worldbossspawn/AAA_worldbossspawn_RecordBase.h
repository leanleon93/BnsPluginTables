/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct worldbossspawn_Record : DrEl
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
Data::TableRef npc;
int npc_tableId(){return 255;};

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 437; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) worldbossspawn_RecordPtr // : DrRecordPtr
	{
		worldbossspawn_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::worldbossspawn_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}