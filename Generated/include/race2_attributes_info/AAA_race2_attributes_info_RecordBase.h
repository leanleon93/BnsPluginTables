/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct race2_attributes_info_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 main_type_race2;
__int8 main_type_attributes;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef main_type_name;
int main_type_name_tableId(){return 405;};
wchar_t* main_type_icon;
__int8 attack_type;
char Pad0[3];
Data::TableRef attack_type_name;
int attack_type_name_tableId(){return 405;};
wchar_t* attack_type_icon;
__int8 defend_type;
char Pad1[3];
Data::TableRef defend_type_name;
int defend_type_name_tableId(){return 405;};
wchar_t* defend_type_icon;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 287; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) race2_attributes_info_RecordPtr // : DrRecordPtr
	{
		race2_attributes_info_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::race2_attributes_info_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}