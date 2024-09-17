/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct equip_gem_piece_Record : DrEl
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
__int8 item_ability;
char Pad0[1];
__int16 value;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 119; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) equip_gem_piece_RecordPtr // : DrRecordPtr
	{
		equip_gem_piece_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::equip_gem_piece_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}