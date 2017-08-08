
#define comment /// Python++
#define comment /// this is a framework for writing code that is compatible with both C++ and python
#define comment /// this header can be #included or copied to the top of your source

#include <iostream>
#include <vector>


#define comment /// mscl

#define print(arg) {std::cout << arg << std::endl;}
#define var auto
#define ccp const char *
#define elif else if
#define null 0
#define END() int main(int argc, char ** argv) {run(0); return 0;}


#define comment /// block

#define blockBeforeColonMacro {class LocalDummyClass{const int a; LocalDummyClass()
#define A a(0){}};
#define check(in) (in) blockBeforeColonMacro
#define always (true) blockBeforeColonMacro
#define V }


#define comment /// function

#define def template<typename T1=void, typename T2=void, typename T3=void, typename T4=void, typename T5=void, typename T6=void> auto
#define _ 0

#define comment //naming is because the macro name appears in a common error message 

#define the_first_arg_is_0_which_is_the_wrong_number_you_idiot() int dummy_arg) blockBeforeColonMacro
#define the_first_arg_is_1_which_is_the_wrong_number_you_idiot(empty, arg1) int dummy_arg, T1 arg1) blockBeforeColonMacro
#define the_first_arg_is_2_which_is_the_wrong_number_you_idiot(empty, arg1, arg2) int dummy_arg, T1 arg1, T2 arg2) blockBeforeColonMacro
#define the_first_arg_is_3_which_is_the_wrong_number_you_idiot(empty, arg1, arg2, arg3) int dummy_arg, T1 arg1, T2 arg2, T3 arg3) blockBeforeColonMacro
#define the_first_arg_is_4_which_is_the_wrong_number_you_idiot(empty, arg1, arg2, arg3, arg4) int dummy_arg, T1 arg1, T2 arg2, T3 arg3, T4 arg4) blockBeforeColonMacro
#define the_first_arg_is_5_which_is_the_wrong_number_you_idiot(empty, arg1, arg2, arg3, arg4, arg5) int dummy_arg, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) blockBeforeColonMacro
#define the_first_arg_is_6_which_is_the_wrong_number_you_idiot(empty, arg1, arg2, arg3, arg4, arg5, arg6) int dummy_arg, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) blockBeforeColonMacro

#define _0 the_first_arg_is_0_which_is_the_wrong_number_you_idiot(
#define _1 the_first_arg_is_1_which_is_the_wrong_number_you_idiot(
#define _2 the_first_arg_is_2_which_is_the_wrong_number_you_idiot(
#define _3 the_first_arg_is_3_which_is_the_wrong_number_you_idiot(
#define _4 the_first_arg_is_4_which_is_the_wrong_number_you_idiot(
#define _5 the_first_arg_is_5_which_is_the_wrong_number_you_idiot(
#define _6 the_first_arg_is_6_which_is_the_wrong_number_you_idiot(


#define comment /// array

#define Array(type) std::vector<decltype(type)>();
#define len(ary) ary.size()
#define append push_back


#define comment /// class

class dummy_base_class{};
template<typename T>
class WrapperClass
{
public:
	T* ptr = new T;
	T& o = *ptr;
	
	WrapperClass(T obj)
	{
		*ptr = obj;
	}
};
#define CLASS dummy_base_class { public: const char * dummyStr
#define make(obj, ...) []() -> auto {auto out = WrapperClass<decltype(obj())>(obj()); out.o.__init__(0, __VA_ARGS__); return out;}()

#define the_first_method_arg_is_0_which_is_the_wrong_number_you_idiot() ) blockBeforeColonMacro
#define the_first_method_arg_is_1_which_is_the_wrong_number_you_idiot(arg1) int dummy_arg, T1 arg1) blockBeforeColonMacro
#define the_first_method_arg_is_2_which_is_the_wrong_number_you_idiot(arg1, arg2) int dummy_arg, T1 arg1, T2 arg2) blockBeforeColonMacro
#define the_first_method_arg_is_3_which_is_the_wrong_number_you_idiot(arg1, arg2, arg3) int dummy_arg, T1 arg1, T2 arg2, T3 arg3) blockBeforeColonMacro
#define the_first_method_arg_is_4_which_is_the_wrong_number_you_idiot(arg1, arg2, arg3, arg4) int dummy_arg, T1 arg1, T2 arg2, T3 arg3, T4 arg4) blockBeforeColonMacro
#define the_first_method_arg_is_5_which_is_the_wrong_number_you_idiot(arg1, arg2, arg3, arg4, arg5) int dummy_arg, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) blockBeforeColonMacro
#define the_first_method_arg_is_6_which_is_the_wrong_number_you_idiot(arg1, arg2, arg3, arg4, arg5, arg6) int dummy_arg, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) blockBeforeColonMacro

#define self_0 the_first_method_arg_is_0_which_is_the_wrong_number_you_idiot(
#define self_1 the_first_method_arg_is_1_which_is_the_wrong_number_you_idiot(
#define self_2 the_first_method_arg_is_2_which_is_the_wrong_number_you_idiot(
#define self_3 the_first_method_arg_is_3_which_is_the_wrong_number_you_idiot(
#define self_4 the_first_method_arg_is_4_which_is_the_wrong_number_you_idiot(
#define self_5 the_first_method_arg_is_5_which_is_the_wrong_number_you_idiot(
#define self_6 the_first_method_arg_is_6_which_is_the_wrong_number_you_idiot(

#define M a(0){}}; decltype(*this)& self = *this;
#define W };



