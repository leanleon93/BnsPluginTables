/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct race2_attributes_info_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char main_type_race2;
signed char main_type_attributes;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef main_type_name;
int main_type_name_tableId() const {return 427;};
wchar_t* main_type_icon;
signed char attack_type;
char Pad0[3];
BnsTables::Shared::TableRef attack_type_name;
int attack_type_name_tableId() const {return 427;};
wchar_t* attack_type_icon;
signed char defend_type;
char Pad1[3];
BnsTables::Shared::TableRef defend_type_name;
int defend_type_name_tableId() const {return 427;};
wchar_t* defend_type_icon;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 304; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) race2_attributes_info_RecordPtr // : DrRecordPtr
	{
		race2_attributes_info_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}