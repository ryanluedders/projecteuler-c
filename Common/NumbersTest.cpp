#define BOOST_TEST_MODULE Numbers

#include <boost/test/unit_test.hpp>

#include "Numbers.hpp"

BOOST_AUTO_TEST_CASE(testIsFactorOf_happy_path) {
    BOOST_CHECK_EQUAL(Numbers::isFactorOf(2,4), true);
    BOOST_CHECK_EQUAL(Numbers::isFactorOf(2,5), false);
}
