/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct wantedmission_Record : DrEl
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
Data::TableRef target_npc;
int target_npc_tableId(){return 255;};
Data::TableRef reward_item[5];
int reward_item_tableId(){return 189;};
__int16 reward_item_count[5];
char Pad0[2];
Data::TableRef desc;
int desc_tableId(){return 405;};
float mesh_ui_npc_pos_x;
float mesh_ui_npc_pos_y;
float mesh_ui_npc_pos_z;
float mesh_ui_npc_scale;
wchar_t* mesh_ui_npc_idle_anim;
wchar_t* mesh_ui_npc_activated_anim;
wchar_t* mesh_ui_npc_voice;
Data::TableRef npc_weapon_id;
int npc_weapon_id_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(1, 4); }
		static __int16 TableId() { return 422; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) wantedmission_RecordPtr // : DrRecordPtr
	{
		wantedmission_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::wantedmission_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}