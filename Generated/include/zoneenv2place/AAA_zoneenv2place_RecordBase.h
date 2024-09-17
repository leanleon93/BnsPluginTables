/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2place_Record : DrEl
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
Data::XYZ region_point[4];
__int16 height;
char Pad0[2];
Data::XYZ action_point;
__int16 action_radius;
bool use_manipulation_point;
char Pad1[1];
Data::XYZ manipulation_point;
__int16 manipulation_radius;
__int16 manipulation_height_upper;
__int16 manipulation_height_lower;
char Pad2[2];
wchar_t* env_actorname;
bool spawn_env;

		static TableVersion Version() { return TableVersion(0, 20); }
		static __int16 TableId() { return 445; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneenv2place_RecordPtr // : DrRecordPtr
	{
		zoneenv2place_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zoneenv2place_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}