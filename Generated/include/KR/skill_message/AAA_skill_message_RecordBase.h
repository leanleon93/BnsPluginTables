/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_message_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 skill3_id;
__int8 variation_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef message[4];
int message_tableId(){return 155;};
__int16 probability[4];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 351; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_message_RecordPtr // : DrRecordPtr
	{
		skill_message_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_message_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}