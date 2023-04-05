#ifndef CURSED_MACROS_H_
#define CURSED_MACROS_H_

#define CAR(x, ...) x
#define CDR(_, ...) __VA_ARGS__

// clang-format off
#define _NUM_ARGS2(X,X64,X63,X62,X61,X60,X59,X58,X57,X56,X55,X54,X53,X52,X51,X50,X49,X48,X47,X46,X45,X44,X43,X42,X41,X40,X39,X38,X37,X36,X35,X34,X33,X32,X31,X30,X29,X28,X27,X26,X25,X24,X23,X22,X21,X20,X19,X18,X17,X16,X15,X14,X13,X12,X11,X10,X9,X8,X7,X6,X5,X4,X3,X2,X1,N,...) N
#define NUM_ARGS(...) _NUM_ARGS2(0, __VA_ARGS__ ,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0)

#define _CALL_1(macro, x, ...) macro(x)
#define _CALL_2(macro, x, ...) macro(x) _CALL_1(macro, __VA_ARGS__)
#define _CALL_3(macro, x, ...) macro(x) _CALL_2(macro, __VA_ARGS__)
#define _CALL_4(macro, x, ...) macro(x) _CALL_3(macro, __VA_ARGS__)
#define _CALL_5(macro, x, ...) macro(x) _CALL_4(macro, __VA_ARGS__)
#define _CALL_6(macro, x, ...) macro(x) _CALL_5(macro, __VA_ARGS__)
#define _CALL_7(macro, x, ...) macro(x) _CALL_6(macro, __VA_ARGS__)
#define _CALL_8(macro, x, ...) macro(x) _CALL_7(macro, __VA_ARGS__)
#define _CALL_9(macro, x, ...) macro(x) _CALL_8(macro, __VA_ARGS__)
#define _CALL_10(macro, x, ...) macro(x) _CALL_9(macro, __VA_ARGS__)
#define _CALL_11(macro, x, ...) macro(x) _CALL_10(macro, __VA_ARGS__)
#define _CALL_12(macro, x, ...) macro(x) _CALL_11(macro, __VA_ARGS__)
#define _CALL_13(macro, x, ...) macro(x) _CALL_12(macro, __VA_ARGS__)
#define _CALL_14(macro, x, ...) macro(x) _CALL_13(macro, __VA_ARGS__)
#define _CALL_15(macro, x, ...) macro(x) _CALL_14(macro, __VA_ARGS__)
#define _CALL_16(macro, x, ...) macro(x) _CALL_15(macro, __VA_ARGS__)
#define _CALL_17(macro, x, ...) macro(x) _CALL_16(macro, __VA_ARGS__)
#define _CALL_18(macro, x, ...) macro(x) _CALL_17(macro, __VA_ARGS__)
#define _CALL_19(macro, x, ...) macro(x) _CALL_18(macro, __VA_ARGS__)
#define _CALL_20(macro, x, ...) macro(x) _CALL_19(macro, __VA_ARGS__)
#define _CALL_21(macro, x, ...) macro(x) _CALL_20(macro, __VA_ARGS__)
#define _CALL_22(macro, x, ...) macro(x) _CALL_21(macro, __VA_ARGS__)
#define _CALL_23(macro, x, ...) macro(x) _CALL_22(macro, __VA_ARGS__)
#define _CALL_24(macro, x, ...) macro(x) _CALL_23(macro, __VA_ARGS__)
#define _CALL_25(macro, x, ...) macro(x) _CALL_24(macro, __VA_ARGS__)
#define _CALL_26(macro, x, ...) macro(x) _CALL_25(macro, __VA_ARGS__)
#define _CALL_27(macro, x, ...) macro(x) _CALL_26(macro, __VA_ARGS__)
#define _CALL_28(macro, x, ...) macro(x) _CALL_27(macro, __VA_ARGS__)
#define _CALL_29(macro, x, ...) macro(x) _CALL_28(macro, __VA_ARGS__)
#define _CALL_30(macro, x, ...) macro(x) _CALL_29(macro, __VA_ARGS__)
#define _CALL_31(macro, x, ...) macro(x) _CALL_30(macro, __VA_ARGS__)
#define _CALL_32(macro, x, ...) macro(x) _CALL_31(macro, __VA_ARGS__)
#define _CALL_33(macro, x, ...) macro(x) _CALL_32(macro, __VA_ARGS__)
#define _CALL_34(macro, x, ...) macro(x) _CALL_33(macro, __VA_ARGS__)
#define _CALL_35(macro, x, ...) macro(x) _CALL_34(macro, __VA_ARGS__)
#define _CALL_36(macro, x, ...) macro(x) _CALL_35(macro, __VA_ARGS__)
#define _CALL_37(macro, x, ...) macro(x) _CALL_36(macro, __VA_ARGS__)
#define _CALL_38(macro, x, ...) macro(x) _CALL_37(macro, __VA_ARGS__)
#define _CALL_39(macro, x, ...) macro(x) _CALL_38(macro, __VA_ARGS__)
#define _CALL_40(macro, x, ...) macro(x) _CALL_39(macro, __VA_ARGS__)
#define _CALL_41(macro, x, ...) macro(x) _CALL_40(macro, __VA_ARGS__)
#define _CALL_42(macro, x, ...) macro(x) _CALL_41(macro, __VA_ARGS__)
#define _CALL_43(macro, x, ...) macro(x) _CALL_42(macro, __VA_ARGS__)
#define _CALL_44(macro, x, ...) macro(x) _CALL_43(macro, __VA_ARGS__)
#define _CALL_45(macro, x, ...) macro(x) _CALL_44(macro, __VA_ARGS__)
#define _CALL_46(macro, x, ...) macro(x) _CALL_45(macro, __VA_ARGS__)
#define _CALL_47(macro, x, ...) macro(x) _CALL_46(macro, __VA_ARGS__)
#define _CALL_48(macro, x, ...) macro(x) _CALL_47(macro, __VA_ARGS__)
#define _CALL_49(macro, x, ...) macro(x) _CALL_48(macro, __VA_ARGS__)
#define _CALL_50(macro, x, ...) macro(x) _CALL_49(macro, __VA_ARGS__)
#define _CALL_51(macro, x, ...) macro(x) _CALL_50(macro, __VA_ARGS__)
#define _CALL_52(macro, x, ...) macro(x) _CALL_51(macro, __VA_ARGS__)
#define _CALL_53(macro, x, ...) macro(x) _CALL_52(macro, __VA_ARGS__)
#define _CALL_54(macro, x, ...) macro(x) _CALL_53(macro, __VA_ARGS__)
#define _CALL_55(macro, x, ...) macro(x) _CALL_54(macro, __VA_ARGS__)
#define _CALL_56(macro, x, ...) macro(x) _CALL_55(macro, __VA_ARGS__)
#define _CALL_57(macro, x, ...) macro(x) _CALL_56(macro, __VA_ARGS__)
#define _CALL_58(macro, x, ...) macro(x) _CALL_57(macro, __VA_ARGS__)
#define _CALL_59(macro, x, ...) macro(x) _CALL_58(macro, __VA_ARGS__)
#define _CALL_60(macro, x, ...) macro(x) _CALL_59(macro, __VA_ARGS__)
#define _CALL_61(macro, x, ...) macro(x) _CALL_60(macro, __VA_ARGS__)
#define _CALL_62(macro, x, ...) macro(x) _CALL_61(macro, __VA_ARGS__)
#define _CALL_63(macro, x, ...) macro(x) _CALL_62(macro, __VA_ARGS__)
#define _CALL_64(macro, x, ...) macro(x) _CALL_63(macro, __VA_ARGS__)
// clang-format off

#define _VFUNC_(n) _CALL_##n
#define _VFUNC(n) _VFUNC_(n)
#define VFUNC(func, ...) _VFUNC(NUM_ARGS(__VA_ARGS__)) (func, __VA_ARGS__)


#define FOREACH(macro ,...) VFUNC(macro, __VA_ARGS__)

#endif  // CURSED_MACROS_H_
