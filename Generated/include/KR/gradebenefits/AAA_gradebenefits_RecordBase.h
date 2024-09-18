/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct gradebenefits_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 benefit_type;
__int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 game_grade_key;
__int64 value;
BnsTables::Shared::TableRef effect;
int effect_tableId(){return 115;};
wchar_t* string_value;
bool enable_in_arena_duel;
char Pad0[3];
BnsTables::Shared::TableRef achievement[4];
int achievement_tableId(){return 6;};
wchar_t* icon_image_set;
wchar_t* name;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 1); }
		static __int16 TableId() { return 162; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) gradebenefits_RecordPtr // : DrRecordPtr
	{
		gradebenefits_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::gradebenefits_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}