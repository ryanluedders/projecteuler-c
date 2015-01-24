/*
 * Problem3.cpp
 *
 *  Created on: Jan 22, 2015
 *      Author: ryanluedders
 */

#include "Problem3.hpp"

#include <cmath>

long Problem3::findLargestPrime(long n) {
	for (long i=std::sqrt(n); i > 1; --i) {
		if (isFactorOf(i, n) && isPrime(i)) {
			return i;
		}
	}
	return 1;
}

bool Problem3::isFactorOf(long f, long n) {
	if (n % f == 0) {
		return true;
	}
	return false;
}

bool Problem3::isPrime(long n) {
	for(long i=2; i<=std::sqrt(n); ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
