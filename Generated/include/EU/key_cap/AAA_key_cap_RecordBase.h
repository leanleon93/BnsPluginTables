/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct key_cap_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 key_code;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name;
int name_tableId() const {return 435;};
BnsTables::Shared::TableRef short_name;
int short_name_tableId() const {return 435;};
BnsTables::Shared::TableRef image;
int image_tableId() const {return 435;};
BnsTables::Shared::IconRef icon;
wchar_t* scroll_imageset;
float scroll_imageset_scale;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 13); }
		static __int16 TableId() { return 246; }
		static __int32 SubType() { return -1; }
		enum class key_code {
			none = 0,
			value_0 = 1,
			value_1 = 2,
			value_2 = 3,
			value_3 = 4,
			value_4 = 5,
			value_5 = 6,
			value_6 = 7,
			value_7 = 8,
			value_8 = 9,
			value_9 = 10,
			numpad_0 = 11,
			numpad_1 = 12,
			numpad_2 = 13,
			numpad_3 = 14,
			numpad_4 = 15,
			numpad_5 = 16,
			numpad_6 = 17,
			numpad_7 = 18,
			numpad_8 = 19,
			numpad_9 = 20,
			f1 = 21,
			f2 = 22,
			f3 = 23,
			f4 = 24,
			f5 = 25,
			f6 = 26,
			f7 = 27,
			f8 = 28,
			f9 = 29,
			f10 = 30,
			f11 = 31,
			f12 = 32,
			a = 33,
			b = 34,
			c = 35,
			d = 36,
			e = 37,
			f = 38,
			g = 39,
			h = 40,
			i = 41,
			j = 42,
			k = 43,
			l = 44,
			m = 45,
			n = 46,
			o = 47,
			p = 48,
			q = 49,
			r = 50,
			s = 51,
			t = 52,
			u = 53,
			v = 54,
			w = 55,
			x = 56,
			y = 57,
			z = 58,
			back_space = 59,
			tab = 60,
			caps_lock = 61,
			space = 62,
			page_up = 63,
			page_down = 64,
			end = 65,
			home = 66,
			left = 67,
			up = 68,
			right = 69,
			down = 70,
			insert = 71,
			delete_val = 72,
			multiply = 73,
			add = 74,
			subtract = 75,
			decimal = 76,
			divide = 77,
			num_lock = 78,
			shift = 79,
			control = 80,
			alt = 81,
			semicolon = 82,
			equal = 83,
			minus = 84,
			comma = 85,
			period = 86,
			slash = 87,
			tilde = 88,
			left_square_bracket = 89,
			back_slash = 90,
			right_square_bracket = 91,
			single_quatation = 92,
			mouse_left_button = 93,
			mouse_middle_button = 94,
			mouse_right_button = 95,
			joybtn_a = 96,
			joybtn_b = 97,
			joybtn_x = 98,
			joybtn_y = 99,
			joybtn_dpad_up = 100,
			joybtn_dpad_down = 101,
			joybtn_dpad_left = 102,
			joybtn_dpad_right = 103,
			joybtn_leftstick_up = 104,
			joybtn_leftstick_down = 105,
			joybtn_leftstick_left = 106,
			joybtn_leftstick_right = 107,
			joybtn_rightstick_up = 108,
			joybtn_rightstick_down = 109,
			joybtn_rightstick_left = 110,
			joybtn_rightstick_right = 111,
			joybtn_leftshoulder = 112,
			joybtn_rightshoulder = 113,
			joybtn_start = 114,
			joybtn_back = 115,
			joybtn_leftthumbstick = 116,
			joybtn_rightthumbstick = 117,
			joybtn_lefttrigger = 118,
			joybtn_righttrigger = 119,
			joybtn_function1 = 120,
			joybtn_function2 = 121,
			escape = 122,
			enter = 123,
			shift_joypad_replaceable = 124,
			shift_dash_forward_joypad_replaceable = 125,
			control_joypad_replaceable = 126,
			alt_joypad_replaceable = 127,
			mouse_left_button_joypad_replaceable = 128,
			mouse_right_button_joypad_replaceable = 129,
			escape_joypad_replaceable = 130,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) key_cap_RecordPtr // : DrRecordPtr
	{
		key_cap_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}