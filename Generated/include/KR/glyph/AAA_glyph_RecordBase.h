/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct glyph_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef name;
int name_tableId() const {return 434;};
signed char glyph_type;
signed char color;
signed char grade;
char Pad0[1];
BnsTables::Shared::IconRef icon;
bool is_representative;
char Pad1[3];
BnsTables::Shared::TableRef condition_event;
int condition_event_tableId() const {return 65;};
signed char condition_event_type;
char Pad2[3];
BnsTables::Shared::TableRef condition_event_min;
int condition_event_min_tableId() const {return 65;};
BnsTables::Shared::TableRef condition_event_max;
int condition_event_max_tableId() const {return 65;};
BnsTables::Shared::TableRef flavor_text;
int flavor_text_tableId() const {return 434;};
signed char reward_tier;
signed char ability[5];
__int32 ability_Size() const {return 5;};
char Pad3[2];
__int32 ability_value[5];
__int32 ability_value_Size() const {return 5;};
__int16 ability_id;
char Pad4[2];
BnsTables::Shared::TableRef dungeon_condition;
int dungeon_condition_tableId() const {return 150;};
__int16 group_id;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(8, 0); }
		static __int16 TableId() { return 161; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) glyph_RecordPtr // : DrRecordPtr
	{
		glyph_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}