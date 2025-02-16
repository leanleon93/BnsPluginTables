/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct condition_event_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;
__int16 score;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef name;
int name_tableId() const {return 427;};
__int32 instant_event_recycle_time;
BnsTables::Shared::TableRef tooltip_text_1;
int tooltip_text_1_tableId() const {return 427;};
signed char tooltip_arg_type_1[4];
__int32 tooltip_arg_type_1_Size() const {return 4;};
__int32 tooltip_arg_1[4];
__int32 tooltip_arg_1_Size() const {return 4;};
BnsTables::Shared::TableRef tooltip_text_2;
int tooltip_text_2_tableId() const {return 427;};
signed char tooltip_arg_type_2[4];
__int32 tooltip_arg_type_2_Size() const {return 4;};
__int32 tooltip_arg_2[4];
__int32 tooltip_arg_2_Size() const {return 4;};
BnsTables::Shared::TableRef tooltip_text_3;
int tooltip_text_3_tableId() const {return 427;};
signed char tooltip_arg_type_3[4];
__int32 tooltip_arg_type_3_Size() const {return 4;};
__int32 tooltip_arg_3[4];
__int32 tooltip_arg_3_Size() const {return 4;};
BnsTables::Shared::TableRef tooltip_text_4;
int tooltip_text_4_tableId() const {return 427;};
signed char tooltip_arg_type_4[4];
__int32 tooltip_arg_type_4_Size() const {return 4;};
__int32 tooltip_arg_4[4];
__int32 tooltip_arg_4_Size() const {return 4;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 2); }
		static __int16 TableId() { return 63; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) condition_event_RecordPtr // : DrRecordPtr
	{
		condition_event_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}