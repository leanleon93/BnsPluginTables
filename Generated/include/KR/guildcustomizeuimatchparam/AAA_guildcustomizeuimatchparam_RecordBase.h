/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct guildcustomizeuimatchparam_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 ui_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef sub_name;
int sub_name_tableId() const {return 435;};
signed char param_index;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 176; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guildcustomizeuimatchparam_RecordPtr // : DrRecordPtr
	{
		guildcustomizeuimatchparam_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}