/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct guilduniformparamtypecategory_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char param_type_category;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 param_type[28];
__int32 param_type_Size() const {return 28;};
__int32 master_param_type;
BnsTables::Shared::TableRef category_name;
int category_name_tableId() const {return 435;};
signed char payment_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 181; }
		static __int32 SubType() { return -1; }
		enum class param_type_category {
			none = 0,
			style = 1,
			top = 2,
			bottoms = 3,
			point_color = 4,
			face = 5,
			head = 6,
		};

		enum class payment_type {
			none = 0,
			selective = 1,
			all = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformparamtypecategory_RecordPtr // : DrRecordPtr
	{
		guilduniformparamtypecategory_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}