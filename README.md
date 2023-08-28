# LWChineseZodiacSignFinder

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
![GitHub release (latest by date)](https://img.shields.io/github/v/release/leeway64/LWChineseZodiacSignFinder)

LWChineseZodiacSignFinder is an application for finding the corresponding Chinese Zodiac sign for a
certain year.


## Installation

```bash
git clone --recursive https://github.com/leeway64/LWChineseZodiacSignFinder.git
conan install .
g++ src/main.cpp src/SignFinder_helpers.cpp src/SignFinder_base.cpp src/Base.cpp src/Subclass.cpp '@conanbuildinfo.args' -o bin/LWChineseZodiacSignFinder
```


## Usage

LWChineseZodiacSignFinder takes in input from a TOML file called `input_file.toml` (this TOML file
must be in the working directory). For example:

```toml
title = "TOML file for user input"

[User_input]
# Enter the years in which you would like to find the corresponding Chinese zodiac signs for
years = [1940, 1968, 1998]
```

To execute LWChineseZodiacSignFinder, simply run:
```bash
bin/LWChineseZodiacSignFinder
```

Which will output:
```text
Welcome to LWChineseZodiacSignFinder!
Lunar New Year celebrations in Taiwan are the best!

	Year	Zodiac sign
	===================
	1940	Dragon
	1968	Monkey
	1998	Tiger

Zodiac signs successfully found
```

Strictly speaking, the Chinese zodiac follows the lunar calendar. So, each year moves onto the
next zodiac animal only after the lunar new year.

If `input_file.toml` does not exist, and if you run LWChineseZodiacSignFinder (`bin/LWChineseZodiacSignFinder`),
then the following will be outputted:
```text
No input TOML file found
Creating a new TOML file
Happy Lunar New Year!
```


## Running Unit Tests

```bash
g++ tests/Catch2_main.cpp tests/test_suite.cpp src/SignFinder_helpers.cpp src/SignFinder_base.cpp @conanbuildinfo.args -o bin/test_suite
bin/test_suite
```


## Third-Party Software

- [toml11](https://github.com/ToruNiina/toml11) (MIT License): TOML parser/encoder.
- [Catch2](https://github.com/catchorg/Catch2/tree/v2.x) (MIT License): Unit testing framework.
- [{fmt}](https://github.com/fmtlib/fmt) (MIT License): Formatting library.
