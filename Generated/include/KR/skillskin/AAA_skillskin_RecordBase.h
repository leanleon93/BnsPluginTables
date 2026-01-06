/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skillskin_Record : BnsTables::Shared::DrEl
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
signed char skill_skin_type;
char Pad0[3];
BnsTables::Shared::TableRef name;
int name_tableId() const {return 435;};
BnsTables::Shared::IconRef icon;
BnsTables::Shared::TableRef iteminfo[20];
__int32 iteminfo_Size() const {return 20;};
int iteminfo_tableId() const {return 202;};
signed char grade;
char Pad1[3];
wchar_t* skill_skin_play_bink[20];
__int32 skill_skin_play_bink_Size() const {return 20;};
wchar_t* background_image;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 372; }
		static __int32 SubType() { return -1; }
		enum class skill_skin_type {
			none = 0,
			use_grocery = 1,
			equip_item = 2,
			equip_set_item = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillskin_RecordPtr // : DrRecordPtr
	{
		skillskin_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}