# LWChineseZodiacSignFinder

LWChineseZodiacSignFinder is an application for finding the corresponding Chinese Zodiac sign for a
certain year.

## Installation

1. Clone this repository onto your machine.

2. In the root directory of the repository, run `conan install .`.

3. If using a Linux machine, run `g++ src/main.cpp src/SignFinder_helpers.cpp '@conanbuildinfo.args' -o bin/LWChineseZodiacSignFinder`.

   - If using a Windows machine, run `cl /EHsc src/main.cpp src/SignFinder_helpers.cpp src/SignFinder_base.cpp @conanbuildinfo.args /std:c++latest /Zc:__cplusplus /link /out:bin/LWChineseZodiacSignFinder.exe`.

## Usage

LWChineseZodiacSignFinder takes in input from a TOML file. Let's assume the input TOML file looks
something like this:

```toml
[User input]
# Enter the years in which you would like to find Chinese zodiac signs for in an array.
years = [1998, 2022, 2024]
```

Notice that the years to analyze are in an array.


This TOML file must be in the `bin` folder. Once you have created the TOML file, simply run
`bin/LWChineseZodiacSignFinder`.


## Running Unit Tests

1. If using a Linux machine, run `g++ -o tests/tests`.
   - If using a Windows machine, run `cl /link /out:tests/tests.exe`.
   
2. Run `tests/tests.exe` in the root directory of the repository.


## Third-party tools

- [CMake](https://cmake.org/) (BSD-3-Clause): Build system generator.

- [TOML11](https://github.com/ToruNiina/toml11) (MIT License): TOML parser/encoder.

- [Catch2](https://github.com/catchorg/Catch2/tree/v2.x) (MIT License): Unit testing framework.

- [{fmt}](https://github.com/fmtlib/fmt) (MIT License): Formatting library.
