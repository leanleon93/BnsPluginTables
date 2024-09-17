/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct pc_voice_set_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 id;
__int8 job;
__int8 stance;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* voice_set_name;
wchar_t* sample_sound_name[6];
wchar_t* type1_sample_sound_name;
wchar_t* type2_sample_sound_name;
wchar_t* type3_sample_sound_name;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 273; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_voice_set_RecordPtr // : DrRecordPtr
	{
		pc_voice_set_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pc_voice_set_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}