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

## Variables
Variables are declared in this very specific way:
```
var()
var_name = inital_val;
```
Note that the indentation of the two lines must be the same, they can not be on the same line, there may not be a semicolon after the `var()` and an initial value is required. Also, choose the initial value wisely, as it determines the type of the variable in C++.

