/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct partymatch_Record : DrEl
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
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef faction;
int faction_tableId(){return 130;};
__int16 level;
char Pad0[2];
Data::TableRef party_chat_channel;
int party_chat_channel_tableId(){return 262;};

		static TableVersion Version() { return TableVersion(0, 6); }
		static __int16 TableId() { return 263; }
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