/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct ability_list_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char improve_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char ability[20];
__int32 ability_Size() const {return 20;};
__int16 ability_weight[20];
__int32 ability_weight_Size() const {return 20;};
__int32 ability_total_weight;
signed char ability_total_count;
char Pad0[3];
__int32 ability_value_min[20];
__int32 ability_value_min_Size() const {return 20;};
__int32 ability_value_max[20];
__int32 ability_value_max_Size() const {return 20;};
BnsTables::Shared::TableRef ability_value_distribution[20];
__int32 ability_value_distribution_Size() const {return 20;};
int ability_value_distribution_tableId() const {return 317;};
bool draw_enable;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 0); }
		static __int16 TableId() { return 1; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ability_list_RecordPtr // : DrRecordPtr
	{
		ability_list_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}