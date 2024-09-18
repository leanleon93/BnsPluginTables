/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct district_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 420;};
BnsTables::Shared::TableRef talk_to_self_quests[64];
int talk_to_self_quests_tableId(){return 294;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 101; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) district_RecordPtr // : DrRecordPtr
	{
		district_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::district_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}