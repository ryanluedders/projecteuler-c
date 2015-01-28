/*
 * Strings.cpp
 *
 *  Created on: Jan 24, 2015
 *      Author: ryanluedders
 */

#include <cmath>
#include <iostream>

#include "Strings.hpp"

using namespace Common;

bool Strings::isPalindrome(std::string s) {
	int halfLength = floor(s.length() / 2.0);
	int secondStart = ceil(s.length() / 2.0);

	std::string firstHalf = s.substr(0, halfLength);
	std::string secondHalf = s.substr(secondStart, halfLength);

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


