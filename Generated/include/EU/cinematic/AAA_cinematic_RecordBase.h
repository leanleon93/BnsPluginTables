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
int costume_tableId(){return 189;};
__int8 skippable;
bool point_camera;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 56; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) cinematic_RecordPtr // : DrRecordPtr
	{
		cinematic_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::cinematic_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}