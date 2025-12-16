/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class fielditemdrop_RecordSubType : __int32
    {
		fielditemdrop_record_sub_npc = 0,
		fielditemdrop_record_sub_env = 1,
		fielditemdrop_record_sub_quest = 2,
		fielditemdrop_record_sub_npc_deadbody = 3,
		fielditemdrop_record_sub_count = 4,
    };
#pragma pack(push, 1)
	struct fielditemdrop_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef fielditem[3];
__int32 fielditem_Size() const {return 3;};
int fielditem_tableId() const {return 146;};
signed char prob[3];
__int32 prob_Size() const {return 3;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 9); }
		static __int16 TableId() { return 147; }
		static __int32 SubType() { return -1; }
		enum class drop_case {
			none = 0,
			effect = 1,
			bleeding = 2,
			effect_and_bleeding = 3,
			killed = 4,
		};

		enum class effect_attribute {
			none = 0,
			hoebog = 1,
			jindeugi = 2,
			bur = 3,
			eunsa = 4,
			geomijur = 5,
			dog = 6,
			eunsin = 7,
			tumyeong = 8,
			gwanggi = 9,
			eoreumgamog = 10,
			dognabang = 11,
			gajesdeurab = 12,
			daun = 13,
			neogbaegdaesi = 14,
			bangeoburga = 15,
			dobar = 16,
			domang = 17,
			idongburga = 18,
			daesiburga = 19,
			gamsog = 20,
			gijeor = 21,
			eoreobuteum = 22,
			haengdongburga = 23,
			churhyeor = 24,
			chiyu = 25,
			eoreum = 26,
			maengdog = 27,
			maggi = 28,
			sogbag = 29,
			jeab = 30,
			wichibaggugi = 31,
			jangagyeongye = 32,
			mujeog = 33,
			meonghaejim = 34,
			apchagi = 35,
			honjeor = 36,
			gwangpoghaejim = 37,
			gongjung = 38,
			geurogi = 39,
			nanmu = 40,
			neogbaeg = 41,
			heubgong = 42,
			kweseuteu_1 = 43,
			kweseuteu_2 = 44,
			kweseuteu_3 = 45,
			kweseuteu_4 = 46,
			kweseuteu_5 = 47,
			daesanggongjung = 48,
			boseu_1 = 49,
			boseu_2 = 50,
			boseu_3 = 51,
			boseudaeswi = 52,
			geurimja = 53,
			jungcheobburga1 = 54,
			jungcheobburga2 = 55,
			jogeonmanjog = 56,
			sohwansadog = 57,
			taengkingjangpan = 58,
			geommag = 59,
			biteu = 60,
			hongog = 61,
			nogjuseog = 62,
			boseujeohang_1 = 63,
			boseujeohang_2 = 64,
			boseujeohang_3 = 65,
			boseujeohang_4 = 66,
			boseujeohang_5 = 67,
			naginjeohang_1 = 68,
			naginjeohang_2 = 69,
			naginjeohang_3 = 70,
			naginjeohang_4 = 71,
			maseong_1 = 72,
			maseong_2 = 73,
			maseong_3 = 74,
			maseong_4 = 75,
			jusurche = 76,
			sour = 77,
			bujeog = 78,
			hwanma = 79,
			bansa = 80,
			NPC_1 = 81,
			NPC_2 = 82,
			NPC_3 = 83,
			NPC_4 = 84,
			NPC_5 = 85,
			NPC_6 = 86,
			NPC_7 = 87,
			NPC_8 = 88,
			NPC_9 = 89,
			NPC_10 = 90,
			naginjeohang_5 = 91,
			naginjeohang_6 = 92,
			naginjeohang_7 = 93,
			naginjeohang_8 = 94,
			keurraeseu_1 = 95,
			keurraeseu_2 = 96,
			keurraeseu_3 = 97,
			keurraeseu_4 = 98,
			keurraeseu_5 = 99,
			keurraeseu_6 = 100,
			keurraeseu_7 = 101,
			keurraeseu_8 = 102,
			keurraeseu_9 = 103,
			keurraeseu_10 = 104,
			keurraeseu_11 = 105,
			keurraeseu_12 = 106,
			keurraeseu_13 = 107,
			keurraeseu_14 = 108,
			keurraeseu_15 = 109,
			keurraeseu_16 = 110,
			keurraeseu_17 = 111,
			keurraeseu_18 = 112,
			keurraeseu_19 = 113,
			keurraeseu_20 = 114,
			keurraeseu_21 = 115,
			keurraeseu_22 = 116,
			keurraeseu_23 = 117,
			keurraeseu_24 = 118,
			keurraeseu_25 = 119,
			keurraeseu_26 = 120,
			keurraeseu_27 = 121,
			keurraeseu_28 = 122,
			keurraeseu_29 = 123,
			keurraeseu_30 = 124,
			keurraeseu_31 = 125,
			keurraeseu_32 = 126,
			keurraeseu_33 = 127,
			keurraeseu_34 = 128,
			keurraeseu_35 = 129,
			keurraeseu_36 = 130,
			keurraeseu_37 = 131,
			keurraeseu_38 = 132,
			keurraeseu_39 = 133,
			keurraeseu_40 = 134,
			keurraeseu_41 = 135,
			keurraeseu_42 = 136,
			keurraeseu_43 = 137,
			keurraeseu_44 = 138,
			keurraeseu_45 = 139,
			keurraeseu_46 = 140,
			keurraeseu_47 = 141,
			keurraeseu_48 = 142,
			keurraeseu_49 = 143,
			keurraeseu_50 = 144,
			keurraeseu_51 = 145,
			keurraeseu_52 = 146,
			keurraeseu_53 = 147,
			keurraeseu_54 = 148,
			keurraeseu_55 = 149,
			keurraeseu_56 = 150,
			keurraeseu_57 = 151,
			keurraeseu_58 = 152,
			keurraeseu_59 = 153,
			keurraeseu_60 = 154,
			aitemjogeon_1 = 155,
			eotaeggeurraideu = 156,
			munyang_1 = 157,
			munyang_2 = 158,
			munyang_3 = 159,
			munyang_4 = 160,
			munyang_5 = 161,
			munyang_6 = 162,
			munyang_7 = 163,
			munyang_8 = 164,
			munyang_9 = 165,
			munyang_10 = 166,
			munyang_11 = 167,
			munyang_12 = 168,
			munyang_13 = 169,
			munyang_14 = 170,
			munyang_15 = 171,
			munyang_16 = 172,
			munyang_17 = 173,
			munyang_18 = 174,
			munyang_19 = 175,
			munyang_20 = 176,
			gimig_1 = 177,
			gimig_2 = 178,
			gimig_3 = 179,
			gimig_4 = 180,
			gimig_5 = 181,
			deonjeonboseu_1 = 182,
			gimig_6 = 183,
			gimig_7 = 184,
			gimig_8 = 185,
			gimig_9 = 186,
			gimig_10 = 187,
			jungcheobburga3 = 188,
			pirdeuboseu_1 = 189,
			pirdeuboseu_2 = 190,
			pirdeuboseu_3 = 191,
		};

		enum class drop_place {
			none = 0,
			area = 1,
			hand = 2,
			hand_1 = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fielditemdrop_RecordPtr // : DrRecordPtr
	{
		fielditemdrop_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}