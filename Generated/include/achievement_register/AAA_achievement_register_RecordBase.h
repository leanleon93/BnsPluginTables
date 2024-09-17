/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;
__int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 version;
char Pad0[2];
__int32 max_value;
bool for_newbie_care;
bool persistant;
bool increment_from_client;
char Pad1[1];
Data::TableRef achievement[8];
int achievement_tableId(){return 6;};
Data::TableRef register_name;
int register_name_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(3, 1); }
		static __int16 TableId() { return 7; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) achievement_register_RecordPtr // : DrRecordPtr
	{
		achievement_register_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::achievement_register_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}