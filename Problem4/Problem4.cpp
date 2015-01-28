/*
 * Problem4.cpp
 *
 *  Created on: Jan 23, 2015
 *      Author: ryanluedders
 */

#include <cmath>

#include "Numbers.hpp"
#include "Problem4.hpp"

using namespace Common;
using namespace Problem;

long Problem4::findLargestPalendromicProduct(int digits) {
	int highest = pow(10, digits);

	int largest = 0;

	for (int i = highest; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			if (Numbers::isPalindrome(i * j) && (i * j) > largest) {
				largest = i * j;
			}
		}
	}

	return largest;
}


