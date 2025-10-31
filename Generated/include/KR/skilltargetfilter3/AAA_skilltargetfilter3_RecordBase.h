/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skilltargetfilter3_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef fire_filter_target[8];
__int32 fire_filter_target_Size() const {return 8;};
int fire_filter_target_tableId() const {return 150;};
BnsTables::Shared::TableRef exec_filter_target[8];
__int32 exec_filter_target_Size() const {return 8;};
int exec_filter_target_tableId() const {return 150;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 378; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skilltargetfilter3_RecordPtr // : DrRecordPtr
	{
		skilltargetfilter3_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}