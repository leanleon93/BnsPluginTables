/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct pet_Record : DrEl
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
wchar_t* mesh_name;
float mesh_scale;
wchar_t* material_name[3];
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

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 274; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pet_RecordPtr // : DrRecordPtr
	{
		pet_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pet_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}