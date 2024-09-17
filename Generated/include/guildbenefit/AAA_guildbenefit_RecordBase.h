/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct guildbenefit_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 benefit_id;
__int32 duration;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 benefit_type;
char Pad0[3];
wchar_t* alias;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
__int16 order;
__int16 guild_level;
char Pad1[2];
__int32 money;
Data::TableRef item[5];
int item_tableId(){return 189;};
__int32 item_count[5];
__int32 guild_point;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 162; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guildbenefit_RecordPtr // : DrRecordPtr
	{
		guildbenefit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guildbenefit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}