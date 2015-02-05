/*
 * Problem10.cpp
 *
 *  Created on: Jan 25, 2015
 *      Author: ryanluedders
 *
 */

#include <iostream>

#include "Problem10.hpp"
#include "Numbers.hpp"

using namespace Common;
using namespace Problem;

long Problem10::sumOfPrimesBelow(long n) {
	long sum = 0;
	for (long i = 0; i < n; i++) {
		if (Numbers::isPrime(i)) {
			sum += i;
		}
	}
	return sum;
}




