/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class content_quota_RecordSubType : __int32
    {
		content_quota_record_sub_vitality = 0,
		content_quota_record_sub_shop_sale = 1,
		content_quota_record_sub_guild_battle_field = 2,
		content_quota_record_sub_public_raid = 3,
		content_quota_record_sub_mentor_quest = 4,
		content_quota_record_sub_mentee_quest = 5,
		content_quota_record_sub_life_contents = 6,
		content_quota_record_sub_quest_reward_hongmoon = 7,
		content_quota_record_sub_quest_reward_membership = 8,
		content_quota_record_sub_quest_reward_pccafe = 9,
		content_quota_record_sub_item_buy_1 = 10,
		content_quota_record_sub_item_buy_2 = 11,
		content_quota_record_sub_item_buy_3 = 12,
		content_quota_record_sub_item_buy_4 = 13,
		content_quota_record_sub_item_buy_5 = 14,
		content_quota_record_sub_item_buy_6 = 15,
		content_quota_record_sub_item_buy_7 = 16,
		content_quota_record_sub_item_buy_8 = 17,
		content_quota_record_sub_item_buy_9 = 18,
		content_quota_record_sub_item_buy_10 = 19,
		content_quota_record_sub_item_buy_11 = 20,
		content_quota_record_sub_item_buy_12 = 21,
		content_quota_record_sub_item_buy_13 = 22,
		content_quota_record_sub_item_buy_14 = 23,
		content_quota_record_sub_item_buy_15 = 24,
		content_quota_record_sub_item_buy_16 = 25,
		content_quota_record_sub_item_buy_17 = 26,
		content_quota_record_sub_item_buy_18 = 27,
		content_quota_record_sub_item_buy_19 = 28,
		content_quota_record_sub_item_buy_20 = 29,
		content_quota_record_sub_item_buy_21 = 30,
		content_quota_record_sub_item_buy_22 = 31,
		content_quota_record_sub_item_buy_23 = 32,
		content_quota_record_sub_item_buy_24 = 33,
		content_quota_record_sub_item_buy_25 = 34,
		content_quota_record_sub_item_buy_26 = 35,
		content_quota_record_sub_item_buy_27 = 36,
		content_quota_record_sub_item_buy_28 = 37,
		content_quota_record_sub_item_buy_29 = 38,
		content_quota_record_sub_item_buy_30 = 39,
		content_quota_record_sub_item_buy_31 = 40,
		content_quota_record_sub_item_buy_32 = 41,
		content_quota_record_sub_item_buy_33 = 42,
		content_quota_record_sub_item_buy_34 = 43,
		content_quota_record_sub_item_buy_35 = 44,
		content_quota_record_sub_item_buy_36 = 45,
		content_quota_record_sub_item_buy_37 = 46,
		content_quota_record_sub_item_buy_38 = 47,
		content_quota_record_sub_item_buy_39 = 48,
		content_quota_record_sub_item_buy_40 = 49,
		content_quota_record_sub_item_buy_41 = 50,
		content_quota_record_sub_item_buy_42 = 51,
		content_quota_record_sub_item_buy_43 = 52,
		content_quota_record_sub_item_buy_44 = 53,
		content_quota_record_sub_item_buy_45 = 54,
		content_quota_record_sub_item_buy_46 = 55,
		content_quota_record_sub_item_buy_47 = 56,
		content_quota_record_sub_item_buy_48 = 57,
		content_quota_record_sub_item_buy_49 = 58,
		content_quota_record_sub_item_buy_50 = 59,
		content_quota_record_sub_item_buy_51 = 60,
		content_quota_record_sub_item_buy_52 = 61,
		content_quota_record_sub_item_buy_53 = 62,
		content_quota_record_sub_item_buy_54 = 63,
		content_quota_record_sub_item_buy_55 = 64,
		content_quota_record_sub_item_buy_56 = 65,
		content_quota_record_sub_item_buy_57 = 66,
		content_quota_record_sub_item_buy_58 = 67,
		content_quota_record_sub_item_buy_59 = 68,
		content_quota_record_sub_item_buy_60 = 69,
		content_quota_record_sub_item_buy_61 = 70,
		content_quota_record_sub_item_buy_62 = 71,
		content_quota_record_sub_item_buy_63 = 72,
		content_quota_record_sub_item_buy_64 = 73,
		content_quota_record_sub_item_buy_65 = 74,
		content_quota_record_sub_item_buy_66 = 75,
		content_quota_record_sub_item_buy_67 = 76,
		content_quota_record_sub_item_buy_68 = 77,
		content_quota_record_sub_item_buy_69 = 78,
		content_quota_record_sub_item_buy_70 = 79,
		content_quota_record_sub_item_buy_71 = 80,
		content_quota_record_sub_item_buy_72 = 81,
		content_quota_record_sub_item_buy_73 = 82,
		content_quota_record_sub_item_buy_74 = 83,
		content_quota_record_sub_item_buy_75 = 84,
		content_quota_record_sub_item_buy_76 = 85,
		content_quota_record_sub_item_buy_77 = 86,
		content_quota_record_sub_item_buy_78 = 87,
		content_quota_record_sub_item_buy_79 = 88,
		content_quota_record_sub_item_buy_80 = 89,
		content_quota_record_sub_item_buy_81 = 90,
		content_quota_record_sub_item_buy_82 = 91,
		content_quota_record_sub_item_buy_83 = 92,
		content_quota_record_sub_item_buy_84 = 93,
		content_quota_record_sub_item_buy_85 = 94,
		content_quota_record_sub_item_buy_86 = 95,
		content_quota_record_sub_item_buy_87 = 96,
		content_quota_record_sub_item_buy_88 = 97,
		content_quota_record_sub_item_buy_89 = 98,
		content_quota_record_sub_item_buy_90 = 99,
		content_quota_record_sub_item_buy_91 = 100,
		content_quota_record_sub_item_buy_92 = 101,
		content_quota_record_sub_item_buy_93 = 102,
		content_quota_record_sub_item_buy_94 = 103,
		content_quota_record_sub_item_buy_95 = 104,
		content_quota_record_sub_item_buy_96 = 105,
		content_quota_record_sub_item_buy_97 = 106,
		content_quota_record_sub_item_buy_98 = 107,
		content_quota_record_sub_item_buy_99 = 108,
		content_quota_record_sub_item_buy_100 = 109,
		content_quota_record_sub_item_buy_101 = 110,
		content_quota_record_sub_item_buy_102 = 111,
		content_quota_record_sub_item_buy_103 = 112,
		content_quota_record_sub_item_buy_104 = 113,
		content_quota_record_sub_item_buy_105 = 114,
		content_quota_record_sub_item_buy_106 = 115,
		content_quota_record_sub_item_buy_107 = 116,
		content_quota_record_sub_item_buy_108 = 117,
		content_quota_record_sub_item_buy_109 = 118,
		content_quota_record_sub_item_buy_110 = 119,
		content_quota_record_sub_item_buy_111 = 120,
		content_quota_record_sub_item_buy_112 = 121,
		content_quota_record_sub_item_buy_113 = 122,
		content_quota_record_sub_item_buy_114 = 123,
		content_quota_record_sub_item_buy_115 = 124,
		content_quota_record_sub_item_buy_116 = 125,
		content_quota_record_sub_item_buy_117 = 126,
		content_quota_record_sub_item_buy_118 = 127,
		content_quota_record_sub_item_buy_119 = 128,
		content_quota_record_sub_item_buy_120 = 129,
		content_quota_record_sub_item_buy_121 = 130,
		content_quota_record_sub_item_buy_122 = 131,
		content_quota_record_sub_item_buy_123 = 132,
		content_quota_record_sub_item_buy_124 = 133,
		content_quota_record_sub_item_buy_125 = 134,
		content_quota_record_sub_item_buy_126 = 135,
		content_quota_record_sub_item_buy_127 = 136,
		content_quota_record_sub_item_buy_128 = 137,
		content_quota_record_sub_item_buy_129 = 138,
		content_quota_record_sub_item_buy_130 = 139,
		content_quota_record_sub_item_buy_131 = 140,
		content_quota_record_sub_item_buy_132 = 141,
		content_quota_record_sub_item_buy_133 = 142,
		content_quota_record_sub_item_buy_134 = 143,
		content_quota_record_sub_item_buy_135 = 144,
		content_quota_record_sub_item_buy_136 = 145,
		content_quota_record_sub_item_buy_137 = 146,
		content_quota_record_sub_item_buy_138 = 147,
		content_quota_record_sub_item_buy_139 = 148,
		content_quota_record_sub_item_buy_140 = 149,
		content_quota_record_sub_item_buy_141 = 150,
		content_quota_record_sub_item_buy_142 = 151,
		content_quota_record_sub_item_buy_143 = 152,
		content_quota_record_sub_item_buy_144 = 153,
		content_quota_record_sub_item_buy_145 = 154,
		content_quota_record_sub_item_buy_146 = 155,
		content_quota_record_sub_item_buy_147 = 156,
		content_quota_record_sub_item_buy_148 = 157,
		content_quota_record_sub_item_buy_149 = 158,
		content_quota_record_sub_item_buy_150 = 159,
		content_quota_record_sub_item_buy_151 = 160,
		content_quota_record_sub_item_buy_152 = 161,
		content_quota_record_sub_item_buy_153 = 162,
		content_quota_record_sub_item_buy_154 = 163,
		content_quota_record_sub_item_buy_155 = 164,
		content_quota_record_sub_item_buy_156 = 165,
		content_quota_record_sub_item_buy_157 = 166,
		content_quota_record_sub_item_buy_158 = 167,
		content_quota_record_sub_item_buy_159 = 168,
		content_quota_record_sub_item_buy_160 = 169,
		content_quota_record_sub_item_buy_161 = 170,
		content_quota_record_sub_item_buy_162 = 171,
		content_quota_record_sub_item_buy_163 = 172,
		content_quota_record_sub_item_buy_164 = 173,
		content_quota_record_sub_item_buy_165 = 174,
		content_quota_record_sub_item_buy_166 = 175,
		content_quota_record_sub_item_buy_167 = 176,
		content_quota_record_sub_item_buy_168 = 177,
		content_quota_record_sub_item_buy_169 = 178,
		content_quota_record_sub_item_buy_170 = 179,
		content_quota_record_sub_item_buy_171 = 180,
		content_quota_record_sub_item_buy_172 = 181,
		content_quota_record_sub_item_buy_173 = 182,
		content_quota_record_sub_item_buy_174 = 183,
		content_quota_record_sub_item_buy_175 = 184,
		content_quota_record_sub_item_buy_176 = 185,
		content_quota_record_sub_item_buy_177 = 186,
		content_quota_record_sub_item_buy_178 = 187,
		content_quota_record_sub_item_buy_179 = 188,
		content_quota_record_sub_item_buy_180 = 189,
		content_quota_record_sub_item_buy_181 = 190,
		content_quota_record_sub_item_buy_182 = 191,
		content_quota_record_sub_item_buy_183 = 192,
		content_quota_record_sub_item_buy_184 = 193,
		content_quota_record_sub_item_buy_185 = 194,
		content_quota_record_sub_item_buy_186 = 195,
		content_quota_record_sub_item_buy_187 = 196,
		content_quota_record_sub_item_buy_188 = 197,
		content_quota_record_sub_item_buy_189 = 198,
		content_quota_record_sub_item_buy_190 = 199,
		content_quota_record_sub_item_buy_191 = 200,
		content_quota_record_sub_item_buy_192 = 201,
		content_quota_record_sub_item_buy_193 = 202,
		content_quota_record_sub_item_buy_194 = 203,
		content_quota_record_sub_item_buy_195 = 204,
		content_quota_record_sub_item_buy_196 = 205,
		content_quota_record_sub_item_buy_197 = 206,
		content_quota_record_sub_item_buy_198 = 207,
		content_quota_record_sub_item_buy_199 = 208,
		content_quota_record_sub_item_buy_200 = 209,
		content_quota_record_sub_item_buy_201 = 210,
		content_quota_record_sub_item_buy_202 = 211,
		content_quota_record_sub_item_buy_203 = 212,
		content_quota_record_sub_item_buy_204 = 213,
		content_quota_record_sub_item_buy_205 = 214,
		content_quota_record_sub_item_buy_206 = 215,
		content_quota_record_sub_item_buy_207 = 216,
		content_quota_record_sub_item_buy_208 = 217,
		content_quota_record_sub_item_buy_209 = 218,
		content_quota_record_sub_item_buy_210 = 219,
		content_quota_record_sub_item_buy_211 = 220,
		content_quota_record_sub_item_buy_212 = 221,
		content_quota_record_sub_item_buy_213 = 222,
		content_quota_record_sub_item_buy_214 = 223,
		content_quota_record_sub_item_buy_215 = 224,
		content_quota_record_sub_item_buy_216 = 225,
		content_quota_record_sub_item_buy_217 = 226,
		content_quota_record_sub_item_buy_218 = 227,
		content_quota_record_sub_item_buy_219 = 228,
		content_quota_record_sub_item_buy_220 = 229,
		content_quota_record_sub_item_buy_221 = 230,
		content_quota_record_sub_item_buy_222 = 231,
		content_quota_record_sub_item_buy_223 = 232,
		content_quota_record_sub_item_buy_224 = 233,
		content_quota_record_sub_item_buy_225 = 234,
		content_quota_record_sub_item_buy_226 = 235,
		content_quota_record_sub_item_buy_227 = 236,
		content_quota_record_sub_item_buy_228 = 237,
		content_quota_record_sub_item_buy_229 = 238,
		content_quota_record_sub_item_buy_230 = 239,
		content_quota_record_sub_item_buy_231 = 240,
		content_quota_record_sub_item_buy_232 = 241,
		content_quota_record_sub_item_buy_233 = 242,
		content_quota_record_sub_item_buy_234 = 243,
		content_quota_record_sub_item_buy_235 = 244,
		content_quota_record_sub_item_buy_236 = 245,
		content_quota_record_sub_item_buy_237 = 246,
		content_quota_record_sub_item_buy_238 = 247,
		content_quota_record_sub_item_buy_239 = 248,
		content_quota_record_sub_item_buy_240 = 249,
		content_quota_record_sub_item_buy_241 = 250,
		content_quota_record_sub_item_buy_242 = 251,
		content_quota_record_sub_item_buy_243 = 252,
		content_quota_record_sub_item_buy_244 = 253,
		content_quota_record_sub_item_buy_245 = 254,
		content_quota_record_sub_item_buy_246 = 255,
		content_quota_record_sub_item_buy_247 = 256,
		content_quota_record_sub_item_buy_248 = 257,
		content_quota_record_sub_item_buy_249 = 258,
		content_quota_record_sub_item_buy_250 = 259,
		content_quota_record_sub_item_buy_251 = 260,
		content_quota_record_sub_item_buy_252 = 261,
		content_quota_record_sub_item_buy_253 = 262,
		content_quota_record_sub_item_buy_254 = 263,
		content_quota_record_sub_item_buy_255 = 264,
		content_quota_record_sub_item_buy_256 = 265,
		content_quota_record_sub_item_buy_257 = 266,
		content_quota_record_sub_item_buy_258 = 267,
		content_quota_record_sub_item_buy_259 = 268,
		content_quota_record_sub_item_buy_260 = 269,
		content_quota_record_sub_item_buy_261 = 270,
		content_quota_record_sub_item_buy_262 = 271,
		content_quota_record_sub_item_buy_263 = 272,
		content_quota_record_sub_item_buy_264 = 273,
		content_quota_record_sub_item_buy_265 = 274,
		content_quota_record_sub_item_buy_266 = 275,
		content_quota_record_sub_item_buy_267 = 276,
		content_quota_record_sub_item_buy_268 = 277,
		content_quota_record_sub_item_buy_269 = 278,
		content_quota_record_sub_item_buy_270 = 279,
		content_quota_record_sub_item_buy_271 = 280,
		content_quota_record_sub_item_buy_272 = 281,
		content_quota_record_sub_item_buy_273 = 282,
		content_quota_record_sub_item_buy_274 = 283,
		content_quota_record_sub_item_buy_275 = 284,
		content_quota_record_sub_item_buy_276 = 285,
		content_quota_record_sub_item_buy_277 = 286,
		content_quota_record_sub_item_buy_278 = 287,
		content_quota_record_sub_item_buy_279 = 288,
		content_quota_record_sub_item_buy_280 = 289,
		content_quota_record_sub_item_buy_281 = 290,
		content_quota_record_sub_item_buy_282 = 291,
		content_quota_record_sub_item_buy_283 = 292,
		content_quota_record_sub_item_buy_284 = 293,
		content_quota_record_sub_item_buy_285 = 294,
		content_quota_record_sub_item_buy_286 = 295,
		content_quota_record_sub_item_buy_287 = 296,
		content_quota_record_sub_item_buy_288 = 297,
		content_quota_record_sub_item_buy_289 = 298,
		content_quota_record_sub_item_buy_290 = 299,
		content_quota_record_sub_item_buy_291 = 300,
		content_quota_record_sub_item_buy_292 = 301,
		content_quota_record_sub_item_buy_293 = 302,
		content_quota_record_sub_item_buy_294 = 303,
		content_quota_record_sub_item_buy_295 = 304,
		content_quota_record_sub_item_buy_296 = 305,
		content_quota_record_sub_item_buy_297 = 306,
		content_quota_record_sub_item_buy_298 = 307,
		content_quota_record_sub_item_buy_299 = 308,
		content_quota_record_sub_item_buy_300 = 309,
		content_quota_record_sub_item_buy_301 = 310,
		content_quota_record_sub_item_buy_302 = 311,
		content_quota_record_sub_item_buy_303 = 312,
		content_quota_record_sub_item_buy_304 = 313,
		content_quota_record_sub_item_buy_305 = 314,
		content_quota_record_sub_item_buy_306 = 315,
		content_quota_record_sub_item_buy_307 = 316,
		content_quota_record_sub_item_buy_308 = 317,
		content_quota_record_sub_item_buy_309 = 318,
		content_quota_record_sub_item_buy_310 = 319,
		content_quota_record_sub_item_buy_311 = 320,
		content_quota_record_sub_item_buy_312 = 321,
		content_quota_record_sub_item_buy_313 = 322,
		content_quota_record_sub_item_buy_314 = 323,
		content_quota_record_sub_item_buy_315 = 324,
		content_quota_record_sub_item_buy_316 = 325,
		content_quota_record_sub_item_buy_317 = 326,
		content_quota_record_sub_item_buy_318 = 327,
		content_quota_record_sub_item_buy_319 = 328,
		content_quota_record_sub_item_buy_320 = 329,
		content_quota_record_sub_item_buy_321 = 330,
		content_quota_record_sub_item_buy_322 = 331,
		content_quota_record_sub_item_buy_323 = 332,
		content_quota_record_sub_item_buy_324 = 333,
		content_quota_record_sub_item_buy_325 = 334,
		content_quota_record_sub_item_buy_326 = 335,
		content_quota_record_sub_item_buy_327 = 336,
		content_quota_record_sub_item_buy_328 = 337,
		content_quota_record_sub_item_buy_329 = 338,
		content_quota_record_sub_item_buy_330 = 339,
		content_quota_record_sub_item_buy_331 = 340,
		content_quota_record_sub_item_buy_332 = 341,
		content_quota_record_sub_item_buy_333 = 342,
		content_quota_record_sub_item_buy_334 = 343,
		content_quota_record_sub_item_buy_335 = 344,
		content_quota_record_sub_item_buy_336 = 345,
		content_quota_record_sub_item_buy_337 = 346,
		content_quota_record_sub_item_buy_338 = 347,
		content_quota_record_sub_item_buy_339 = 348,
		content_quota_record_sub_item_buy_340 = 349,
		content_quota_record_sub_item_buy_341 = 350,
		content_quota_record_sub_item_buy_342 = 351,
		content_quota_record_sub_item_buy_343 = 352,
		content_quota_record_sub_item_buy_344 = 353,
		content_quota_record_sub_item_buy_345 = 354,
		content_quota_record_sub_item_buy_346 = 355,
		content_quota_record_sub_item_buy_347 = 356,
		content_quota_record_sub_item_buy_348 = 357,
		content_quota_record_sub_item_buy_349 = 358,
		content_quota_record_sub_item_buy_350 = 359,
		content_quota_record_sub_daily_contents_reset = 360,
		content_quota_record_sub_weekly_contents_reset = 361,
		content_quota_record_sub_specific_target = 362,
		content_quota_record_sub_trade_restrict = 363,
		content_quota_record_sub_market_targeted_sale = 364,
		content_quota_record_sub_fatigability = 365,
		content_quota_record_sub_fatigability_pccafe = 366,
		content_quota_record_sub_count = 367,
    };
#pragma pack(push, 1)
	struct content_quota_Record : BnsTables::Shared::DrEl
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
__int64 min_value;
__int64 max_value;
__int16 version;
signed char target_type;
char Pad0[1];
wchar_t* expiration_time;
signed char charge_interval;
signed char charge_day_of_week;
signed char charge_time;
char Pad1[1];
__int64 charge_amount_per_interval;
bool consume_key_record;
char Pad2[3];
BnsTables::Shared::TableRef consume_order[4];
__int32 consume_order_Size() const {return 4;};
int consume_order_tableId() const {return 67;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(7, 0); }
		static __int16 TableId() { return 67; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) content_quota_RecordPtr // : DrRecordPtr
	{
		content_quota_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}