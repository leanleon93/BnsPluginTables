/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct teen_body_material_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* body_material_name;
wchar_t* teen_body_material_name;
wchar_t* body_mesh_name;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 400; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) teen_body_material_RecordPtr // : DrRecordPtr
	{
		teen_body_material_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::teen_body_material_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}