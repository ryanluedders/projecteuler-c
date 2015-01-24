/*
 * Problem3.hpp
 *
 *  Created on: Jan 22, 2015
 *      Author: ryanluedders
 */

#ifndef PROBLEM3_PROBLEM3_HPP_
#define PROBLEM3_PROBLEM3_HPP_

class Problem3 {
public:
	static long findLargestPrime(long n);

private:
	static bool isFactorOf(long f, long n);
	static bool isPrime(long n);
};

#endif /* PROBLEM3_PROBLEM3_HPP_ */
