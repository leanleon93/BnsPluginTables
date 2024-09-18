/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct teleport_Record : BnsTables::Shared::DrEl
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
bool retired;
char Pad0[3];
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 405;};
BnsTables::Shared::TableRef teleport_position;
int teleport_position_tableId(){return 455;};
__int16 distance_from_start_teleport;
char Pad1[2];
__int32 price_percent;
BnsTables::Shared::TableRef description2;
int description2_tableId(){return 405;};
BnsTables::Shared::TableRef activated_faction;
int activated_faction_tableId(){return 130;};
bool joined_faction;
__int8 required_pc_level;
__int8 required_pc_mastery_level;
__int8 required_faction_level;
BnsTables::Shared::TableRef ui_preceding_quest;
int ui_preceding_quest_tableId(){return 283;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 23); }
		static __int16 TableId() { return 401; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) teleport_RecordPtr // : DrRecordPtr
	{
		teleport_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::teleport_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}