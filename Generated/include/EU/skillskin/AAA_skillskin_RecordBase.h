/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
__int8 skill_skin_type;
char Pad0[3];
BnsTables::Shared::TableRef name;
int name_tableId(){return 405;};
BnsTables::Shared::IconRef icon;
BnsTables::Shared::TableRef iteminfo[20];
int iteminfo_tableId(){return 189;};
__int8 grade;
char Pad1[3];
wchar_t* skill_skin_play_bink[20];
wchar_t* background_image;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 344; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillskin_RecordPtr // : DrRecordPtr
	{
		skillskin_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillskin_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}