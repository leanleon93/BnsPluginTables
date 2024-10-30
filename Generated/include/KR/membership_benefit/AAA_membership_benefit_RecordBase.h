/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct membership_benefit_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char benefit_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view benefit_type_EnumValue() const {return Get_benefit_type_EnumValue(key.benefit_type);};
wchar_t* alias;
__int64 value;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 420;};
BnsTables::Shared::IconRef icon;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 3); }
		static __int16 TableId() { return 258; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) membership_benefit_RecordPtr // : DrRecordPtr
	{
		membership_benefit_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}