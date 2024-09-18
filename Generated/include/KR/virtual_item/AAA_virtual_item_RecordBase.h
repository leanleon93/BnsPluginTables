/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct virtual_item_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::IconRef icon;
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 420;};
bool talkable;
char Pad0[3];
wchar_t* talk_mesh;
wchar_t* talk_animset;
BnsTables::Shared::TableRef message[9];
int message_tableId(){return 270;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 436; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) virtual_item_RecordPtr // : DrRecordPtr
	{
		virtual_item_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::virtual_item_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}