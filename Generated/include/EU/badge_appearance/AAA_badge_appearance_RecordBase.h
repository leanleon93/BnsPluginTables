/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct badge_appearance_Record : BnsTables::Shared::DrEl
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
signed char apperance_type;
char Pad0[3];
BnsTables::Shared::TableRef item_alias;
int item_alias_tableId() const {return 202;};
__int32 set_score[14];
__int32 set_score_Size() const {return 14;};
wchar_t* apperance_begin_show[14];
__int32 apperance_begin_show_Size() const {return 14;};
wchar_t* apperance_end_show[14];
__int32 apperance_end_show_Size() const {return 14;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 26; }
		static __int32 SubType() { return -1; }
		enum class apperance_type {
			Default_val = 0,
			Item = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) badge_appearance_RecordPtr // : DrRecordPtr
	{
		badge_appearance_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}