/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct worldbossspawn_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef npc;
int npc_tableId() const {return 277;};
BnsTables::Shared::TableRef reward;
int reward_tableId() const {return 470;};
BnsTables::Shared::TableRef teleport;
int teleport_tableId() const {return 431;};
signed char recommand_level;
char Pad0[3];
BnsTables::Shared::TableRef description;
int description_tableId() const {return 435;};
wchar_t* symbol_imageset;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 4); }
		static __int16 TableId() { return 471; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) worldbossspawn_RecordPtr // : DrRecordPtr
	{
		worldbossspawn_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}