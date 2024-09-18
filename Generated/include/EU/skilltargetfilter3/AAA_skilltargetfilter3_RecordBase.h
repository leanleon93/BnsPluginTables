/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct skilltargetfilter3_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef fire_filter_target[8];
int fire_filter_target_tableId(){return 141;};
BnsTables::Shared::TableRef exec_filter_target[8];
int exec_filter_target_tableId(){return 141;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 349; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skilltargetfilter3_RecordPtr // : DrRecordPtr
	{
		skilltargetfilter3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skilltargetfilter3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}