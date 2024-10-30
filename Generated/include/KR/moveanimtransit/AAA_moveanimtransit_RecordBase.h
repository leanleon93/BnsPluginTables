/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct moveanimtransit_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char before_idle;
signed char after_idle;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view before_idle_EnumValue() const {return Get_before_idle_EnumValue(key.before_idle);};
std::string_view after_idle_EnumValue() const {return Get_after_idle_EnumValue(key.after_idle);};
wchar_t* transit_anim_seq;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 262; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) moveanimtransit_RecordPtr // : DrRecordPtr
	{
		moveanimtransit_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}