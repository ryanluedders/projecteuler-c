/*
 * Problem6.hpp
 *
 *  Created on: Jan 25, 2015
 *      Author: ryanluedders
 *
 *  The sum of the squares of the first ten natural numbers is,
 *
 *  12 + 22 + ... + 102 = 385
 *  The square of the sum of the first ten natural numbers is,
 *
 *  (1 + 2 + ... + 10)2 = 552 = 3025
 *  Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
 *
 *  Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */

#ifndef PROBLEM6_PROBLEM6_HPP_
#define PROBLEM6_PROBLEM6_HPP_

#include <list>

namespace Problem {

	class Problem6 {
	private:

	public:
		static long findDifferenceOfFirstN(long n);
		static long findSumSquared(std::list<long> & numbers);
		static long findSumOfSquares(std::list<long> & numbers);
	};

}

#endif /* PROBLEM6_PROBLEM6_HPP_ */
