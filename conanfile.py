from conans import ConanFile

class ChineseZodiacConan(ConanFile):
    requires = "toml11/3.7.0", "catch2/2.13.8"
    generators = "compiler_args"
