#include <boost/test/unit_test.hpp>

#include "Problem7.hpp"

using namespace Problem;

BOOST_AUTO_TEST_SUITE(Problem7Test)

BOOST_AUTO_TEST_CASE(testIsFactorOf_happy_path) {
    BOOST_CHECK_EQUAL(Problem7::findNthPrime(6), 13);
    BOOST_CHECK_EQUAL(Problem7::findNthPrime(10001), 104743);
}

BOOST_AUTO_TEST_SUITE_END()
