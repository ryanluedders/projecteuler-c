#include <boost/test/unit_test.hpp>

#include "Problem9.hpp"

using namespace Problem;

BOOST_AUTO_TEST_SUITE(Problem9Test)

BOOST_AUTO_TEST_CASE(test) {
	Problem9::Result result = Problem9::findPythagoreanTripleWithSum(1000);

    BOOST_CHECK_EQUAL(result.a, 200);
    BOOST_CHECK_EQUAL(result.b, 375);
    BOOST_CHECK_EQUAL(result.c, 425);
}

BOOST_AUTO_TEST_SUITE_END()
