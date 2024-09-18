/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct race_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 race;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name2;
int name2_tableId(){return 405;};
wchar_t* lobby_race_imageset;
wchar_t* character_info_race_imageset;
BnsTables::Shared::TableRef desc;
int desc_tableId(){return 405;};
__int8 male_customize_zoomcamera_add_height;
__int8 female_customize_zoomcamera_add_height;
char Pad0[2];
wchar_t* lobby_race_bgm;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 9); }
		static __int16 TableId() { return 288; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) race_RecordPtr // : DrRecordPtr
	{
		race_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::race_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}