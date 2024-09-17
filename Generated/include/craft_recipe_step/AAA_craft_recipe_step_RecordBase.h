/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct craft_recipe_step_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 time_cost;
__int64 output_id[3];
__int16 output_amount[3];
bool output_customizable[3];

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 83; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_recipe_step_RecordPtr // : DrRecordPtr
	{
		craft_recipe_step_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::craft_recipe_step_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}