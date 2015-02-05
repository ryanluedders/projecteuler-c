/*
 * Problem3.hpp
 *
 *  Created on: Jan 22, 2015
 *      Author: ryanluedders
 *
 *  The prime factors of 13195 are 5, 7, 13 and 29.
 *
 *  What is the largest prime factor of the number 600851475143 ?
 */

#ifndef PROBLEM3_PROBLEM3_HPP_
#define PROBLEM3_PROBLEM3_HPP_

namespace Problem {

	class Problem3 {

	public:
		/**
		 * find the largest prime less than n
		 * @param n number to find a prime less than
		 * @return the largest prime less than n
		 */
		static long findLargestPrime(long n);
	};

}

#endif /* PROBLEM3_PROBLEM3_HPP_ */
