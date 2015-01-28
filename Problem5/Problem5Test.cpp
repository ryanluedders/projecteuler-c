#include <boost/test/unit_test.hpp>

#include "Problem5.hpp"

using namespace Problem;

BOOST_AUTO_TEST_SUITE(Problem5Test)

BOOST_AUTO_TEST_CASE(testIsFactorOf_happy_path) {
	std::list<int> sample = std::list<int>();
	for (int i = 1; i <= 10; ++i) {
		sample.push_back(i);
	}
	BOOST_CHECK_EQUAL(Problem5::findSmallestDivisibleBy(sample), 2520);

	std::list<int> problem = std::list<int>();
	for (int i = 1; i <= 20; ++i) {
		problem.push_back(i);
	}
	BOOST_CHECK_EQUAL(Problem5::findSmallestDivisibleBy(problem), 232792560);
}

BOOST_AUTO_TEST_SUITE_END()
