
#define comment /// mscl

#include <iostream>
#include <vector>
#define print(arg) {std::cout << arg << std::endl;}
#define var() auto
#define func() a(0){}};
#define ccp const char *


#define comment /// function

#define funcMacro(head, body) auto head; body;}
#define def funcMacro(
#define lastArg int dummyArg) {class LocalClass{const int a;LocalClass(


#define comment /// while loop

#define is_true(in) (in) {for (int i
#define block() std::vector<int>()) {};

#define comment /// array

#define Array(type) std::vector<decltype(type)>();
#define len(ary) ary.size()
#define append push_back

#define comment /// dummy python functions

#define start_dummy_0 ccp start_dummy_0_
start_dummy_0 = """ ";/* " """
def func(): pass
def var(): pass
def block(): pass
def is_true(condition): return condition
def Array(dummy): return []
end_dummy_3 = """ */
ccp start_dummy_1 = " """;
	

#define comment ///footer

#define end_dummy_0 ccp end_dummy_0_
#define end_dummy_1 ccp end_dummy_1_
#define end_dummy_2 ccp end_dummy_2_
#define end_dummy_3 ccp end_dummy_3_

#define CPP_MAIN int main(int argc, char ** argv) {run(0); return 0;}

def myFuncName(lastArg):
	func()
	""" " , //" """
	
	var()
	a = Array(0);
	
	a.append(3);
	a.append(9);
	a.append(147);
	
	var()
	i = 0;
	
	while is_true(i < len(a)):
		block();
		print(a[i]);
		i = i + 1;
		""" ";}//" """
	
	print("hay");
	
	""" ")//" """
	
def run(lastArg):
	func()
	""" ",//" """
	
	myFuncName(0);
	
	""" ")//" """

#define comment // boilerplate footer
end_dummy_0 = """ "; CPP_MAIN; end_dummy_1 = " """;
end_dummy_2 = """ ";/* " """; run(0); end_dummy_3 = """ */ end_dummy_3 = " """;


