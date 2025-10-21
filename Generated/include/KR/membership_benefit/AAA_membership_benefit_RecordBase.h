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
		wchar_t* alias;
signed char publisher;
char Pad0[3];
__int64 value;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 435;};
BnsTables::Shared::IconRef icon;
wchar_t* icon_image_set;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(8, 0); }
		static __int16 TableId() { return 270; }
		static __int32 SubType() { return -1; }
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