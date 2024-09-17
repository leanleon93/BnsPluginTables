/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct pc_voice_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 id;
__int8 sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 pc_voice_set_id;
__int8 usable_race[4];
__int8 default_race[4];
char Pad0[3];
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 272; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_voice_RecordPtr // : DrRecordPtr
	{
		pc_voice_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pc_voice_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}