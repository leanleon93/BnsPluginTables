/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct partymatch_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef name;
int name_tableId(){return 420;};
BnsTables::Shared::TableRef faction;
int faction_tableId(){return 135;};
__int16 level;
char Pad0[2];
BnsTables::Shared::TableRef party_chat_channel;
int party_chat_channel_tableId(){return 272;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 273; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) partymatch_RecordPtr // : DrRecordPtr
	{
		partymatch_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::partymatch_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}