/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct ranking2_season_group_Record : DrEl
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
Data::TableRef contents;
int contents_tableId(){return 296;};
Data::TableRef season[10];
int season_tableId(){return 300;};
Data::TableRef main_season;
int main_season_tableId(){return 300;};
__int8 contents_score_type;
char Pad0[3];
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
Data::TableRef tier_contents_seasons[15];
int tier_contents_seasons_tableId(){return 301;};
Data::TableRef tier;
int tier_tableId(){return 303;};

		static TableVersion Version() { return TableVersion(3, 1); }
		static __int16 TableId() { return 301; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_season_group_RecordPtr // : DrRecordPtr
	{
		ranking2_season_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_season_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}