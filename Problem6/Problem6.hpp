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

	public:
		/**
		 * find the difference between the square of the sums and
		 * the sum of the squares for the first n natural numbers
		 * @param n the number of natural numbers to consider
		 * @return the difference
		 */
		static long findDifferenceOfFirstN(long n);

		/**
		 * find the square of the sum of the each number in the set
		 * @param numbers the set of numbers
		 * @return the square of the sum of numbers
		 */
		static long findSumSquared(std::list<long> & numbers);

		/**
		 * find the sum of the squares of each number in the set
		 * @param numbers the set of numbers
		 * @return the sum of the square of each number
		 */
		static long findSumOfSquares(std::list<long> & numbers);
	};

}

#endif /* PROBLEM6_PROBLEM6_HPP_ */
