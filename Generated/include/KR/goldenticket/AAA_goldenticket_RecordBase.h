/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct goldenticket_Record : BnsTables::Shared::DrEl
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
int name_tableId() const {return 435;};
signed char ticket_type;
char Pad0[3];
BnsTables::Shared::TableRef ticket_item;
int ticket_item_tableId() const {return 202;};
__int16 ticket_item_count;
bool ticket_enable;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 166; }
		static __int32 SubType() { return -1; }
		enum class ticket_type {
			none = 0,
			shuffle_glyph_cost_ticket = 1,
			shuffle_worldaccountcard_cost_ticket = 2,
			transform_cost_ticket = 3,
			improve_option_draw_cost_ticket = 4,
			extract_skill_cost_ticket = 5,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) goldenticket_RecordPtr // : DrRecordPtr
	{
		goldenticket_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}