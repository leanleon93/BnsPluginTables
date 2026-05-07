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
		signed char min_value;
signed char max_value;
signed char step;
signed char desc_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 94; }
		static __int32 SubType() { return -1; }
		enum class race {
			race_none = 0,
			geon = 1,
			gon = 2,
			rin = 3,
			jin = 4,
			nabbeunmob = 5,
			deonabbeunmob = 6,
			museounmob = 7,
			deomuseounmob = 8,
			deodeomuseounmob = 9,
			goyangi = 10,
			gangrimche = 11,
			aggwi = 12,
		};

		enum class sex {
			sex_none = 0,
			nam = 1,
			yeo = 2,
			jung = 3,
		};

		enum class desc_type {
			percent = 0,
			value = 1,
		};
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