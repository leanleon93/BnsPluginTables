/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skillsystematizationgroup_Record : BnsTables::Shared::DrEl
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
wchar_t* name;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 425;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 425;};
signed char sort_no;
bool use_bookmark;
char Pad0[2];
BnsTables::Shared::TableRef bookmark_description;
int bookmark_description_tableId() const {return 425;};
wchar_t* category_icon_text[2];
__int32 category_icon_text_Size() const {return 2;};
wchar_t* train_icon_text[2];
__int32 train_icon_text_Size() const {return 2;};
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 183;};
__int16 icon_index;
char Pad1[2];
BnsTables::Shared::TableRef tooltip_description;
int tooltip_description_tableId() const {return 425;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 367; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillsystematizationgroup_RecordPtr // : DrRecordPtr
	{
		skillsystematizationgroup_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}