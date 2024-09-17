/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct key_command_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 command;
__int8 pc_job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 category;
__int8 joypad_category;
char Pad0[2];
Data::TableRef name;
int name_tableId(){return 405;};
wchar_t* default_keycap;
bool modifier_enabled;
__int8 sort_no;
__int8 layer;
char Pad1[1];
__int16 option_sort_no;
__int8 usable_joypad_mode;
bool joypad_customize_enabled;

		static TableVersion Version() { return TableVersion(1, 3); }
		static __int16 TableId() { return 231; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) key_command_RecordPtr // : DrRecordPtr
	{
		key_command_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::key_command_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}