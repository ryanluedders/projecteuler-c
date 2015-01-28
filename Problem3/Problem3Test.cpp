#include <boost/test/unit_test.hpp>

#include "Problem3.hpp"

using namespace Problem;

BOOST_AUTO_TEST_SUITE(Problem3Test)

BOOST_AUTO_TEST_CASE(testIsFactorOf_happy_path) {
    BOOST_CHECK_EQUAL(Problem3::findLargestPrime(13195), 29);
    BOOST_CHECK_EQUAL(Problem3::findLargestPrime(600851475143), 6857);
}

BOOST_AUTO_TEST_SUITE_END()
