#include <boost/test/unit_test.hpp>

#include "Problem8.hpp"

using namespace Problem;

BOOST_AUTO_TEST_SUITE(Problem8Test)

BOOST_AUTO_TEST_CASE(testFindGreatestProductInSUsingN) {
    BOOST_CHECK_EQUAL(Problem8::findGreatestProductInSUsingN(
    		Problem8::SEQUENCE, 4), 5832);
    BOOST_CHECK_EQUAL(Problem8::findGreatestProductInSUsingN(
    		Problem8::SEQUENCE, 13), 23514624000);
}

BOOST_AUTO_TEST_SUITE_END()
