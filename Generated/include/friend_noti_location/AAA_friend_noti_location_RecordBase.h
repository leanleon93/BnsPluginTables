/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct friend_noti_location_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef zone1[127];
int zone1_tableId(){return 443;};
Data::TableRef zone2[127];
int zone2_tableId(){return 443;};
Data::TableRef name;
int name_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 150; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) friend_noti_location_RecordPtr // : DrRecordPtr
	{
		friend_noti_location_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::friend_noti_location_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}