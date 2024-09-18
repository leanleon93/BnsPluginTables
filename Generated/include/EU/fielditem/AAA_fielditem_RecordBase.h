/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct fielditem_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 remain_duration;
__int16 pickup_radius;
char Pad0[2];
__int32 pickup_duration;
__int32 putdown_duration;
BnsTables::Shared::TableRef equip_effect[4];
int equip_effect_tableId(){return 111;};
bool not_change_create_pos;
__int8 parry_event;
char Pad1[2];
BnsTables::Shared::TableRef acquire_quest;
int acquire_quest_tableId(){return 283;};
__int8 forwarding_types;
char Pad2[3];
BnsTables::Shared::TableRef quests;
int quests_tableId(){return 283;};
__int8 missions;
__int8 cases;
__int16 case_subtypes;
__int16 use_count;
char Pad3[2];
BnsTables::Shared::TableRef use_skill3[4];
int use_skill3_tableId(){return 324;};
__int16 consume_use_count[4];
BnsTables::Shared::TableRef throw_skill3;
int throw_skill3_tableId(){return 324;};
bool init_activated;
char Pad4[3];
__int32 explosion_time;
__int16 target_radius;
char Pad5[2];
wchar_t* target_decal;
__int8 target_state;
char Pad6[3];
BnsTables::Shared::TableRef invoke_effect[4];
int invoke_effect_tableId(){return 111;};
bool change_activator_by_killer;
char Pad7[3];
BnsTables::Shared::TableRef target_first_filter[4];
int target_first_filter_tableId(){return 141;};
BnsTables::Shared::TableRef target_second_filter[4];
int target_second_filter_tableId(){return 141;};
BnsTables::Shared::TableRef first_effect[4];
int first_effect_tableId(){return 111;};
BnsTables::Shared::TableRef second_effect[4];
int second_effect_tableId(){return 111;};
bool activated_effect;
char Pad8[3];
wchar_t* activate_show[3];
wchar_t* activate_particle;
__int32 activate_particle_duration;
wchar_t* activate_particle_attatch_bone;
bool throw_target;
char Pad9[3];
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 405;};
wchar_t* mesh_id;
wchar_t* mesh_col;
wchar_t* animset_name;
BnsTables::Shared::TableRef moveanim;
int moveanim_tableId(){return 139;};
wchar_t* grab_bone;
wchar_t* pick_up;
wchar_t* put_down;
wchar_t* throw_item;
__int32 attach_time;
__int32 detach_time;
__int32 throw_detach_time;
wchar_t* throw_bone;
bool randing;
bool throw_straight;
char Pad10[2];
wchar_t* gadget_stay;
wchar_t* gadget_pickup_idle;
wchar_t* gadget_putdown_start;
wchar_t* gadget_pickup_start;
wchar_t* gadget_thrown_start;
wchar_t* gadget_thrown_particle;
wchar_t* gadget_landing;
BnsTables::Shared::TableRef action_name2;
int action_name2_tableId(){return 405;};
BnsTables::Shared::TableRef action_desc2;
int action_desc2_tableId(){return 405;};
BnsTables::Shared::TableRef drop_action_name;
int drop_action_name_tableId(){return 405;};
BnsTables::Shared::TableRef drop_action_desc;
int drop_action_desc_tableId(){return 405;};
BnsTables::Shared::TableRef description2;
int description2_tableId(){return 405;};
wchar_t* gadget_dropanim;
wchar_t* gadget_putdown_show;
bool throw_presentation;
char Pad11[3];
wchar_t* prefix;
wchar_t* gadget_decompose_showdata;
wchar_t* gadget_consume_showdata;
wchar_t* gadget_consume_in_hand_showdata;
bool ghost_mode;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 137; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fielditem_RecordPtr // : DrRecordPtr
	{
		fielditem_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fielditem_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}