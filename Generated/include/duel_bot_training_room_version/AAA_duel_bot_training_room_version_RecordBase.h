/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct duel_bot_training_room_version_Record : DrEl
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
__int16 version;
char Pad0[2];
Data::TableRef tooltip_info;
int tooltip_info_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 106; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_training_room_version_RecordPtr // : DrRecordPtr
	{
		duel_bot_training_room_version_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_bot_training_room_version_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}