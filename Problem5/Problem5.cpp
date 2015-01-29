/*
 * Problem5.cpp
 *
 *  Created on: Jan 24, 2015
 *      Author: ryanluedders
 */

#include <iostream>

#include "Problem5.hpp"

using namespace Problem;

long Problem5::findSmallestDivisibleBy(std::list<int> & divisors) {
	long LARGEST = 1;
	divisors.sort();
	long largestDivisor = divisors.front();

	// multiply the numbers together to find worst case
	// and find the largest divisor to set up the loop
	std::list<int>::reverse_iterator it;
	for(it = divisors.rbegin(); it != divisors.rend(); ++it) {
		LARGEST = LARGEST * (*it);
		if ((*it) > largestDivisor) {
			largestDivisor = (*it);
		}
	}

	for (long i = largestDivisor; i < LARGEST; i += largestDivisor) {
		bool found = true;
		for (it = divisors.rbegin(); it != divisors.rend(); ++it) {
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


