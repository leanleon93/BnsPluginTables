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
                signed char race;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 438;};
wchar_t* lobby_race_imageset;
wchar_t* character_info_race_imageset;
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 438;};
signed char male_customize_zoomcamera_add_height;
signed char female_customize_zoomcamera_add_height;
char Pad0[2];
wchar_t* lobby_race_bgm;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 9); }
		static __int16 TableId() { return 315; }
		static __int32 SubType() { return -1; }
		enum class race {
			race_none = 0,
			geon = 1,
			gon = 2,
			rin = 3,
			jin = 4,
			nabbeunmob = 5,
			deonabbeunmob = 6,
			museounmob = 7,
			deomuseounmob = 8,
			deodeomuseounmob = 9,
			goyangi = 10,
			gangrimche = 11,
			aggwi = 12,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) race_RecordPtr // : DrRecordPtr
	{
		race_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}