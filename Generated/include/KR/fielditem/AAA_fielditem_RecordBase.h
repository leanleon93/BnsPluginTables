/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

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
__int32 equip_effect_Size() const {return 4;};
int equip_effect_tableId() const {return 118;};
bool not_change_create_pos;
signed char parry_event;
char Pad1[2];
BnsTables::Shared::TableRef acquire_quest;
int acquire_quest_tableId() const {return 307;};
signed char forwarding_types;
char Pad2[3];
BnsTables::Shared::TableRef quests;
int quests_tableId() const {return 307;};
signed char missions;
signed char cases;
__int16 case_subtypes;
__int16 use_count;
char Pad3[2];
BnsTables::Shared::TableRef use_skill3[4];
__int32 use_skill3_Size() const {return 4;};
int use_skill3_tableId() const {return 350;};
__int16 consume_use_count[4];
__int32 consume_use_count_Size() const {return 4;};
BnsTables::Shared::TableRef throw_skill3;
int throw_skill3_tableId() const {return 350;};
bool init_activated;
char Pad4[3];
__int32 explosion_time;
__int16 target_radius;
char Pad5[2];
wchar_t* target_decal;
signed char target_state;
char Pad6[3];
BnsTables::Shared::TableRef invoke_effect[4];
__int32 invoke_effect_Size() const {return 4;};
int invoke_effect_tableId() const {return 118;};
bool change_activator_by_killer;
char Pad7[3];
BnsTables::Shared::TableRef target_first_filter[4];
__int32 target_first_filter_Size() const {return 4;};
int target_first_filter_tableId() const {return 150;};
BnsTables::Shared::TableRef target_second_filter[4];
__int32 target_second_filter_Size() const {return 4;};
int target_second_filter_tableId() const {return 150;};
BnsTables::Shared::TableRef first_effect[4];
__int32 first_effect_Size() const {return 4;};
int first_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef second_effect[4];
__int32 second_effect_Size() const {return 4;};
int second_effect_tableId() const {return 118;};
bool activated_effect;
char Pad8[3];
wchar_t* activate_show[3];
__int32 activate_show_Size() const {return 3;};
wchar_t* activate_particle;
__int32 activate_particle_duration;
wchar_t* activate_particle_attatch_bone;
bool throw_target;
char Pad9[3];
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
wchar_t* mesh_id;
wchar_t* mesh_col;
wchar_t* animset_name;
BnsTables::Shared::TableRef moveanim;
int moveanim_tableId() const {return 148;};
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
int action_name2_tableId() const {return 435;};
BnsTables::Shared::TableRef action_desc2;
int action_desc2_tableId() const {return 435;};
BnsTables::Shared::TableRef drop_action_name;
int drop_action_name_tableId() const {return 435;};
BnsTables::Shared::TableRef drop_action_desc;
int drop_action_desc_tableId() const {return 435;};
BnsTables::Shared::TableRef description2;
int description2_tableId() const {return 435;};
wchar_t* gadget_dropanim;
wchar_t* gadget_putdown_show;
bool throw_presentation;
char Pad11[3];
wchar_t* prefix;
wchar_t* gadget_decompose_showdata;
wchar_t* gadget_consume_showdata;
wchar_t* gadget_consume_in_hand_showdata;
bool ghost_mode;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 146; }
		static __int32 SubType() { return -1; }
		enum class parry_event {
			none = 0,
			decrease_use_count = 1,
		};

		enum class forwarding_types {
			progress_mission = 0,
			acquire_quest = 1,
			skill_target = 2,
			mission_step_rollback = 3,
		};

		enum class target_state {
			all = 0,
			friend_val = 1,
			enemy = 2,
			my_party = 3,
			my_team = 4,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fielditem_RecordPtr // : DrRecordPtr
	{
		fielditem_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}