# LWChineseZodiacSignFinder

LWChineseZodiacSignFinder is an application for finding the corresponding Chinese Zodiac sign for a
certain year.

## Installation

1. Clone this repository onto your machine using
   `git clone --recursive https://github.com/leeway64/LWChineseZodiacSignFinder.git`.

2. In the root directory of the repository, run `conan install .`.

3. If using a Linux machine, run
   `g++ src/main.cpp src/SignFinder_helpers.cpp '@conanbuildinfo.args' -o bin/LWChineseZodiacSignFinder`.

   - If using a Windows machine, run
     `cl /EHsc src/main.cpp src/SignFinder_helpers.cpp src/SignFinder_base.cpp @conanbuildinfo.args /std:c++latest /Zc:__cplusplus /link /out:bin/LWChineseZodiacSignFinder.exe`.

## Usage

LWChineseZodiacSignFinder takes in input from a TOML file. Let's assume the input TOML file looks
something like this:

```toml
title = "TOML file for user input"

[User_input]
# Enter the years in which you would like to find Chinese zodiac signs for in an array.
years = [1940, 1968, 1998]
```

Notice that the years to analyze are in an array.

This TOML file must be in the `bin` folder. Once you have created the TOML file, if you are using a
Linux machine, simply run `bin/LWChineseZodiacSignFinder`. If you are using a Windows machine, run
`cd bin`, then `LWChineseZodiacSignFinder`.

The output will be:

```
Entered years and corresponding zodiac signs:
        1940: Year of the Dragon
        1968: Year of the Monkey
        1998: Year of the Tiger
```

## Running Unit Tests

1. If using a Linux machine, run `g++ -o tests/test_suite`.
   - If using a Windows machine, run
     `cl tests/Catch2_main.cpp tests/test_suite.cpp src/SignFinder_helpers.cpp src/SignFinder_base.cpp @conanbuildinfo.args /link /out:tests/test_suite.exe`.
   
2. If using Linux, run `tests/test_suite` in the root directory of the repository.
   - If using Windows, run `cd tests` then `test_suite`.


## Third-party tools

- [toml11](https://github.com/ToruNiina/toml11) (MIT License): TOML parser/encoder.

- [Catch2](https://github.com/catchorg/Catch2/tree/v2.x) (MIT License): Unit testing framework.

- [{fmt}](https://github.com/fmtlib/fmt) (MIT License): Formatting library.
