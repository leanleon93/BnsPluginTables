/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct talksocial_Record : DrEl
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
bool use_at_dead;
bool use_at_exhaustion;
bool use_at_restoration;
bool use_at_not_dead;
bool use_in_chat_input;
bool use_at_equip_costume;
bool use_at_achievement_title;
bool use_at_equip_setitem;
bool use_at_equip_paircostume;
__int8 use_job;
bool use_at_equip_accessory;
char Pad0[1];
Data::TableRef msg;
int msg_tableId(){return 151;};
Data::TableRef msg_target;
int msg_target_tableId(){return 151;};
bool can_move;
bool can_sit;
char Pad1[2];
__int32 duration;
wchar_t* show;
wchar_t* kun_show;
wchar_t* gon_male_show;
wchar_t* gon_female_show;
wchar_t* lyn_male_show;
wchar_t* lyn_female_show;
wchar_t* jin_male_show;
wchar_t* jin_female_show;
__int8 social_mode_group_index;
__int8 social_mode_slot_index;
char Pad2[2];
Data::IconRef icon;
wchar_t* summoned_show[3];
bool can_ride_vehicle;

		static TableVersion Version() { return TableVersion(0, 20); }
		static __int16 TableId() { return 399; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) talksocial_RecordPtr // : DrRecordPtr
	{
		talksocial_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::talksocial_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}