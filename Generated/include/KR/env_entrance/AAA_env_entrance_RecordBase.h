/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

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
int name_tableId(){return 420;};
BnsTables::Shared::TableRef desc;
int desc_tableId(){return 420;};
wchar_t* title;
wchar_t* title_icon;
wchar_t* background_image;
BnsTables::Shared::TableRef attraction_btn_name[3];
int attraction_btn_name_tableId(){return 420;};
BnsTables::Shared::TableRef attraction_btn_desc[3];
int attraction_btn_desc_tableId(){return 420;};
wchar_t* attraction_btn_image[3];
BnsTables::Shared::TableRef attraction_name_desc[3];
int attraction_name_desc_tableId(){return 420;};
__int8 season_contents_type;
char Pad0[3];
BnsTables::Shared::TableRef attraction_shortcut[3];
int attraction_shortcut_tableId(){return 19;};
__int8 ranking_contents_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 121; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) env_entrance_RecordPtr // : DrRecordPtr
	{
		env_entrance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::env_entrance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}