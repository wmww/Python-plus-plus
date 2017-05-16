
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

#define funcMacro(head, body) auto head; int dummyInt = body}
#define def funcMacro(
#define lastArgMacro() int dummyArg) blockBeforeColonMacro
#define last lastArgMacro(


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


