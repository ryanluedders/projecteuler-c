/*
 * Problem3.cpp
 *
 *  Created on: Jan 22, 2015
 *      Author: ryanluedders
 */

#include <cmath>

#include "Numbers.hpp"
#include "Problem3.hpp"

using namespace Common;

long Problem3::findLargestPrime(long n) {
	for (long i=std::sqrt(n); i > 1; --i) {
		if (Numbers::isFactorOf(i, n) && Numbers::isPrime(i)) {
			return i;
		}
	}
	return 1;
}
