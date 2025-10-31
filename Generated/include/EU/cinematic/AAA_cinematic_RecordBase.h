/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct cinematic_Record : BnsTables::Shared::DrEl
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
wchar_t* cinema_name;
wchar_t* cinema_resource_name;
wchar_t* teen_cinema_name;
wchar_t* teen_cinema_resource_name;
BnsTables::Shared::TableRef costume;
int costume_tableId() const {return 202;};
signed char skippable;
bool point_camera;
bool nameplate_visible;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 57; }
		static __int32 SubType() { return -1; }
		enum class skippable {
			none = 0,
			skip = 1,
			party_skip = 2,
			team_skip = 3,
			auto_skip = 4,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) cinematic_RecordPtr // : DrRecordPtr
	{
		cinematic_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}