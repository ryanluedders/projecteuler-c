#include <boost/test/unit_test.hpp>

#include "Problem6.hpp"

using namespace Problem;

BOOST_AUTO_TEST_SUITE(Problem6Test)

BOOST_AUTO_TEST_CASE(testIsFactorOf_happy_path) {
    BOOST_CHECK_EQUAL(Problem6::findDifferenceOfFirstN(10), 2640);
    BOOST_CHECK_EQUAL(Problem6::findDifferenceOfFirstN(100), 25164150);
}

BOOST_AUTO_TEST_SUITE_END()
