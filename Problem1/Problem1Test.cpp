#include <boost/test/unit_test.hpp>

#include "Problem1.hpp"

using namespace Problem;

BOOST_AUTO_TEST_SUITE(Problem1Test)

BOOST_AUTO_TEST_CASE(testIsFactorOf_happy_path) {
    BOOST_CHECK_EQUAL(Problem1::getSumOfMultiplesBelow(10), 23);
    BOOST_CHECK_EQUAL(Problem1::getSumOfMultiplesBelow(1000), 233168);
}

BOOST_AUTO_TEST_SUITE_END()
