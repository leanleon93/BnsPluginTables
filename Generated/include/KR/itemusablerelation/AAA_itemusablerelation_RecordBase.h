/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct itemusablerelation_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef attraction_group;
int attraction_group_tableId() const {return 16;};
bool all;
bool default_val;
bool duel;
bool unusable;
bool jeryoungrim;
bool deasamak;
bool suwal;
bool beakchung;
bool gunwon;
bool epichigh;
bool pacheonseongdo;
bool musin1_15;
bool cave_dungeon;
bool potion;
bool talisman;
bool techeonwangreung;
bool event1;
bool event2;
bool special_potion;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 230; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemusablerelation_RecordPtr // : DrRecordPtr
	{
		itemusablerelation_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}