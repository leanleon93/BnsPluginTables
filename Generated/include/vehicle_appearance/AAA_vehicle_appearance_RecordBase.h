/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct vehicle_appearance_Record : DrEl
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
wchar_t* anim_set_name;
wchar_t* rider_anim_set_name;
wchar_t* anim_tree_name;
wchar_t* mesh_name;
wchar_t* material_name[5];
wchar_t* physic_asset;
wchar_t* ride_show_name;
wchar_t* getoff_show_name;
wchar_t* cancel_show_name;
wchar_t* move_vehicle_idle;
wchar_t* attach_rider_bone;
wchar_t* attach_vehicle_socket;
Data::TableRef stand_idle;
int stand_idle_tableId(){return 379;};
wchar_t* effect_show;
__int8 foot_print_type;
char Pad0[3];
float preview_mesh_zoom_out_value;
float preview_mesh_light_brightness;

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 419; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) vehicle_appearance_RecordPtr // : DrRecordPtr
	{
		vehicle_appearance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::vehicle_appearance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}