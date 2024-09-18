/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct creatureappearance_Record : BnsTables::Shared::DrEl
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
__int8 race;
__int8 sex;
char Pad0[2];
wchar_t* face_anim_set_name;
wchar_t* anim_tree_name;
wchar_t* face_mesh_name;
wchar_t* body_mesh_name;
wchar_t* voice_set_name;
wchar_t* npc_dialogue_set;
wchar_t* attach_effect;
wchar_t* body_material_name;
wchar_t* face_material_name;
wchar_t* npcattach1;
wchar_t* npcattach2;
wchar_t* npcattach_material1;
wchar_t* npcattach_material2;
bool enable_physbrst;
bool pc_customize;
char Pad1[2];
wchar_t* unique_soundcue;
float unique_soundculldist;
float unique_soundfadetime;
float unique_delaystoptime;
float sound_attenuation_scale;
float sound_volume_scale;
__int8 param8[92];
float decal_radius;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 9); }
		static __int16 TableId() { return 84; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) creatureappearance_RecordPtr // : DrRecordPtr
	{
		creatureappearance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::creatureappearance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}