# Python++
_A framework for cross language development_

## About
Python++ is a framework for creating Python/C++ [polyglots](https://en.wikipedia.org/wiki/Polyglot_(computing)), programs valid in both programming languages. Specifically, it is a collection of guidelines and boilerplate that allows you to write a single program which will produce the same output when compiled with a C++14 compiler or run with a Python3 interpreter. It does this with heavy usage of C style macros and numerous hacks of the syntax of both languages. No external transpiler or preprocessor (aside from the standard C/C++ preprocessor) is needed. The exact same Python++ file can be fed in unmodified to a stock C++ compiler and a stock Python interpreter and you will get the same output. The first version of Python++ was developed by William W Wold for the Stupid Shit No One Needs and Terrible Ideas Hackathon 2017.

## Overview
Python++ consists of 3 things:
1. [ppp](ppp): This is itself a polyglot that can be copied to the top of your Python++ source, or placed alongside it and imported.
2. [guide.md](guide.md): A comprehensive guide to writing Python++ programs.
4. [examples](examples): examples of programs written in Python++.

## Running
__With Python__

Running Python++ programs with Python3 is easy. Simply enter
```
python3 your_source_file.ppp
```

__With C++__

It is a bit trickier to compile as C++ because the compiler doesn't recognize `.ppp` as a valid file extension by default. Also, you need support for C++14. With a recent version of GCC, the following command works:
```
g++ -x c++ -std=c++14 your_source_file.ppp -o output_binary
```
`-std=c++14` seems to be default on my system, but better to make it explicit. If you want to use an IDE or a different compiler I'm sure you can figure it out. If you do, feel free to edit this readme with instructions and send in a pull request.

__Test Script__

[test.sh](test.sh) is a BASH script that automatically tests the given source code with both Python and C++. You must have Python3 and gcc installed to use it. It reports if the program worked with Python, if it worked with C++ and if the outputs from the two languages match, as well as displaying the output and any error messages.

## Contributing
If you want to add a feature or fix a bug/typo, please do so and send in a pull request.

## License
Python++ is licensed under the permissive Do What The Fuck You Want To Public License (WTFPL). See [COPYING](COPYING) for details.

