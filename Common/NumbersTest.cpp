#include <boost/test/unit_test.hpp>

#include "Numbers.hpp"

using namespace Common;

BOOST_AUTO_TEST_SUITE(NumbersTest)

BOOST_AUTO_TEST_CASE(testIsFactorOf_happy_path) {
    BOOST_CHECK_EQUAL(Numbers::isFactorOf(2,4), true);
    BOOST_CHECK_EQUAL(Numbers::isFactorOf(2,5), false);
}

BOOST_AUTO_TEST_CASE(testIsFactorOf_negative_n) {
    BOOST_CHECK_EQUAL(Numbers::isFactorOf(2,-4), true);
    BOOST_CHECK_EQUAL(Numbers::isFactorOf(2,-5), false);
}

BOOST_AUTO_TEST_CASE(testIsFactorOf_negative_f) {
    BOOST_CHECK_EQUAL(Numbers::isFactorOf(-2,4), true);
    BOOST_CHECK_EQUAL(Numbers::isFactorOf(-2,5), false);
}

BOOST_AUTO_TEST_CASE(testIsPrime_happy_path) {
    BOOST_CHECK_EQUAL(Numbers::isPrime(3), true);
    BOOST_CHECK_EQUAL(Numbers::isPrime(7), true);
    BOOST_CHECK_EQUAL(Numbers::isPrime(8), false);
}

BOOST_AUTO_TEST_CASE(testIsPalindrome_happy_path) {
    BOOST_CHECK_EQUAL(Numbers::isPalindrome(906609), true);
    BOOST_CHECK_EQUAL(Numbers::isPalindrome(906601), false);
    BOOST_CHECK_EQUAL(Numbers::isPalindrome(90609), true);
    BOOST_CHECK_EQUAL(Numbers::isPalindrome(90601), false);
}

BOOST_AUTO_TEST_SUITE_END()
