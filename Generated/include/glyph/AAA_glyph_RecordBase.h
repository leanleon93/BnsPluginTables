/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct glyph_Record : DrEl
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
__int8 glyph_type;
__int8 color;
__int8 grade;
char Pad0[1];
Data::IconRef icon;
bool is_representative;
char Pad1[3];
Data::TableRef condition_event;
int condition_event_tableId(){return 62;};
__int8 condition_event_type;
char Pad2[3];
Data::TableRef condition_event_min;
int condition_event_min_tableId(){return 62;};
Data::TableRef condition_event_max;
int condition_event_max_tableId(){return 62;};
Data::TableRef flavor_text;
int flavor_text_tableId(){return 405;};
__int8 reward_tier;
__int8 ability[5];
char Pad3[2];
__int32 ability_value[5];
__int16 ability_id;
char Pad4[2];
Data::TableRef dungeon_condition;
int dungeon_condition_tableId(){return 141;};
__int16 group_id;

		static TableVersion Version() { return TableVersion(7, 0); }
		static __int16 TableId() { return 153; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) glyph_RecordPtr // : DrRecordPtr
	{
		glyph_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::glyph_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}