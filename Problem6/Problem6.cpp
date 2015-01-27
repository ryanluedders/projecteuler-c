/*
 * Problem6.cpp
 *
 *  Created on: Jan 25, 2015
 *      Author: ryanluedders
 */

#include <cmath>

#include "Collections.hpp"
#include "Problem6.hpp"

using namespace Common;

long Problem6::findDifferenceOfFirstN(long n) {

	std::list<long> input = std::list<long>();
	for (int i = 1; i <= n; ++i) {
		input.push_back(i);
	}

	long sumSquared = findSumSquared(input);
	long sumOfSquares = findSumOfSquares(input);

	return (sumSquared - sumOfSquares);

}

long Problem6::findSumSquared(std::list<long> numbers) {
	long sum = 0;
	std::list<long>::iterator it;
	for (it = numbers.begin(); it != numbers.end(); ++it) {
		sum += (*it);
	}
	long sumSquared = pow(sum, 2);
	return sumSquared;
}

long Problem6::findSumOfSquares(std::list<long> numbers) {
	long sum = 0;
	std::list<long>::iterator it;
	for (it = numbers.begin(); it != numbers.end(); ++it) {
		sum += pow((*it), 2);
	}
	return sum;
}


