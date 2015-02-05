#include <iostream>
#include <cmath>

// include log4cxx header files.
#include "log4cxx/logger.h"

#include "Common/Constants.hpp"
#include "Problem1/Problem1.hpp"
#include "Problem2/Problem2.hpp"
#include "Problem3/Problem3.hpp"
#include "Problem4/Problem4.hpp"
#include "Problem5/Problem5.hpp"
#include "Problem6/Problem6.hpp"
#include "Problem7/Problem7.hpp"
#include "Problem8/Problem8.hpp"
#include "Problem9/Problem9.hpp"
#include "Problem10/Problem10.hpp"

using namespace Common;
using namespace Problem;

static const int CURRENT_PROBLEM = 10;

int main(int argc, char **argv) {

	log4cxx::LoggerPtr logger(
			log4cxx::Logger::getLogger(Constants::PROJECT_NAME));
	LOG4CXX_INFO(logger,
			std::string("running projecteuler, problem #") +
			std::to_string(CURRENT_PROBLEM)
			);

	if (CURRENT_PROBLEM == 1) {
		// problem 1
		std::cout << Problem1::getSumOfMultiplesBelow(10) << std::endl;
		std::cout << Problem1::getSumOfMultiplesBelow(1000) << std::endl;
	} else if (CURRENT_PROBLEM == 2) {
		// problem 2
		std::cout << Problem2::findSumOfEvenFibonacciNumbersBelow(100) << std::endl;
		std::cout << Problem2::findSumOfEvenFibonacciNumbersBelow(4000000) << std::endl;
	} else if (CURRENT_PROBLEM == 3) {
		// problem 3
		std::cout << Problem3::findLargestPrime(13195) << std::endl;
		std::cout << Problem3::findLargestPrime(600851475143) << std::endl;
	} else if (CURRENT_PROBLEM == 4) {
		// problem 4
		std::cout << Problem4::findLargestPalendromicProduct(2) << std::endl;
		std::cout << Problem4::findLargestPalendromicProduct(3) << std::endl;
	} else if (CURRENT_PROBLEM == 5) {
		// problem 5
		std::list<int> sample = std::list<int>();
		for (int i = 1; i <= 10; ++i) {
			sample.push_back(i);
		}
		std::cout << Problem5::findSmallestDivisibleBy(sample) << std::endl;

		std::list<int> problem = std::list<int>();
		for (int i = 1; i <= 20; ++i) {
			problem.push_back(i);
		}
		std::cout << Problem5::findSmallestDivisibleBy(problem) << std::endl;
	} else if (CURRENT_PROBLEM == 6) {
		// problem 6
		LOG4CXX_INFO(logger, Problem6::findDifferenceOfFirstN(10));
		LOG4CXX_INFO(logger, Problem6::findDifferenceOfFirstN(100));
	} else if (CURRENT_PROBLEM == 7) {
		// problem 7
		LOG4CXX_INFO(logger, Problem7::findNthPrime(6));
		LOG4CXX_INFO(logger, Problem7::findNthPrime(10001));
	} else if (CURRENT_PROBLEM == 8) {
		LOG4CXX_INFO(logger, Problem8::findGreatestProductInSUsingN(
		    		Problem8::SEQUENCE, 4));
		LOG4CXX_INFO(logger, Problem8::findGreatestProductInSUsingN(
		    		Problem8::SEQUENCE, 13));
	} else if (CURRENT_PROBLEM == 9) {
		Problem9::Result result = Problem9::findPythagoreanTripleWithSum(1000);
		LOG4CXX_INFO(logger, to_string(result.a) + "," +
				to_string(result.b) + "," + to_string(result.c));
		LOG4CXX_INFO(logger, "product: " + to_string(result.a * result.b * result.c));
	} else if (CURRENT_PROBLEM == 10) {
		LOG4CXX_INFO(logger, Problem10::sumOfPrimesBelow(10));
		LOG4CXX_INFO(logger, Problem10::sumOfPrimesBelow(2000000L));
	}
}
