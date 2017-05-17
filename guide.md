# Python++ guide

This is a guide to writing in Python++. For general info about Python++ see the [readme](readme.md).

## Boilerplate

There is a significant amount of boilerplate code, some of which must go above and some below your code. Just copy this from [boilerplate.ppp](boilerplate.ppp).

## Errors
Depending on what you fuck up, you might get errors in C++, Python or both. Make sure you test with both languages.

## Comments
```
#define comment // your comment here
```

## Line Endings
Semicolons are required (except when they're forbidden) and indentation must be correct. Basically Python++ takes the worst parts of both languages.

## Defining Functions
```
def function_name(_0):
	block(), 0;
	
	#define comment // your code here
	
	""" ";
) // """
```
Correct indentation is required. This is for a function with no arguments (technically there is one argument, but it is named different things in C++ and Python so you shouldn't try to use it). To send arguments to a function change the `_0` to the number of arguments. For example:
```
def function_name(_2, first_arg, second_arg):
	block(), 0;
	
	#define comment // your code here
	
	""" ";
) // """
```
the `block(), 0;` is always required. the `0` in it doesn't mean anything, so no need to ever change it. Under the hood, templates are always used in C++ so no need to worry about types. You can have at most 6 function arguments (not counting the initial argument count)

## Calling Functions
Calling a function is the same way you call a function in both languages, except that the first argument is a dummy null. For example:
```
function_name(null, "hay", 48.9);
```
Is how to call the 2nd function above. The `null` is required even if there are no arguments.

## Boolean values
In Python++, use `true` and `false` (not capitalized) for Boolean literals.

## Printing
```
print("Hello World!");
print(7);
```
Use the `print()` function to print anything to stdout. Currently, the C++ version of print uses cout directly, so some output comes out differently the in Python. For example printing `true` in Python prints `True` and in C++ its `1`. This is not optimal and may be fixed at some point by adding custom print functions for common types to one or both languages. This may require renaming the function if I want to change its behavior in Python.

## Variables
Variables are declared in this very specific way:
```
var()
var_name = inital_val;
```
Note that the indentation of the two lines must be the same, they can not be on the same line, there may not be a semicolon after the `var()` and an initial value is required. Also, choose the initial value wisely, as it determines the type of the variable in C++.

## While Loops
```
while check(should_keep_looping):
	block();
	
	#define comment // code for each iteration here
	
	""" ";
} // """
```
In this example, `should_keep_looping` is any expression that returns a boolean. The `check(...)` can be thought of as simply returning the value it is sent. It has no effect on the logic, but is required because macros. `block();` is the same as at the start of a function, except you can omit the `, 0`. Note that the end of the block is similar to the end of a function but `}` is used instead of `)`. A simple `break;` statement can be used anywhere to break out of the loop. Below is an example that uses a loop to print 0-9:
```
var()
i = 0;

while check(i < 10):
	block();
	
	print(i);
	
	i = i + 1;
	
	""" ";
} // """
```

## If Statments
```
if check(condition):
	block();
	
	#define comment // code to run if condition is true
	
	""" ";
} // """
```
The syntax for a singe if statement is exactly the same as that of a while loop.

## If, Else If, Else Statements
```
if check(first_condition):
	block();
	
	#define comment // if block
	
	""" ";
} // """
elif check(else_if_condition):
	block();
	
	#define comment // else if block
	
	""" ";
} // """
elif always:
	block();
	
	#define comment // else block 
	
	""" ";
} // """
```
You can have as many else if blocks as you want. The else block is optional, but must use the syntax `elif always` (never `else`).

## Arrays
Python++ supports simple dynamicly sized arrays. Here is an example:
```
var()
my_array = Array(0.0);

my_array.append(8.2);
my_array.append(12.7);
my_array.append(5);

var()
i = 0;

while check(i < len(my_array)):
	block();
	
	print(my_array[i]);
	
	""" ";
} // """
```
This prints out
```
8.2
12.7
5.0
```
Note that the `Array` constructor must be given a value of the type that you want the array to be able to hold. This value is not added to the array, just used for type deduction in C++. As you can see, you use `len` and `append` just like in Python.

## Future
There are a lot of features I want to implement in the future. These include (in no particular order):
* A standardized print function that gives the same output for common types in both languages
* Better string support (concatination, converting between other types and strings, etc.)
* file IO
* For loops (hopefully will take the form `for x in y:`, but not sure if that is possible)
* Classes
If you have any feature suggesstions or problems, feel free to open up a GitHub issue.

