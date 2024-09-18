/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct attachment_Record : BnsTables::Shared::DrEl
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
__int8 skel_index;
__int8 bone_index;
char Pad0[2];
wchar_t* mesh_id;
wchar_t* mesh_col[3];
wchar_t* mesh_animset;
wchar_t* attach_show;
wchar_t* detach_show;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 14; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) attachment_RecordPtr // : DrRecordPtr
	{
		attachment_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::attachment_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}