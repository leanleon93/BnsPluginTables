/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct slatestone_Record : DrEl
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
Data::TableRef name;
int name_tableId(){return 405;};
__int16 group;
__int8 grade;
bool duplication_permission;
__int8 modify_ability[4];
__int32 init_ability_value[4];
__int32 unit_ability_value[4];
__int32 max_ability_value[4];
__int32 init_ability_base_value[4];
__int32 unit_ability_base_value[4];
__int32 max_ability_base_value[4];
Data::IconRef icon;
Data::IconRef icon_case;

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 366; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) slatestone_RecordPtr // : DrRecordPtr
	{
		slatestone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::slatestone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}