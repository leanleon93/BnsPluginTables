/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct customizingdetailslider_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char sex;
signed char param_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view race_EnumValue() const {return Get_race_EnumValue(key.race);};
std::string_view sex_EnumValue() const {return Get_sex_EnumValue(key.sex);};
signed char min_value;
signed char max_value;
signed char step;
signed char desc_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 91; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingdetailslider_RecordPtr // : DrRecordPtr
	{
		customizingdetailslider_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}