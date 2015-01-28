#include <boost/test/unit_test.hpp>

#include "Problem4.hpp"

using namespace Problem;

BOOST_AUTO_TEST_SUITE(Problem4Test)

BOOST_AUTO_TEST_CASE(testIsFactorOf_happy_path) {
    BOOST_CHECK_EQUAL(Problem4::findLargestPalendromicProduct(2), 9009);
    BOOST_CHECK_EQUAL(Problem4::findLargestPalendromicProduct(3), 906609);
}

BOOST_AUTO_TEST_SUITE_END()
