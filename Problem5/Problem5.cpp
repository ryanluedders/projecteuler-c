/*
 * Problem5.cpp
 *
 *  Created on: Jan 24, 2015
 *      Author: ryanluedders
 */

#include <iostream>

#include "Problem5.hpp"

long Problem5::findSmallestDivisibleBy(std::list<int> divisors) {
	long LARGEST = 1;

	// multiply the numbers together to find worst case
	std::list<int>::iterator it;
	for(it = divisors.begin(); it != divisors.end(); ++it) {
		LARGEST = LARGEST * (*it);
	}

	// beginning at 1, find the smallest number divisible by
	// everything in the set of divisors
	for (long i = 1; i < LARGEST; i++) {
		bool found = true;
		for (it = divisors.begin(); it != divisors.end(); ++it) {
			if (i % (*it) != 0) {
				found = false;
				break;
			}
		}
		if (found) {
			return i;
		}
	}

	return LARGEST;
}


