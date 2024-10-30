/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct sealed_dungeon_gimmick_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef icon_name;
int icon_name_tableId() const {return 420;};
BnsTables::Shared::TableRef icon_tooltip;
int icon_tooltip_tableId() const {return 420;};
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 182;};
__int16 icon_index;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 327; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) sealed_dungeon_gimmick_RecordPtr // : DrRecordPtr
	{
		sealed_dungeon_gimmick_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}