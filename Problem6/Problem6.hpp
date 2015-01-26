/*
 * Problem6.hpp
 *
 *  Created on: Jan 25, 2015
 *      Author: ryanluedders
 */

#ifndef PROBLEM6_PROBLEM6_HPP_
#define PROBLEM6_PROBLEM6_HPP_

#include <list>

#include "log4cxx/logger.h"

class Problem6 {
private:
	static log4cxx::LoggerPtr logger;

public:
	static long findDifferenceOfFirstN(long n);
	static long findSumSquared(std::list<long> numbers);
	static long findSumOfSquares(std::list<long> numbers);
};

#endif /* PROBLEM6_PROBLEM6_HPP_ */
