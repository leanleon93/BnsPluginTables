/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct creatureappearance_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char race;
signed char sex;
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
signed char param8[96];
__int32 param8_Size() const {return 96;};
float decal_radius;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 88; }
		static __int32 SubType() { return -1; }
		enum class race {
			race_none = 0,
			geon = 1,
			gon = 2,
			rin = 3,
			jin = 4,
			nabbeunmob = 5,
			deonabbeunmob = 6,
			museounmob = 7,
			deomuseounmob = 8,
			deodeomuseounmob = 9,
			goyangi = 10,
			gangrimche = 11,
			aggwi = 12,
		};

		enum class sex {
			sex_none = 0,
			nam = 1,
			yeo = 2,
			jung = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) creatureappearance_RecordPtr // : DrRecordPtr
	{
		creatureappearance_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}