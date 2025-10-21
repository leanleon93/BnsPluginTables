/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct custom_dress_design_type_info_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char item_type;
signed char customize_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char design_type;
signed char customize_category;
char Pad0[2];
BnsTables::Shared::TableRef price_ref;
int price_ref_tableId() const {return 89;};
signed char min_value;
signed char max_value;
char Pad1[2];
BnsTables::Shared::TableRef name;
int name_tableId() const {return 435;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 435;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 89; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) custom_dress_design_type_info_RecordPtr // : DrRecordPtr
	{
		custom_dress_design_type_info_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}