/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct wantedmission_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef target_npc;
int target_npc_tableId() const {return 265;};
BnsTables::Shared::TableRef reward_item[5];
__int32 reward_item_Size() const {return 5;};
int reward_item_tableId() const {return 195;};
__int16 reward_item_count[5];
__int32 reward_item_count_Size() const {return 5;};
char Pad0[2];
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 420;};
float mesh_ui_npc_pos_x;
float mesh_ui_npc_pos_y;
float mesh_ui_npc_pos_z;
float mesh_ui_npc_scale;
wchar_t* mesh_ui_npc_idle_anim;
wchar_t* mesh_ui_npc_activated_anim;
wchar_t* mesh_ui_npc_voice;
BnsTables::Shared::TableRef npc_weapon_id;
int npc_weapon_id_tableId() const {return 195;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 4); }
		static __int16 TableId() { return 437; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) wantedmission_RecordPtr // : DrRecordPtr
	{
		wantedmission_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}