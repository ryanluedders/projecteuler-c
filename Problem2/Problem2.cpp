/*
 * Problem2.cpp
 *
 *  Created on: Jan 22, 2015
 *      Author: ryanluedders
 */

#include "Problem2.hpp"

using namespace Problem;

int Problem2::findSumOfEvenFibonacciNumbersBelow(int below) {
	int current = 2;
	int previous = 1;

	int sum = current;

	while (current < below) {
		int next = current + previous;
		previous = current;
		current = next;

		if (current % 2 == 0) {
			sum += current;
		}
	}

	return sum;
}


