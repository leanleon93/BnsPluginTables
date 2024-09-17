/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct skill_train_by_item_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef origin_skill[6];
int origin_skill_tableId(){return 324;};
Data::TableRef change_skill[6];
int change_skill_tableId(){return 324;};
Data::IconRef icon;
Data::TableRef description;
int description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 352; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_by_item_RecordPtr // : DrRecordPtr
	{
		skill_train_by_item_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_train_by_item_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}