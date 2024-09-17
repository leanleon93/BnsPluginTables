/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct sealed_dungeon_gimmick_Record : DrEl
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
Data::TableRef icon_name;
int icon_name_tableId(){return 405;};
Data::TableRef icon_tooltip;
int icon_tooltip_tableId(){return 405;};
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 314; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) sealed_dungeon_gimmick_RecordPtr // : DrRecordPtr
	{
		sealed_dungeon_gimmick_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::sealed_dungeon_gimmick_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}