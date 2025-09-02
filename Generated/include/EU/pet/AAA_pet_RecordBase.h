/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct pet_Record : BnsTables::Shared::DrEl
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
wchar_t* mesh_name;
float mesh_scale;
wchar_t* material_name[3];
__int32 material_name_Size() const {return 3;};
wchar_t* anim_set_name;
wchar_t* anim_tree_name;
wchar_t* caster_spawn_show;
wchar_t* caster_despawn_show;
wchar_t* idle_anim;
wchar_t* combat_idle_anim;
wchar_t* spawn_show;
wchar_t* effect_show;
wchar_t* despawn_show;
wchar_t* food_show;
wchar_t* soul_gem_skill_cast_show;
wchar_t* soul_gem_skill_finish_show;
__int32 soul_gem_skill_id[30];
__int32 soul_gem_skill_id_Size() const {return 30;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 9); }
		static __int16 TableId() { return 297; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pet_RecordPtr // : DrRecordPtr
	{
		pet_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}