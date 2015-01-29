/*
 * Problem5.hpp
 *
 *  Created on: Jan 24, 2015
 *      Author: ryanluedders
 *
 *  2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 *
 *  What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

#ifndef PROBLEM5_PROBLEM5_HPP_
#define PROBLEM5_PROBLEM5_HPP_

#include <list>

namespace Problem {

	class Problem5 {
	public:
		static long findSmallestDivisibleBy(std::list<int> divisors);
	};

}

#endif /* PROBLEM5_PROBLEM5_HPP_ */
