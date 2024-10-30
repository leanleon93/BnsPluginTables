/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skillcontext_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char playerstance;
signed char playerstate;
signed char playerlinking;
signed char playerlinkstage;
signed char enemydistance;
signed char enemystate;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool context_use_default;
char Pad0[3];
__int32 context[2];
__int32 context_Size() const {return 2;};
bool skillbar_use_default;
char Pad1[3];
__int32 skillbar_stance[3];
__int32 skillbar_stance_Size() const {return 3;};
__int32 skillbar[12];
__int32 skillbar_Size() const {return 12;};
__int32 context_fallback[2];
__int32 context_fallback_Size() const {return 2;};
__int32 cmd_key_up;
__int32 cmd_key_down;
__int32 cmd_key_left;
__int32 cmd_key_right;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 13); }
		static __int16 TableId() { return 346; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillcontext_RecordPtr // : DrRecordPtr
	{
		skillcontext_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}