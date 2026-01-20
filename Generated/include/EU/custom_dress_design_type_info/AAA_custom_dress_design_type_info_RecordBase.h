/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct custom_dress_design_type_info_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char item_type;
signed char customize_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char design_type;
signed char customize_category;
char Pad0[2];
BnsTables::Shared::TableRef price_ref;
int price_ref_tableId() const {return 90;};
signed char min_value;
signed char max_value;
char Pad1[2];
BnsTables::Shared::TableRef name;
int name_tableId() const {return 438;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 438;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 90; }
		static __int32 SubType() { return -1; }
		enum class item_type {
			none = 0,
			costume = 1,
			costume_attach = 2,
			head_attach = 3,
			face_attach = 4,
		};

		enum class design_type {
			none = 0,
			color = 1,
			pattern = 2,
			saturation = 3,
		};

		enum class customize_category {
			none = 0,
			center = 1,
			sub = 2,
			leg = 3,
			dressline = 4,
			hair = 5,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) custom_dress_design_type_info_RecordPtr // : DrRecordPtr
	{
		custom_dress_design_type_info_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}