/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct virtual_item_Record : DrEl
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
Data::IconRef icon;
Data::TableRef name2;
int name2_tableId(){return 405;};
bool talkable;
char Pad0[3];
wchar_t* talk_mesh;
wchar_t* talk_animset;
Data::TableRef message[9];
int message_tableId(){return 260;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 421; }
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