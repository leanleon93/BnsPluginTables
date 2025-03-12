/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct item_improve_succession_Record : BnsTables::Shared::DrEl
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
__int32 seed_improve_id;
signed char seed_improve_level;
char Pad0[3];
__int32 result_improve_id;
signed char result_improve_level;
char Pad1[3];
__int32 feed_main_improve_id;
signed char feed_main_improve_level;
char Pad2[3];
BnsTables::Shared::TableRef feed_main_ingredient;
int feed_main_ingredient_tableId() const {return 198;};
__int16 feed_main_ingredient_count;
char Pad3[2];
BnsTables::Shared::TableRef feed_sub_ingredient[8];
__int32 feed_sub_ingredient_Size() const {return 8;};
int feed_sub_ingredient_tableId() const {return 198;};
__int16 feed_sub_ingredient_count[8];
__int32 feed_sub_ingredient_count_Size() const {return 8;};
__int32 cost_money;
signed char feed_succession_option_step[5];
__int32 feed_succession_option_step_Size() const {return 5;};
signed char result_succession_option_step[5];
__int32 result_succession_option_step_Size() const {return 5;};
bool keep_main_ingredient_spirit;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 211; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_improve_succession_RecordPtr // : DrRecordPtr
	{
		item_improve_succession_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}