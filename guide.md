# Python++ guide

This is a guide to writing code in Python++. For general info about Python++ see the [readme](readme.md).

## Boilerplate

You must download [ppp.ppp](ppp.ppp). It contains most of the boilerplate needed for both C++ and Python. Hello world in Python++ looks like this:
```
#include "ppp.ppp"
exec(open("ppp.ppp").read())

#define comment // your functions here

def run(args):
	#define comment // point of entry
	print("Hello World!");
end

END(run(_));
```
Note that if you wish you can copy/paste the entirety of `ppp.ppp` into the top of this file. and remove the first two lines.

## Errors
Depending on what you fuck up, you might get errors in C++, Python or both. Make sure you test with both languages. The provided test script is useful for this.

## Comments
```
#define comment // your comment here
```

## Line Endings
Semicolons are required at the end of statements (except when they're explicitly forbidden). 'keywords' like `end` do not require semicolons, but having them doesn't break anything.

# Blocks
Code blocks (functions, ifs, etc) start after a `:`. Subsequent lines must be indented (same rules as python). The block ends with the `end` keyword one indent level to the left (lined up with line that started the block).

## Defining Functions
```
def function_name(args):
	#define comment // your code here
end
```
Correct indentation is required. Note that `args` is a keyword, not a placeholder. This is for a function with no arguments. To send arguments to a function:
```
def function_name(args, first_arg, second_arg):
	#define comment // your code here
end
```
Under the hood, templates are always used in C++ so no need to worry about types. You can have at most 12 function arguments (not counting the initial `arg` keyword)

## Calling Functions
Calling a function is the same way you call a function in both languages, except that the first argument is a dummy `_`. For example:
```
function_name(_, "hay", 48.9);
```
Is how to call the 2nd function above. The `_` is required even if there are no arguments.

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
var
var_name = initial_value;
```
Note that the indentation of the two lines must be the same, they can not be on the same line, there may not be a semicolon after the `var` and an initial value is required. Also, choose the initial value wisely, as it determines the type of the variable in C++. For example, if you create a variable with an initial value `3`, it will always be an integer and setting it to 4.9 will result in it being 4 (in C++ only).

## While Loops
```
while (should_keep_looping):
	#define comment // code for each iteration here
end
```
In this example, `should_keep_looping` is any expression that returns a boolean. A simple `break;` statement can be used anywhere to break out of the loop. Below is an example that uses a loop to print 0-9:
```
var
i = 0;

while (i < 10):
	print(i);
	i = i + 1;
end
```

## For Loops
```
for i in (range(0, 12)):
	print(i);
end
```
`i` must not already be a local variable (its fine to use it for multiple loops in the same scope). The only difference between this and a normal Python loop is that the range must be in parenthesis. For loops can also iterate over arrays (see below)

## If Statments
```
if (condition):
	#define comment // code to run if condition is true
end
```
The syntax for a single if statement is exactly the same as that of a while loop.

## If, Else If, Else Statements
```
if (first_condition):
	#define comment // if block
elif (else_if_condition):
	#define comment // else if block
else ():
	#define comment // else block 
end
```
You can have as many else if blocks as you want. The `else` block is optional, but if present the else must be followed by `()`. Note that you only use one `end` at the end of everything.

## Arrays
Python++ supports simple dynamically sized arrays. Here is an example:
```
var
my_array = Array(0.0);

my_array.append(8.2);
my_array.append(12.7);
my_array.append(5);

var
i = 0;

while (i < len(my_array)):
	print(my_array[i]);
end
```
This prints out
```
8.2
12.7
5.0
```
Here is an example of using a for loop instead of while
```
var
my_array = Array(0.0);

my_array.append(8.2);
my_array.append(12.7);
my_array.append(5);

for i in (my_array):
	print(i)
end
```
Note that the `Array` constructor must be given a value of the type that you want the array to be able to hold. This value is not added to the array, just used for type deduction in C++. As you can see, you use `len` and `append` just like in Python.

## Future
There are a lot of features I want to implement in the future. These include (in no particular order):
* A standardized print function that gives the same output for common types in both languages
* Better string support (concatenation, converting between other types and strings, etc.)
* User input
* File IO
* Classes
If you have any feature suggestions or problems, feel free to open up a GitHub issue.

