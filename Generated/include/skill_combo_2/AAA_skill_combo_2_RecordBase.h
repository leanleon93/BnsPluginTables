/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct skill_combo_2_Record : DrEl
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
__int8 group;
char Pad0[1];
__int16 sort_no;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef action_desc;
int action_desc_tableId(){return 405;};
Data::TableRef combo_desc;
int combo_desc_tableId(){return 405;};
wchar_t* video;
__int32 skill[5];
__int8 skill_slot_type[5];

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 332; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_combo_2_RecordPtr // : DrRecordPtr
	{
		skill_combo_2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_combo_2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}