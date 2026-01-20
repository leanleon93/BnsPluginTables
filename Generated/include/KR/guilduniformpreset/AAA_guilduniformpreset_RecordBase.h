/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct guilduniformpreset_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char preset_type;
char Pad0[3];
BnsTables::Shared::TableRef preset;
int preset_tableId() const {return 177;};
BnsTables::Shared::TableRef name;
int name_tableId() const {return 441;};
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 190;};
__int16 icon_index;
char Pad1[2];
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 441;};
__int32 order;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 184; }
		static __int32 SubType() { return -1; }
		enum class preset_type {
			none = 0,
			costume = 1,
			face = 2,
			head = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformpreset_RecordPtr // : DrRecordPtr
	{
		guilduniformpreset_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}