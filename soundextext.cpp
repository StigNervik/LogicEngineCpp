#include "gmock/gmock.h"

class Soundex {
public:
  std::string encode(const std::string & value) {
    return value;
  }


};


TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
   Soundex soundex;
   auto encoded = soundex.encode("A");
   ASSERT_THAT(encoded, testing::Eq("A"));

}
