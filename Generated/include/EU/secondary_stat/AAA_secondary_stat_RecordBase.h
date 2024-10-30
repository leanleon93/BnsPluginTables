/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct secondary_stat_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 primary_stat;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view primary_stat_EnumValue() const {return Get_primary_stat_EnumValue(key.primary_stat);};
__int16 secondary_stat[4];
__int32 secondary_stat_Size() const {return 4;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 333; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) secondary_stat_RecordPtr // : DrRecordPtr
	{
		secondary_stat_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}