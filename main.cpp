#include "ppp.h"

#define comment /// header boilerplate

#define start_dummy_0 ccp start_dummy_0_
start_dummy_0 = """ ";/* """
def func(): pass
def var(): pass
def block(): pass
def check(condition): return condition
def Array(dummy): return []
end_dummy_3 = """ */
ccp start_dummy_1 = " """;


def myFuncName(last):
	block(), 0;
	
	var()
	a = Array(0);
	
	a.append(3);
	a.append(9);
	a.append(147);
	
	var()
	i = 0;
	
	while check(i < len(a)):
		block();
		print(a[i]);
		i = i + 1;
		""" ";
	} //"""
	
	""" ";
) //"""

def run(last):
	block(), 0;
	
	myFuncName(0);
	
	""" ";
) //"""


#define comment /// footer boilerplate
end_dummy_0 = """ "; CPP_MAIN; end_dummy_1 = " """;
end_dummy_2 = """ ";/* " """; run(0); end_dummy_3 = """ */ end_dummy_3 = " """;


