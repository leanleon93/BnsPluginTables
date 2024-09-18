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

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 ability[20];
__int16 ability_weight[20];
__int32 ability_total_weight;
__int8 ability_total_count;
char Pad0[1];
__int16 ability_value_min[20];
__int16 ability_value_max[20];
char Pad1[2];
BnsTables::Shared::TableRef ability_value_distribution[20];
int ability_value_distribution_tableId(){return 304;};
bool draw_enable;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 0); }
		static __int16 TableId() { return 1; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ability_list_RecordPtr // : DrRecordPtr
	{
		ability_list_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ability_list_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}