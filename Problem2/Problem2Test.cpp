#include <boost/test/unit_test.hpp>

#include "Problem2.hpp"

using namespace Problem;

BOOST_AUTO_TEST_SUITE(Problem2Test)

BOOST_AUTO_TEST_CASE(testIsFactorOf_happy_path) {
    BOOST_CHECK_EQUAL(Problem2::findSumOfEvenFibonacciNumbersBelow(100), 188);
    BOOST_CHECK_EQUAL(Problem2::findSumOfEvenFibonacciNumbersBelow(4000000), 4613732);
}

BOOST_AUTO_TEST_SUITE_END()
