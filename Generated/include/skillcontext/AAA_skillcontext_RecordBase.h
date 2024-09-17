/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct skillcontext_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 playerstance;
__int8 playerstate;
__int8 playerlinking;
__int8 playerlinkstage;
__int8 enemydistance;
__int8 enemystate;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool context_use_default;
char Pad0[3];
__int32 context[2];
bool skillbar_use_default;
char Pad1[3];
__int32 skillbar_stance[3];
__int32 skillbar[12];
__int32 context_fallback[2];
__int32 cmd_key_up;
__int32 cmd_key_down;
__int32 cmd_key_left;
__int32 cmd_key_right;

		static TableVersion Version() { return TableVersion(1, 13); }
		static __int16 TableId() { return 333; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillcontext_RecordPtr // : DrRecordPtr
	{
		skillcontext_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillcontext_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}