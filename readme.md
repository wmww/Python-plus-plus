# Python++
_A framework for cross language development_

## About
Python++ is a framework for creating Python/C++ [polyglots](https://en.wikipedia.org/wiki/Polyglot_(computing)), programs valid in both programming languages. Specifically, it is a collection of boilerplate code and guidelines that allows you to write a single program which will produce the same output when compiled with a C++ compiler or run with a Python interpreter. It does this with heavy usage of C style macros as well as numerous hacks of the syntax of both languages. No external transpiler or preprocessor (aside from the standard C/C++ preprocessor) is needed. The exact same Python++ file can be fed in unmodified to a stock C++ compiler and a stock Python interpreter and you will get the same output. Python++ was initially developed by William W Wold for the Stupid Shit Nobody Needs and Terrible Ideas Hackathon 2017.

## Overview
Python++ consists of 4 things:
1. [ppp.h](ppp.h): A C++ header file with a bunch of macros. This can be #included or copied directly into the top of your Python++ source. 
2. [guide.md](guide.md): A comprehensive guide to writing Python++ programs.
3. [boilerplate.ppp](boilerplate.ppp): All the boilerplate code you need to get started.
4. [examples](examples): examples of programs written in Python++.

## Running
__With Python__

Running Python++ programs in Python is easy. Simply enter
```
python3 your_source_file.ppp
```
Python 2 probably works, but I haven't tested.

__With C++__

It is a bit trickier to compile as C++ because the compiler doesn't recognize `.ppp` as a valid file extension. Also, you need support for C++14. With a recent version of GCC, the following command works:
```
g++ -x c++ -std=c++14 your_source_file.ppp -o output_binary
```
-std=c++14 seems to be default on my system, but better to make it explicit. If you want to use an IDE or a different compiler I'm sure you can figure it out. If you do, feel free to edit this readme with instructions and send in a pull request.

## Contributing
If you add a feature or fix a bug/type, pleas send in a pull request.

## License
Python++ is licensed under the permissive Do What The Fuck You Want To Public License (WTFPL). See [COPYING](COPYING) for details.

