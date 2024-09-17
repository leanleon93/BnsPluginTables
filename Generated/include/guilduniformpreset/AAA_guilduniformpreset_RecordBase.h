/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct guilduniformpreset_Record : DrEl
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
		__int8 preset_type;
char Pad0[3];
Data::TableRef preset;
int preset_tableId(){return 165;};
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad1[2];
Data::TableRef desc;
int desc_tableId(){return 405;};
__int32 order;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 172; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformpreset_RecordPtr // : DrRecordPtr
	{
		guilduniformpreset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guilduniformpreset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}