# LWChineseZodiacSignFinder

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
![GitHub release (latest by date)](https://img.shields.io/github/v/release/leeway64/LWChineseZodiacSignFinder)

LWChineseZodiacSignFinder is an application for finding the corresponding Chinese Zodiac sign for a
certain year.


## Installation

```bash
git clone --recursive https://github.com/leeway64/LWChineseZodiacSignFinder.git
conan install .
g++ src/main.cpp src/SignFinder_helpers.cpp src/SignFinder_base.cpp '@conanbuildinfo.args' -o bin/LWChineseZodiacSignFinder
```


## Usage

LWChineseZodiacSignFinder takes in input from a TOML file (this TOML file must be in the
`bin` folder). For example:

```toml
title = "TOML file for user input"

[User_input]
# Enter the years in which you would like to find Chinese zodiac signs for
years = [1940, 1968, 1998]
```

To execute LWChineseZodiacSignFinder, simply run:
```bash
bin/LWChineseZodiacSignFinder
```

Which will output:
```text
Entered years and corresponding zodiac signs:
        1940: Year of the Dragon
        1968: Year of the Monkey
        1998: Year of the Tiger
```

Strictly speaking, the Chinese zodiac follows the lunar calendar. So, each year moves onto the
next zodiac animal only after the lunar new year.


## Running Unit Tests

```bash
g++ tests/Catch2_main.cpp tests/test_suite.cpp src/SignFinder_helpers.cpp src/SignFinder_base.cpp @conanbuildinfo.args -o tests/test_suite
tests/test_suite
```


## Third-Party Software

- [toml11](https://github.com/ToruNiina/toml11) (MIT License): TOML parser/encoder.
- [Catch2](https://github.com/catchorg/Catch2/tree/v2.x) (MIT License): Unit testing framework.
- [{fmt}](https://github.com/fmtlib/fmt) (MIT License): Formatting library.
