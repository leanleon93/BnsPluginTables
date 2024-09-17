/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct fishing_field_Record : DrEl
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
Data::TableRef grade_ss_fish[20];
int grade_ss_fish_tableId(){return 142;};
Data::TableRef grade_s_fish[20];
int grade_s_fish_tableId(){return 142;};
Data::TableRef grade_a_fish[20];
int grade_a_fish_tableId(){return 142;};
Data::TableRef grade_b_fish[20];
int grade_b_fish_tableId(){return 142;};
Data::TableRef grade_c_fish[20];
int grade_c_fish_tableId(){return 142;};
Data::TableRef bonus_time;
int bonus_time_tableId(){return 431;};
Data::TableRef fishing_field_group;
int fishing_field_group_tableId(){return 145;};
wchar_t* bonus_time_effect;

		static TableVersion Version() { return TableVersion(0, 9); }
		static __int16 TableId() { return 144; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fishing_field_RecordPtr // : DrRecordPtr
	{
		fishing_field_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fishing_field_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}