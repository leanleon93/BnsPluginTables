/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct env_entrance_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef name;
int name_tableId() const {return 434;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 434;};
wchar_t* title;
wchar_t* title_icon;
wchar_t* background_image;
BnsTables::Shared::TableRef attraction_btn_name[3];
__int32 attraction_btn_name_Size() const {return 3;};
int attraction_btn_name_tableId() const {return 434;};
BnsTables::Shared::TableRef attraction_btn_desc[3];
__int32 attraction_btn_desc_Size() const {return 3;};
int attraction_btn_desc_tableId() const {return 434;};
wchar_t* attraction_btn_image[3];
__int32 attraction_btn_image_Size() const {return 3;};
BnsTables::Shared::TableRef attraction_name_desc[3];
__int32 attraction_name_desc_Size() const {return 3;};
int attraction_name_desc_tableId() const {return 434;};
signed char season_contents_type;
char Pad0[3];
BnsTables::Shared::TableRef attraction_shortcut[3];
__int32 attraction_shortcut_Size() const {return 3;};
int attraction_shortcut_tableId() const {return 19;};
signed char ranking_contents_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 124; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) env_entrance_RecordPtr // : DrRecordPtr
	{
		env_entrance_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}