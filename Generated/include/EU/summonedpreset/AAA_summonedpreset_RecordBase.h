/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct summonedpreset_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char part_type;
signed char part_value;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 price;
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 189;};
__int16 icon_index;
char Pad0[2];
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 438;};
signed char param8[96];
__int32 param8_Size() const {return 96;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 427; }
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

		enum class part_type {
			none = 0,
			face = 1,
			body = 2,
			eye_color = 3,
			eye = 4,
			body_color = 5,
			body_shape = 6,
			decal = 7,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summonedpreset_RecordPtr // : DrRecordPtr
	{
		summonedpreset_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}