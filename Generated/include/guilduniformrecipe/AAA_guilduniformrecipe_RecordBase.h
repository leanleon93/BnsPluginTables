/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct guilduniformrecipe_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 recipe_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef required_item[2];
int required_item_tableId(){return 189;};
__int32 required_item_count[2];
bool required_item_is_bm[2];
char Pad0[2];
__int32 bank_money;
Data::TableRef bank_required_item[5];
int bank_required_item_tableId(){return 189;};
__int32 bank_required_item_count[5];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 173; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformrecipe_RecordPtr // : DrRecordPtr
	{
		guilduniformrecipe_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guilduniformrecipe_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}