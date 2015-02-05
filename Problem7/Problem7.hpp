/*
 * Problem7.hpp
 *
 *  Created on: Jan 25, 2015
 *      Author: ryanluedders
 *
 *  By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 *
 *  What is the 10 001st prime number?
 */

#ifndef PROBLEM7_PROBLEM7_HPP_
#define PROBLEM7_PROBLEM7_HPP_

namespace Problem {

	class Problem7 {

	public:
		/**
		 * find the Nth prime, starting with 2
		 * @param the position we're seeking in the sequence of primes
		 * @return the nth prime
		 */
		static long findNthPrime(long n);
	};

}

#endif /* PROBLEM7_PROBLEM7_HPP_ */
