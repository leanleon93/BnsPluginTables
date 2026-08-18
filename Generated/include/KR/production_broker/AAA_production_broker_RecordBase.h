/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct production_broker_Record : BnsTables::Shared::DrEl
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
signed char production;
char Pad0[3];
BnsTables::Shared::TableRef msg[7];
__int32 msg_Size() const {return 7;};
int msg_tableId() const {return 291;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 313; }
		static __int32 SubType() { return -1; }
		enum class production {
			none = 0,
			production_type_1 = 1,
			production_type_2 = 2,
			production_type_3 = 3,
			production_type_4 = 4,
			production_type_5 = 5,
			production_type_6 = 6,
			production_type_7 = 7,
			gathering_type_1 = 8,
			gathering_type_2 = 9,
			gathering_type_3 = 10,
			gathering_type_4 = 11,
			gathering_type_5 = 12,
			gathering_type_6 = 13,
			gathering_type_7 = 14,
			production_type_all = 15,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) production_broker_RecordPtr // : DrRecordPtr
	{
		production_broker_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}