#include <boost/test/unit_test.hpp>

#include "Problem10.hpp"

using namespace Problem;

BOOST_AUTO_TEST_SUITE(Problem10Test)

BOOST_AUTO_TEST_CASE(test) {
    BOOST_CHECK_EQUAL(Problem10::sumOfPrimesBelow(10), 17);
    BOOST_CHECK_EQUAL(Problem10::sumOfPrimesBelow(2000000), 142913828922);
}

BOOST_AUTO_TEST_SUITE_END()
