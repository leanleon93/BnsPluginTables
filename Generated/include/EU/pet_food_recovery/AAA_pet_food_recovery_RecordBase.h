/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct pet_food_recovery_Record : BnsTables::Shared::DrEl
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
__int8 item_grade[4];
__int16 recovery_amount[4];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 275; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pet_food_recovery_RecordPtr // : DrRecordPtr
	{
		pet_food_recovery_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pet_food_recovery_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}