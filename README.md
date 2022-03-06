# LWChineseZodiacSignFinder

LWChineseZodiacSignFinder is an application for finding the corresponding Chinese Zodiac sign for a
certain year.

## Installation

To install LWChineseZodiacSignFinder, clone this repository onto your machine. Then, in the root
directory of the repository, if using a Linux machine, run
`g++ src/main.cpp src/SignFinder_helpers.cpp '@conanbuildinfo.args' -o bin/LWChineseZodiacSignFinder`.

If using a Windows machine, run
`cl /EHsc src/main.cpp src/SignFinder_helpers.cpp @conanbuildinfo.args -o bin/LWChineseZodiacSignFinder`.

## Usage

LWChineseZodiacSignFinder takes in input from a TOML file. Let's assume the input TOML file looks
something like this:

```
```

Notice that the years to analyze are in a .

## Third-party tools

- TOML11:

- Catch2:

- fmt: 
