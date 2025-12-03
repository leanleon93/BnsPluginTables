/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct bossnpc_Record : BnsTables::Shared::DrEl
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
__int16 sp_point[3];
__int32 sp_point_Size() const {return 3;};
char Pad0[2];
wchar_t* sp_show[3];
__int32 sp_show_Size() const {return 3;};
wchar_t* immune_breaker_disabale_show;
__int32 berserk_sequence_invoke_time;
BnsTables::Shared::TableRef difficulty_type_modify;
int difficulty_type_modify_tableId() const {return 103;};
bool use_second_gauge;
char Pad1[1];
__int16 default_gp;
__int16 gp_section[11];
__int32 gp_section_Size() const {return 11;};
signed char gp_section_cnt;
signed char ui_style;
BnsTables::Shared::TableRef ui_tooltip;
int ui_tooltip_tableId() const {return 438;};
wchar_t* ui_double_sided_left_imageset;
wchar_t* ui_double_sided_right_imageset;
__int16 ui_double_sided_left_color_r;
__int16 ui_double_sided_left_color_g;
__int16 ui_double_sided_left_color_b;
__int16 ui_double_sided_left_color_a;
__int16 ui_double_sided_right_color_r;
__int16 ui_double_sided_right_color_g;
__int16 ui_double_sided_right_color_b;
__int16 ui_double_sided_right_color_a;
__int16 ui_fury_color_r[3];
__int32 ui_fury_color_r_Size() const {return 3;};
__int16 ui_fury_color_g[3];
__int32 ui_fury_color_g_Size() const {return 3;};
__int16 ui_fury_color_b[3];
__int32 ui_fury_color_b_Size() const {return 3;};
__int16 ui_fury_color_a[3];
__int32 ui_fury_color_a_Size() const {return 3;};
bool use_break;
char Pad2[1];
__int16 break_gauge_limit;
__int16 break_gauge_limit_increase_value;
signed char max_break_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 46; }
		static __int32 SubType() { return -1; }
		enum class ui_style {
			none = 0,
			fury = 1,
			absorb_level = 2,
			double_sided = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) bossnpc_RecordPtr // : DrRecordPtr
	{
		bossnpc_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}