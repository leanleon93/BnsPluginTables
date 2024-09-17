/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct item_combination_Record : DrEl
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
__int8 item_type;
char Pad0[3];
__int32 count;
Data::TableRef material_group;
int material_group_tableId(){return 196;};
Data::TableRef material_group_name;
int material_group_name_tableId(){return 405;};
Data::TableRef item_combination_cost_group;
int item_combination_cost_group_tableId(){return 76;};
Data::TableRef reward_group_name;
int reward_group_name_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 188; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_combination_RecordPtr // : DrRecordPtr
	{
		item_combination_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_combination_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}