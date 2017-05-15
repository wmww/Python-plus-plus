
#define comment /// mscl

#include <iostream>
#define print(arg) {std::cout << arg << std::endl;}
#define var() auto
#define start() a(0){}};
#define ccp const char *


#define comment /// function

#define funcMacro(head, body) auto head; body;}
#define def funcMacro(
#define lastArg int dummyArg) {class LocalClass{const int a;LocalClass(


#define comment /// dummy python functions

#define start_dummy_0 ccp start_dummy_0_
start_dummy_0 = """ ";/* " """
def start():
	pass

def var():
	pass
	
end_dummy_3 = """ */
const char *start_dummy_1 = " """;
	

#define comment ///footer

#define end_dummy_0 ccp end_dummy_0_
#define end_dummy_1 ccp end_dummy_1_
#define end_dummy_2 ccp end_dummy_2_
#define end_dummy_3 ccp end_dummy_3_

#define CPP_MAIN int main(int argc, char ** argv) {run(0); return 0;}

def myFuncName(lastArg):
	start()
	""" " , //" """
	var()
	a = 8;
	a = 4+7;
	print(a);
	print("hay");
	""" ") //" """
	
def run(lastArg):
	start()
	""" " , //" """
	myFuncName(0);
	""" ") //" """

#define comment // boilerplate footer

end_dummy_0 = """ ";
CPP_MAIN;
end_dummy_1 = " """;

end_dummy_2 = """ ";/* " """
run(0)
end_dummy_3 = """ */
end_dummy_3 = " """;


