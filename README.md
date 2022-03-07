# LWChineseZodiacSignFinder

LWChineseZodiacSignFinder is an application for finding the corresponding Chinese Zodiac sign for a
certain year.

## Installation

1. Clone this repository onto your machine.

2. In the root directory of the repository, run `conan install .`.

3. If using a Linux machine, run `g++ src/main.cpp src/SignFinder_helpers.cpp '@conanbuildinfo.args' -o bin/LWChineseZodiacSignFinder`.

   - If using a Windows machine, run `cl /EHsc src/main.cpp src/SignFinder_helpers.cpp @conanbuildinfo.args /std:c++latest /Zc:__cplusplus /link /out:bin/LWChineseZodiacSignFinder.exe`.

## Usage

LWChineseZodiacSignFinder takes in input from a TOML file. Let's assume the input TOML file looks
something like this:

```
```

Notice that the years to analyze are in a .

This TOML file must be in the `bin` folder. Once you have created the TOML file, simply run
`bin/LWChineseZodiacSignFinder`.

## Third-party tools

- TOML11:

- Catch2:

- fmt: 
