/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct battlemessage_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 object_type;
__int8 skill_result_type;
__int8 effect_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef game_message;
int game_message_tableId(){return 155;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 31; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battlemessage_RecordPtr // : DrRecordPtr
	{
		battlemessage_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::battlemessage_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}