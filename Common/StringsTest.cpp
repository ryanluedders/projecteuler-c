#include <boost/test/unit_test.hpp>

#include "Strings.hpp"

using namespace Common;

BOOST_AUTO_TEST_SUITE(StringsTest)

BOOST_AUTO_TEST_CASE(testIsPalindrome_happy_path) {
    BOOST_CHECK_EQUAL(Strings::isPalindrome("906609"), true);
    BOOST_CHECK_EQUAL(Strings::isPalindrome("906601"), false);
    BOOST_CHECK_EQUAL(Strings::isPalindrome("90609"), true);
    BOOST_CHECK_EQUAL(Strings::isPalindrome("90601"), false);
}

BOOST_AUTO_TEST_SUITE_END()
