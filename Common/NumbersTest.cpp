#define BOOST_TEST_MODULE Numbers

#include <boost/test/unit_test.hpp>

#include "Numbers.hpp"

using namespace Common;

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
    BOOST_CHECK_EQUAL(Numbers::isPalindrome(505), true);
    //BOOST_CHECK_EQUAL(Numbers::isPalindrome(5005), true);
    //BOOST_CHECK_EQUAL(Numbers::isPalindrome(1234), false);
}
