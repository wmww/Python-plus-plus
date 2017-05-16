
#define comment /// Python++
#define comment /// this is a framwork for writing code that is compatible with both C++ and python
#define comment /// this header can be #included or copied to the top of your source

#define comment /// mscl

#include <iostream>
#include <vector>
#define print(arg) {std::cout << arg << std::endl;}
#define var() auto
#define ccp const char *


#define comment /// function

#define funcMacro(head, body) auto head; int dummyInt = body;}
#define def funcMacro(
#define lastArg int dummyArg) {class LocalDummyClass{const int a; LocalDummyClass(
#define func() a(0){}}


#define comment /// while loop

#define check(in) (in) {for (int i
#define block() std::vector<int>()) {}

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


