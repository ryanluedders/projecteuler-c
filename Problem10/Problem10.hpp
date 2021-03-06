/*
 * Problem10.hpp
 *
 *  Created on: Jan 25, 2015
 *      Author: ryanluedders
 *
 * 	The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *
 *	Find the sum of all the primes below two million.
 */

#ifndef PROBLEM10_PROBLEM10_HPP_
#define PROBLEM10_PROBLEM10_HPP_

#include <string>

using namespace std;

namespace Problem {

	class Problem10 {

	public:
		/**
		 * find the sum of all primes below a specified n
		 * @param n the number to find sum of primes below
		 * @return the sum of all primes below n
		 */
		static long sumOfPrimesBelow(long n);
	};

}

#endif /* PROBLEM10_PROBLEM10_HPP_ */
