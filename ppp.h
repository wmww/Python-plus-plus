
#define comment /// Python++
#define comment /// this is a framwork for writing code that is compatible with both C++ and python
#define comment /// this header can be #included or copied to the top of your source

#define comment /// mscl

#include <iostream>
#include <vector>
#define print(arg) {std::cout << arg << std::endl;}
#define var() auto
#define ccp const char *
#define check(in) (in) blockBeforeColonMacro


#define comment /// block

#define blockBeforeColonMacro {class LocalDummyClass{const int a; LocalDummyClass()
#define blockAfterColonMacro a(0){}}
#define block() blockAfterColonMacro


#define comment /// function

#define funcMacro(head, body) template<typename T1=void, typename T2=void, typename T3=void, typename T4=void, typename T5=void, typename T6=void> auto head; int dummyInt = body}
#define def funcMacro(

#define firstArgMacro0() int dummy_arg) blockBeforeColonMacro
#define firstArgMacro1(empty, arg1) int dummy_arg, T1 arg1) blockBeforeColonMacro
#define firstArgMacro2(empty, arg1, arg2) int dummy_arg, T1 arg1, T2 arg2) blockBeforeColonMacro
#define firstArgMacro3(empty, arg1, arg2, arg3) int dummy_arg, T1 arg1, T2 arg2, T3 arg3) blockBeforeColonMacro
#define firstArgMacro4(empty, arg1, arg2, arg3, arg4) int dummy_arg, T1 arg1, T2 arg2, T3 arg3, T4 arg4) blockBeforeColonMacro
#define firstArgMacro5(empty, arg1, arg2, arg3, arg4, arg5) int dummy_arg, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) blockBeforeColonMacro
#define firstArgMacro6(empty, arg1, arg2, arg3, arg4, arg5, arg6) int dummy_arg, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) blockBeforeColonMacro

#define _0 firstArgMacro0(
#define _1 firstArgMacro1(
#define _2 firstArgMacro2(
#define _3 firstArgMacro3(
#define _4 firstArgMacro4(
#define _5 firstArgMacro5(
#define _6 firstArgMacro6(


#define comment /// array

#define Array(type) std::vector<decltype(type)>();
#define len(ary) ary.size()
#define append push_back


#define comment ///footer

#define end_dummy_0 ccp end_dummy_0_
#define end_dummy_1 ccp end_dummy_1_
#define end_dummy_2 ccp end_dummy_2_
#define end_dummy_3 ccp end_dummy_3_

#define CPP_MAIN int main(int argc, char ** argv) {run(0); return 0;}


