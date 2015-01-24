/*
 * Problem4.cpp
 *
 *  Created on: Jan 23, 2015
 *      Author: ryanluedders
 */

#include <string>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include "Problem4.hpp"

long Problem4::findLargestPalendromicProduct(int digits) {
	int highest = pow(10, digits);

	int largest = 0;

	for (int i = highest; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			if (isPalendrome(i * j) && (i * j) > largest) {
				largest = i * j;
			}
		}
	}

	return largest;
}

bool Problem4::isPalendrome(long n) {
	std::string nstr = std::to_string(n);

	int halfLength = floor(nstr.length() / 2);
	int secondHalfStart = ceil(nstr.length() / 2);

	std::string firstHalf = nstr.substr(0, halfLength);
	std::string secondHalf = nstr.substr(secondHalfStart, halfLength);

	std::string secondHalfReverse = std::string();

	for (std::string::reverse_iterator i = secondHalf.rbegin();
			i != secondHalf.rend();
			++i
			)
	{
		secondHalfReverse += *i;
	}

	if (firstHalf.compare(secondHalfReverse) == 0) {
		return true;
	}

	return false;
}


