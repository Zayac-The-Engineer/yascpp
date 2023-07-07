#include <cstdio>
#include <iostream>
#include <ostream>
#include <string>
#include <assert.h>

#include "fst/fst.hpp"
#include "serde/de.hpp"
#include "serde_json/error.hpp"
#include "serde_json/json.hpp"

#include <ftl.hpp>

struct RGB {
    int r;
    int g;
    int b;
    DEBUG_OSTREAM(RGB, r, g, b)
};
SERIALIZE(RGB, r, g, b);
DESERIALIZE(RGB, r, g, b);

struct ColoredText {
    RGB color;
    ftl::str text;
    DEBUG_OSTREAM(ColoredText, color, text)
};
SERIALIZE(ColoredText, color, text);
DESERIALIZE(ColoredText, color, text);

/* static_assert(serde::de::Visitor< */
/*         serde::de::Deserialize<RGB>::Visitor, */
/*         serde_json::error::Error>); */

int main() {
    RGB color{0xFF, 0x00, 0xAC};
    ColoredText foo{color, "bar"};

    std::cout << serde_json::to_string(color).unwrap() << std::endl;
    std::cout << serde_json::to_string(foo).unwrap() << std::endl;

    switch (auto ___self =
                serde_json ::from_str<RGB>(R"({"r":0,"g":255,"b":123})");
            ___self.tag) {
      { break; }
    case decltype(___self)::Tag ::Ok: {
      auto res = ___self.unwrap();
      { std::cout << res << std::endl; }
      break;
    }
    case decltype(___self)::Tag ::Err: {
      auto err = ___self.unwrap_err();
      { std::cout << "Error: " << err.description() << std::endl; }
    }
    }

    switch (auto ___self = serde_json ::from_str<ColoredText>(
                R"({"color":{"r":5,"g":25,"b":30},"text":"baz"})");
            ___self.tag) {
      { break; }
    case decltype(___self)::Tag ::Ok: {
      auto res = ___self.unwrap();
      { std::cout << res << std::endl; }
      break;
    }
    case decltype(___self)::Tag ::Err: {
      auto err = ___self.unwrap_err();
      { std::cout << "Error: " << err.description() << std::endl; }
    }
    }

    return 0;
}
