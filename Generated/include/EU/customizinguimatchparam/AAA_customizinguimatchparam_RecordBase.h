/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct customizinguimatchparam_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 ui_index;
__int8 race;
__int8 sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef sub_name;
int sub_name_tableId(){return 405;};
__int8 param_index;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 94; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizinguimatchparam_RecordPtr // : DrRecordPtr
	{
		customizinguimatchparam_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::customizinguimatchparam_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}